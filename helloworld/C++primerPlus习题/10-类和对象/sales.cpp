#include "sales.h"
#include <iostream>

using namespace std;

Sales::Sales(const double ar[], int n) {
    double sum = 0;
    if (n > QUARTERS) {
        for (int i = 0; i < QUARTERS; ++i) {
            sales[i] = ar[i];
        }
    } else {
        for (int i = 0; i < QUARTERS; ++i) {
            sales[i] = ar[i];
        }
        for (int i = n; i < QUARTERS; ++i) {
            sales[i] = 0;

        }
    }
    max = min = sales[i];

    for (int i = 0; i < QUARTERS; ++i) {
        sum = +sales[i];
        if (min > sales[i])min = sales[i];
        if (max < sales[i])max = sales[i];
    }
    average = sum / QUARTERS;

}

Sales::Sales() {
    int i = 0;
    double sum = 0;

    do {
        cout << "Enter a number :";
        if (!(cin >> sales[i])) {
            cin.clear();
            while (cin.get() != '\n') {
                continue;
            }
            cout << "ERROR ,REENTER A NUMBER " << endl;
            cin >> sales[i];
        }
        i++;
    } while (i < QUARTERS);
    for (int i = 0; i < QUARTERS; ++i) {
        sum = +sales[i];
        if (min > sales[i])min = sales[i];
        if (max < sales[i])max = sales[i];
    }
    average = sum / QUARTERS;
}

void Sales::showSales() const {
    cout << "This Sale's quarter list info:" << endl;

    for (int i = 0; i < QUARTERS; ++i) {
        cout << "NO ." << i + 1 << ":Sales:" << sales[i] << endl;
    }
    cout << "Average: " << average << endl;
    cout << "Max :" << max << endl;
    cout << "Mix :" << min << endl;
}

Sales::~Sales() {
    cout << "Done" << endl;
}