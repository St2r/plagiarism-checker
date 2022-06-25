package buaa.oj.plagiarismchecker.server.entity

import com.baomidou.mybatisplus.annotation.TableField
import com.baomidou.mybatisplus.annotation.TableId
import com.baomidou.mybatisplus.annotation.TableName
import com.baomidou.mybatisplus.core.mapper.BaseMapper
import com.baomidou.mybatisplus.extension.service.impl.ServiceImpl
import com.google.gson.annotations.SerializedName
import org.apache.ibatis.annotations.Mapper
import org.springframework.stereotype.Service
import java.util.UUID

@TableName("plagiarism_checker.cluster_code")
data class OjClusterCode(
    @TableId("cluster_code_id")
    @SerializedName("cluster_code_id")
    var clusterCodeId: String = UUID.randomUUID().toString(),

    @TableField("analyse_id")
    @SerializedName("analyse_id")
    val analyseId: String? = null,

    @TableField("code_id")
    @SerializedName("code_id")
    val codeId: String? = null,

    @TableField("cluster_id")
    @SerializedName("cluster_id")
    val clusterId: String? = null,

    @TableField("name")
    @SerializedName("name")
    val name: String? = null,

    @TableField("plag_lines")
    @SerializedName("plag_lines")
    val plagLines: Any? = null,
)

@Mapper
interface OjClusterCodeMapper : BaseMapper<OjClusterCode>

@Service
class OjClusterCodeService : ServiceImpl<OjClusterCodeMapper, OjClusterCode>()
