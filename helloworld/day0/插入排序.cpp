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
int main6() {
    int data[] = {2, 1, 10, 3, 5, 4, 6, 8, 7, 9};
    int size = sizeof(data) / sizeof(int);
    cout << "size=" << size << endl;
    printArr(data, size);
    for (int i = 1; i < size; i++) {
        cout << "当前要进行插入的数据" << data[i] << endl;//需要将这个元素放到合适位置
        for (int m = 0; m < i ; m++) {//在i前面的元素遍历
            if (data[m] > data[i]) {//i的元素要插入到m位置
                int tmp = data[i];
                for(int n=i;n>m;n--){//遍历m到i
                    data[n]=data[n-1];
                }
                data[m]=tmp;
                break;//找到位置了，可以中断了
            }
        }


        printArr(data, size);
    }
    printArr(data, size);

    return 0;
}


