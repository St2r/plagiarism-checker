package buaa.oj.plagiarismchecker.server.entity

import com.baomidou.mybatisplus.annotation.TableName
import com.google.gson.annotations.SerializedName

@TableName("plagiarism_checker.plag_task")
data class OjPlagTask(

    @SerializedName("start_time")
    val startTime: Long,
)


