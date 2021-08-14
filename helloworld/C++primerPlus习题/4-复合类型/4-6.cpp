#include <iostream>


using namespace std;


/**
 * 4-6  结构体数组
 *
 * @return
 */
struct CandyBar {
    char brand[20];
    float weight;
    unsigned int calorie;
};

int main1() {

    CandyBar candys[] = {{"aaa", 1.1, 100},
                         {"bbb", 2.2, 200},
                         {"ccc", 3.3, 300}};
    cout << "Its name is " << candys[0].brand << " ,and its weight is " << candys[0].weight << " ,and its calorie is "
         << candys[0].calorie << endl;
    cout << "Its name is " << candys[1].brand << " ,and its weight is " << candys[1].weight << " ,and its calorie is "
         << candys[1].calorie << endl;
    cout << "Its name is " << candys[2].brand << " ,and its weight is " << candys[2].weight << " ,and its calorie is "
         << candys[2].calorie << endl;

    return 0;


}




