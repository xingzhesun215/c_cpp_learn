#include <iostream>

using namespace std;

void Hanoi(int, char, char, char);


//汉诺塔
int main333() {
    int n;
    cin >> n;//输入盘子数

    Hanoi(n, 'A', 'B', 'C');

    return 0;
}

/**
 * 将src座上的n个盘子，以mid座为中转，移动到dest座
 * @param n
 * @param src
 * @param mid
 * @param dest
 */
void Hanoi(int n, char src, char mid, char dest) {
    if (n == 1) {//只需移动一个盘子
        cout << src << "->" << dest << endl;//直接将盘子从src移动到dest即可
        return;
    }
    Hanoi(n-1,src,dest,mid);//先将n-1个盘子从src移动到mid
    cout<<src<<"-->"<<dest<<endl;//再将一个盘子从src移动到dest
    Hanoi(n-1,mid,src,dest);//最后将n-1个盒子从mid移动到dest1
}




