#include <iostream>

using namespace std;

long factorial(int n);

//求阶乘
int main333() {
    int n;
    while (true) {
        cin >> n;
        cout << "factorial(" << n << ")=" << factorial(n) << endl;
    }
    return 0;
}

long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}


