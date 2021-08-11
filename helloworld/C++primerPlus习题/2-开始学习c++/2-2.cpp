#include <iostream>

using namespace std;


/**
 * 2.2 编写一个c++程序，他要求用户输入一个long为单位的距离，然后将它转化为码（1 long = 220 码）
 * @return
 */
int main1() {
    double distance;

    cout << "enter the distance (in long)" << endl;

    cin >> distance;
    cout << "The distance is " << distance << " long" << endl;
    cout << "and the distance is " << distance * 220 << " yard ." << endl;
    return 0;
}





