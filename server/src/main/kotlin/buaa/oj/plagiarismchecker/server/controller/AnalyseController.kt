package buaa.oj.plagiarismchecker.server.controller

import buaa.oj.plagiarismchecker.server.domain.CommonResponse
import buaa.oj.plagiarismchecker.server.entity.OjAnalyse
import buaa.oj.plagiarismchecker.server.entity.OjAnalyseService
import buaa.oj.plagiarismchecker.server.entity.OjCode
import buaa.oj.plagiarismchecker.server.jplag.JPlagPublisher
import com.google.gson.annotations.SerializedName
import org.springframework.beans.factory.annotation.Autowired
import org.springframework.stereotype.Controller
import org.springframework.web.bind.annotation.CrossOrigin
import org.springframework.web.bind.annotation.GetMapping
import org.springframework.web.bind.annotation.PathVariable
import org.springframework.web.bind.annotation.PostMapping
import org.springframework.web.bind.annotation.RequestBody
import org.springframework.web.bind.annotation.RequestMapping
import org.springframework.web.bind.annotation.ResponseBody
import java.security.Principal
import java.util.UUID

@Controller
@CrossOrigin
@RequestMapping("/analyse")
class AnalyseController {

    @Autowired
    private lateinit var analyseService: OjAnalyseService

    @Autowired
    private lateinit var jPlagPublisher: JPlagPublisher

    @PostMapping("/create")
    @ResponseBody
    fun create(
        @RequestBody analyse: OjAnalyse,
        principal: Principal,
    ): CommonResponse<OjAnalyse> {

        // 填充 userid 和 analyseid
        analyse.userId = principal.name
        analyse.analyseId = UUID.randomUUID().toString()

        return if (analyseService.save(analyse)) {
            CommonResponse(
                message = "创建成功",
                data = analyse
            )
        } else {
            CommonResponse(code = -1, message = "failed")
        }
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
        jPlagPublisher.runJPlag(analyseId)
        val analyse = analyseService.ktQuery()
            .eq(OjAnalyse::analyseId, analyseId)
            .eq(OjAnalyse::userId, principal.name)
            .one() ?: throw Exception("401")

        analyseService.fillCodes(analyse)

        return CommonResponse(data = analyse)
    }
}