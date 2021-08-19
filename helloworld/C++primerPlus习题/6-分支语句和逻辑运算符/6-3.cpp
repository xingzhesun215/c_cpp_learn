#include <iostream>


using namespace std;


/**
 * 6-3
 *
 * @return
 */

void showmenu();

int main1() {
    char choice;
    showmenu();
    cin.get(choice);
    while (choice!='c'&&choice!='p'&&choice!='t'&&choice!='g'){
        cin.get();
        cout<<"Please enter c p t g :";
        cin.get(choice);
    }
    switch (choice) {
        case 'c':
        case 'p':
            break;
        case 't':
            cout<<"A maple is a tree ";
            break;
        case 'g':
            break;
    }
    return 0;
}

void showmenu(){
    cout<<"Please enter one of the following choices:\n";
    cout<<"c) carnivoire\t\tp) pianist\n";
    cout<<"t) tree \t \t\t g)game\n";
}





