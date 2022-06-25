package buaa.oj.plagiarismchecker.server.extension

import java.security.Principal

const val ROOT_DIR = "/Users/st2r/plagiarism"

fun Principal.getOwnTempDirPath(): String {
    return "${ROOT_DIR}/${this.name}"
}