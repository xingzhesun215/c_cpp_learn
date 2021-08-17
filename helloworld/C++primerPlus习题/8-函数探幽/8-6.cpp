#include <iostream>


using namespace std;


/**
 * 8-5
 *
 * @return
 */

#include <cstring>

template<class T>
T maxn(T[],int);

template<>
char* maxn<char*>(char*[],int);


int main1() {

    int arr[5]={1,2,4,6,3};
    double dob[]={1.43,10.59,2.33,5,12.99};
    cout<<"The max in arr is "<<maxn(arr,5)<<endl;
    cout<<"The max in dob is "<<maxn(dob,5)<<endl;
    string sst[]={"hello","helloworld"};
    cout<<"The max lenght in sst is "<<maxn(sst,2)<<endl;
    return 0;
}

template <class T>
T maxn(T st[],int n){
    T max=st[0];

    for (int i = 1; i < n; ++i) {
        if(max<st[i]){
            max=st[i];
        }
    }
    return max;
}

template<>
char* maxn<char*>(char* sst[],int n){
    int pos=0;
    for (int i = 0; i < n; ++i) {
        if(strlen(sst[pos])< strlen(sst[i])){
            pos=i;
        }
    }
    return sst[pos];
}