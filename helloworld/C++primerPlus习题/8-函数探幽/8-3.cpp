#include <iostream>


using namespace std;


/**
 * 8-3
 *
 * @return
 */

void uppercase(string &s);

int main1() {
    string st;
    cout << "enter a string (q to quit):";
    getline(cin, st);
    while (st != "q") {
        uppercase(st);
        cout << st << endl;
        cout << "Next string(q to quit)";
        getline(cin, st);
    }

    return 0;
}

void uppercase(string &s) {
    int size = s.size();
    for (int i = 0; i < size; ++i) {
        s[i] = toupper(s[i]);

    }

}



