package buaa.oj.plagiarismchecker.server.entity

import com.baomidou.mybatisplus.annotation.TableField
import com.baomidou.mybatisplus.annotation.TableId
import com.baomidou.mybatisplus.annotation.TableName
import com.baomidou.mybatisplus.core.mapper.BaseMapper
import com.baomidou.mybatisplus.extension.service.impl.ServiceImpl
import com.google.gson.annotations.SerializedName
import org.apache.ibatis.annotations.Mapper
import org.springframework.stereotype.Service

@TableName("plagiarism_checker.notification")
data class OjNotification(
    @TableId("notification_id")
    @SerializedName("notification_id")
    val notificationId: Int? = null,

    @TableField("user_id")
    @SerializedName("user_id")
    val userId: String,

    @TableField("type")
    @SerializedName("type")
    val type: Type? = Type.Success,

    @TableField("content")
    @SerializedName("content")
    val content: String? = null,

    @TableField("analyse_id")
    @SerializedName("analyse_id")
    val analyseId: String? = null,

    @TableField("analyse_name")
    @SerializedName("analyse_name")
    val analyseName: String? = null,

    @TableField("read")
    @SerializedName("read")
    var read:Boolean? = false
) {
    enum class Type {
        @SerializedName("success")
        Success,

        @SerializedName("fail")
        Fail,

        @SerializedName("warning")
        Warning,

        @SerializedName("error")
        Error,
    }

    companion object {
        val lock = Any()
    }
}

@Mapper
interface OjNotificationMapper : BaseMapper<OjNotification>

@Service
class OjNotificationService : ServiceImpl<OjNotificationMapper, OjNotification>()

