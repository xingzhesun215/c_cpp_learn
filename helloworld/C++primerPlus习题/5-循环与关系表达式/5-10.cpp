#include <iostream>


using namespace std;


/**
 * 5-10
 *
 * @return
 */


int main1() {
    int line;
    cout<<"Enter the number of rows:";
    cin>>line;
    for (int i = 0; i < line; ++i) {
        for (int j = 0; j < line - i - 1; ++j) {
            cout<<".";
        }
        for (int j = 0; j <= i; ++j) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}





