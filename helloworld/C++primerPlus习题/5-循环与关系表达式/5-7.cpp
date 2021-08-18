#include <iostream>


using namespace std;


/**
 * 5-7
 *
 * @return
 */

struct car_info {
    string manufacture;
    int date;
};


int main1() {
    int car_number;
    car_info *pcar;
    cout << "How many cars do you wish to catelog?";
    cin >> car_number;
    cin.get();
    pcar = new car_info[car_number];
    for (int i = 0; i < car_number; ++i) {
        cout << "Car #" << i + 1 << endl;
        cout << "Enter the maker:";
        getline(cin, pcar[i].manufacture);
        cout << "Enter the date";
        cin >> pcar[i].date;
        cin.get();

    }

    cout << "Here is you collection " << endl;

    for (int i = 0; i < car_number; ++i) {
        cout << pcar[i].manufacture << " " << pcar[i].date << endl;
    }

    return 0;
}





