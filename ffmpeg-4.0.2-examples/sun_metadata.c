/*
 * Copyright (c) 2011 Reinhard Tartler
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

/**
 * @file
 * Shows how the metadata API can be used in application programs.
 * 演示如何使用metadata元数据 api
 * @example metadata.c
 */

#include <stdio.h>

#include <libavformat/avformat.h>
#include <libavutil/dict.h>

int main (int argc, char **argv)
{
	/**
	AVFormatContext 封装的上下文,包含码流信息的结构体,重要信息如下:
	
	AVIOContext *pb：输入数据的缓存

	unsigned int nb_streams：视音频流的个数

	AVStream **streams：视音频流

	char filename[1024]：文件名

	int64_t duration：时长（单位：微秒us，转换为秒需要除以1000000）

	int bit_rate：比特率（单位bps，转换为kbps需要除以1000）

	AVDictionary *metadata：元数据

	*/
    AVFormatContext *fmt_ctx = NULL;
    AVDictionaryEntry *tag = NULL;
    int ret;

    if (argc != 2) {
        printf("usage: %s <input_file>\n"
               "example program to demonstrate the use of the libavformat metadata API.\n"
               "\n", argv[0]);
        return 1;
    }
			
    if ((ret = avformat_open_input(&fmt_ctx, argv[1], NULL, NULL)))//打开多媒体数据并且获得一些相关的信息,函数调用成功之后处理过的AVFormatContext结构体
        return ret;

    while ((tag = av_dict_get(fmt_ctx->metadata, "", tag, AV_DICT_IGNORE_SUFFIX)))//字典型获取数据
        printf("%s=%s\n", tag->key, tag->value);

    avformat_close_input(&fmt_ctx);//关闭输入
    return 0;
}
