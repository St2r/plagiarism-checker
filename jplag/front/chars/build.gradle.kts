repositories {
    mavenCentral()
}

plugins {
    kotlin("jvm")
    java
}

dependencies {
    implementation("org.jetbrains.kotlin:kotlin-stdlib")

    implementation(project(":jplag:front-utils"))
}