//
// Created by sun on 2021/7/24.
//

#include <iostream>

using namespace std;

/**
 * 完美立方
 * 形如 a*a*a==b*b*b+c*c*c+d*d*d 为完美立方数
 * 给定一个N，N<100,求N的全部完美立方数
 * a,b,c,d>1,小于等于N，且b<=c<=d
 * @return
 */

int main1() {

    int N;
    cin >> N;
    for (int a = 2; a < N; a++) {
        for (int b = 2; b < a; b++) {
            for (int c = b; c < a; c++) {
                for (int d = c; d < a; d++) {
                    if (a * a * a == b * b * b + c * c * c + d * d * d) {
                        cout << "a=" << a << "  b=" << b << "  c=" << c << "  d=" << d << endl;
                    }
                }
            }
        }
    }

    return 0;
}


