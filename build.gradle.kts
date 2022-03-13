plugins {
    kotlin("jvm")
}

repositories {
    mavenCentral()
}

subprojects {
    apply(plugin = "org.jetbrains.kotlin.jvm")
    apply(plugin = "java")

    group = ProjectConfig.Group
    version = ProjectConfig.Version

    repositories {
        mavenCentral()
        maven {
            url = uri("https://plugins.gradle.org/m2/")
        }
    }

    dependencies {
        implementation(Deps.KotlinReflect)
        implementation(Deps.KotlinStdlib)
    }

    java.sourceCompatibility = ProjectConfig.JavaCompatVersion
    java.targetCompatibility = ProjectConfig.JavaCompatVersion
    tasks.withType<org.jetbrains.kotlin.gradle.tasks.KotlinCompile> {
        kotlinOptions {
            freeCompilerArgs = listOf("-Xjsr305=strict")
            jvmTarget = ProjectConfig.JvmTarget
        }
    }
}
