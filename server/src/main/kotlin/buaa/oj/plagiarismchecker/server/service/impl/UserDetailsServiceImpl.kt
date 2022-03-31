package buaa.oj.plagiarismchecker.server.service.impl

import buaa.oj.plagiarismchecker.server.entity.OjUserService
import org.springframework.beans.factory.annotation.Autowired
import org.springframework.security.core.userdetails.User
import org.springframework.security.core.userdetails.UserDetails
import org.springframework.security.core.userdetails.UserDetailsService
import org.springframework.stereotype.Service

@Service
class UserDetailsServiceImpl: UserDetailsService {

    @Autowired
    lateinit var ojUserService: OjUserService

    override fun loadUserByUsername(username: String): UserDetails {

        val user = ojUserService.getById(username)
        return User(
            user.userId,
            user.password,
            mutableListOf(),
        )
//
//        val u = User(
//            "admin",
//            "\$2a\$10\$Geh1fNFriAKY6idE.OP.KuF0uUHrARnti.2MALrid24FMQVj9.wG2",
//            mutableListOf()
//        )
//        return u
    }

}