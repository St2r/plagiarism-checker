package buaa.oj.plagiarismchecker.server.utils

import org.springframework.beans.factory.annotation.Autowired
import org.springframework.data.redis.core.RedisTemplate
import org.springframework.stereotype.Component

@Component
class RedisUtil {

    @Autowired
    private lateinit var redisTemplate: RedisTemplate<String, String>

    /**
     * 读取缓存
     *
     * @param key
     * @return
     */
    operator fun get(key: String): String? {
        return redisTemplate.opsForValue()[key]
    }

    /**
     * 写入缓存
     */
    operator fun set(key: String, value: String): Boolean {
        var result = false
        try {
            redisTemplate.opsForValue()[key] = value
            result = true
        } catch (e: Exception) {
            e.printStackTrace()
        }
        return result
    }

    /**
     * 更新缓存
     */
    fun getAndSet(key: String, value: String): Boolean {
        var result = false
        try {
            redisTemplate.opsForValue().getAndSet(key, value)
            result = true
        } catch (e: Exception) {
            e.printStackTrace()
        }
        return result
    }

    /**
     * 删除缓存
     */
    fun delete(key: String): Boolean {
        var result = false
        try {
            redisTemplate.delete(key)
            result = true
        } catch (e: Exception) {
            e.printStackTrace()
        }
        return result
    }
}