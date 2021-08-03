cmake_minimum_required(VERSION 3.15)
project(ffmpeg_win10_64_base)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)
link_directories(librarys)

add_executable(ffmpeg_win10_64_base main.cpp)

target_link_libraries(ffmpeg_win10_64_base
        avfilter
        avformat
        avcodec
        avutil
        swscale
        avdevice
        )