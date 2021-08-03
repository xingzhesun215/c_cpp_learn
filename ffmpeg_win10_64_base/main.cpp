#include <iostream>
using namespace std;

extern "C" {
#include "libavcodec/avcodec.h"
#include "libavutil/time.h"
#include "libswscale/swscale.h"
#include "libavutil/avutil.h"
}

int main() {
    cout<<"hello ffmpeg !the env is ok now"<<endl;
    cout << av_version_info();
    return 0;
}