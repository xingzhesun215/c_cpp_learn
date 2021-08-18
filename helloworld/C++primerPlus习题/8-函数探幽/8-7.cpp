#include <iostream>


using namespace std;


/**
 * 8-7
 *
 * @return
 */

template<class T>
void showArray(T arr[], int n);

template<class T>
void showArray(T *arr[], int n);

template<class T>
T SumArray(T arr[], int n);

template<class T>
T SumArray(T *arr[], int n);

struct debts {
    char name[50];
    double amunt;
};

int main1() {

    int things[] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] = {
            {"Ima Wolfe", 2400.0},
            {"Ura Foxe",  1300.0},
            {"Iby Stout", 1800.0}
    };
    double *pd[3];
    for (int i = 0; i < 3; ++i) {
        pd[i] = &mr_E[i].amunt;
    }
    cout << "Listing Mr. E's counts of things :" << endl;
    showArray(things, 6);
    cout << "Listing Mr. E's debts:\n";
    showArray(pd, 3);

    cout << "The sum of things :" << SumArray(things, 6) << endl;
    cout << " The sum of debts: " << SumArray(pd, 3) << endl;

    return 0;
}

template<class T>
void showArray(T arr[], int n) {
    cout << "template arr[]" << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

template<class T>
void showArray(T *aar[], int n) {
    cout << "template B" << endl;
    for (int i = 0; i < n; ++i) {
        cout << *aar[i] << " ";
    }
    cout << endl;
}


template<class T>
T SumArray(T arr[], int n) {
    T sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    return sum;
}

template<class T>
T SumArray(T *array[], int n) {
    T sum = *array[0] - *array[0];
    for (int i = 0; i < n; ++i) {
        sum += *array[i];
    }
    return sum;
}
