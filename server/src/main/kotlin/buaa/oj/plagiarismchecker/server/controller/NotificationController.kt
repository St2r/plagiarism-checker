package buaa.oj.plagiarismchecker.server.controller

import buaa.oj.plagiarismchecker.server.domain.CommonResponse
import buaa.oj.plagiarismchecker.server.entity.OjNotification
import buaa.oj.plagiarismchecker.server.entity.OjNotificationService
import org.springframework.beans.factory.annotation.Autowired
import org.springframework.stereotype.Controller
import org.springframework.web.bind.annotation.GetMapping
import org.springframework.web.bind.annotation.RequestMapping
import org.springframework.web.bind.annotation.ResponseBody
import java.security.Principal

@Controller
@RequestMapping("/notification")
class NotificationController {

    @Autowired
    lateinit var notificationService: OjNotificationService

    @GetMapping
    @ResponseBody
    fun getMessage(
        principal: Principal
    ): CommonResponse<List<OjNotification>> {
        val list =
            notificationService.ktQuery().eq(OjNotification::userId, principal.name).eq(OjNotification::read, false)
                .list()

        list.forEach { it.read = true }

        notificationService.saveOrUpdateBatch(list)

        return CommonResponse(
            data = list
        )
    }
}