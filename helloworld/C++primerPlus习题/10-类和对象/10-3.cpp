#include <iostream>

using namespace std;

// 10-3

#include <cstring>
#include "C++primerPlus习题/10-类和对象/golf.h"

int main1() {
    golf ann("Ann Bird free", 24);
    golf andy;
    ann.showgolf();
    andy.showgolf();
    return 0;
}

golf::golf(const char *name, int hc) {
    strcpy(fullname, name);
    handicap = hc;
}

golf::golf() {
    char name[Len] = {'\n'};

    int hc;

    cout << "Enter the name: " << endl;

    cin.getline(name, Len);

    cout << "Enter the handicap: " << endl;

    while (!(cin >> hc)) {
        cin.clear();
        while (cin.get() != '\n') {
            continue;
        }
        cout << "Plaase Enter the golf's handicap:";
    }
    cout << name << "::" << hc << endl;
    strcpy(fullname, name);
    handicap = hc;
}

void golf::sethandicap(int hc) {
    this->handicap = hc;
}

void golf::showgolf() const {
    cout << "Name:" << fullname << "    handicap:" << handicap << endl;
}

golf::~golf() {
    cout << "Done" << endl;
}