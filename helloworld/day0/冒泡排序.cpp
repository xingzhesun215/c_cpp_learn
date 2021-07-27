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
 * 插入排序
 * 整个数组分有序及无序的2边，每次取无序的第一个插入到有序的部分中，最终全部有序
 * @return
 */
int main7() {
    int data[] = {2, 1, 10, 3, 5, 4, 6, 8, 7, 9};
    int size = sizeof(data) / sizeof(int);
    cout << "size=" << size << endl;
    printArr(data, size);
    for (int i = 0; i < size-1; i++) {
        for (int m = i + 1; m < size; m++) {
            if (data[i] > data[m]) {//如果右边m位置的元素比i位置的大，交换位置
                int temp = data[i];
                data[i] = data[m];
                data[m] = temp;
            }
        }

        printArr(data, size);
    }
    printArr(data, size);

    return 0;
}


