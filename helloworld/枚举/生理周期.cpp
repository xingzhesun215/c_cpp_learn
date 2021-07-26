//
// Created by sun on 2021/7/24.
//

#include <iostream>

using namespace std;

/**
 *生理周期
 * 人有体力/情商/智商的高峰日子，它们分别每隔23/28/33天，想知道何时出现3个高峰在同一天
 * 给定3个高峰出现的日子，p/e/i(不一定是高峰的日子)，给定另一个指定的日子d，你的任务是
 * 输出日子d之后下一个高峰落在同一天的日子
 * 算法： （k-p）%23==0 && （k-e）%28==0 &&（k-i）%33==0
 *
 * @return
 */
#define N 21252

int main2() {
    int p, e, i, d, caseNo = 0;
    while (cin >> p >> e >> i >> d && p != -1) {
        ++caseNo;
        int k;
        for (k = d + 1; (k - p) % 23; k++);
        for (; (k - e) % 28; k += 23);
        for (; (k - i) % 33; k += 23 *28);
        cout << "Cse " << caseNo << " the nect day=" << k - d << endl;
    }

    return 0;
}


