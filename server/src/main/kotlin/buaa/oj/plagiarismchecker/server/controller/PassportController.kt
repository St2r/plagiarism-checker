package buaa.oj.plagiarismchecker.server.controller

import buaa.oj.plagiarismchecker.server.domain.CommonResponse
import buaa.oj.plagiarismchecker.server.entity.OjUser
import buaa.oj.plagiarismchecker.server.entity.OjUserService
import buaa.oj.plagiarismchecker.server.utils.JwtUtil
import org.springframework.beans.factory.annotation.Autowired
import org.springframework.security.authentication.AuthenticationManager
import org.springframework.security.authentication.UsernamePasswordAuthenticationToken
import org.springframework.stereotype.Controller
import org.springframework.web.bind.annotation.*
import java.security.Principal
import javax.servlet.http.Cookie
import javax.servlet.http.HttpServletResponse

@Controller
@CrossOrigin(allowedHeaders = ["*"])
@RequestMapping("/passport")
class PassportController {

    @Autowired
    private lateinit var authenticationManager: AuthenticationManager

    @Autowired
    private lateinit var jwtUtil: JwtUtil

    @Autowired
    private lateinit var ojUserService: OjUserService

    data class LoginResponse(
        val token: String
    )

    @RequestMapping("/login")
    @PostMapping
    @ResponseBody
    fun login(
        @RequestBody user: OjUser,
        response: HttpServletResponse
    ): CommonResponse<Any> {
        try {
            authenticationManager.authenticate(
                UsernamePasswordAuthenticationToken(user.userId, user.password)
            )

            // token 以 http only 形式传递
            val token = jwtUtil.buildJwt(user)
            response.addCookie(
                Cookie(COOKIE_TOKEN,token).apply {
                    isHttpOnly = true
                    secure = false
                }
            )

            return CommonResponse(message = "登陆成功", data = LoginResponse(token))
        } catch (e: Exception) {
            response.status = 403
            return CommonResponse(message = "用户名或密码错误")
        }
    }

    @RequestMapping("/user_check")
    @PostMapping
    @ResponseBody
    fun userCheck(
        response: HttpServletResponse,
        principal: Principal?,
    ): CommonResponse<Any> {
        if (principal == null) {
            response.status = 403
        }
        return CommonResponse()
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