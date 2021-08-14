#include <iostream>

using namespace std;


/**
 * 3-7 编写一个程序，用户输入按欧式风格输入汽车油耗L/100KM，然后将其转换为美式风格的耗油量 英里/加仑
 * @return
 */
const float GALLON_TO_LITER = 3.875;
const float HKM_TO_MILE = 62.14;

int main1() {
    float fuel_consume_eur, fuel_consume_us;
    cout << "enter the fuel consume in enrope(1/100KM)";
    cin >> fuel_consume_eur;
    fuel_consume_us = HKM_TO_MILE / (fuel_consume_eur / GALLON_TO_LITER);
    cout << "The fuel consume is " << fuel_consume_eur << "L/100KM" << endl;
    cout << "The fuel consume is " << fuel_consume_us << "mpg(mile/gallon)" << endl;

    return 0;


}




