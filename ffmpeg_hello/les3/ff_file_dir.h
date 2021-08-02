#include <libavutil/log.h>
#include <libavformat/avformat.h>


void testLS() {
    int ret;
    AVIODirContext *ctx = NULL;
    AVIODirEntry *entry = NULL;

    av_log_set_level(AV_LOG_INFO);
    ret = avio_open_dir(&ctx, "./", NULL);
    if (ret < 0) {
        av_log(NULL, AV_LOG_ERROR, "cannot open dir:%s\n", av_err2str(ret));
    }
    while (1) {
        ret = avio_read_dir(ctx, &entry);
        if (ret < 0) {
            av_log(NULL, AV_LOG_ERROR, "can not read dir:%s\n", av_err2str(ret));
            goto __fail;
        }
        if (!entry) {
            break;
        }
        av_log(NULL, AV_LOG_INFO, "%s:%d \n", entry->name, entry->size);
        avio_free_directory_entry(&entry);
    }

    __fail:
    avio_close_dir(&ctx);
    return;
}