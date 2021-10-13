#include <iostream>

using namespace std;

// 10-4

#include "C++primerPlus习题/10-类和对象/sales.h"


int main1() {
    double de[QUARTERS] = {12, 34, 56, 78};
    Sales s1(de, QUARTERS);
    s1.showSales();
    Sales s2;
    s2.showSales();
    return 0;
}
