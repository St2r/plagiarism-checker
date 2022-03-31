package buaa.oj.plagiarismchecker.server.entity

import org.springframework.data.mongodb.core.mapping.Document
import org.springframework.data.mongodb.core.mapping.Field
import org.springframework.data.mongodb.repository.MongoRepository

@Document("code")
data class OjCodeDoc(

    @Field("_id")
    val id: String? = null,

    @Field("code")
    val codeContent: String = "",
)

interface OjCodeRepository: MongoRepository<OjCodeDoc, String>