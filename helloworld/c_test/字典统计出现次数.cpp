//
// Created by sun on 2021/7/24.
//

#include <iostream>
#include "c_test/myUtil.h"
#include <map>
#include <set>
#include <cstring>

using namespace std;



//输入大量单词，每个单词，1行，不超过20字节，没有空格，
// 按出现的次数从多到少输出单词及出现次数，字典序靠前在前面

struct Word {
    int times;
    string wd;
};

struct Rule {
    bool operator()(const Word &w1, const Word &w2) const {
        if (w1.times != w2.times) {
            return w1.times > w2.times;
        } else {
            return w1.wd < w2.wd;
        }
    }
};


int main3333() {

    string s;
    set<Word, Rule> st;
    map<string, int> mp;
    while (cin >> s && s != "quit") {//给个结束符
        ++mp[s];//不存在即插入[s,1] ,存在即[s,mp[s]++]  算法核心
    }
    for (map<string, int>::iterator i = mp.begin(); i != mp.end(); ++i) {
        Word tmp;
        tmp.wd = i->first;
        tmp.times = i->second;
        st.insert(tmp);
    }
    for (set<Word, Rule>::iterator i = st.begin(); i != st.end(); ++i) {
        cout << i->wd << "  " << i->times << endl;
    }


    return 0;
}


