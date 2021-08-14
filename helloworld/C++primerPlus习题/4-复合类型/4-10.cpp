#include <iostream>


using namespace std;


/**
 * 4-10 结构体数组
 *
 * @return
 */
#include <array>

int main() {

    array<float ,3> record_list;
    float averayge;
    cout<<"Please input three record of 40 mile.\n";
    cout<<"first record:";
    cin>>record_list[0];
    cout<<"second record:";
    cin>>record_list[1];
    cout<<"third record:";
    cin>>record_list[2];

    averayge=(record_list[0]+record_list[1]+record_list[2])*1.0/3;

    cout<<"your average performance is "<<averayge<<endl;

    return 0;


}




