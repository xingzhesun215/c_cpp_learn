//
// Created by sun on 2021/7/24.
//

#include <iostream>
#include <set>

using namespace std;

/**
 * int & a = b;
 * @return
 */
int main1() {
    int a = 100;
    int &b = a;//b的类型为int &,表示b是a的引用，从一而终等同于a

    cout << "b=" << b << endl;
    a = 101;
    cout << "b=" << b << endl;
    b=102;
    cout << "a=" << a << endl;

    int c=103;
    b=c;//c的值给了b，不是b是c的引用
    cout << "a=" << a << endl;
    b=100;
    cout << "a=" << a <<"    c="<<c<< endl;




    return 0;
}


