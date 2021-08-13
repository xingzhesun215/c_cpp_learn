#include <iostream>

using namespace std;


/**
 * 2-7 编写一个函数，其中的main()调用用户定义的函数（输入小时和分钟，传给自定义函数，打印固定格式显示）
 * @return
 */
void format_print(int hour, int min);

int main1() {

    int hour, min;
    cout << "please enter the hour :";
    cin >> hour;
    cout << "please enter the min :";
    cin >> min;

    format_print(hour, min);

    return 0;


}

void format_print(int hour, int min) {
    cout << "Time : " << hour << ":" << min;
}



