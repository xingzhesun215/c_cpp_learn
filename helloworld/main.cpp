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

void exchange(){
    //string转char*
    string str="itcast";
    const char* cstr=str.c_str();

    //char*转string
    char* s="itcase";
    string sstr(s);

}

//string 构造方法

void test01(){
  //string str=  string();//创建一个空的字符串
  //string (const string& str);//使用一个string对象初始化另一个string对象
  //string(const char* s);//使用字符串s初始化
  //string(int n,char c);//使用n个c初始化

  //例子
  //默认构造函数
  string s1;

  //拷贝构造函数
  string s2(s1);
  string s3 =s1;

  //带参数的构造函数
  char* str="itcast";
  string s4(str);
  string s5(5,'a');

}

//基本复制操作
void test02(){
    //string& operator=(const char*s);//char*类型字符串赋值给当前字符串
    //string& operator=(const string&s1);//把字符串s赋值给当前字符串
    //string& operator=(char c);//字符赋值给当前字符串
    //string& assign(const char* s);//把字符串s赋值给当前的字符串
    //string& assign(const char* s,int n);//把字符串s的前n个字符赋值给字符串
    //string& assign(const string& s);//把字符串s赋值当前字符串
    //string& assign(int n,char c);// 把n个字符赋值给当前字符串
    //string& assign（const string&s，int start，int n);//将s从start位置开始n个字符赋值给字符串

}
int main() {


    return 0;
}


