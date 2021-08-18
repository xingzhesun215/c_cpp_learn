#include <iostream>


using namespace std;


/**
 * 5-6
 *
 * @return
 */



int main1() {

    const string Month[] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    int sale_amount[3][12] = {};

    unsigned int sum = 0;
    for (int n = 0; n < 3; ++n) {
        cout << "Enter the  " << (n + 1) << " year :";

        for (int i = 0; i < 12; ++i) {
            cout << "Enter the sale amount of " << Month[i] << ":";
            cin >> sale_amount[n][i];
        }
    }
    cout << "Input DONE!" << endl;
    for (int n = 0; n < 3; ++n) {

        for (int i = 0; i < 12; ++i) {
            cout << Month[i] << " SALE " << sale_amount[n][i] << endl;
            sum += sale_amount[n][i];
        }
    }
    cout << "Total sale is " << sum << endl;
    return 0;
}


