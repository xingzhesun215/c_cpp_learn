#include <iostream>


using namespace std;


/**
 * 4-5  结构体相关测试
 *
 * @return
 */
struct CandyBar {
    char brand[20];
    float weight;
    unsigned int calorie;
};

int main1() {
    CandyBar snack = {"Mocha Munch", 2.3, 350};

    cout << "Its name is " << snack.brand << " ,and its weight is " << snack.weight << " ,and its calorie is "
         << snack.calorie << endl;

    return 0;


}




