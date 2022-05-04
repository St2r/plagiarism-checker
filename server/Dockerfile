FROM openjdk:11.0.14-jre
COPY ./build/libs/*.jar /jar/server.jar
EXPOSE 8080
CMD ["java", "-jar", "/jar/server.jar"]