import org.springframework.boot.gradle.tasks.bundling.BootBuildImage

plugins {
    id("org.springframework.boot")
    id("io.spring.dependency-management")
    kotlin("jvm")
    kotlin("plugin.spring")
}

tasks.named<BootBuildImage>("bootBuildImage") {
    imageName = "oj-checker-server:latest"
}

dependencies {
    // Spring boot
    implementation(Deps.SpringStarterWEB) {
        // 移除 jackson，使用 Google 的 Gson
        exclude(group = "com.fasterxml.jackson.core")
    }

    // DataBase
    implementation(Deps.SpringStarterRedis)
    implementation(Deps.SpringStarterJDBC)
    runtimeOnly(Deps.PostgreSQL)

    implementation(Deps.SpringStarterSecurity)

    // Json
    implementation(Deps.Gson)

    implementation(project(":jplag:jplag"))

    implementation("com.baomidou:mybatis-plus-boot-starter:3.5.1")
//    implementation("org.mybatis.spring.boot:mybatis-spring-boot-starter:2.2.2")
    implementation("com.auth0:java-jwt:3.19.0")

    implementation("org.springframework.boot:spring-boot-starter-data-mongodb")
}

task("env-start") {
    group = "env"
    description = "启动开发环境"

    doFirst {
        // mysql
        exec {
            executable = "dockers"
            args = listOf("images")
        }
    }
}

