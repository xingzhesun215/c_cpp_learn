//
// Created by sun on 2021/7/24.
//

#include <iostream>

using namespace std;

int main1() {
    std::cout << "Hello, World!" << std::endl;
    int i, j, k, f;
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 30; j++) {
            cout << " ";
        }
        for (k = 1; k <= 8 - 2 * i; k++) {
            cout << " ";
        }
        for (f = 1; f <= 2 * i; f++) {
            cout << '*';
        }
        cout << endl;
    }
    for (i = 1; i <= 3; i++) {
        for (int j = 1; j <= 30; ++j) {
            cout << " ";
        }
        for (int f = 1; f <= 7 - 2 * i; ++f) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
