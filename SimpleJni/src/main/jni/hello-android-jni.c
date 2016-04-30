#include <jni.h>

JNIEXPORT jstring JNICALL
Java_edu_ptu_jniproj_Sum_getSum(JNIEnv *env, jobject instance, jint i, jint j) {

    // TODO


    return (*env)->NewStringUTF(env, "你好");
}