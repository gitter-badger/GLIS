//
// Created by konek on 8/19/2019.
//

#pragma once

#include <inttypes.h>
#include "ashmem.hpp"
#define LOG_TAG_SHM "ANDROID SHARED MEMORY"
#define LOG_INFO_SHM(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG_SHM, __VA_ARGS__)
#define LOG_ERROR_SHM(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG_SHM, __VA_ARGS__)

bool SHM_create(int &fd, int8_t **data, size_t size);

bool SHM_open(int &fd, int8_t **data, size_t size);

bool SHM_resize(int &fd, int8_t **data, size_t size);

bool SHM_close(int &fd);
