#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <set>

using namespace std;

/**
 *
 * set/multiset
 * 所有元素自动排序，set是RB树(红黑树)为底层机制，查找效率高
 * set不允许重复 multiset 允许重复
 *
 * 二叉树的任何结点最多允许2个子结点
 *
 * 不能通过set的迭代器进行元素更改，set集合是根据元素进行排序，关系到set的排序
 * 任意更改会破坏set的结构
 */
//构造函数
void test01() {
    set<int> s1;//默认构造函数
    multiset<int> ms;//默认构造函数
    set<int> s2(s1);//拷贝构造函数
}

//赋值
void test02() {
    set<int> s1;
    set<int> s2;
    s2.swap(s1);//交换2个集合容器
    s2 = s1;
}

//大小操作
void test03() {

    set<int> s1;
    s1.size();//元素个数
    s1.empty();//是否为空

}

//插入 删除操作

void test04() {
    set<int> s1;

    s1.clear();//全清

    s1.insert(1);//插入操作
    s1.insert(3);
    s1.insert(2);
    s1.insert(4);

    for (set<int>::iterator it = s1.begin(); it != s1.end(); it++) {
        cout << *it << " ";
    }
    // 1 2 3 4
    cout << endl;
    set<int>::iterator it = s1.begin();

    s1.erase(it);//删除单个迭代器中元素
    s1.erase(it, it++);//删除迭代器区间的元素

    s1.erase(4);//删除值为4的元素

}

void test05() {
    set<int> s1;

    s1.insert(1);
    s1.insert(3);
    s1.insert(2);
    s1.insert(4);

    set<int>::iterator it1 = s1.find(1);
    set<int>::iterator it5 = s1.find(5);//返回元素的迭代器，如果不存在，返回end()的迭代器

    if (it1 != s1.end()) {
        cout << "1 存在";
    } else {
        cout << "1 不存在";
    }
    cout << endl;
    if (it5 != s1.end()) {
        cout << "5 存在";
    } else {
        cout << "5 不存在";
    }

}

int main1() {
    test05();
    return 0;
}


