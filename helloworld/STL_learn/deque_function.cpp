#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <deque>

using namespace std;

/**
 * deque double-ended queue的缩写，支持随机存取，是双向的连续性空间
 * 可以在前后2个端进行插入和删除操作，比vector更先进一点


    和vector的最大差异
    1，deque 允许常数时间内对头部元素进行插入和删除操作
    2，没有容量概念，动态的分段的连续空间组合而成，随时可以增加一段新的空间并链接起来

    总结：
    1，双端插入和删除元素效率较高
    2，指定位置插入也会导致元素移动而降低效率
    3，可随机存取，效率高
 */
//构造函数
void test01() {
    deque<int> d1;//默认构造形式
    d1.push_back(1);
    d1.push_back(2);
    d1.push_back(3);
    d1.push_back(4);

    deque<int>::iterator it = d1.begin();

    deque<int> d2(it, it + 2);//将迭代器区间的元素拷贝给本身

    int count = 3;
    int value = 4;
    deque<int> d3(count, value);//将count个value拷贝给本身

    deque<int> d4(d3);//拷贝构造函数

}

//赋值操作

void test02() {
    deque<int> d1;
    d1.push_back(1);
    d1.push_back(2);
    d1.push_back(3);
    d1.push_back(4);

    deque<int> d2;

    d2.assign(d1.begin(), d1.begin() + 2);//迭代器区间的元素赋值给本身

    int count = 5;
    int value = 3;
    d2.assign(d1.begin(), d1.begin() + 2);//迭代器区间的元素赋值给本身

    for (int i = 0; i < d2.size(); ++i) {
        cout << d2[i] << " ";
    }
    cout << endl;
    d2.assign(count, value);//count个value赋值给d2 ,之前的就木有了
    for (int i = 0; i < d2.size(); ++i) {
        cout << d2[i] << " ";
    }
    cout << endl;

    deque<int> d3;
    d3.push_back(1);
    d3.push_back(2);
    d3.push_back(3);
    d3.push_back(4);
    deque<int> d4;
    d4.push_back(5);
    d4.push_back(6);
    d4.push_back(7);
    d4.push_back(8);

    cout << "对调后" << endl;
    d3.swap(d4);//相互对调
    for (int i = 0; i < d3.size(); ++i) {
        cout << d3[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < d4.size(); ++i) {
        cout << d4[i] << " ";
    }
    cout << endl;
}

//大小操作
void test03() {
    deque<int> d1;
    d1.push_back(1);
    d1.push_back(2);
    d1.push_back(3);

    d1.size();//个数
    d1.empty();//是否为空
    int num = 4;
    int value = 12;
    d1.resize(num);//指定容器长度，若变长，则新位置填充默认值 若变动，多余位置删除
    d1.resize(num, value);//指定容器长度，若变长，则新位置填充value 若变动，多余位置删除
}

//deque 双端插入及删除操作 插入操作
void test04() {
    deque<int> d1;
    d1.push_back(1);//尾部添加新元素
    d1.push_front(1);//头部添加新元素
    d1.pop_back();//尾部删除一个元素
    d1.pop_front();//头部删除一个元素
    //上面是高效的，插入效率较低
    deque<int>::iterator it = d1.begin();
    int count = 4;
    int value = 1;

    d1.insert(it, value);//迭代器插入一个元素
    d1.insert(it, count, value);//迭代器插入count个value
    //d1.insert(it,begin,end);//在迭代器位置插入2个迭代器区间的元素

    //删除操作
    d1.clear();//全清空
    d1.erase(d1.begin(),d1.begin()+3);//清除2个迭代器之间的元素
    d1.erase(d1.begin());//删除迭代器位置的元素，返回下一个数据的位置

    /**
     * 经验之谈
     *
     * deque是分段连续的内存空间，通过中控器位置一种连续内存空间的状态，实现复杂度要大于vector queue stack等容器
     * 其迭代器也更加复杂，在需要对deque容器进行排序的时候，建议先将deque容器的数据拷贝到vector
     * 排序后拷贝回deque
     */

}

int main1() {
    test02();
    return 0;
}


