#include <iostream>

using namespace std;

// 10-7
const int SIZE = 7;

class plory {
private:
    char name[SIZE];
    int CI;

public:
    plory(const char sr[] = {"Plorga"}, int ci = 50);

    void reset_ci(int n);

    void print_info() const;
};


int main1() {
    plory pl;
    pl.print_info();
    pl.reset_ci(98);
    pl.print_info();
    plory pm("Stenom", 87);
    pm.print_info();
    return 0;
}

plory::plory(const char *st, int ci) {
    strcpy(name, st);
    CI = ci;

}

void plory::reset_ci(int n) {
    CI = n;
}

void plory::print_info() const {
    cout << "Plory name:" << name << " ,CI=" << CI << endl;
}
