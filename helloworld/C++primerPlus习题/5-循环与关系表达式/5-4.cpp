#include <iostream>


using namespace std;


/**
 * 5-4
 *
 * @return
 */

const int DEPOSIT_BASE = 100;

int main1() {

    float daphne_deposit = DEPOSIT_BASE;
    float cleo_deposit = DEPOSIT_BASE;

    int year = 0;
    while (daphne_deposit >= cleo_deposit) {
        cout << "In " << year++ << " year :Daphne= " << daphne_deposit << endl;
        cout << "\t Cleo = " << cleo_deposit << endl;
        daphne_deposit += 0.1 * DEPOSIT_BASE;
        cleo_deposit += 0.05 * cleo_deposit;
    }

    cout << "In " << year << " year : Daphne = " << daphne_deposit << endl;
    cout << "\t Cleo = " << cleo_deposit << endl;

    return 0;


}




