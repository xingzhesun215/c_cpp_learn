#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <vector>


using namespace std;

/**
   vector特性
   长度动态改变的动态数组，内存连续/随机存储

   特性总结：1，动态数组，连续存储空间，具有随机存取效率高的优点
           2，单口容器 在队尾插入和删除元素效率高，在指定位置插入会导致元素移动，效率低


   如何动态增长
   vector空间满的时候，插入新元素后会重新申请一块更大的内存，原有数据拷贝到新的内存空间，释放旧的空间 故效率低

 */

//构造方法
void test01() {
    //vetor<T> v;/采用模板实现类实现，默认构造函数
    //vector(v.begin(),v.end())

    int arr[] = {2, 3, 4, 5};
    vector<int> v1(arr, arr + sizeof(arr) / sizeof(int));
}

//大小操作

void test02() {
    //size() 元素个数
    //empty() 是否为空
    //resize(int num)  //重新指定容器的长度为num,若容器变长，则以默认值填充新位置，若变短，则删除超出位置元素
    //capacity() //容器的容量 2 4 8递增
    //reserve(int len);//容器预留len个元素长度，预留位置不初始化，元素不可访问，常用于当知道存储元素个数的时候，减少申请内存/拷贝数据/释放空间的次数

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    cout << "size=" << v.size() << endl;
    cout << "capacity=" << v.capacity() << endl;

    v.push_back(4);
    cout << "size=" << v.size() << endl;
    cout << "capacity=" << v.capacity() << endl;
    v.push_back(5);
    cout << "size=" << v.size() << endl;
    cout << "capacity=" << v.capacity() << endl;
    v.push_back(6);
    cout << "size=" << v.size() << endl;
    cout << "capacity=" << v.capacity() << endl;
}
//存取操作
void test03(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    v.at(0);//如果越界，返回异常
    v[0];//如果越界，直接程序崩溃
    v.front();//返回第一个元素
    v.back();//返回最后一个元素
}
//插入及删除操作
void test04(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    int pos=0;
    int count=5;
    int value=10;
    vector<int>::iterator  it=v.begin();
    v.insert(it,count,value);//迭代器指定位置插入count个value

    v.push_back(value);//尾部插入一个元素
    v.pop_back();//删除最后一个元素

    v.erase(it,it+4);//删除迭代器从start到end之间的元素

    v.erase(it);//删除迭代器指定的元素

    v.clear();//清除所有元素
}

//总结 vector是一个动态数组，单口容器，在尾端的插入和删除效率比较高，在指定位置插入，会引起元素移动，效率较低
int main1() {
    return 0;
}


