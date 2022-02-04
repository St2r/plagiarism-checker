package buaa.oj.plagiarismchecker.server.controller

import org.springframework.stereotype.Controller
import org.springframework.web.bind.annotation.RequestMapping
import org.springframework.web.bind.annotation.ResponseBody

@Controller
class TestController {

    @RequestMapping("/index")
    @ResponseBody
    fun test(): String {
        return "h"
    }
}