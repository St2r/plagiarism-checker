package buaa.oj.plagiarismchecker.server.entity

import com.baomidou.mybatisplus.annotation.*
import com.baomidou.mybatisplus.core.mapper.BaseMapper
import com.baomidou.mybatisplus.extension.service.impl.ServiceImpl
import com.google.gson.annotations.SerializedName
import org.apache.ibatis.annotations.Mapper
import org.springframework.beans.factory.annotation.Autowired
import org.springframework.stereotype.Service
import java.util.*

@TableName("plagiarism_checker.analyse")
data class OjAnalyse(

    @TableId("analyse_id")
    @SerializedName("analyse_id")
    var analyseId: String = UUID.randomUUID().toString(),

    @TableField("user_id")
    @SerializedName("user_id")
    var userId: String? = null,

    @TableField("analyse_name")
    @SerializedName("analyse_name")
    val analyseName: String? = null,

    @TableField("description")
    val description: String? = null,

    @TableField("status")
    var status: Status? = Status.NotStart,

    @TableField("duration")
    var duration: Long? = null,

    @TableField("similarity")
    var similarity: Any? = null,

    @TableField("compare_count")
    @SerializedName("compare_count")
    var compareCount: Long? = null,
) {
    @TableField(exist = false)
    @SerializedName("code_count")
    var codeCount: Long = 0

    @TableField(exist = false)
    val codes: MutableList<OjCode> = mutableListOf()

    enum class Status(@EnumValue private val status: Int) {
        @SerializedName("not_start")
        NotStart(0),

        @SerializedName("waiting")
        Waiting(1),

        @SerializedName("running")
        Running(2),

        @SerializedName("finished")
        Success(3);
    }

    companion object {
        val lock = Any()
    }
}

@Mapper
interface OjAnalyseMapper : BaseMapper<OjAnalyse>

@Service
class OjAnalyseService : ServiceImpl<OjAnalyseMapper, OjAnalyse>() {
    @Autowired
    private lateinit var ojCodeService: OjCodeService

    fun fillCodeCount(analyse: OjAnalyse) {
        val count = ojCodeService.ktQuery().eq(OjCode::analyseId, analyse.analyseId).count()
        analyse.codeCount = count
    }

    fun fillCodes(analyse: OjAnalyse) {
        ojCodeService.ktQuery().eq(OjCode::analyseId, analyse.analyseId)
            .list().forEach {
                analyse.codes.add(it)
            }
        analyse.codeCount = analyse.codes.size.toLong()
    }

    fun fillCodesWithoutCodeContent(analyse: OjAnalyse) {

        ojCodeService.ktQuery().eq(OjCode::analyseId, analyse.analyseId).select(
            OjCode::analyseId,
            OjCode::codeId,
            OjCode::codeName,
            OjCode::createdTime,
            OjCode::source,
            OjCode::status,
        )
            .list().forEach {
                analyse.codes.add(it)
            }
        analyse.codeCount = analyse.codes.size.toLong()
    }
}