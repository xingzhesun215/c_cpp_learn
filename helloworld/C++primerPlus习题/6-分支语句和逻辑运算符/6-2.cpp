#include <iostream>

using namespace std;


/**
 * 6-2 最多将10个donation值读取到一个double数组中，可以使用模板类array，
 * 在程序遇到非数字即退出，并报告这些数字的平均值，以及多少个数字大于平均值
 *
 * @return
 */

#include <array>

void print(array<double, 10> array) {
    for (int i = 0; i < 10; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {

    array<double, 10> donations;
    cout<<"打印空数组"<<endl;
    print(donations);//为什么初始化的array不为全空呢，后续会解答
    cout<<"打印完成"<<endl;
    int count = 0;
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        cin >> donations[i];
        print(donations);
        if (donations[i] == 0) {
            break;
        }
        sum += donations[i];
        count++;
    }
    cout << "当前数组元素为" << endl;
    print(donations);
    double pinjun = sum * 1.0 / count;
    cout << "平均数=" << pinjun << endl;

    int big_count = 0;
    for (int i = 0; i < count; i++) {
        if (donations[i] > pinjun) {
            big_count++;
        }
    }
    cout << "大于平均数的个数为" << big_count << endl;

    return 0;
}






