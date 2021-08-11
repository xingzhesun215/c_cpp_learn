#include <iostream>

using namespace std;


/**
 * 4-1 输出以下示例所示请求并显示信息
 * What is your frist name ?  Betty Sue
 * What is your name ? YeWe
 * What letter grade do you deserve ? C
 * What is your age? 22
 * Name :Yewe , Betty Sue
 * Grade:C
 * Age:22
 *
 * @return
 */


int main1() {

    char first_name[20], last_name[20];
    char grade;
    int age;

    cout << "What is your frist name ? ";
    cin.getline(first_name, 20);
    cout << "What is your name ?";
    cin.getline(last_name, 20);

    cout << "What letter grade do you deserve ?";
    cin >> grade;

    cout << "What is your age ?  ";
    cin >> age;

    cout << "Name:" << last_name << "," << first_name << endl;
    cout << "Grade:" << grade << endl;
    cout << "Age:" << age << endl;
    return 0;
}





