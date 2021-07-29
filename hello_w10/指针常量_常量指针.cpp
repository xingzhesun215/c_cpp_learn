#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 11;
    const int *p = &a;
    cout << "*p=" << *p << endl;

    p = &b;

    cout << "*p=" << *p << endl;


    int *const q=&a;
    cout << "*p=" << *q << endl;
    *q = b;
    cout << "*p=" << *q << endl;
    return 0;
}
