rootProject.name = "plagiarism checker"

/**
 * sub projects
 */
include(
    ":server",
    ":web",

)

include(
    ":jplag:front-utils",
    ":jplag:front:chars",
    ":jplag:front:cpp",
)

/**
 * plugins manager
 */
pluginManagement {
    plugins {
        id("org.springframework.boot") version "2.6.3"
        id("io.spring.dependency-management") version "1.0.11.RELEASE"
        kotlin("jvm") version "1.6.10"
        kotlin("plugin.spring") version "1.6.10"
    }
}
