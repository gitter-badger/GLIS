#pragma once

#ifndef __ANDROID__
    void LOG_INFO(const char* format, ... );
    void LOG_ERROR(const char* format, ... );
#else
    #ifndef ANDROID_LOG_INFO
        #include <android/log.h>
    #else
        #ifndef ANDROID_LOG_ERROR
            #include <android/log.h>
        #endif
    #endif
    #define LOG_TAG "GLIS"
    #ifndef LOG_INFO
        #define LOG_INFO(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
    #endif
    #ifndef LOG_ERROR
        #define LOG_ERROR(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)
    #endif
#endif
