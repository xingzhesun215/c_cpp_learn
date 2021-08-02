cmake_minimum_required(VERSION 3.19)
project(ffmpeg_hello)

set(CMAKE_CXX_STANDARD 14)

include_directories(/opt/homebrew/Cellar/ffmpeg/HEAD-864d1ef_1/include/)
link_directories(/opt/homebrew/Cellar/ffmpeg/HEAD-864d1ef_1/lib/)

add_executable(ffmpeg_hello main.cpp les1/ff_log_util.h)

target_link_libraries(
        ffmpeg_hello
        avcodec
        avdevice
        avfilter
        avformat
#        avresample
        avutil
        postproc
        swresample
        swscale
)