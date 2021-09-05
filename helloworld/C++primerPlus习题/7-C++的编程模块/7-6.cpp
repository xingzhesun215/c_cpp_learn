

#include <iostream>


using namespace std;

/**
 * 7-6
 *
 * @return
 */

int Fill_array(double [],int);
void Show_array(double[],int);
void Reverse_array(double [],int);
const int SIZE=20;

int main1() {

    double Array[SIZE];

    int size= Fill_array(Array,SIZE);
    Show_array(Array,size);
    Reverse_array(Array,size);
    Show_array(Array,size);
    Reverse_array(&Array[1],size-2);
    Show_array(Array,size);
    return 0;
}

int Fill_array(double arr[],int size){
    int count=0;
    double temp;
    cout<<"Enter the number seperate by blank, 's' to stop:"<<endl;
    cin>>temp;
    while (count<size){

        if(cin.get()=='s'){
            return count;
        } else{
            arr[count++]=temp;
            cin>>temp;
        }
    }
    return count;
}


void Show_array(double arr[],int size){
    cout<<"The array's data :"<<endl;
    for (int i = 0; i < size; ++i) {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

void Reverse_array(double arr[],int size){
    double temp;
    for (int i = 0; i < size / 2; ++i) {
        temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-1-i]=temp;
    }
}