#include <iostream>

using namespace std;


/**
 * 5-1 输入2个整数，计算并输出2个整数之间所有整数的和
 *
 * @return
 */


int main1() {

    int min, max, sum = 0;
    cout << "enter the first number" << endl;
    cin >> min;
    cout << "enter the second number" << endl;
    cin >> max;
    for (int i = min; i <= max; ++i) {
        sum += i;
    }
    cout << "the sum of " << min << " +....+ " << max << " is " << sum << endl;
    return 0;
}





