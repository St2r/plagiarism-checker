package buaa.oj.plagiarismchecker.server.utils

import de.jplag.Submission

fun Submission.getCodeId(): String {
    return this.name.split('.')[0]
}