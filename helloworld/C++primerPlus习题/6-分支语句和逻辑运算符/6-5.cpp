#include <iostream>


using namespace std;


/**
 * 6-5
 *
 * @return
 */


int main1() {

    float tax, salary = 0.0;
    cout << "Hello, enter your salary to calculate tax :";
    cin >> salary;
    while (salary > 0) {
        if (salary <= 5000) {
            tax = 0;
        } else if (salary <= 15000) {
            tax = (salary - 5000) * 0.1;
        } else if (salary <= 35000) {
            tax = 10000 * 0.1 + (salary - 15000) * 0.15;
        } else if (salary > 35000) {
            tax = 10000 * 0.10 + 20000 * 0.15 + (salary - 35000) * 0.20;
        }

        cout << " your salary is " << salary << " , and your tax is =" << tax << endl;
        cout<<"Enter your salary agein:";
        cin>>salary;
    }
    return 0;
}

