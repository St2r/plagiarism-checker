plugins {
    id("org.springframework.boot")
    id("io.spring.dependency-management")
    kotlin("jvm")
    kotlin("plugin.spring")
}


dependencies {
    // Spring boot
    implementation(Deps.SpringStarterWEB) {
        // 移除 jackson，使用 Google 的 Gson
        exclude(group = "com.fasterxml.jackson.core")
    }

    // DataBase
    implementation(Deps.SpringStarterJDBC)
    runtimeOnly(Deps.PostgreSQL)

    // Json
    implementation(Deps.Gson)

    implementation(project(":jplag:jplag"))
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

