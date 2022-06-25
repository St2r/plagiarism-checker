package buaa.oj.plagiarismchecker.server.controller.analyse

import buaa.oj.plagiarismchecker.server.domain.CommonResponse
import buaa.oj.plagiarismchecker.server.entity.OjCluster
import buaa.oj.plagiarismchecker.server.entity.OjClusterService
import buaa.oj.plagiarismchecker.server.entity.OjCode
import buaa.oj.plagiarismchecker.server.entity.OjCodeService
import com.github.doyaaaaaken.kotlincsv.dsl.csvWriter
import com.google.gson.annotations.SerializedName
import org.springframework.beans.factory.annotation.Autowired
import org.springframework.stereotype.Controller
import org.springframework.web.bind.annotation.PostMapping
import org.springframework.web.bind.annotation.RequestBody
import org.springframework.web.bind.annotation.RequestMapping
import org.springframework.web.bind.annotation.ResponseBody
import java.io.ByteArrayOutputStream

@Controller
@RequestMapping("/analyse/result")
class AnalyseResultController {

    @Autowired
    private lateinit var clusterService: OjClusterService

    @Autowired
    private lateinit var codeService: OjCodeService

    data class ExportResponseBody(
        @SerializedName("analyse_id")
        val analyseId: String
    )

    @PostMapping("/export")
    @ResponseBody
    fun export(
        @RequestBody body: ExportResponseBody
    ): CommonResponse<String> {
        val content: MutableList<List<String>> = mutableListOf(
            listOf("序号", "代码名称", "代码内容")
        )

        clusterService
            .ktQuery()
            .eq(OjCluster::analyseId, body.analyseId)
            .list()
            .filter { it.marked == true }
            .forEachIndexed { index, cluster ->
                (cluster.codeList as? Array<String>)?.forEach { codeId ->
                    val codeItem = codeService.ktQuery().eq(OjCode::codeId, codeId).one()
                    content.add(
                        listOf(
                            "${index + 1}",
                            codeItem.codeName ?: "",
                            codeItem.codeContent?.replace("\"\"\"", "")?.replace("#", "") ?: ""
                        )
                    )
                }
                content.add(listOf())
            }

        val outputStream = ByteArrayOutputStream()

        // SB Office
        outputStream.write("\uFEFF".toByteArray())

        csvWriter().writeAll(content, outputStream)

        return CommonResponse(data = outputStream.toString())
    }
}