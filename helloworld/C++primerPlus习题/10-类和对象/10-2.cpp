#include <iostream>


using namespace std;


/**
 * 10-2
 *
 * @return
 */

#include <cstring>

class Person {
private:
    static const int LIMIT = 25;
    string lname;
    char fname[LIMIT];

public:
    Person() {
        lname = "";
        fname[0] = '\n';
    }

    Person(const string &ln, const char *fn = "Heyyou");

    void show() const;

    void FormalShow() const;

};


int main1() {

    Person one;
    Person two("Smythecraft");
    Person three("Dimwidd", "Sam");

    cout << endl;
    one.FormalShow();
    two.FormalShow();
    three.FormalShow();


    return 0;
}

Person::Person(const string &ln, const char *fn) {
    lname = ln;
    strcpy(fname, fn);
}

void Person::show() const {
    if (lname == "" && fname[0] == '\0') {
        cout << " No Name " << endl;
    } else {
        cout << "Person Name: " << fname << "." << lname << endl;
    }
}

void Person::FormalShow() const {
    if (lname == "" && fname[0] == '\0') {
        cout << " No Name " << endl;
    } else {
        cout << "Person Name: " << lname << "." << fname << endl;
    }
}


