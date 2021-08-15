#include <iostream>


using namespace std;


/**
 * 7-2
 *
 * @return
 */

const int SIZE=10;
int set_mark(int[],int);
void display_mark(int[],int);
double average_mark(int[],int);

int main1() {

    int size,golf_mark[SIZE];
    size= set_mark(golf_mark,SIZE);
    display_mark(golf_mark,SIZE);
    cout<<"The average mark is "<<average_mark(golf_mark,size)<<endl;
    return 0;

}

int set_mark(int arr[],int size){
    int i=0;
    do{
        cout<<"Enter the No."<<i+1<<" golf marks :";
        cin>>arr[i++];
        cin.get();
        cout<<"press enter to continue,or 's' for stop input"<<endl;
        if(cin.get()=='s'){
            for (i; i<size ; i++) {
                arr[i]=0;

            }
            break;
        }
    } while (i<size);
}

void display_mark(int arr[],int size){
    cout<<"The marks is below :"<<endl;
    for (int i = 0; i < size; ++i) {
        cout<<arr[i]<<"\t";

    }
    cout<<endl;
}

double average_mark(int arr[],int size){
    int sum=0;
    for (int i = 0; i < size; ++i) {
        sum+=arr[i];
    }
    return sum*1.0/size;
}



