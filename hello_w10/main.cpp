#include <iostream>

using namespace std;

int main() {
    const int a = 10;
    int *p = (int*)&a;
    printf("a===>%d\n", a);
    *p = 11;
    printf("a===>%d\n", a);
    printf("*p===>%d\n", *p);

    printf("Hello......\n");
    return 0;
}
