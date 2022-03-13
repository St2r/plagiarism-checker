package buaa.oj.plagiarismchecker.server

import de.jplag.JPlag
import de.jplag.options.JPlagOptions
import de.jplag.options.LanguageOption
import org.springframework.boot.autoconfigure.SpringBootApplication
import org.springframework.boot.runApplication

@SpringBootApplication
class ServerApplication

fun main(args: Array<String>) {
//    runApplication<ServerApplication>(*args)

    val option = JPlagOptions(
        listOf(""),
        LanguageOption.C_CPP,
    )
    val j = JPlag(option)
}
