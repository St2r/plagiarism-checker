package buaa.oj.plagiarismchecker.server.controller.code.append

import buaa.oj.plagiarismchecker.server.domain.CommonResponse
import buaa.oj.plagiarismchecker.server.entity.OjAnalyse
import buaa.oj.plagiarismchecker.server.entity.OjCode
import buaa.oj.plagiarismchecker.server.entity.OjCodeService
import buaa.oj.plagiarismchecker.server.extension.getOwnTempDirPath
import kotlinx.coroutines.*
import org.springframework.beans.factory.annotation.Autowired
import org.springframework.stereotype.Controller
import org.springframework.web.bind.annotation.PostMapping
import org.springframework.web.bind.annotation.RequestMapping
import org.springframework.web.bind.annotation.RequestPart
import org.springframework.web.bind.annotation.ResponseBody
import org.springframework.web.multipart.MultipartFile
import java.io.File
import java.security.Principal
import java.util.UUID

@Controller
@RequestMapping("/code/add")
class CodeZipController {

    @Autowired
    private lateinit var codeService: OjCodeService

    @PostMapping("/zip")
    @ResponseBody
    fun appendZip(
        @RequestPart zip: MultipartFile,
        @RequestPart analyseId: String,
        principal: Principal
    ): CommonResponse<List<OjCode>> {
        // 0. validation
        if (zip.contentType != "application/zip") {
            throw Exception("unsupported file")
        }

        val tempDirPath = "${principal.getOwnTempDirPath()}/zip/${UUID.randomUUID()}"
        val tempDir = File(tempDirPath)
        val zipDistPath = "${tempDirPath}/${TEMP_FILE_NAME}"
        val zipDist = File(zipDistPath)

        try {

            // 1. download file to user directory
            tempDir.mkdirs()
            zipDist.apply {
                createNewFile()
                zip.transferTo(this)
            }

            // 2. extract
            ProcessBuilder()
                .directory(tempDir)
                .command("unzip", TEMP_FILE_NAME)
                .redirectError(ProcessBuilder.Redirect.INHERIT)
                .redirectOutput(ProcessBuilder.Redirect.INHERIT)
                .start()
                .waitFor()

            // 3. upload cpp/c files to db
            val codeList = mutableListOf<OjCode>()
            val createdTime = System.currentTimeMillis()
            val asyncJobList = tempDir
                .walk()
                .maxDepth(3)
                .filter { it.isFile }
                .filter { it.extension.matches(Regex("^(cpp)|(c)$")) }
                .map {
                    return@map CoroutineScope(Dispatchers.IO).async {
                        val content = it.readText()
                        codeList.add(
                            OjCode(
                                codeName = it.name,
                                analyseId = analyseId,
                                codeContent = content,
                                createdTime = createdTime,
                                source = OjCode.Source.ZipBatch,
                            )
                        )
                    }
                }
                .toList()
            runBlocking { asyncJobList.awaitAll() }
            codeService.saveBatch(codeList)

            return CommonResponse(
                data = codeList
            )
        } finally {
            // clean up dir
            File(tempDirPath).apply {
                exists() && deleteRecursively()
            }
        }
    }

    companion object {
        const val TEMP_FILE_NAME = "temp.zip"
    }
}