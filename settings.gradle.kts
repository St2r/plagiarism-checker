rootProject.name = "plagiarism checker"

/**
 * sub projects
 */
include(
    // 后端
    ":server",
    // 前端
    ":client",
    // 查重模块
    ":jplag:jplag",
    ":jplag:front-utils",
    ":jplag:front:chars",
    ":jplag:front:cpp",
)

/**
 * plugins manager
 */
pluginManagement {
    repositories {
        mavenCentral()
        maven { url = uri("https://plugins.gradle.org/m2/") }
        gradlePluginPortal()
    }

    plugins {
        id("org.springframework.boot") version "2.6.3"
        id("io.spring.dependency-management") version "1.0.11.RELEASE"
        id("com.bmuschko.docker-spring-boot-application") version "7.3.0"
        kotlin("jvm") version "1.6.10"
        kotlin("plugin.spring") version "1.6.10"
    }
}
