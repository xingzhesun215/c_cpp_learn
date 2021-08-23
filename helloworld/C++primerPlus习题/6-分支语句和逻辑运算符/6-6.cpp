

using namespace std;


/**
 * 6-6
 *
 * @return
 */

#include <string>
#include <iostream>

struct patrons {
    string full_name;
    double fund;
};


int main1() {

    int patrons_number;
    patrons *ppatrons;
    cout << "How many patrons" << endl;
    cin >> patrons_number;
    cin.get();
    ppatrons = new patrons[patrons_number];
    int id;
    bool empty = true;
    cout << "Staring to input patrons's info:" << endl;
    while (id < patrons_number) {
        cout << "enter the full name of patrons: ";
        getline(cin, ppatrons[id].full_name);
        cout << "Enter the fund of " << ppatrons[id].full_name << endl;
        cin >> ppatrons[id].fund;
        cin.get();
        id++;
        cout << "Continue to input ,or press (f) to finished ";
        if (cin.get() == 'f') {
            break;
        }
    }
    cout << "Grand Patrons" << endl;
    for (int i = 0; i < patrons_number; ++i) {
        if (ppatrons[i].fund >= 1000) {
            cout << ppatrons[i].full_name << " : " << ppatrons[i].fund << endl;
            empty = false;
        }
    }

    if (empty) {
        cout << "NONE" << endl;
    }
    empty = false;
    cout << "Patrons" << endl;
    for (int i = 0; i < patrons_number; ++i) {
        if (ppatrons[i].fund < 1000) {
            cout << ppatrons[i].full_name << " : " << ppatrons[i].fund << endl;
        }
    }
    if (empty) {
        cout << "NONE" << endl;
    }
    return 0;
}

