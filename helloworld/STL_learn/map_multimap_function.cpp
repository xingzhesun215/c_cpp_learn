#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include <map>
#include <set>

using namespace std;

/**
 *  map/multimap
 *  k-v字典模型 键值对，pair的第一个元素为键值，第二个元素为实值，以红黑树为底层实现逻辑
 *  而且所有元素还自动排序，
 *
 *  可以通过迭代器修改map的键值，但会破坏容器的排列规则，原因与set一致
 *
 *  map不允许重复key，multimap允许重复key
 *
 *  对组
 *  pair将一对值合成一个值，这一个值可以具有不同的数据类型，2个值可以分别用pair的2个公有函数first和second访问
 *
 *  类模版
 *  template<class T1,class T2> struct pair;
 *
  */
//创建对组
void test0() {
    //第一种方法
    pair<string, int> pair(string("name"), 20);
    cout << pair.first << "   " << pair.second << endl;
    //第二种方法
    //pair<string,int> pair2=make_pair("name",20);//TODO 爆红，后续排除

    //第三种

    //pair<string,int> pair3=pair1;
};

//构造函数
void test01() {
    map<int, string> m1;//默认构造函数
    map<int, string> m2(m1);//拷贝构造函数
}

//赋值
void test02() {
    map<int, string> m1;
    map<int, string> m2;

    m2 = m1;//重载等号操作符
    m2.swap(m1);//2 个容器交换
}

//大小操作
void test03() {

    map<int, string> m1;
    m1.size();//元素个数
    m1.empty();//是否为空

}

//插入 删除

void test04() {
    map<int, string> m1;

    m1.insert(pair<int, string>(1, "hanmeimei"));//插入1      返回迭代器
    m1.insert(make_pair(1, "hanmeimei"));//插入2        返回迭代器
    m1.insert(map<int, string>::value_type(1, "hanmeimei"));//插入3     返回迭代器
    m1[1] = "hanmeimei";//数组形式插入  有则改，无则插入

    string name = m1[2];//取或者插入操作   有则取，无则插入 （2，默认值） 有风险



    m1.clear();//全清
    map<int, string>::iterator it = m1.begin();
    m1.erase(it);//删除迭代器元素

    m1.erase(it, it++);//删除迭代器区间元素

    int key = 1;
    m1.erase(key);//根据key删除value
}

void test05() {
    map<int, string> m1;

    m1[1] = "zhao";
    m1[2] = "qian";
    m1[3] = "sun";
    m1[4] = "li";

    map<int, string>::iterator it1 = m1.find(1);//根据key查找，有则迭代器，无则map.end()

    m1.count(1);//key的个数，map 0或1  multimap 0/1/2...

    int k1=1;
    m1.lower_bound(k1);//返回第一个key <=k1元素的迭代器

    m1.upper_bound(k1);//返回第一个key >k1元素的迭代器

    m1.equal_range(k1);//返回容器中 key 与k1相等的上下2个迭代器区间（有序）
}


int main1() {
    test05();
    return 0;
}


