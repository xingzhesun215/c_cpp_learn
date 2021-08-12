#include <iostream>

using namespace std;


/**
 * 6-1 读取键盘输入，直到遇到@为止，并回显输入（数字除外，同时大小写字母互转）推荐使用cctype系列
 *
 * @return
 */

#include <cctype>

int main1() {

    char input;
    cout << "start input your character :";
    cin.get(input);
    while (input != '@') {
        if (islower(input)) {
            input = toupper(input);
        } else if (isupper(input)) {
            input = tolower(input);
        } else if (isdigit(input)) {
            cin.get(input);
            continue;
        }
        cout << input;
        cin.get(input);
    }

    return 0;
}






