import de.jplag.JPlag
import de.jplag.options.JPlagOptions
import de.jplag.options.LanguageOption
import de.jplag.strategy.ComparisonMode
import org.junit.jupiter.api.Test
import org.junit.jupiter.api.assertDoesNotThrow

class BaseTest {
    @Test
    fun testMain() {
        val option = JPlagOptions(
            listOf("${Constant.baseUrl}/variable/1"),
            LanguageOption.C_CPP
        ).apply {
            minimumTokenMatch = 3
            comparisonMode = ComparisonMode.PARALLEL
        }

        val result = JPlag(option).run()
        println(result)
        println(">>> duration: ${result.duration}")
    }

    @Test
    fun testE3B() {
        val option = JPlagOptions(
            listOf("${Constant.baseUrl}/E3-B-full"),
            LanguageOption.C_CPP
        ).apply {
            comparisonMode = ComparisonMode.NORMAL
            isDebugParser = false
        }

        val result = JPlag(option).run()
        result.comparisons.forEach {
            if (it.similarity() >= 80) {
                println("${it.firstSubmission.name} - ${it.secondSubmission.name}: ${it.similarity()}")
            }
        }
        println(">>> duration: ${result.duration}")
    }
}