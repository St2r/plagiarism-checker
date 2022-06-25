package buaa.oj.plagiarismchecker.server.entity

import com.baomidou.mybatisplus.annotation.EnumValue
import com.baomidou.mybatisplus.annotation.TableField
import com.baomidou.mybatisplus.annotation.TableId
import com.baomidou.mybatisplus.annotation.TableName
import com.baomidou.mybatisplus.core.mapper.BaseMapper
import com.baomidou.mybatisplus.extension.service.impl.ServiceImpl
import com.google.gson.annotations.SerializedName
import org.apache.ibatis.annotations.Mapper
import org.springframework.stereotype.Service
import java.sql.Time
import java.sql.Timestamp
import java.util.UUID

@TableName("plagiarism_checker.code")
data class OjCode(

    @TableId("code_id")
    @SerializedName("code_id")
    val codeId: String = UUID.randomUUID().toString(),

    @TableField("code_name")
    @SerializedName("code_name")
    val codeName: String? = null,

    @TableField("analyse_id")
    @SerializedName("analyse_id")
    val analyseId: String? = null,

    @TableField("code_content")
    @SerializedName("code_content")
    val codeContent: String? = null,

    @TableField("created_time")
    @SerializedName("created_time")
    val createdTime: Long? = null,

    @TableField("source")
    @SerializedName("source")
    val source: Source? = Source.SingleFile,

    @TableField("status")
    @SerializedName("status")
    var status: Status = Status.NotAnalysed,
) {
    enum class Source(
        @EnumValue
        private val source: Int
    ) {
        @SerializedName("single_file")
        SingleFile(0),

        @SerializedName("zip_batch")
        ZipBatch(1),
    }

    enum class Status(
        @EnumValue
        private val status: Int
    ) {
        @SerializedName("not_analysed")
        NotAnalysed(0),

        @SerializedName("syntax_error")
        SyntaxError(2),

        @SerializedName("analysed")
        Analysed(3),
    }
}

@Mapper
interface OjCodeMapper : BaseMapper<OjCode>

@Service
class OjCodeService : ServiceImpl<OjCodeMapper, OjCode>()
