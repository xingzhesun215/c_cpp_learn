//
// Created by sun on 2021/8/2.
//

#include <libavutil/log.h>


//AV_LOG_ERROR
//AV_LOG_DEBUG
//AV_LOG_WAINING
//AV_LOG_INFO
int logType = AV_LOG_DEBUG;

char *key = "FFmpeg";

void setLogLevel(char *k, int type) {
    key = k;
    logType = type;
    av_log_set_level(type);
}

void logInt(int result) {
    av_log(NULL, logType, "%s:%d\n", key, result);
}

void logStr(char *result) {
    av_log(NULL, logType, "%s:%s\n", key, result);
}

