#include <iostream>


using namespace std;


/**
 * 8-5
 *
 * @return
 */

template<class T>
T max5(T[]);

int main1() {

    int arr[5]={1,2,4,6,3};
    double dob[]={1.43,10.59,2.33,5,12.99};
    cout<<"The max in arr is "<<max5(arr)<<endl;
    cout<<"The max in dob is "<<max5(dob)<<endl;

    return 0;
}

template <class T>
T max5(T st[]){
    T max=st[0];

    for (int i = 1; i < 5; ++i) {
        if(max<st[i]){
            max=st[i];
        }
    }
    return max;
}