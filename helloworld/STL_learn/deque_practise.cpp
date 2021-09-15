#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

/**
评委打分案例
 创建5个选手（姓名和得分），10个评委对5个选手打分
 得分规则：去掉最高分 去掉最低分，取出平均分
 按得分对5名选手进行排序
 */

const int COUNT = 5;

class Player {
public:
    string name;
    int score;
};


void Create_Player(vector<Player> &plist) {
    string randseed = "ABCDE";
    for (int i = 0; i < COUNT; ++i) {
        Player player;
        player.name = "选手";
        player.name += randseed[i];

        player.score = 0;
        plist.push_back(player);
    }

    cout<<"count="<<plist.size()<<endl;
}

bool myconpare(int v1, int v2) {
    return v1 < v2;
}

void Set_Player_Score(vector<Player>& plist) {
    for (vector<Player>::iterator it = plist.begin(); it != plist.end(); it++ ){
        deque<int> dscore;
        for (int i = 0; i < 10; ++i) {
            int score = 50 + rand() % 50;
            dscore.push_back(score);
        }
        //排序从大到小
        sort(dscore.begin(), dscore.end(), myconpare);
        //去掉最高最低分
        dscore.pop_front();
        dscore.pop_back();

        int totalScore = 0;
        for (deque<int>::iterator it = dscore.begin(); it != dscore.end(); it++) {
            totalScore += *it;
        }

        int scoreavg = totalScore / dscore.size();
        cout<<it->name<<"   score="<<scoreavg<<endl;
        it->score= scoreavg;
    }
    for (vector<Player>::iterator  it=plist.begin();  it!=plist.end() ; it++) {
        cout<<"000name:"<<it->name<<"  score="<<it->score<<endl;
    }

}

bool comparePlay(Player p1,Player p2){
    return p1.score>p2.score;
}

//按得分排名

void Show_Player_list(vector<Player>& plist){
    for (vector<Player>::iterator  it=plist.begin();  it!=plist.end() ; it++) {
        cout<<"111name:"<<it->name<<"  score="<<it->score<<endl;
    }
    sort(plist.begin(),plist.end(), comparePlay);

    for (vector<Player>::iterator  it=plist.begin();  it!=plist.end() ; it++) {
        cout<<"name:"<<it->name<<"  score="<<it->score<<endl;
    }
}
void test(){
    vector<Player> plist;
    Create_Player(plist);
    Set_Player_Score(plist);
    Show_Player_list(plist);

}

int main1() {
    test();
    return 0;
}


