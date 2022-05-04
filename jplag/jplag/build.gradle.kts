repositories {
    mavenCentral()
    maven {
        url = uri("https://plugins.gradle.org/m2/")
    }
}

tasks.test {
    useJUnitPlatform()
    testLogging {
        events("passed", "skipped", "failed")
    }
}

dependencies {
    implementation("org.jetbrains.kotlin:kotlin-stdlib")

    implementation("net.sourceforge.argparse4j:argparse4j:0.9.0")
    implementation("org.apache.commons:commons-math3:3.6.1")

    implementation(project(":jplag:front-utils"))

    implementation("antlr:antlr:2.7.7")
    implementation("org.antlr:antlr4:4.9.3")
    runtimeOnly("org.antlr:antlr4-runtime:4.9.3")
//    implementation("org.antlr:antlr3:3.5.2")
//    runtimeOnly("org.antlr:antlr3-runtime:3.5.2")

    implementation("com.fasterxml.jackson.core:jackson-databind:2.13.0")

    implementation(project(":jplag:front:chars"))
    implementation(project(":jplag:front:cpp"))

    // JUnit
    testImplementation(platform("org.junit:junit-bom:5.8.2"))
    testImplementation("org.junit.jupiter:junit-jupiter")
}