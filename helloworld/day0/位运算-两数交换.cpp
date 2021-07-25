//
// Created by sun on 2021/7/24.
//

#include <iostream>

using namespace std;

int main1() {

    int a = 5;
    int b = 6;
    cout << "a=" << a << "  b=" << b << endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "after\na=" << a << "  b=" << b << endl;




    return 0;
}


