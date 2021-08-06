//
// Created by sun on 2021/7/24.
//

#include <iostream>
#include "c_test/myUtil.h"
#include <map>
#include <cstring>

using namespace std;



//multimap的用法学习
//multiplies<T1,T2> map
//struct {
//          T1 first
//          T2 second
//          }


struct StudentInfo {
    int id;
    char name[20];
};

struct Student {
    int score;
    StudentInfo info;
};

typedef multimap<int, StudentInfo> MAP_STD;
//此后 MAP_STD 等价于 multimap<int ,StudentInfo>
//typedef int* PINT说明此后PINT等价于int* ,即PINT p  等价于 int * p


int main() {

    MAP_STD mp;
    Student st;
    char cmd[20];
    while (cin >> cmd) {
        if (cmd[0] == 'A') {
            cin >> st.info.name >> st.info.id >> st.score;
            mp.insert(make_pair(st.score, st.info));
        }//make_pair 生成一个pair<int,StudentInfo>变量，其first等于st.score,second等于st.info

        else if (cmd[0] == 'Q') {
            int score;
            cin >> score;
            MAP_STD::iterator p = mp.lower_bound(score);
            if (p != mp.begin()) {
                --p;
                score = p->first;//比要查询分数低的最高分
                MAP_STD::iterator maxp = p;
                int maxId = p->second.id;
                for (; p != mp.begin() && p->first == score; --p) {
                    if (p->second.id > maxId) {
                        maxp = p;
                        maxId = p->second.id;
                    }
                }
                cout << maxp->second.name <<" "<< maxp->second.id <<" "<< maxp->first << endl;
            }else{
                cout<<"no body"<<endl;
            }

        }
    }


    return 0;
}


