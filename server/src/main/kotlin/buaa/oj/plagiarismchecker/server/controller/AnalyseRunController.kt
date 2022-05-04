package buaa.oj.plagiarismchecker.server.controller

import buaa.oj.plagiarismchecker.server.domain.CommonResponse
import buaa.oj.plagiarismchecker.server.entity.OjAnalyse
import buaa.oj.plagiarismchecker.server.entity.OjAnalyseService
import com.google.gson.annotations.SerializedName
import de.jplag.JPlag
import de.jplag.options.JPlagOptions
import de.jplag.options.LanguageOption
import org.springframework.beans.factory.annotation.Autowired
import org.springframework.stereotype.Controller
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

    @PostMapping("/run")
    @ResponseBody
    fun run(
        @RequestBody body: RunRequest,
        principal: Principal,
    ): CommonResponse<Any> {
        // 0. 初始化数据
        println("开始查重: ${body.analyseId}")
        val codeDir = "${TEMP_DIR}/${body.analyseId}"
        val analyse = analyseService.ktQuery().eq(OjAnalyse::analyseId, body.analyseId).one() ?: throw Exception("401")
        analyseService.fillCodes(analyse)

        // 1. 重置查重的状态为进行中
        analyseService.ktUpdate().eq(OjAnalyse::analyseId, body.analyseId).set(OjAnalyse::status, "运行中")

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
            minimumTokenMatch = 1
        }
        val result = JPlag(options).run()
        println(result)

        // 5. 重置查重的状态为运行完毕
        analyseService.ktUpdate().eq(OjAnalyse::analyseId, body.analyseId).set(OjAnalyse::status, "运行完毕")

        return CommonResponse(data = analyse.apply {
            status = "运行完毕"
            this.result = "测试"
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