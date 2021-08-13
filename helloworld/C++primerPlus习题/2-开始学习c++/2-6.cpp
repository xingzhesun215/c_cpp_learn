#include <iostream>

using namespace std;


/**
 * 2-6 编写一个函数，其中的main()调用用户定义的函数（输入光年 ，输出天文单位的值）
 * @return
 */
float convert(double s);

int main1() {

    cout << "please enter the number fo light years :";
    float s;
    cin >> s;
    cout << endl << s << " light years is " << convert(s) << " astronomical units." << endl;

    return 0;


}

float convert(double s) {
    return s * 63240;
}



