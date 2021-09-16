#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <queue>

using namespace std;

/**
 * 队模型
 *
 * queue  先进先出，2个口，元素只能从一个口进，一个口出， 队尾进，队首出，不具备遍历行为，没有迭代器
 *
 * 特性总结：
 * 从一个口入队，从一个口出队
 * 不能随机存取，不支持遍历
 */

//构造函数
void test01() {
    queue<int> qu1;
    queue<int> qu2(qu1);
}

//存取操作
void test02() {
    queue<int>qu;
    qu.push(1);
    qu.push(2);
    qu.push(3);//添加

    qu.pop();//移出栈顶元素

    cout<<"当前队首元素="<<qu.front()<<endl;
    cout<<"当前队尾元素="<<qu.back()<<endl;
}

//大小操作
void test03(){
    queue<int>qu;
    qu.empty();//是否为空
    qu.size();//个数
}

int main1() {
    return 0;
}


