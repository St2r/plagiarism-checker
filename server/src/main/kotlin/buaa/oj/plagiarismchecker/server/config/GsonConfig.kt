package buaa.oj.plagiarismchecker.server.config

import com.google.gson.GsonBuilder
import org.springframework.context.annotation.Bean
import org.springframework.context.annotation.Configuration

@Configuration
class GsonConfig {
    @Bean
    fun gsonBuild(): GsonBuilder {
        return GsonBuilder().apply {
            setDateFormat("YYYY-MM-dd HH:mm:ss")
        }
    }
}