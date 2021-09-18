#define _CRT_SECURE_NO_WARNINGS

#include <iostream>


using namespace std;

/**
    multimap案例
    公司招聘5个员工，5个员工进入公司后需要指派到那个部门工作
    员工信息包括：姓名/年龄/电话/工资等信息
    通过Multimap进行信息的插入保存和显示

    分部门显示员工信息 显示全部员工信息
 *
  */

#include <map>
#include <string>
#include <vector>


#define SALE_DEPATMENT 1;//销售部门
#define  DEVELOP_DEPATEMENT 2;//研发部门
#define FINACIAL_DEPATEMENT 3;//财务部门
#define ALL_DEPATMENT 4;        //所有部门

class person {
public:
    string name;
    int age;
    double salary;
    string tele;
};

void CreatePersion(vector<person> &vlist) {
    string seed = "ABCDE";

    for (int i = 0; i < 5; ++i) {
        person p;
        p.name = "员工";
        p.name += seed[i];

        p.age = rand() % 30 + 20;

        p.salary = rand() % 20000 + 10000;
        p.tele = "010-88888888";
        vlist.push_back(p);

        cout<<"元素个数="<<vlist.size()<<endl;
    }
}

//5个员工分配到不同的部门
void PersionByGroup(vector<person> &vlist, multimap<int, person> &plist) {
    int operate = -1;
    for (vector<person>::iterator it = vlist.begin(); it != vlist.end(); it++) {
        cout << "当前员工信息" << endl;
        cout << "name:" << it->name << " age:" << it->age << "  工资=" << it->salary << " 电话=" << it->tele << endl;
        cout << "请对该员工进行部门分配 1销售部门 2研发部门 3财务部门" << endl;
        cin >> operate;

        while (true) {
            if (operate == 1) {
                plist.insert(make_pair(1, *it));
                break;
            } else if (operate == 2) {
                plist.insert(make_pair(2, *it));
                break;
            } else if (operate == 3) {
                plist.insert(make_pair(3, *it));
                break;
            } else {
                cout << "输入有误，重新输入" << endl;
                cin >> operate;
            }
        }
    }
    cout << "统计完毕" << endl;
}

void printList(multimap<int, person> &plist, int myoperate) {

    if (myoperate == 4) {
        for (multimap<int, person>::iterator it = plist.begin(); it != plist.end(); it++) {
            cout << "name;" << it->second.name << " age:" << it->second.age << "  工资=" << it->second.salary << " 电话="
                 << it->second.tele << endl;
        }
        return;
    }

    multimap<int, person>::iterator it = plist.find(myoperate);

    int depatCount = plist.count(myoperate);
    int num = 0;
    if (it != plist.end()) {
        while (it != plist.end() && num < depatCount) {
            cout << "name;" << it->second.name << " age:" << it->second.age << "  工资=" << it->second.salary << " 电话="
                 << it->second.tele << endl;
            it++;
            num++;
        }
    }
}

void showPersonList(multimap<int, person> &plist, int myoperate) {
    printList(plist, myoperate);
}

void PersonMenue(multimap<int,person>&plist){
    int flag=-1;
    int isexit=0;
    while (true){
        cout<<"请输入你的操作（1，销售 2，研发 3财务 4所有部门 0退出）";
        cin>>flag;
        if(flag>=1&&flag<=4){
            showPersonList(plist,flag);
        }else if(flag==0){
            isexit=1;
        }else {
            cout<<"输入有误，重新输入"<<endl;
        }
        if(isexit==1){
            break;
        }
    }

}

int main1() {
    vector<person> vlist;
    multimap<int,person> plist;

    CreatePersion(vlist);

    PersionByGroup(vlist,plist);

    PersonMenue(plist);

    return 0;
}


