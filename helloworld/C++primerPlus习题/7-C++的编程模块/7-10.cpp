

#include <iostream>


using namespace std;

/**
 * 7-10
 *
 * @return
 */


double add(double, double);

double subtract(double, double);

double calculate(double, double, double (*)(double, double));


int main1() {

    double q = calculate(2.5, 10.4, add);

    cout << "The answer of add is" << q << endl;;
    double t= calculate(2.5,10.4,subtract);
    cout<<"The answer of subtract is "<<t<<endl;

    return 0;
}

double add(double x,double y){
    return x+y;
}

double subtract(double x,double y){
    return x-y;
}

double calculate(double x,double y,double(*pf)(double x1,double y1)){
    return pf(x,y);
}

