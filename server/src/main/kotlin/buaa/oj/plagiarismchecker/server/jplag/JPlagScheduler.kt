package buaa.oj.plagiarismchecker.server.jplag

import buaa.oj.plagiarismchecker.server.entity.OjAnalyseService
import buaa.oj.plagiarismchecker.server.entity.OjClusterService
import buaa.oj.plagiarismchecker.server.entity.OjNotification
import buaa.oj.plagiarismchecker.server.entity.OjNotificationService
import org.springframework.beans.factory.annotation.Autowired
import org.springframework.scheduling.annotation.Scheduled
import org.springframework.stereotype.Component

@Component
class JPlagScheduler {

    @Autowired
    lateinit var notificationService: OjNotificationService

    fun test() {
        notificationService.save(OjNotification(
            userId = "admin",
            analyseId = "111",
            analyseName = "111",
        ))
    }
}