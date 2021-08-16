#include <iostream>


using namespace std;


/**
 * 7-5
 *
 * @return
 */

long long factorial(int);

int main1() {
    int n;
    cout << "Enter a number to calc factorial:" << endl;
    cin >> n;
    while (n > 0) {
        cout << n << "!=" << factorial(n) << endl;
        cout << "Enter a number to calc factorial:" << endl;
        cin >> n;

    }
    return 0;
}

long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}