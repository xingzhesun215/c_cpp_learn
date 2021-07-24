//
// Created by sun on 2021/7/24.
//

#include <iostream>

using namespace std;

int main2() {
    cout << "是否闰年判断" << endl;
    int year;
    cout << "input the year :";
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        cout << year << "is 闰年";
    } else {
        cout << year << "is not 闰年";
    }
    return 0;
}