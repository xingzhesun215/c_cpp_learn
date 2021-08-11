#include <iostream>

using namespace std;


/**
 * 3-2 编写一个小程序，用户输入身高，体重信息，计算BMI值，即体重（kg）除以身高（米）的平方根
 * 注意，身高输入的是英尺英寸（1英尺=12英寸  1英寸=0。0254），身高输入的是磅（1kg=2.2磅）
 * @return
 */

const float KILOGRAM_TO_POUND = 2.2;
const int FOOT_TO_INCH = 12;
const float INCH_TO_METER = 0.02564;

int main1() {

    int height_foot,height_inch;
    float weight_pound,height,weight,BMI;

    cout<<"enter your height foot:";
    cin>>height_foot;

    cout<<"enter your height inch:";
    cin>>height_inch;

    cout<<"enter your weight in pounds:";
    cin>>weight_pound;

    height=(height_foot*FOOT_TO_INCH+height_inch)*INCH_TO_METER;
    weight=weight_pound/KILOGRAM_TO_POUND;

    BMI=weight/(height*height);
    cout<<"Your BMI is "<<BMI<<endl;

    return 0;
}





