#include <iostream>

using namespace std;


/**
 * 3-5 输入全世界人口数及中国人口数，输入中国世界人口百分比
 * @return
 */

int main1() {

    long long global_amount,china_amount;
    cout<<"enter the world's pupulation:";
    cin>>global_amount;
    cout<<"enter the china's pupulation:";
    cin>>china_amount;

    cout<<"The population of the chinese is "<<china_amount*100.0/global_amount<<"% of the world population"<<endl;

    return 0;


}




