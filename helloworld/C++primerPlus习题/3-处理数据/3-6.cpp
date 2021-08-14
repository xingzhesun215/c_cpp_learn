#include <iostream>

using namespace std;


/**
 * 3-6 编写一个程序，用户输入驱车里程（英里）和使用汽油量（加仑），然后指出汽车耗油量1加仑的里程，即油耗
 * @return
 */

int main1() {
    float distance_in_mile,distance_in_km;
    float fuel_in_gallon,fuel_in_litre;
    float fuel_consume;
    cout<<"enter the distance in miles :";
    cin>>distance_in_mile;
    cout<<"enter the fuel consume in gallon :";
    cin>>fuel_in_gallon;
    fuel_consume=distance_in_mile/fuel_in_gallon;
    cout<<"The fuel consume is "<<fuel_consume<<"mpg(miles/gallon)"<<endl;

    cout<<"enter the distance in kilometer :";
    cin>>distance_in_km;
    cout<<"enter the fuel consume in litre :";
    cin>>fuel_in_litre;
    fuel_consume=(fuel_in_litre/distance_in_km)*100;
    cout<<"The fuel consume is "<<fuel_consume<<"L/100KM"<<endl;




    return 0;


}




