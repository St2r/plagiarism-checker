package buaa.oj.plagiarismchecker.server.entity

import com.baomidou.mybatisplus.annotation.TableField
import com.baomidou.mybatisplus.annotation.TableId
import com.baomidou.mybatisplus.annotation.TableName
import com.baomidou.mybatisplus.core.mapper.BaseMapper
import com.baomidou.mybatisplus.extension.service.impl.ServiceImpl
import com.google.gson.annotations.SerializedName
import org.apache.ibatis.annotations.Mapper
import org.springframework.beans.factory.annotation.Autowired
import org.springframework.stereotype.Service

@TableName("public.analyse", autoResultMap = false)
data class OjAnalyse(

    @TableId("analyse_id")
    @SerializedName("analyse_id")
    var analyseId: String? = null,

    @TableField("user_id")
    @SerializedName("user_id")
    var userId: String? = null,

    @TableField("analyse_name")
    @SerializedName("analyse_name")
    val analyseName: String? = null,

    @TableField("description")
    val description: String? = null,

    @TableField("status")
    val status: String? = null
) {
    @TableField(exist = false)
    @SerializedName("code_count")
    var codeCount: Long = 0

    @TableField(exist = false)
    val codes: MutableList<OjCode> = mutableListOf()
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
        ojCodeService.ktQuery().eq(OjCode::analyseId, analyse.analyseId).list().forEach {
            analyse.codes.add(it)
        }
    }
}