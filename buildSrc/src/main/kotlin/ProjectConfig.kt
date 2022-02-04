import org.gradle.api.JavaVersion

object ProjectConfig {
    const val Group = "buaa.oj.plagiarismchecker"

    const val Version = "0.0.1-SNAPSHOT"

    val JavaCompatVersion = JavaVersion.VERSION_11

    const val JvmTarget = "11"
}