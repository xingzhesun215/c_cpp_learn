#include <iostream>


extern "C" {
#include "les2//ff_file_util.h"
}
using namespace std;

int main() {
    deleteFile("sun.txt1");
    moveFile("sun.txt1", "hahah.txt");
    return 0;
}
