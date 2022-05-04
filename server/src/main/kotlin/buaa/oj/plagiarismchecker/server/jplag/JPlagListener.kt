package buaa.oj.plagiarismchecker.server.jplag

import buaa.oj.plagiarismchecker.server.entity.OjAnalyse
import buaa.oj.plagiarismchecker.server.entity.OjAnalyseService
import de.jplag.JPlag
import de.jplag.options.JPlagOptions
import de.jplag.options.LanguageOption
import org.springframework.beans.factory.annotation.Autowired
import org.springframework.context.event.EventListener
import org.springframework.scheduling.annotation.Async
import org.springframework.stereotype.Component
import java.io.File
import java.io.FileWriter

@Component
class JPlagListener {

    @Autowired
    private lateinit var analyseService: OjAnalyseService

    @EventListener
    fun handleJPlagEvent(event: JPlagEvent) {
//        // 0. 初始化数据
//        println("开始查重: ${event.analyseId}")
//        val codeDir = "${TEMP_DIR}/${event.analyseId}"
//        val analyse = analyseService.ktQuery().eq(OjAnalyse::analyseId, event.analyseId).one() ?: return
//        analyseService.fillCodes(analyse)
//
//        // 1. 重置查重的状态为进行中
//        analyseService.ktUpdate()
//
//        // 2. 创建对应的空文件夹
//        File(codeDir).apply {
//            if (exists()) {
//                if (isDirectory) {
//                    this.deleteRecursively()
//                } else {
//                    delete()
//                }
//            }
//            mkdir()
//        }
//
//        // 3. 下载所有的代码进文件夹
//        analyse.codes.forEach { code ->
//            File("${codeDir}/${code.codeId}.cpp").apply {
//                createNewFile()
//                FileWriter(this).apply {
//                    write(code.codeContent ?: "")
//                    close()
//                }
//            }
//        }
//
//
//        // 4. 运行查重
//        val options = JPlagOptions(mutableListOf(codeDir), LanguageOption.C_CPP).apply {
//            minimumTokenMatch = 1
//        }
//        val result = JPlag(options).run()
//        println(result)


        // 5. 标记代码查重结果


        // 6. 标记查重的状态为已完成
    }

    companion object {
        const val TEMP_DIR = "/Users/st2r/plagiarism"
    }
}