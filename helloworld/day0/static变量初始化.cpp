//
// Created by sun on 2021/7/24.
//

#include <iostream>

using namespace std;

void setStatic(){
    static  int vaulue=1;//static 变量只能初始化一次
    vaulue++;
    cout<<"now value is "<<vaulue<<endl;
}

int main4() {

    setStatic();
    setStatic();
    setStatic();
    setStatic();




    return 0;
}


