package buaa.oj.plagiarismchecker.server.domain

/**
 * 通用的返回结构
 */
data class CommonResponse<T>(
    private val code: Int = 0,
    private val message: String = "success",
    private val data: T? = null,
)
