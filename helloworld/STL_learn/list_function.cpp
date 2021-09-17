#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <list>

using namespace std;

/**
 *
 * list
 * 链表 一种物理存储单元上非连续，非顺序的存储结构，元素的逻辑顺序是通过链表中的指针链接次序实现的，链表由一系列结点组成，
 * 结点包括2个部分，一个是存储数据元素的数据域，另一个是存储下一个结点地址的指针域
 *
 * 特性总结：
 * 动态存储分配，不会造成内存的浪费和溢出
 * 链表执行插入和删除操作十分方便，修改指针即可，不需要移动大量元素
 * 链表灵活，但空间和时间的额外消费比较大
 */

//构造函数
void test01() {
    list<int> l1;           //默认构造方法
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);
    list<int>::iterator it = l1.begin();
    int count = 5;
    int value = 3;
    list<int> l2(count, value);//count 个value拷贝

    list<int> l3(it, it++);    //迭代器范围赋值

    list<int> l4(l1);       //拷贝函数
}

//存取操作
void test02() {
    list<int> l1;
    list<int>::iterator it = l1.begin();

    l1.push_back(1);//尾部添加一个元素
    l1.pop_back();//删除最后一个元素

    l1.push_front(1);//头部添加一个元素
    l1.pop_front();//删除第一个元素

    l1.insert(it, 4);//指定位置插入一个元素
    l1.insert(it, 3, 4);//指定位置插入一个n*x个元素

    //l1.insert(it,it_begin,it_end);

    l1.clear();//全清

    list<int>::iterator next = l1.erase(it, it++);//删除2个迭代器区间内的元素，返回下一个元素的迭代器
    l1.erase(it);//删除某个迭代器位置的元素，返回下一个迭代器

}

//大小操作
void test03() {
    list<int> l1;
    l1.empty();//是否为空
    l1.size();//个数
    l1.resize(5);//重新指定容器的长度，变长则新位置赋新值，若变短，则删除多余位置元素
}

//赋值操作
void test04() {
    list<int> l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);
    list<int>::iterator it = l1.begin();

    list<int> l2(it, it++);//迭代器区间赋值

    int count = 4;
    int value = 3;
    list<int> l3(count, value);//多个相同元素赋值

    list<int> l4(l3);//重在符号赋值

    for (list<int>::iterator it = l1.begin(); it != l1.end(); it++) {
        cout << " " << *it;
    }

    l3.swap(l1);//l1 与 l3  交换赋值，

    cout << endl;

    for (list<int>::iterator it = l1.begin(); it != l1.end(); it++) {
        cout << " " << *it;
    }
    cout << endl;
    for (list<int>::iterator it = l3.begin(); it != l3.end(); it++) {
        cout << " " << *it;
    }
}

//存取
void test05() {
    list<int> l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);

    int front = l1.front();//第一个元素
    int end = l1.back();//最后一个元素
}

//反向
void test06() {
    list<int> l1;
    l1.push_back(1);
    l1.push_back(3);
    l1.push_back(2);
    l1.push_back(4);

    for (list<int>::iterator it = l1.begin(); it != l1.end(); it++) {
        cout << " " << *it;
    }

    //1 3 2 4
    cout << endl;
    l1.reverse();//颠倒函数
    for (list<int>::iterator it = l1.begin(); it != l1.end(); it++) {
        cout << " " << *it;
    }

    //4 2 3 1
    cout << endl;
    l1.sort();

    for (list<int>::iterator it = l1.begin(); it != l1.end(); it++) {
        cout << " " << *it;
    }
    // 1 2 3 4
    cout << endl;
}

int main1() {
    test06();
    return 0;
}


