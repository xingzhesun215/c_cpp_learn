#include <iostream>
#include <array>

using namespace std;


/**
 * 5-2 使用array对象（不是数组）和long double（不是long long） 重新编写5.4的程序，并计算100！
 *
 * @return
 */

const int ArraySize = 101;

int main1() {

    array<long double, ArraySize> array;

    array[0] = array[1] = 1;
    for (int i = 2; i < ArraySize; i++) {
        array[i] = i * array[i - 1];
    }
    for (int i = 0; i < ArraySize; i++) {
        cout << i << "!=" << array[i] << endl;//输出了0到100全部数的阶乘
    }

    return 0;
}





