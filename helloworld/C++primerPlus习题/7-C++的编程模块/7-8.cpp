

#include <iostream>


using namespace std;

/**
 * 7-8
 *
 * @return
 */
const int Season=4;
const char* Sname[]={"Spring","Summer","Fall","Winter"};
struct Spend{
    double money[Season];
};

void fill(double arr[],int size);
void show(const double arr[],int size);

int main1() {
    Spend expenses;

    fill(expenses.money,Season);
    show(expenses.money,Season);

    return 0;
}
void fill(double arr[],int size){
    for (int i = 0; i < size; ++i) {
        cout<<"Enter "<<Sname[i]<<" expenses:";
        cin>>arr[i];
    }
}

void show(const double arr[],int size){
    double total=0.0;

    cout<<"\nEXPENSES\n";
    for (int i = 0; i < size; ++i) {
        cout<<Sname[i]<<":$ "<<arr[i]<<endl;
        total+=arr[i];
    }
    cout<<"Total Expenses :$"<<total;
}

