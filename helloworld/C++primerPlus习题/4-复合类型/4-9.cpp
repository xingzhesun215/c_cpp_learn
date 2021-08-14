#include <iostream>


using namespace std;


/**
 * 4-9  结构体数组
 *
 * @return
 */
struct CandyBar {
    char brand[20];
    float weight;
    unsigned int calorie;
};

int main1() {

    CandyBar *candyBars = new CandyBar[3];
    strcpy(candyBars[0].brand, "aaa");
    candyBars[0].weight = 111.111;
    candyBars[0].calorie=1111;

    strcpy(candyBars[1].brand, "bbb");
    (candyBars+1)->weight = 222.222;
    candyBars[1].calorie=2222;

    strcpy(candyBars[2].brand, "ccc");
    candyBars[2].weight = 333.333;
    candyBars[2].calorie=3333;

    cout << "Its name is " << candyBars[0].brand << " ,and its weight is " << candyBars[0].weight << " ,and its calorie is "
         << candyBars[0].calorie << endl;
    cout << "Its name is " << candyBars[1].brand << " ,and its weight is " << candyBars[1].weight << " ,and its calorie is "
         << candyBars[1].calorie << endl;
    cout << "Its name is " << candyBars[2].brand << " ,and its weight is " << candyBars[2].weight << " ,and its calorie is "
         << candyBars[2].calorie << endl;

    return 0;


}




