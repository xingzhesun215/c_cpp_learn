#include <iostream>


using namespace std;


/**
 * 4-3
 * @return
 */
#include <cstring>

const int SIZE = 20;

int main1() {
    char first_name[SIZE], last_name[SIZE];
    char full_name[2 * SIZE];
    cout << "enter your first name :";
    cin.getline(first_name, SIZE);
    cout << "enter your last_name :";
    cin.getline(last_name, SIZE);
    //读取用户输入
    strcpy(full_name, first_name);
    strcat(full_name, ", ");
    strcat(full_name, last_name);

    cout << "Here is the infomation in s single string" << endl;
    cout << full_name << endl;

    return 0;


}




