#include <iostream>


using namespace std;


/**
 * 4-8  使用new为结构体分配内存
 *
 * @return
 */
struct Pizza {
    char company[40];
    float diameter;
    float weight;
};

int main1() {

    Pizza *dinner=new Pizza();
    cout << "Enter the pizza's Information :" << endl;

    cout << "pizza's diameter(inchss):";
    cin >> dinner->diameter;

    cout << "pizza's company :";
    cin.getline(dinner->company, 40);


    cout << "pizza's weight(pounds):";
    cin >> dinner->weight;

    cout << "the company of pizza is " << dinner->company << " ,and its diameter is " << dinner->diameter
         << " , its weight is " << dinner->weight << endl;

    delete dinner;
    return 0;


}




