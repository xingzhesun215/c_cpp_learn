#include <iostream>


using namespace std;


/**
 * 4-7
 *
 * @return
 */
struct Pizza {
    char company[40];
    float diameter;
    float weight;
};

int main1() {

    Pizza dinner;
    cout << "Enter the pizza's Information :" << endl;
    cout << "pizza's company :";
    cin.getline(dinner.company, 40);

    cout << "pizza's diameter(inchss):";
    cin >> dinner.diameter;
    cout << "pizza's weight(pounds):";
    cin >> dinner.weight;

    cout << "the company of pizza is " << dinner.company << " ,and its diameter is " << dinner.diameter
         << " , its weight is " << dinner.weight << endl;

    return 0;


}




