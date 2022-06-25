package buaa.oj.plagiarismchecker.server.controller.analyse

import buaa.oj.plagiarismchecker.server.domain.CommonResponse
import buaa.oj.plagiarismchecker.server.entity.*
import org.springframework.beans.factory.annotation.Autowired
import org.springframework.stereotype.Controller
import org.springframework.web.bind.annotation.PathVariable
import org.springframework.web.bind.annotation.PostMapping
import org.springframework.web.bind.annotation.RequestBody
import org.springframework.web.bind.annotation.RequestMapping
import org.springframework.web.bind.annotation.ResponseBody
import java.security.Principal

@Controller
@RequestMapping("/analyse")
class AnalyseClusterController {
    @Autowired
    private lateinit var clusterService: OjClusterService

    @PostMapping("/cluster/{analyseId}")
    @ResponseBody
    fun getClusters(
        principal: Principal,
        @PathVariable analyseId: String
    ): CommonResponse<List<OjCluster>> {
        val clusters = clusterService.ktQuery().eq(OjCluster::analyseId, analyseId).list()

        clusters.forEach {
            clusterService.fillClusterCodes(it)
        }

        return CommonResponse(
            data = clusters
        )
    }

    data class MarkClusterReq(
        val marked: Boolean
    )

    @PostMapping("/cluster/{clusterId}/mark")
    @ResponseBody
    fun markCluster(
        principal: Principal, @PathVariable clusterId: String,
        @RequestBody body: MarkClusterReq,
    ): CommonResponse<Any> {
        clusterService.ktUpdate().eq(OjCluster::clusterId, clusterId).set(OjCluster::marked, body.marked).update()

        return CommonResponse();
    }
}