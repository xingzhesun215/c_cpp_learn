#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>


using namespace std;

/**
 * STL中的容器/算法/迭代器实现的基本原理
 */

//算法
int mycount(int* start,int* end,int val){
    int n=0;
    for (int* i = start; i !=end ; ++i) {
        if(*i==val){
            n++;
        }
    }
}

int main1() {
    //容器=》数组
    int arr[]={1,2,3,4,5,6,7};
    //迭代器[] int*p[]也是一种迭代器
    int* pStart=arr;//开始迭代器
    int* pEnd=&(arr[sizeof (arr)/sizeof (int)]);//结束迭代器

    while (pStart!=pEnd){
        cout<<*pStart<<endl;
        pStart++;
    }
    int n= mycount(pStart,pEnd,5);
    cout<<"n="<<n<<endl;

    return 0;
}


