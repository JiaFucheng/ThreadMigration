#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_tclab_threadmigrationtestapplication_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT int JNICALL Java_com_tclab_threadmigrationtestapplication_MainActivity_migrationStart (
    JNIEnv* env,
    jobject ,
    jobject threadObj) {

    // 在这里想办法对threadObj的线程实体及涉及的所有相关变量的实体及函数进行迁移

    return NULL;
}
