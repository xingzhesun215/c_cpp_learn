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
 * stl 二分查找 binaay_search（返回1/0） lower_bound(返回位置索引指针) upper_bound(返回大于查找值的索引指针)
 * @return
 */
int main1() {
    int data[] = {2, 1, 10, 3, 5, 4, 6, 8, 7, 9};
    int size = sizeof(data) / sizeof(int);
    cout << "size=" << size << endl;
    cout << "当前数组:" << endl;
    printArr(data, size);
    cout << "从小到大 sort后：" << endl;
    sort(data, data + size);//默认进行从小到大排序
    printArr(data, size);

    //从小到大二分查找函数为binary_search
    cout << "查找data[]中的2" << (binary_search(data, data + size, 2) ? "找到了" : "没找到") << endl;
    cout << "查找data[]中的22" << (binary_search(data, data + size, 22) ? "找到了" : "没找到") << endl;

    printf("databases location =%p\n", data);
    int *result = lower_bound(data, data + size, 1);//找到排好序的元素的索引值 1=0 2=1 。。。。。
    printf("databases location =%p\n", result);
    cout << result - data << endl;

    int *result_up = upper_bound(data, data + size, 5);//大于5的上界，即元素为6的索引值
    printf("databases location =%p\n", result_up);
    cout << result_up - data << endl;
    return 0;
}


