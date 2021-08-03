#include <iostream>


extern "C" {
#include<libavutil/log.h>
#include<libavformat/avformat.h>
}
using namespace std;


int main2(int argc, char* argv[])
{
    int ret;
    AVFormatContext *fmt_ctx = NULL; // 定义上下文

    av_log_set_level(AV_LOG_INFO); // 设置日志级别
    av_log(NULL,AV_LOG_ERROR,"hello2\n");
    //av_register_all(); // 注册多媒体格式协议，新版本ffmpeg中弃用了这个函数

    avformat_open_input(&fmt_ctx,"./test.mp4", NULL, NULL); // 打开多媒体文件 第3个参数NULL:指定输入格式，默认文件后缀名
    av_log(NULL,AV_LOG_ERROR,"hello3\n");
    if(ret<0){ // 如果打开失败，就打印日志信息并退出
        av_log(NULL, AV_LOG_ERROR, "Can't open file: %s\n",av_err2str(ret));
        return -1;
    }
    av_log(NULL,AV_LOG_ERROR,"hello4\n");
    // 打开成功，进入这里，执行下面的逻辑
    av_dump_format(fmt_ctx, 0, "./test.mp4", 1); // 打印多诶题文件的meta信息  no2填0记住即可；no4填0表示是输入文件，如果输出文件填1

    av_log(NULL,AV_LOG_ERROR,"hello5\n");
    avformat_close_input(&fmt_ctx); // 关闭多媒体文件

    return 0;
}