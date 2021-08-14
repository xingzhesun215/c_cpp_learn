#include <iostream>


using namespace std;


/**
 * 4-4  string 代替 char[]
 * @return
 */
#include <string>

const int SIZE = 20;

int main1() {
    // char first_name[SIZE], last_name[SIZE];
    //  char full_name[2 * SIZE];

    string first_name,last_name,full_name;
    cout << "enter your first name :";
    getline(cin,first_name);
    cout << "enter your last_name :";
    getline(cin, last_name);
    //读取用户输入
    full_name=first_name+", "+last_name;

    cout << "Here is the infomation in s single string(by string)" << endl;
    cout << full_name << endl;

    return 0;


}




