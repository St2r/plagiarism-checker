package buaa.oj.plagiarismchecker.server.entity

import com.baomidou.mybatisplus.annotation.TableField
import com.baomidou.mybatisplus.annotation.TableId
import com.baomidou.mybatisplus.annotation.TableName
import com.baomidou.mybatisplus.core.mapper.BaseMapper
import com.baomidou.mybatisplus.extension.service.impl.ServiceImpl
import com.google.gson.annotations.SerializedName
import org.apache.ibatis.annotations.Mapper
import org.springframework.stereotype.Service

@TableName("plagiarism_checker.user")
data class OjUser(

    @TableId("user_id")
    @SerializedName("user_id")
    val userId: String? = null,

    @TableField("password")
    val password: String? = null,
) {
    companion object {
        val lock = Any()
    }
}

@Mapper
interface OjUserMapper: BaseMapper<OjUser>

@Service
class OjUserService: ServiceImpl<OjUserMapper, OjUser>()