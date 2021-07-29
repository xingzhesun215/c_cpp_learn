//
// Created by sun on 2021/7/24.
//

#include <iostream>
#include <set>
#include "c_test/myUtil.h"

/**
 * 动态分配内存
 * @return
 */
int main2() {

    int *p1 = new int;
    *p1 = 5;
    cout << "*p1=" << *p1 << endl;
    int a = 10;
    delete p1;//new一遍，delete一遍,下一次这个p1就要指向别处了，所以要先删除
    p1 = &a;
    cout << "*p1=" << *p1 << endl;

    int *p2 = new int[20];
    for (int i = 0; i < 20; i++) {
        p2[i] = 5 * i;
    }
    printArr(p2, 20);

    delete[]p2;

    return 0;
}


