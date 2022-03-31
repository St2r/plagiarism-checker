package buaa.oj.plagiarismchecker.server

import de.jplag.options.JPlagOptions
import org.springframework.boot.autoconfigure.SpringBootApplication
import org.springframework.boot.runApplication

@SpringBootApplication
class ServerApplication

fun main(args: Array<String>) {
    runApplication<ServerApplication>(*args)

//    val option = JPlagOptions(
//        listOf("/Users/st2r/Projects/plagiarism-checker/jplag/sample"),
//        LanguageOption.C_CPP,
//    ).apply {
//        minimumTokenMatch = 3
//        isDebugParser = true
//    }
//
//    val j = JPlag(option)
//    val result = j.run()
//
//    println(result)
}
