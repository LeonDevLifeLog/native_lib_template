package com.github.leondevlifelog.nativelib

object NativeLib {
    init {
        System.loadLibrary("native-lib")
    }

    external fun sayHi(name: String): String
}