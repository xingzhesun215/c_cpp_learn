#include <iostream>

using namespace std;

// 10-6

class Move {
private:
    double x;
    double y;
public:
    Move(double a = 0, double b = 0);

    void showmove() const;

    Move add(const Move &m);

    void reset(double a = 0, double b = 0);
};

int main1() {
    Move a, b(12.5, 19);

    double x, y;

    a.showmove();
    b.showmove();

    cout << "Enter x and y" << endl;

    cin >> x >> y;

    a.reset(x, y);
    a.showmove();
    b.showmove();

    cout << "Object A add B:" << endl;
    a.add(b);
    a.showmove();

    b.showmove();
    return 0;
}

Move::Move(double a, double b) {
    x = a;
    y = b;
}

void Move::showmove() const {
    cout << "current x=" << x << " y=" << y << endl;
}

Move Move::add(const Move &m) {
    Move temp;
    temp = x = x + m.x;
    temp = y + m.y;
    return temp;
}

void Move::reset(double a, double b) {
    x=a;
    y=b;
}
