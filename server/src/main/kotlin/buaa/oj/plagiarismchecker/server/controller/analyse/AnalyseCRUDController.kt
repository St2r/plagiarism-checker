package buaa.oj.plagiarismchecker.server.controller.analyse

import buaa.oj.plagiarismchecker.server.domain.CommonResponse
import buaa.oj.plagiarismchecker.server.entity.*
import com.baomidou.mybatisplus.extension.kotlin.KtQueryWrapper
import org.springframework.beans.factory.annotation.Autowired
import org.springframework.stereotype.Controller
import org.springframework.web.bind.annotation.GetMapping
import org.springframework.web.bind.annotation.PathVariable
import org.springframework.web.bind.annotation.PostMapping
import org.springframework.web.bind.annotation.RequestBody
import org.springframework.web.bind.annotation.RequestMapping
import org.springframework.web.bind.annotation.ResponseBody
import java.security.Principal

@Controller
@RequestMapping("/analyse")
class AnalyseCRUDController {

    @Autowired
    private lateinit var analyseService: OjAnalyseService

    @Autowired
    private lateinit var codeService: OjCodeService

    @Autowired
    private lateinit var clusterService: OjClusterService

    @Autowired
    private lateinit var clusterCodeService: OjClusterCodeService

    @PostMapping("/create")
    @ResponseBody
    fun create(
        @RequestBody analyse: OjAnalyse,
        principal: Principal,
    ): CommonResponse<OjAnalyse> {

        // 填充 userid 和 analyseid
        analyse.userId = principal.name

        return if (analyseService.save(analyse)) {
            CommonResponse(
                message = "创建成功",
                data = analyse
            )
        } else {
            throw Exception("401")
        }
    }

    @PostMapping("/delete")
    @ResponseBody
    fun delete(
        @RequestBody analyse: OjAnalyse,
        principal: Principal
    ): CommonResponse<Any> {
        codeService.remove(KtQueryWrapper(OjCode::class.java).eq(OjCode::analyseId, analyse.analyseId))
        clusterService.remove(KtQueryWrapper(OjCluster::class.java).eq(OjCluster::analyseId, analyse.analyseId))
        clusterCodeService.remove(
            KtQueryWrapper(OjClusterCode::class.java).eq(
                OjClusterCode::analyseId,
                analyse.analyseId
            )
        )
        analyseService.removeById(analyse)
        return CommonResponse()
    }

    @PostMapping("/modify")
    @ResponseBody
    fun modify(

    ): CommonResponse<Any> {

        return CommonResponse(
            message = "修改成功"
        )
    }

    @GetMapping("/list")
    @ResponseBody
    fun list(
        principal: Principal,
    ): CommonResponse<List<OjAnalyse>> {
        val analysis = analyseService.ktQuery()
            .eq(OjAnalyse::userId, principal.name)
            .list()

        analysis.forEach {
            analyseService.fillCodeCount(it)
        }

        return CommonResponse(
            data = analysis
        )
    }

    @GetMapping("/detail/{analyseId}")
    @ResponseBody
    fun detail(
        @PathVariable analyseId: String,
        principal: Principal
    ): CommonResponse<Any> {
        val analyse = analyseService.ktQuery()
            .eq(OjAnalyse::analyseId, analyseId)
            .eq(OjAnalyse::userId, principal.name)
            .one() ?: throw Exception("401")

        analyseService.fillCodesWithoutCodeContent(analyse)

        return CommonResponse(data = analyse)
    }
}