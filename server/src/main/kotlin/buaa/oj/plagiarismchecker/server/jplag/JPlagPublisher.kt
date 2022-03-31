package buaa.oj.plagiarismchecker.server.jplag

import org.springframework.beans.factory.annotation.Autowired
import org.springframework.context.ApplicationContext
import org.springframework.stereotype.Component

@Component
class JPlagPublisher {

    @Autowired
    private lateinit var applicationContext: ApplicationContext

    fun runJPlag(analyseId: String) {
        try {
            applicationContext.publishEvent(JPlagEvent(analyseId))
        } catch (e: Exception) {
            println(e)
        }
    }
}