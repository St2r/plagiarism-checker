plugins {
    id("org.springframework.boot")
    id("io.spring.dependency-management")
    kotlin("jvm")
    kotlin("plugin.spring")
}


dependencies {
    // spring boot
    implementation(Deps.SpringStarterWEB) {
        // 移除 jackson，序列化和反序列化使用 Google 的 Gson
        exclude(group = "com.fasterxml.jackson.core")
    }
//    implementation(Deps.SpringStarterJDBC)

    implementation(Deps.Gson)

    runtimeOnly(Deps.PostgreSQL)
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

