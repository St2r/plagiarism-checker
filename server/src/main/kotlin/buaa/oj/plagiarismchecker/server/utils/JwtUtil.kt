package buaa.oj.plagiarismchecker.server.utils

import buaa.oj.plagiarismchecker.server.entity.OjUser
import com.auth0.jwt.JWT
import com.auth0.jwt.algorithms.Algorithm
import com.auth0.jwt.exceptions.JWTVerificationException
import org.springframework.stereotype.Component

@Component
class JwtUtil {
    private val algorithm = Algorithm.HMAC256("private key")

    fun buildJwt(user: OjUser): String {
        return JWT.create()
            .withClaim("user_id", user.userId)
            .sign(algorithm)
    }

    fun decodeJwt(jwt: String?): String? {
        jwt ?: return null
        val verifier = JWT.require(algorithm)
            .withClaimPresence("user_id")
            .build()
        return try {
            val decoded = verifier.verify(jwt)
            return decoded.claims["user_id"]?.asString()
        } catch (e: JWTVerificationException) {
            null
        }
    }
}

fun main() {
    val util = JwtUtil()
    println(util.buildJwt(OjUser(
        userId = "admin"
    )))
}