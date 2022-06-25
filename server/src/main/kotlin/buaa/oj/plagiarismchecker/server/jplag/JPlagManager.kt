package buaa.oj.plagiarismchecker.server.jplag

import buaa.oj.plagiarismchecker.server.entity.OjAnalyseService
import org.springframework.beans.factory.annotation.Autowired
import org.springframework.stereotype.Component
import org.springframework.stereotype.Service

@Component
class JPlagManager {
    @Autowired
    private lateinit var analyseService: OjAnalyseService

    val lock = Any()

    var isRunning = false

    fun scheduleOnce() {

    }

    private fun doJplagSingleton() {
        // put running flag
        synchronized(lock) {
            if (isRunning) {
                return
            } else {
                isRunning = true
            }
        }

        doJPlag()

        // clear running flag
        synchronized(lock) {
            isRunning = false
        }
    }

    private fun doJPlag() {

    }
}