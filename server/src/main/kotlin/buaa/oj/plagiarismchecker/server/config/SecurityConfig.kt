package buaa.oj.plagiarismchecker.server.config

import buaa.oj.plagiarismchecker.server.entrypoint.JwtAuthExceptionEntryPoint
import buaa.oj.plagiarismchecker.server.filter.JwtAuthTokenFilter
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
            .antMatchers("/passport/login").anonymous()
            .antMatchers("/passport/login").permitAll()
            .anyRequest().authenticated()

        http.csrf().disable()
        http.formLogin().disable()
        http.exceptionHandling().authenticationEntryPoint(jwtAuthExceptionEntryPoint)
        http.addFilterBefore(jwtAuthTokenFilter, UsernamePasswordAuthenticationFilter::class.java)
    }
}