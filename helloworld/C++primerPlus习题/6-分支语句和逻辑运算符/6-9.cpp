

#include <iostream>


using namespace std;

/**
 * 6-89
 *
 * @return
 */

#include <fstream>
#include <string>

struct patrons {
    string full_name;
    double fund;
};

int main1() {
    int patrons_numbers;
    patrons *ppatrons;

    cout << "How many patrons? ";
    cin >> patrons_numbers;
    cin.get();
    ppatrons = new patrons[patrons_numbers];

    int id = 0;
    bool empty = true;

    cout << "starting to input patrons' info:" << endl;

    while (id < patrons_numbers) {
        cout << "Enter the full name of patrons:";
        getline(cin, ppatrons[id].full_name);
        cout << "Enter the fund of patrons:";
        cin >> ppatrons[id].fund;
        cin.get();
        id++;
        cout << "Continue to input ,or press (f) to finished";
        if (cin.get() == 'f') {
            break;
        }
    }

    cout << "Grand Patrons" << endl;
    for (int i = 0; i < patrons_numbers; i++) {
        if (ppatrons[i].fund >= 1000) {
            cout << ppatrons[i].full_name << ":" << ppatrons[i].fund << endl;
            empty = false;
        }
    }
    if (empty) {
        cout << "NONE" << endl;
    }

    empty=false;
    cout<<"Patrons"<<endl;
    for (int i = 0; i < patrons_numbers; ++i) {
        if(ppatrons[i].fund<1000){
            cout<<ppatrons[i].full_name<<":"<<ppatrons[i].fund<<endl;
        }
    }

    return 0;
}

