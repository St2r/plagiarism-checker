package buaa.oj.plagiarismchecker.server.entity

import com.baomidou.mybatisplus.annotation.TableId
import com.baomidou.mybatisplus.annotation.TableName
import com.google.gson.annotations.SerializedName

@TableName("public.user")
data class OjUser(
    @TableId("user_id")
    @SerializedName("user_id")
    val userId: String? = null,
    val password: String? = null,
)
