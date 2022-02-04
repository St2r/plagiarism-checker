import java.util.Properties

val properties = Properties().apply {
    load(project.rootProject.file("local.properties").inputStream())
}

fun buildTask(name: String, args: List<String>) {
    task(name) {
        group = "node"

        doFirst {
            exec {
                executable = "yarn"
                this.args = args

                val pathKey = if (System.getProperty("os.name").toLowerCase().contains("Windows"))
                    "Path" else "PATH"
                environment[pathKey] = "${properties["node.path"]}:${environment[pathKey]}"
            }
        }
    }
}

buildTask("dep", listOf("--registry", "https://registry.npm.taobao.org"))
buildTask("dev", listOf("dev"))
buildTask("serve", listOf("serve"))