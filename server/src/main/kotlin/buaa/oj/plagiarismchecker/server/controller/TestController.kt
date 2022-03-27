package buaa.oj.plagiarismchecker.server.controller

import buaa.oj.plagiarismchecker.server.entity.OjUser
import buaa.oj.plagiarismchecker.server.service.UserService
import org.springframework.beans.factory.annotation.Autowired
import org.springframework.security.authentication.UsernamePasswordAuthenticationToken
import org.springframework.stereotype.Controller
import org.springframework.web.bind.annotation.GetMapping
import org.springframework.web.bind.annotation.PathVariable
import org.springframework.web.bind.annotation.RequestMapping
import org.springframework.web.bind.annotation.ResponseBody
import java.security.Principal

data class I(
    val value: String
)

@Controller
@RequestMapping("/test")
class TestController {

    @Autowired
    private lateinit var userService: UserService

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
        return userService.getUser()
    }
}