#include <iostream>

using namespace std;


/**
 * 3-4 编写一个函数，输入秒数，然后输出天数-小时-分-秒
 * @return
 */

int main1() {

    long long second;
    long day;
    int hour;
    int min;

    cout << "please enter the number of the all second :";
    cin >> second;

    day = second / (60 * 60 * 24);
    second = second % (60 * 60 * 24);
    hour = second / (60 * 60);
    second = second % (60 * 60);
    min = second / 60;
    second = second % 60;

    cout<<second <<"seconds ="<<day<<" days "<<hour<<" hours "<< min<<" mins "<< second<<" second"<<endl;


    return 0;


}

void format_print(int hour, int min) {
    cout << "Time : " << hour << ":" << min;
}



