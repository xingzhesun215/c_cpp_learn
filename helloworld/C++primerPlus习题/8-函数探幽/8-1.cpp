#include <iostream>


using namespace std;


/**
 * 8-1
 *
 * @return
 */
void loop_print(const char *str, int n = 0);


int main1() {
    loop_print("hello cpp");
    loop_print("hello cpp");
    loop_print("hello c++",5);
    return 0;
}

void loop_print(const char *str, int n) {
    static int func_count = 0;
    func_count++;
    cout<<"static func_count="<<func_count<<endl;

    if (n == 0) {
        cout << "Auguments =0 ;\n";
        cout << str << endl;
    } else {
        cout << "Auguments !=0 ;\n";
        for (int i = 0; i < n; ++i) {
            cout << str << endl;
        }
    }
}
