#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <stack>

using namespace std;

/**
 *
 * 烧杯模型
 *
 * stack 先进后出的数据结构，只有一个出口，只允许在栈顶新增/删除/获取元素，其他地方无法存取元素，故不具有遍历行为，没有迭代器
 *
 * 特性总结：栈不能遍历，不支持随机存取，只能通过top从栈顶获取和删除元素
 */

//构造函数
void test01() {
    stack<int> st;
    stack<int> st2(st);
}

//存取操作
void test02() {
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);//添加

    st.pop();//移出栈顶元素

    cout<<"当前栈顶元素="<<st.top()<<endl;
}

//大小操作
void test03(){
    stack<int>st;
    st.empty();//是否为空
    st.size();//个数
}

int main1() {
    return 0;
}


