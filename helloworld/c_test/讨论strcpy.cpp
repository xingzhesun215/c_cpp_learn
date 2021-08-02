//
// Created by sun on 2021/7/24.
//

#include <iostream>
#include <set>
#include "c_test/myUtil.h"

/**
 *strcpy 复制函数的特别考虑
 * @return
 */
int strcpyTest() {
    char a[20];
    char *b = "123456";
    cout << "b=" << b << endl;
    char *c = strcpy(a, b);//将b的内容复制给前面数组，并返回指向复制数组的指针
    cout << "a=" << a << endl;
    cout << "c=" << c << endl;
    for (int i = 0; i < 6; ++i) {
        a[i] = 'A' + i;
    }
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    return 0;
}


