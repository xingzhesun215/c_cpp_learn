

#include <iostream>


using namespace std;

/**
 * 7-9
 *
 * @return
 */

const int SLEN = 30;
struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);

void display1(student st);

void display2(const student *ps);

void display3(const student pa[], int n);

int main1() {

    cout << "Enter the class size:";
    int class_size;
    cin >> class_size;
    while (cin.get() != '\n') {
        continue;
    }
    student *ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < class_size; ++i) {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);

    delete[] ptr_stu;
    cout << "DONE" << endl;

    return 0;
}

int getinfo(student pa[], int n) {
    int i = 0;
    for (int i = 0; i < n; ++i) {

        cout << "Enter the info of student name:";
        cin >> pa[i].fullname;
        cout << "Enter the info of student hobby:";
        cin >> pa[i].hobby;
        cout << "Enter the info of student level:";
        cin >> pa[i].ooplevel;
        if (!cin) {
            cin.clear();
            while (cin.get() != '\n') {

                continue;
            }
            cout << "Bad input. procerss terminated\n";
            break;
        }
    }

    return i;

}

void display1(student st){
    cout<<"Student name :"<<st.fullname<<endl;
    cout<<"Student hobby:"<<st.hobby<<endl;
    cout<<"Student level:"<<st.ooplevel<<endl;
}

void display2(const student*ps){
    cout<<"Student name :"<<ps->fullname<<endl;
    cout<<"Student hobby:"<<ps->hobby<<endl;
    cout<<"Student level:"<<ps->ooplevel<<endl;
}

void display3(const student ps[],int n){
    for (int i = 0; i < n; ++i) {
        cout<<"Student name :"<<ps[i].fullname<<endl;
        cout<<"Student hobby:"<<ps[i].hobby<<endl;
        cout<<"Student level:"<<ps[i].ooplevel<<endl;
    }

}
