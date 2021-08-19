#include <iostream>


using namespace std;


/**
 * 5-9
 *
 * @return
 */

#include <cstring>

const int SIZE = 20;
const char FINISHED[] = "done";

int main1() {
    int counter=0;
    string words;
    cout<<"Enter the word(to stop,type the word done"<<endl;

    while (words!=FINISHED) {
        counter++;
        cin >> words;
        cin.get();

    }
    cout<<" you  enter a total total ="<<counter-1<<endl;
    return 0;
}





