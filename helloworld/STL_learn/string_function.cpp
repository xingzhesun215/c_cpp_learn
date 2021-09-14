#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>


using namespace std;

/**
 * string简介
 * 1，char*是个指针，String是个类，string封装了char*,是char*的容器类
 * 2，string封装了很多使用的成员方法，查找find,拷贝copy,删除delete 替换replace 插入insert
 * 3，string管理char*所分配的内存，每一次string的复制/取值都由string类来维护，不用担心越界
 * 4，string和char*可以转换string->char*通过string提供的c_str()方法
 */

void exchange() {
    //string转char*
    string str = "itcast";
    const char *cstr = str.c_str();

    //char*转string
    char *s = "itcase";
    string sstr(s);

}

//string 构造方法

void test01() {
    //string str=  string();//创建一个空的字符串
    //string (const string& str);//使用一个string对象初始化另一个string对象
    //string(const char* s);//使用字符串s初始化
    //string(int n,char c);//使用n个c初始化

    //例子
    //默认构造函数
    string s1;

    //拷贝构造函数
    string s2(s1);
    string s3 = s1;

    //带参数的构造函数
    char *str = "itcast";
    string s4(str);
    string s5(5, 'a');

}

//基本复制操作
void test02() {
    //string& operator=(const char*s);//char*类型字符串赋值给当前字符串
    //string& operator=(const string&s1);//把字符串s赋值给当前字符串
    //string& operator=(char c);//字符赋值给当前字符串
    //string& assign(const char* s);//把字符串s赋值给当前的字符串
    //string& assign(const char* s,int n);//把字符串s的前n个字符赋值给字符串
    //string& assign(const string& s);//把字符串s赋值当前字符串
    //string& assign(int n,char c);// 把n个字符赋值给当前字符串
    //string& assign（const string&s，int start，int n);//将s从start位置开始n个字符赋值给字符串

}

//  string存取字符操作
void test03() {
    //通过[]读取字符
    //通过at()
    //相同点 都能返回第n个元素
    //不同点 at访问越界抛异常，[]越界直接程序挂掉

    string str = "itcast";
    char c = str[1];
    char s = str.at(1);
};

//拼接操作
void test04() {
    //+
    string firstName = "sun";
    string secondName = "guanyong";
    string fullName = firstName + secondName;

    //append

    string hello = "hello";
    string world = "world";
    hello.append(world);//此时hello的长度发生了变化

    cout << hello;
}

//string查找和替换操作
void test05() {
    string hello = "helloworld";
    string he = "he";
    int index1 = hello.find(he);//查找第一个出现的位置
    int index2 = hello.find(he, 1);//查找从1开始的第一个出现的位置
    int index3 = hello.rfind(he);//反向查找第一个出现的位置
    int index4 = hello.rfind(he, 2);//法相查找从2开始的第一个出现的位置

    hello.replace(1, 2, he);//替换从1开始的he中的2个字符
    cout << hello << endl;
    hello.replace(0, he.length(), he);
    cout << hello << endl;


}

//字符串比较操作
void test06() {
    string name = "hello";
    int result = name.compare("hello1");
}

//截取字串
void test07() {
    string helloworld = "helloworld";
    string hello = helloworld.substr(0, 5);//返回从0开始的5个字符
    cout << "hello=" << hello << "   helloworld=" << helloworld << endl;
}

//插入即删除操作

void test08(){

    //insert(int position,char* s)
    //erase(int pos,int n)//删除从pos到pos+n的字符

    string hello="helloworld";
    hello.insert(5,"sunguanyong");
    cout<<"hello="<<hello<<endl;
    hello.erase(4,3);
    cout<<"hello="<<hello<<endl;
}

int main1() {
    return 0;
}


