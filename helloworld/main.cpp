#include <iostream>
#include <cmath>

using namespace std;


int N;
int queenPos[100];

//用来存放算好的皇后位置，最左上角为（0，0）
void NQueen(int k);


//n皇后问题
int main() {
    cin >> N;//输入皇后数
    NQueen(0);
    return 0;
}

void NQueen(int k) {//在0-（k-1）行皇后已经摆好的情况下，摆放在k行及其后的皇后
    int i;
    if (k == N) {//N个皇后已经摆好
        for (i = 0; i < N; ++i) {
            cout << queenPos[i] + i << " " ;
        }
        cout<<endl;
        return;
    }
    for (int i = 0; i < N; ++i) {//逐渐尝试第K个皇后的问题
        int j;
        for (j = 0; j < k; j++) {
            //和已经摆好的k个皇后比较
            if (queenPos[j] == i || (abs(queenPos[j] - i)) == abs(k - j)) {
                break;
            };
        }
        if(j==k){//当前选的位置i不冲突
            queenPos[k]=i;
            NQueen(k+1);
        }
    }
}




