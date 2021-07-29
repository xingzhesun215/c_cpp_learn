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

void printSet(set<int> st) {
    multiset<int>::iterator p = st.begin();//迭代器，类似于指针，begin()获取头元素的迭代器，end()获取最后元素的迭代器
    for (p = st.begin(); p != st.end(); p++) {
        cout << *p << "  ";
    }
    cout << endl;
}

/**
 * set的基本用法，自带排序,不能插入相同元素
 * @return
 */
int main22() {
    int data[] = {2, 1, 10, 3, 5, 4, 6, 5, 4, 6, 8, 7, 9};
    int size = sizeof(data) / sizeof(int);
    cout << "size=" << size << endl;
    cout << "当前数组:" << endl;
    printArr(data, size);
    set<int> st;
    for (int i = 0; i < size; i++) {
        cout << "准备插入元素" << data[i] << endl;
        st.insert(data[i]);
        printSet(st);
    }
    pair<set<int>::iterator, bool> result = st.insert(4);
    if(!result.second){
        cout<<"4 is exist "<<endl;
    }else{
        cout<<"4 add success"<<endl;

    }

    return 0;
}


