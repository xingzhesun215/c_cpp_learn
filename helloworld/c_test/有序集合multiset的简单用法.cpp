//
// Created by sun on 2021/7/24.
//

#include <iostream>
#include <set>

using namespace std;

void printArr(int *data, int length) {
    for (int i = 0; i < length; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}

void printMultiSet(multiset<int> st) {
    multiset<int>::iterator p = st.begin();//迭代器，类似于指针，begin()获取头元素的迭代器，end()获取最后元素的迭代器
    for (p = st.begin(); p != st.end(); p++) {
        cout << *p << "  ";
    }
    cout << endl;
}

/**
 * multiset的基本用法，自带排序
 * @return
 */
int main2() {
    int data[] = {2, 1, 10, 3, 5, 4, 6, 8, 7, 9};
    int size = sizeof(data) / sizeof(int);
    cout << "size=" << size << endl;
    cout << "当前数组:" << endl;
    printArr(data, size);

    multiset<int> st;
    for (int i = 0; i < size; i++) {
        cout << "curindex=" << i << endl;
        st.insert(data[i]);//插入数据
        printMultiSet(st);
    }
    multiset<int>::iterator p = st.find(22);
    if (p == st.end()) {
        cout << "set中没有22" << endl;
    } else {
        cout << "set中有22" << endl;
    }
    p = st.find(5);
    if (p == st.end()) {
        cout << "set中没有5" << endl;
    } else {
        cout << "set中有5" << endl;
    }

    cout<<"delete 11 in multiset result="<<  st.erase(11)<<endl;
    cout<<"delete 10 in multiset result="<<  st.erase(10)<<endl;
    printMultiSet(st);

    return 0;
}


