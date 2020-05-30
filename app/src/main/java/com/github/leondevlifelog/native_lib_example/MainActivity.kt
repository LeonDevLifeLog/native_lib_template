package com.github.leondevlifelog.native_lib_example

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.github.leondevlifelog.nativelib.NativeLib
import kotlinx.android.synthetic.main.activity_main.*

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        tvText.text = NativeLib.sayHi("lisa")
    }
}