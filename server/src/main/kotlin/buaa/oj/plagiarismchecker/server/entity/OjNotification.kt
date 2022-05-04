package buaa.oj.plagiarismchecker.server.entity

import com.baomidou.mybatisplus.annotation.TableId
import com.baomidou.mybatisplus.annotation.TableName
import com.google.gson.annotations.SerializedName

@TableName("plagiarism_checker.notification")
data class OjNotification(
    @TableId("user_id")
    @SerializedName("user_id")
    val userId: String,

    @TableId("content")
    val type: Type,

    @TableId("content")
    @SerializedName("content")
    val content: String,
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
