#include <iostream>


using namespace std;


/**
 * 5-5
 *
 * @return
 */



int main1() {

    const string Month[] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    int sale_amount[12]={};

    unsigned int sum=0;
    for (int i = 0; i < 12; ++i) {

        cout<<"Enter the sale amount of "<<Month[i]<<":";
        cin>>sale_amount[i];
    }
    cout<<"Input DONE!"<<endl;
    for (int i = 0; i < 12; ++i) {
        cout<<Month[i]<<" SALE "<<sale_amount[i]<<endl;
        sum+=sale_amount[i];
    }
    cout<<"Total sale is "<<sum<<endl;
    return 0;
}


