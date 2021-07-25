//
// Created by sun on 2021/7/24.
//

#include <iostream>

using namespace std;

/**
 * 交换数组
 * @param p
 * @param size
 */
void Reverse(int *p, int size) {
    for (int i = 0; i < size / 2; i++) {
        int tmp = p[i];
        p[i] = p[size - 1 - i];
        p[size - 1 - i] = tmp;
    }
}

int main2() {

    int a[3][4] = {{1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12}};
    for (int m = 0; m < 3; m++) {
        for (int n = 0; n < 4; n++) {
            cout<<" "<<a[m][n];
        }
        cout<<endl;
    }
    Reverse(a[1],4);
    for (int m = 0; m < 3; m++) {
        for (int n = 0; n < 4; n++) {
            cout<<" "<<a[m][n];
        }
        cout<<endl;
    }

    return 0;
}


