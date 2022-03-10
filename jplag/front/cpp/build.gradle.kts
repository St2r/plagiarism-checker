repositories {
    mavenCentral()
    maven {
        url = uri("https://plugins.gradle.org/m2/")
    }
}

plugins {
    kotlin("jvm")
    java
    id("com.intershop.gradle.javacc") version "4.0.0"
}

javacc {
    // configuration container for all javacc configurations
    configs {
        register("scanner") {
            inputFile = file("src/main/javacc/CPP.jj")
            packageName = "de.jplag.cpp"
        }
    }
}

buildscript {

    dependencies {
        classpath("ca.coglinc:javacc-gradle-plugin:2.4.0")
    }
}

dependencies {
    implementation("org.jetbrains.kotlin:kotlin-stdlib")

    implementation(project(":jplag:front-utils"))

//    implementation("com.github.javaparser:javaparser-core-serialization:3.24.0")

    // https://mvnrepository.com/artifact/net.sourceforge.argparse4j/argparse4j
    implementation("net.sourceforge.argparse4j:argparse4j:0.9.0")
}