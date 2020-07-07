//
// Created by konek on 8/13/2019.
//

#ifndef GLNE_SERVER_H
#define GLNE_SERVER_H

#include "header.h"

#include <boost/asio.hpp>

#ifndef __ANDROID__
    #define LOG_INFO_SERVER printf
    #define LOG_ERROR_SERVER printf
#else
    #include <strings.h>
    #include <android/log.h>

    #define LOG_TAG_SERVER "server_core"
    #define LOG_INFO_SERVER(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG_SERVER, __VA_ARGS__)
    #define LOG_ERROR_SERVER(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG_SERVER, __VA_ARGS__)
#endif

#include "server_core.h"

#endif //GLNE_SERVER_H
