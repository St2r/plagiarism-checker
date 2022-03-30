package buaa.oj.plagiarismchecker.server.filter

import buaa.oj.plagiarismchecker.server.utils.JwtUtil
import buaa.oj.plagiarismchecker.server.utils.RedisUtil
import org.springframework.beans.factory.annotation.Autowired
import org.springframework.security.authentication.UsernamePasswordAuthenticationToken
import org.springframework.security.core.authority.AuthorityUtils
import org.springframework.security.core.context.SecurityContextHolder
import org.springframework.stereotype.Component
import org.springframework.web.filter.OncePerRequestFilter
import javax.servlet.FilterChain
import javax.servlet.http.HttpServletRequest
import javax.servlet.http.HttpServletResponse

@Component
class JwtAuthTokenFilter : OncePerRequestFilter() {

    @Autowired
    private lateinit var redisUtil: RedisUtil

    @Autowired
    private lateinit var jwtUtil: JwtUtil

    override fun doFilterInternal(
        request: HttpServletRequest,
        response: HttpServletResponse,
        filterChain: FilterChain
    ) {
        // Step1 获取 token
        val token = request.cookies?.find { it.name == "x-token" }?.value.let {
            // 无 token，直接放行
            if (it.isNullOrEmpty()) {
                filterChain.doFilter(request, response)
                return
            } else {
                return@let it
            }
        }
        // Step2 解析 token
        val userId = jwtUtil.decodeJwt(token)
        if (userId == null) {
            filterChain.doFilter(request, response)
            return
        }

        // Step3 构建认证信息，存入 context
        SecurityContextHolder.getContext().authentication = UsernamePasswordAuthenticationToken(
            userId,
            null,
            AuthorityUtils.createAuthorityList("USER"),
        ).apply {
//            isAuthenticated = true
        }

        // Step4 放行
        filterChain.doFilter(request, response)
    }
}