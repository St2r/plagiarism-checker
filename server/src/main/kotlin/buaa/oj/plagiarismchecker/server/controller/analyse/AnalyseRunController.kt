package buaa.oj.plagiarismchecker.server.controller.analyse

import buaa.oj.plagiarismchecker.server.domain.CommonResponse
import buaa.oj.plagiarismchecker.server.entity.*
import buaa.oj.plagiarismchecker.server.utils.getCodeId
import com.baomidou.mybatisplus.extension.kotlin.KtQueryWrapper
import com.google.gson.annotations.SerializedName
import de.jplag.JPlag
import de.jplag.JPlagComparison
import de.jplag.Match
import de.jplag.options.JPlagOptions
import de.jplag.options.LanguageOption
import org.springframework.beans.factory.annotation.Autowired
import org.springframework.stereotype.Controller
import org.springframework.transaction.annotation.Transactional
import org.springframework.web.bind.annotation.CrossOrigin
import org.springframework.web.bind.annotation.PostMapping
import org.springframework.web.bind.annotation.RequestBody
import org.springframework.web.bind.annotation.RequestMapping
import org.springframework.web.bind.annotation.ResponseBody
import java.io.File
import java.io.FileWriter
import java.security.Principal

@Controller
@CrossOrigin
@RequestMapping("/analyse")
class AnalyseRunController {

    @Autowired
    private lateinit var analyseService: OjAnalyseService

    @Autowired
    private lateinit var codeService: OjCodeService

    @Autowired
    private lateinit var clusterService: OjClusterService

    @Autowired
    private lateinit var clusterCodeService: OjClusterCodeService

    @Autowired
    private lateinit var notificationService: OjNotificationService

    @PostMapping("/dispatch")
    @ResponseBody
    @Transactional
    fun dispatch(
        @RequestBody body: RunRequest,
        principal: Principal
    ): CommonResponse<Any> {
        // 1. select analyse
        val analyse = analyseService.ktQuery().eq(OjAnalyse::analyseId, body.analyseId).one() ?: throw Exception("401")

        // 2. check analyse status

        // 3. update analyse status

        // 4. append task

        return CommonResponse(data = "success")
    }


    @PostMapping("/run")
    @ResponseBody
    fun run(
        @RequestBody body: RunRequest,
        principal: Principal,
    ): CommonResponse<Any> {
        val startTime = System.currentTimeMillis()


        // 0. 初始化数据
        println("开始查重: ${body.analyseId}")
        val codeDir = "$TEMP_DIR/${body.analyseId}"
        val analyse = analyseService.ktQuery().eq(OjAnalyse::analyseId, body.analyseId).one() ?: throw Exception("401")
        analyseService.fillCodes(analyse)

        // 1. 重置查重的状态为进行中
        analyseService.ktUpdate().eq(OjAnalyse::analyseId, body.analyseId).set(OjAnalyse::status, OjAnalyse.Status.Running).update()

        // 2. 创建对应的空文件夹
        File(codeDir).apply {
            if (exists()) {
                if (isDirectory) {
                    this.deleteRecursively()
                } else {
                    delete()
                }
            }
            mkdir()
        }

        // 3. 下载所有的代码进文件夹
        analyse.codes.forEach { code ->
            File("${codeDir}/${code.codeId}.cpp").apply {
                createNewFile()
                FileWriter(this).apply {
                    write(code.codeContent ?: "")
                    close()
                }
            }
        }


        // 4. 运行查重
        val options = JPlagOptions(mutableListOf(codeDir), LanguageOption.C_CPP).apply {
            minimumTokenMatch = 9
            if (analyse.analyseName?.contains("D") == true) {
                minimumTokenMatch = 12
            } else if (analyse.analyseName?.contains("B") == true) {
                minimumTokenMatch = 10
            }
        }
        val result = JPlag(options).run()
        println(result)

        // 5. 重置查重的状态为运行完毕
        analyseService.ktUpdate().eq(OjAnalyse::analyseId, body.analyseId)
            .set(OjAnalyse::status, OjAnalyse.Status.Success).update()
        // 更新代码表中的数据
        codeService.saveOrUpdateBatch(analyse.codes.apply {
            forEach {
                it.status = OjCode.Status.Analysed
            }

            result.submissions.invalidSubmissions.forEach {
                if (it.hasErrors()) {
                    val codeId = it.getCodeId()
                    val code = find { it.codeId == codeId }
                    code?.status = OjCode.Status.SyntaxError
                }
            }
        })

        // 6 存储聚类信息
        val clusterList = mutableListOf<OjCluster>()
        val clusterCodeList = mutableListOf<OjClusterCode>()
        result.clusteringResult[0].clusters.filter { it.members.size < 20 }.forEachIndexed { index, it ->
            val cluster = OjCluster()
            val memberCodeIds = it.members.map { it.getCodeId() }
            val clusterComparisons = result.comparisons.filter {
                memberCodeIds.contains(it.firstSubmission.getCodeId())
                        &&
                        memberCodeIds.contains(it.secondSubmission.getCodeId())
            }
            it.members.forEach { submission ->
                val plagLines: MutableList<Int> = mutableListOf()
                val comparisons = clusterComparisons.mapNotNull {
                    if (it.firstSubmission.getCodeId() == submission.getCodeId()) {
                        return@mapNotNull it
                    } else if (it.secondSubmission.getCodeId() == submission.getCodeId()) {
                        return@mapNotNull it.secondBaseCodeMatches
                    }
                    return@mapNotNull null
                }

                comparisons.forEach { comp: JPlagComparison ->
                    comp.matches.forEach { match: Match ->
                        val startLine = comp.firstSubmission.tokenList.getToken(match.startOfFirst).line
                        val endLine = comp.firstSubmission.tokenList.getToken(match.startOfFirst + match.length).line

                        (startLine..endLine).forEach { line -> plagLines.add(line) }
                    }
                }

                clusterCodeList.add(
                    OjClusterCode(
                        analyseId = body.analyseId,
                        codeId = submission.getCodeId(),
                        clusterId = cluster.clusterId,
                        name = analyse.codes.find { it.codeId == submission.getCodeId() }?.codeName,
                        plagLines = plagLines.distinct().toTypedArray()
                    )
                )
            }
            clusterList.add(
                cluster.apply {
                    codeList = it.members.map { it.getCodeId() }.toTypedArray()
                    analyseId = body.analyseId
                    name = "聚类-${index}"
                }
            )
        }

        clusterService.remove(KtQueryWrapper(OjCluster::class.java).eq(OjCluster::analyseId, body.analyseId))
        clusterCodeService.remove(
            KtQueryWrapper(OjClusterCode::class.java).eq(
                OjClusterCode::analyseId,
                body.analyseId
            )
        )

        clusterService.saveBatch(clusterList)
        clusterCodeService.saveBatch(clusterCodeList)

        analyse.apply {
            analyse.status = OjAnalyse.Status.Success
            analyse.duration = System.currentTimeMillis() - startTime
            analyse.similarity = result.similarityDistribution
            analyse.compareCount = result.comparisons.size.toLong()
        }
        analyseService.updateById(analyse)

        notificationService.save(OjNotification(
            userId = principal.name,
            analyseName = analyse.analyseName,
            analyseId = analyse.analyseId,
        ))

        return CommonResponse(data = analyse.apply {
            status = OjAnalyse.Status.Success
        })
    }

    data class RunRequest(
        @SerializedName("analyse_id")
        val analyseId: String,
    )

    companion object {
        const val TEMP_DIR = "/Users/st2r/plagiarism"
    }
}