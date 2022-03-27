package buaa.oj.plagiarismchecker.server.service

import buaa.oj.plagiarismchecker.server.entity.OjUser
import buaa.oj.plagiarismchecker.server.mapper.UserMapper
import com.baomidou.mybatisplus.extension.service.IService
import com.baomidou.mybatisplus.extension.service.impl.ServiceImpl
import org.springframework.beans.factory.annotation.Autowired
import org.springframework.security.authentication.AuthenticationManager
import org.springframework.security.authentication.UsernamePasswordAuthenticationToken
import org.springframework.stereotype.Service

@Service
class UserService: ServiceImpl<UserMapper, OjUser>() {
    @Autowired
    private lateinit var authenticationManager: AuthenticationManager

    @Autowired
    private lateinit var userMapper: UserMapper

    fun getUser(): OjUser {
        val token = UsernamePasswordAuthenticationToken(
            "test",
            "12345"
        )
        try {
            val authentication = authenticationManager.authenticate(token)
        } catch (e: Exception) {
            println("hhh")
        }

        return userMapper.getById("0")
    }
}