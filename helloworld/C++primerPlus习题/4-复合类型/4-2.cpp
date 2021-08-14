#include <iostream>
#include <string>

using namespace std;


/**
 * 4-2
 * @return
 */

int main1() {

    string name;
    string dessert;
    //string能够自动维护字符串长度，因此不需要长度常量
    cout << "Enter your name:\n";
    getline(cin, name);
    cout << "Enter your favorite dessert:\n";
    getline(cin, dessert);
    cout << "I have some delicious " << dessert;
    cout << " thank you, " << name;

    return 0;


}




