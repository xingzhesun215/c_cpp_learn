#include <iostream>


using namespace std;


/**
 * 7-3
 *
 * @return
 */

struct box {
    char markr[40];
    float height;
    float width;
    float length;
    float volume;
};

void display(box);

void calc_volume(box *);

int main1() {

    box Orange = {"China", 12, 12, 12, 0};
    calc_volume(&Orange);
    display(Orange);
    return 0;

}

void display(box b) {
    cout << "this box made by " << b.markr << ",\n and height =" << b.height << ", width = " << b.width << " , length="
         << b.length << " , volume =" << b.volume << endl;
}


void calc_volume(box *b) {
    b->volume = b->length * b->width * b->height;
    cout << "Calculate box's volume done ;" << endl;
}
