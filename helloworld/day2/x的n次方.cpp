//
// Created by sun on 2021/7/24.
//

#include <iostream>

using namespace std;

double power(double x, int n);

/**
 * 输入2进制数转为10进制
 * @return
 */
int main1() {
    cout << "hello world" << endl;
    int x;
    cin >> x;
    int wei = 0;
    int sum = 0;
    int each, chu;
    for (int i = 0; i < 8; i++) {
        each = x % 10;
        chu = x / 10;
        sum += each * power(2, wei);
        x = chu;
        wei++;
    }
    cout << sum << endl;
    return 0;
}

double power(double x, int n) {
    double result = 1.0;
    while (n--) {
        result *= x;
    }
    return result;
}