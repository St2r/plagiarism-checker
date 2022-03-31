package buaa.oj.plagiarismchecker.server.controller

import buaa.oj.plagiarismchecker.server.domain.CommonResponse
import buaa.oj.plagiarismchecker.server.entity.*
import org.springframework.beans.factory.annotation.Autowired
import org.springframework.stereotype.Controller
import org.springframework.web.bind.annotation.CrossOrigin
import org.springframework.web.bind.annotation.PostMapping
import org.springframework.web.bind.annotation.RequestMapping
import org.springframework.web.bind.annotation.RequestParam
import org.springframework.web.bind.annotation.ResponseBody
import java.security.Principal

@Controller
@CrossOrigin
@RequestMapping("/code")
class CodeController {

    @Autowired
    private lateinit var analyseService: OjAnalyseService

    @PostMapping("/add")
    @ResponseBody
    fun addCode(
        @RequestParam("analyse_id") analyseId: String,
        @RequestParam code: String,
        principal: Principal,
    ): CommonResponse<Any> {
        val analyse = analyseService.ktQuery().eq(OjAnalyse::analyseId, analyseId).one()

        // 鉴定 analyse 的持有者
        if (principal.name != analyse.userId) {
            throw Exception("401")
        }


        return CommonResponse()
    }
}