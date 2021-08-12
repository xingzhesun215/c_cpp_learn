#include <iostream>
#include <array>

using namespace std;


/**
 * 5-2 编写一个要求用户输入数字的程序，输入后程序都将报告到目前为止，所有输入的累积和。当用户输入0时，程序结束
 *
 * @return
 */


int main1() {

    int input = 0, sum = 0;
    do {
        cout << "Input a number to add "<<endl;
        cin >> input;
        sum += input;
        cout << "+" << input << "=" << sum << endl;
    } while (input != 0);
    return 0;
}





