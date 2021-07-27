//
// Created by sun on 2021/7/24.
//

#include <iostream>


using namespace std;

void printArr(int *data, int length) {
    for (int i = 0; i < length; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}

/**
 * 选择排序
 * 选择最小的放到第一个，再选择第二小的放到第二个位置，找到后交换位置即可
 * @return
 */
int main5() {
    int data[] = {2, 1, 10, 3, 5, 4, 6, 8, 7, 9};
    int size = sizeof(data) / sizeof(int);
    cout << "size=" << size << endl;
    printArr(data, size);
    for (int i = 0; i < size; i++) {
        int index = i;
        for (int m = i+1; m < size; m++) {
            if (data[i] > data[m]) {
                index = m;
            }
        }
        if (index != i) {
            int value = data[i];
            data[i] = data[index];
            data[index] = value;
        }
        printArr(data,size);
    }
    printArr(data, size);

    return 0;
}


