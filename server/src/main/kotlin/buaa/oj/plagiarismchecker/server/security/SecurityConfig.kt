package buaa.oj.plagiarismchecker.server.security

import org.springframework.beans.factory.annotation.Autowired
import org.springframework.context.annotation.Bean
import org.springframework.context.annotation.Configuration
import org.springframework.security.authentication.AuthenticationManager
import org.springframework.security.config.annotation.web.builders.HttpSecurity
import org.springframework.security.config.annotation.web.configuration.WebSecurityConfigurerAdapter
import org.springframework.security.config.http.SessionCreationPolicy
import org.springframework.security.crypto.bcrypt.BCryptPasswordEncoder
import org.springframework.security.crypto.password.PasswordEncoder
import org.springframework.security.web.authentication.UsernamePasswordAuthenticationFilter

@Configuration
class SecurityConfig : WebSecurityConfigurerAdapter() {
    @Bean
    fun passwordEncoder(): PasswordEncoder {
        return BCryptPasswordEncoder()
    }

    @Bean
    override fun authenticationManagerBean(): AuthenticationManager {
        return super.authenticationManagerBean()
    }

    @Autowired
    private lateinit var jwtAuthTokenFilter: JwtAuthTokenFilter

    @Autowired
    private lateinit var jwtAuthExceptionEntryPoint: JwtAuthExceptionEntryPoint


    override fun configure(http: HttpSecurity) {
        http
            .sessionManagement().sessionCreationPolicy(SessionCreationPolicy.STATELESS)
            .and()
            .authorizeRequests()
            .regexMatchers(".*/passport/.*", "/test").permitAll()
            .anyRequest().authenticated()

        http.formLogin().disable()
        http.csrf().disable()
        http.cors()
        http.exceptionHandling().authenticationEntryPoint(jwtAuthExceptionEntryPoint)
        http.addFilterBefore(jwtAuthTokenFilter, UsernamePasswordAuthenticationFilter::class.java)
    }
}