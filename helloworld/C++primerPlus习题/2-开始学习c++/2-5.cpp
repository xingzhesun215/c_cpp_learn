#include <iostream>

using namespace std;


/**
 * 2-5 编写一个函数，其中的main()调用用户定义的函数（输入摄氏温度，输出华氏温度）
 * @return
 */
float convert(float s);

int main1() {

    cout<<"please enter a Celsis values:";
    float s;
    cin>>s;
    cout<<endl<<s<<" degress Celsius is "<< convert(s)<<" degrees Fahrenheit."<<endl;

    return 0;


}

float convert(float s){
    return 1.8*s+32;
}



