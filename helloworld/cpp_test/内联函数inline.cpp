//
// Created by sun on 2021/7/24.
//

#include <iostream>
#include <set>
#include "c_test/myUtil.h"

inline int add(int a, int b) {
    return a + b;
}

/**
 * 内联函数，减少函数调用，内联函数是将方法体插入到调用处，相应的，运行后的程序会变大
 * @return
 */
int main3() {
    cout << endl << add(1, 2);
    cout << endl << add(2, 2);
    cout << endl << add(3, 2);
    cout << endl << add(4, 2);

    return 0;
}


