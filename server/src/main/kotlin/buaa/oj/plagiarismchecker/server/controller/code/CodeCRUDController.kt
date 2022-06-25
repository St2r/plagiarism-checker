package buaa.oj.plagiarismchecker.server.controller.code

import buaa.oj.plagiarismchecker.server.domain.CommonResponse
import buaa.oj.plagiarismchecker.server.entity.OjAnalyse
import buaa.oj.plagiarismchecker.server.entity.OjAnalyseService
import buaa.oj.plagiarismchecker.server.entity.OjCode
import buaa.oj.plagiarismchecker.server.entity.OjCodeService
import com.google.gson.annotations.SerializedName
import org.springframework.beans.factory.annotation.Autowired
import org.springframework.stereotype.Controller
import org.springframework.web.bind.annotation.*
import java.security.Principal
import java.util.*

@Controller
@RequestMapping("/code")
class CodeCRUDController {

    @Autowired
    private lateinit var analyseService: OjAnalyseService

    @Autowired
    private lateinit var codeService: OjCodeService


    data class GetCodeRequest(
        val codeId: String
    )

    @PostMapping("/detail")
    @ResponseBody
    fun getCode(
        @RequestBody body: GetCodeRequest,
    ): CommonResponse<OjCode> {
        val code = codeService.ktQuery().eq(OjCode::codeId, body.codeId).one()
        return CommonResponse(data = code)
    }


    data class AddCodeRequest(
        @SerializedName("analyse_id")
        val analyseId: String,
        val name: String,
        val code: String,
        val source: String,
    )

    @PostMapping("/add")
    @ResponseBody
    fun addCode(
        @RequestBody body: AddCodeRequest,
        principal: Principal,
    ): CommonResponse<OjCode> {
        val analyse = analyseService.ktQuery().eq(OjAnalyse::analyseId, body.analyseId).one()

        // 鉴定 analyse 的持有者
        if (principal.name != analyse.userId) {
            throw Exception("401")
        }

        val code = OjCode(
            analyseId = body.analyseId,
            codeContent = body.code,
            codeId = UUID.randomUUID().toString(),
            codeName = body.name,
            createdTime = System.currentTimeMillis(),
            source = OjCode.Source.SingleFile,
        )

        codeService.save(code).also {
            if (!it) {
                throw Exception("插入失败")
            }
        }

        return CommonResponse(data = code)
    }


    data class DeleteCodeRequest(
        @SerializedName("analyse_id")
        val analyseId: String,
        @SerializedName("code_id")
        val codeId: String,
    )

    @PostMapping("/delete")
    @ResponseBody
    fun delete(
        @RequestBody body: DeleteCodeRequest,
        principal: Principal,
    ): CommonResponse<Any> {
        val analyse = analyseService.ktQuery().eq(OjAnalyse::analyseId, body.analyseId).one()

        // 鉴定 analyse 的持有者
        if (principal.name != analyse.userId) {
            throw Exception("401")
        }

        codeService.removeById(
            OjCode(
                codeId = body.codeId
            )
        )

        return CommonResponse()
    }
}