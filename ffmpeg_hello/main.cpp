#include <iostream>

extern "C" {
#include<libavformat/avformat.h>
#include<libavcodec/avcodec.h>
}
using namespace std;

int main() {
    cout << "引入ffmpeg成功\n avcodec_configuration=";
    cout << avcodec_configuration() << endl;
    cout << "the version is  " << avcodec_version();
    return 0;
}
