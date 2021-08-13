#include <iostream>

using namespace std;


/**
 * 3-3 编写一个函数，输入度分秒方式的纬度，然后以度为单位显示
 * @return
 */

int main1() {

    int degrees, min, sec;
    cout << "please enter the degree :";
    cin >> degrees;
    cout << "please enter the min :";
    cin >> min;
    cout << "please enter the sec :";
    cin >> sec;
    cout << "and they are " << degrees + min * 1.0 / 60 + sec * 1.0 / 3600;


    return 0;


}

void format_print(int hour, int min) {
    cout << "Time : " << hour << ":" << min;
}



