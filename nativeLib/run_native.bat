@echo off
adb push %~dp0/.cxx/cmake/debug/arm64-v8a/main /data/local/tmp/
adb shell chmod +x /data/local/tmp/main
adb shell ./data/local/tmp/main