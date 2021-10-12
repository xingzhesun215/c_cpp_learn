#include <iostream>

const int Len = 10;

class golf {
private:
    char fullname[Len];
    int handicap;
public:
    golf();

    golf(const char *name, int hc);

    ~golf();

    void sethandicap(int hc);

    void showgolf() const;
};