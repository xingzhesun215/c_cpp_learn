//
// Created by sun on 2021/7/24.
//

#include <iostream>
#include "c_test/myUtil.h"
#include <map>
#include <cstring>

using namespace std;



//map的用法学习
//不能有相同的关键字，所以插入可能失败
//可以使用[]，下标为关键字


struct Student {
    string name;
    int score;
};

Student students[5] = {{"eee",  5},
                       {"aaaa", 12},
                       {"bbb",  123},
                       {"ccc",  14},
                       {"dddd", 234}
};

typedef map<string, int> MP;

int mainmap() {
    MP mp;
    for (int i = 0; i < 5; i++) {
        mp.insert(make_pair(students[i].name, students[i].score));
    }

    cout << mp["eee"] << endl;//5

    mp["eee"] = 55;
    cout << mp["eee"] << endl;//55

    for (MP::iterator i = mp.begin(); i != mp.end(); ++i) {
        cout << "(" << i->first << "," << i->second << ")" << endl;
    }

    Student st;
    st.name = "eee";
    st.score = 999;
    pair<MP::iterator, bool> p = mp.insert(make_pair(st.name, st.score));
    if (p.second) {
        cout << "insert success, name=" << (p.first->first) << " ,score=" << p.first->second << endl;
    } else {
        cout << "insert fail" << endl;
    }
    mp["fff"] = 444;

    MP::iterator q = mp.find("fff");// how about ggg
    cout << "存在用户(" << q->first << "," << q->second << ")" << endl;
    return 0;
}


