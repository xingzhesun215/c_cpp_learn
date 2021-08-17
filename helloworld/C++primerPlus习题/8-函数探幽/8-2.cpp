#include <iostream>


using namespace std;


/**
 * 8-2
 *
 * @return
 */
struct CandyBar {
    string brand;
    float weight;
    int calorie;
};

void create_candy(CandyBar &candy, string s = "Millennium Munch", float w = 2.85, int c = 350);
void show_candy(const CandyBar & candy);
int main1() {
    CandyBar cb;
    create_candy(cb);
    show_candy(cb);
    create_candy(cb,"Nestle",1.2,200);
    show_candy(cb);


    return 0;
}

void create_candy(CandyBar& candy,string s,float w,int c){
    candy.brand=s;
    candy.weight=w;
    candy.calorie=c;
}

void show_candy(const CandyBar &candy){
    cout<<"The candybar is made by"<<candy.brand<<endl;
    cout<<"and its weight is "<<candy.weight<<endl;
    cout<<"and its calorie is "<<candy.calorie<<endl;
}

