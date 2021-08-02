
#include <libavformat/avformat.h>

/**
 * avpriv_io_delete()文件删除
 * avpriv_io_move()文件重命名
 *
 */

//TODO 可能是我的版本问题，我的ffmpeg没有这几个文件操作的方法
int deleteFile(char *filePath) {
//    int ret = avpriv_io_delete(filePath);
    int ret = -1;
    if (ret < 0) {
        av_log(NULL, AV_LOG_ERROR, "failed to delete file %s\n", filePath);
    } else {
        av_log(NULL, AV_LOG_INFO, "success to delete file %s\n", filePath);
    }

    return ret;
}

int moveFile(char *oldFile, char *newFile) {
//    int ret = avpriv_io_move(oldFile, newFile);
    int ret = -1;
    if (ret < 0) {
        av_log(NULL, AV_LOG_ERROR, "failed to move file %s\n", oldFile);
    } else {
        av_log(NULL, AV_LOG_INFO, "success to move file %s to %s\n", oldFile, newFile);
    }
    return ret;
}