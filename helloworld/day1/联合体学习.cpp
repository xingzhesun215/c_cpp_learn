//
// Created by sun on 2021/7/24.
//

#include <iostream>

using namespace std;
union myun{
    struct {
        int x;
        int y;
        int z;
    }s;
    int k;
}u;

int main4() {
    cout << "hello 联合体" << endl;
    u.s.x=4;
    u.s.y=5;
    u.s.z=6;
    u.k=0;//覆盖掉第一个int空间的值
    printf("%d ,%d,%d,%d",u.s.x,u.s.y,u.s.z,u.k);
    return 0;
}