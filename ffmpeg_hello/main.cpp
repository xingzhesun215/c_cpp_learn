#include <iostream>


extern "C" {
#include <libavcodec/avcodec.h>
#include "les1/fflog.h"
}
using namespace std;

int main() {

//    av_log_set_level(AV_LOG_DEBUG);

//    av_log(NULL,AV_LOG_DEBUG,"222223234234sdfsdfsd %d",12312);

    setLogLevel("logTest", AV_LOG_DEBUG);
    logInt(123);
    logStr("这是我在测试日志文件");

    return 0;
}
