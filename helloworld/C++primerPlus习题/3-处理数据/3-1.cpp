#include <iostream>

using namespace std;


/**
 * 3- 1 编写一个小程序，要求用户使用一个整数表示自己的身高（单位为英寸），然后将身高转为英尺和英寸。该程序使用下划线字符来指示输入的位置，
 * 使用一个符号常量const来表示转换因子
 * @return
 */
const int FOOT_TO_INCH =12;
int main2() {

    int height;
    cout<<"enter you height in inchs_";
    cin>>height;
    cout<<endl<<"Your Height convert to "<<height*1.0/FOOT_TO_INCH<<endl;
    cout<<"foot and "<<height%FOOT_TO_INCH<<" inch height"<<endl;

    return 0;
}





