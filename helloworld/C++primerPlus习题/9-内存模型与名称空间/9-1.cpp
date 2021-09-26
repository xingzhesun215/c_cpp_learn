#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include "C++primerPlus习题/9-内存模型与名称空间/golf.h"

using namespace std;

/**
 *9-1
  */



int main1() {
    golf ann;
    setgolf(ann,"AnnBirdfreee",24);
    golf andy;
    setgolf(andy);
    showgolf(ann);
    showgolf(andy);
    return 0;
}

void setgolf(golf & g,const char* name,int hc){
    strcpy(g.fullName,name);
    g.handicap=hc;
}

int setgolf(golf & g){
    char name[Len];
    int hc;
    cout<<"Please enter the name"<<endl;
    cin.getline(name,Len);

    cout<<"Please enter the handicap"<<endl;
    while (!(cin>>hc)){
        cin.clear();
        while (cin.get()!='\n'){
            continue;
        }
        cout<<"Please enter the handicap"<<endl;
    }

    if(name[0]!='\0'){
        setgolf(g,name,hc);
        return 1;
    } else{
        return 0;
    }
}

void handicap(golf& g,int hc){
    g.handicap=hc;
}

void showgolf(const golf& g){
    cout<<"name :"<<g.fullName<<"  ,handicap is "<<g.handicap<<endl;
}

