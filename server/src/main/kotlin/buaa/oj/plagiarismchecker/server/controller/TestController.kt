package buaa.oj.plagiarismchecker.server.controller

import buaa.oj.plagiarismchecker.server.entity.OjClusterService
import buaa.oj.plagiarismchecker.server.entity.OjUser
import org.springframework.beans.factory.annotation.Autowired
import org.springframework.stereotype.Controller
import org.springframework.web.bind.annotation.*
import java.security.Principal


@Controller
@CrossOrigin
@RequestMapping("/test")
class TestController {

    @Autowired
    private lateinit var ojClusterService: OjClusterService

    @RequestMapping("/")
    @GetMapping
    @ResponseBody
    fun test(
        principal: Principal
    ) {
        val i = ojClusterService.ktQuery().one()
        println(i);
    }
}