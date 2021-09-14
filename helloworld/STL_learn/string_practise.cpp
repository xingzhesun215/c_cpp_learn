#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>


using namespace std;

/**
    string课后练习
    //用户邮箱地址验证
    1，判断邮箱的有效性，是否包含@和. 并且.在@之后
    2，判断用户输入的用户名是否包含小写字母之外的字符（97-122）
    3，判断用户输入的邮箱是否正确
 */


//1，判断邮箱的有效性，是否包含@和. 并且.在@之后
bool Check_Vaild(string &email) {
    int pos1 = email.find("@");
    int pos2 = email.find(".");
    if (pos1 == -1 || pos2 == -1) {
        return false;//不存在
    }
    if (pos1 > pos2) {
        return false;
    }
    return true;
}
//2,判断用户输入的用户名是否包含小写字母之外的字符（97-122）
bool Check_EUserName(string& email){
    int pos=email.find("@");
    string userName=email.substr(0,pos-1);

    for (string::iterator it= userName.begin();  it!=userName.end() ; it++) {
        if(*it<97||*it>122){
            return false;
        }
    }
    return true;
}

//3,判断用户输入的是否相等
bool  Check_EqualTo(string &email){
    string rightEmail="sunguanyong@qq.com";
    if(email.compare(rightEmail)!=0){
        return false;
    }
    return true;
}

void test(){
    string email;
    cout<<"请输入你的邮箱：";
    cin>>email;
    bool flag= Check_Vaild(email);

    if (!flag){
        cout<<"格式不正确"<<endl;
        return;
    }
    flag= Check_EUserName(email);
    if(!flag){
        cout<<"用户名包含非小写字母";
        return;
    }

    flag= Check_EqualTo(email);
    if(!flag){
        cout<<"邮箱地址不正确"<<endl;
        return;
    }

    cout<<"邮箱正确"<<endl;
}

int main1() {
    test();
    return 0;
}


