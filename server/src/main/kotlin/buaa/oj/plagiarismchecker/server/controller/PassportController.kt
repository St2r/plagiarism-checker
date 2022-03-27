package buaa.oj.plagiarismchecker.server.controller

import buaa.oj.plagiarismchecker.server.domain.CommonResponse
import buaa.oj.plagiarismchecker.server.entity.OjUser
import buaa.oj.plagiarismchecker.server.service.UserService
import buaa.oj.plagiarismchecker.server.utils.JwtUtil
import org.springframework.beans.factory.annotation.Autowired
import org.springframework.security.authentication.AuthenticationManager
import org.springframework.security.authentication.UsernamePasswordAuthenticationToken
import org.springframework.stereotype.Controller
import org.springframework.web.bind.annotation.PostMapping
import org.springframework.web.bind.annotation.RequestBody
import org.springframework.web.bind.annotation.RequestMapping
import org.springframework.web.bind.annotation.ResponseBody
import javax.servlet.http.Cookie
import javax.servlet.http.HttpServletResponse

@Controller
@RequestMapping("/passport")
class PassportController {

    @Autowired
    private lateinit var authenticationManager: AuthenticationManager

    @Autowired
    private lateinit var jwtUtil: JwtUtil

    @Autowired
    private lateinit var userService: UserService

    @RequestMapping("/login")
    @PostMapping
    @ResponseBody
    fun login(
        @RequestBody user: OjUser,
        response: HttpServletResponse
    ): CommonResponse<Boolean> {
        try {
            val res = userService.list()

            authenticationManager.authenticate(
                UsernamePasswordAuthenticationToken(user.userId, user.password)
            )

            // token 以 http only 形式传递
            response.addCookie(
                Cookie(COOKIE_TOKEN, jwtUtil.buildJwt(user)).apply {
                    this.isHttpOnly = true
                }
            )

            return CommonResponse(message = "登陆成功")
        } catch (e: Exception) {
            response.status = 403
            return CommonResponse(message = "用户名或密码错误")
        }
    }

    @RequestMapping("/logout")
    @PostMapping
    @ResponseBody
    fun logout(
        response: HttpServletResponse
    ): CommonResponse<Boolean> {

        // 清空 Cookie
        response.addCookie(
            Cookie(COOKIE_TOKEN, "").apply {
                this.isHttpOnly = true
            }
        )

        return CommonResponse(
            message = "注销成功"
        )
    }

    companion object {
        const val COOKIE_TOKEN = "x-token"
    }
}