package buaa.oj.plagiarismchecker.server.controller

import org.springframework.stereotype.Controller
import org.springframework.web.bind.annotation.PathVariable
import org.springframework.web.bind.annotation.RequestMapping
import org.springframework.web.bind.annotation.ResponseBody

data class I(
    val value: String
)

@Controller
@RequestMapping("/test")
class TestController {

    @RequestMapping("/index/{id}")
    @ResponseBody
    fun test(
        @PathVariable("id") input: String
    ): I {
        return I(
            value = input
        )
    }
}