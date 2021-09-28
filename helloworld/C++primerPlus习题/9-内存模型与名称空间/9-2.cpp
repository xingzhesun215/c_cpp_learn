#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

/**
 *9-2
  */

const int ArSize = 10;

void strcount(const char *str);


int main1() {
    char input[ArSize];
    char next;
    cout << "Enter a line:\n";
    cin.get(input, ArSize);
    while (cin) {
        cin.get(next);
        while (next != '\n') {
            cin.get(next);
        }
        strcount(input);
        cout << "Enter next Line (empty line to quit ):\n";
        cin.get(input, ArSize);
    }
    cout << "Bye";
    return 0;
}

void strcount(const char *str) {
    static int total = 0;
    int count;
    cout << "\"" << str << "\" contains ";
    while (*str++) {
        count++;
    }
    total += count;
    cout << count << " characters\n";
    cout << total << " characters\n";
}
