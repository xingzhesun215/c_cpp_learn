//
// Created by sun on 2021/7/24.
//

#include <iostream>
#include "c_test/myUtil.h"


class Demo{
    int id;

public:
    Demo(int id){
        this->id=id;
        cout<<"constructed,id = "<<id<<endl;
    }
    ~Demo(){
        cout<<"destructed,id = "<<id<<endl;
    }
};

/**
 *构造方法/ 析构函数的调用顺序
 * @return
 */
Demo d1(1);
void Func(){
    static Demo d2(2);
    Demo d3(3);
    cout<<"Func finished"<<endl;
}
int construct_destruct_test() {

    Demo d4(4);
    d4=6;

    cout<<"main"<<endl;

    {
        Demo d5(5);
    }
    Func();
    cout<<"main ends"<<endl;


    return 0;
}


