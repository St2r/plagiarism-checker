package buaa.oj.plagiarismchecker.server.controller

import buaa.oj.plagiarismchecker.server.domain.CommonResponse
import buaa.oj.plagiarismchecker.server.entity.OjNotification
import org.springframework.stereotype.Controller
import org.springframework.web.bind.annotation.GetMapping
import org.springframework.web.bind.annotation.RequestMapping
import org.springframework.web.bind.annotation.ResponseBody

@Controller
@RequestMapping("/notification")
class NotificationController {
    @GetMapping
    @ResponseBody
    fun getMessage(): CommonResponse<Any> {
        return CommonResponse(
            data = listOf(
                OjNotification(
                    userId = "",
                    type = OjNotification.Type.Success,
                    content = "test"
                )
            )
        )
    }
}