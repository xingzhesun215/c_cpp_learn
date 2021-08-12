#include <iostream>

using namespace std;


/**
 * 7-1 编写一个程序，不断要求用户输入2个数，直到其中一个为0，
 * 对于2个数，用一个函数来计算它们的调和平均数，并将结果返回给main()
 *调和平均数=2.0*x*y/(x+y)
 * @return
 */


double tiaohe(int a, int b);

int main1() {

    int x;
    int y;

    cout << "enter two number :";
    cin >> x >> y;
    while (x != 0 && y != 0) {
        cout << x << " and " << y << " 的调和平均数=" << tiaohe(x, y) << endl;
        cin >> x >> y;
    }

    return 0;


}


double tiaohe(int x, int y) {
    return 2.0 * x * y / (x + y);
}



