package buaa.oj.plagiarismchecker.server.controller

import buaa.oj.plagiarismchecker.server.entity.OjCodeRepository
import buaa.oj.plagiarismchecker.server.entity.OjUser
import org.springframework.beans.factory.annotation.Autowired
import org.springframework.stereotype.Controller
import org.springframework.web.bind.annotation.*
import java.security.Principal

data class I(
    val value: String
)

@Controller
@CrossOrigin
@RequestMapping("/test")
class TestController {

    @Autowired
    private lateinit var ojCodeRepository: OjCodeRepository

    @RequestMapping("/code")
    @GetMapping
    @ResponseBody
    fun code(): Any {
        val count = ojCodeRepository.count()
        val codes = ojCodeRepository.findAll()
        return count
    }

    @RequestMapping("/index/{id}")
    @GetMapping
    @ResponseBody
    fun test(
        @PathVariable("id") input: String,
        principal: Principal
    ): OjUser {
        val userId = principal.name
//        return User(
//            user_id =
//        )
        return OjUser()
    }
}