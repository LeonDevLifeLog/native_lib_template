#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_github_leondevlifelog_nativelib_NativeLib_sayHi(JNIEnv *env, jobject thiz, jstring name) {
    std::string hello = "Hi~ from C++";
    return env->NewStringUTF(hello.c_str());
}

