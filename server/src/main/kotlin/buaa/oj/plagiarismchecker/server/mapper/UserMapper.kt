package buaa.oj.plagiarismchecker.server.mapper

import buaa.oj.plagiarismchecker.server.entity.OjUser
import com.baomidou.mybatisplus.core.mapper.BaseMapper
import org.apache.ibatis.annotations.Mapper
import org.apache.ibatis.annotations.Select

@Mapper
interface UserMapper: BaseMapper<OjUser> {

    @Select("select * from public.user limit 1")
    fun getById(id: String): OjUser
}