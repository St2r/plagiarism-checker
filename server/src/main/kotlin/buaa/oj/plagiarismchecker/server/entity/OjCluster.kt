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
import java.util.*

@TableName("plagiarism_checker.result_cluster")
data class OjCluster(
    @TableId("cluster_id")
    @SerializedName("cluster_id")
    var clusterId: String = UUID.randomUUID().toString(),

    @TableField("analyse_id")
    @SerializedName("analyse_id")
    var analyseId: String? = null,

    // Array<String>
    @TableField("code_list")
    @SerializedName("code_list")
    var codeList: Any? = null,

    @TableField("name")
    @SerializedName("name")
    var name: String? = null,

    @TableField("marked")
    @SerializedName("marked")
    var marked: Boolean? = true
) {
    @TableField(exist = false)
    var codes: List<OjClusterCode>? = null

    @TableField(exist = false)
    @SerializedName("code_count")
    var codeCount: Int? = null
}

@Mapper
interface OjClusterMapper : BaseMapper<OjCluster>

@Service
class OjClusterService : ServiceImpl<OjClusterMapper, OjCluster>() {
    @Autowired
    private lateinit var ojClusterCodeService: OjClusterCodeService

    fun fillClusterCodes(cluster: OjCluster) {
        cluster.codes = ojClusterCodeService.ktQuery().eq(OjClusterCode::clusterId, cluster.clusterId).list()
        cluster.codeCount = cluster.codes?.size
    }
}
