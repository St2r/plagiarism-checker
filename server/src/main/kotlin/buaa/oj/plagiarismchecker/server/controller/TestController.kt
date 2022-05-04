package buaa.oj.plagiarismchecker.server.controller

import buaa.oj.plagiarismchecker.server.entity.OjUser
import org.springframework.stereotype.Controller
import org.springframework.web.bind.annotation.*
import java.security.Principal

@Controller
@CrossOrigin
@RequestMapping("/test")
class TestController {

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