//
// Created by sun on 2021/7/24.
//

#include <iostream>

#include <cstring>
#include "ctype.h"

using namespace std;

/**
 * 字符串常用操作
 * @return
 */
int main3() {
    char s1[100] = "12345";
    char s2[100] = "abcdefg";
    char s3[100] = "ABCDEFG";
    cout << "s1=" << s1 << " \t s2=" << s2 << "  \t s3=" << s3 << endl;
    strncat(s1, s2, 5);//s2的前3个元素拼接到s1的后面
    cout << "s1=" << s1 << " \t s2=" << s2 << "  \t s3=" << s3 << endl;

    strncpy(s1, s3, 3);//s3的前3个元素复制到s1的前面
    cout << "s1=" << s1 << " \t s2=" << s2 << "  \t s3=" << s3 << endl;

    cout << strcmp(s2, s3) << "\t" << strlwr(s3) << "\t" << strcmp(s2, s3) << endl;//转小写 比较
    cout << "s1=" << s1 << " \t s2=" << s2 << "  \t s3=" << s3 << endl;
    strupr(s3);                                                       //转大写
    cout << "s1=" << s1 << " \t s2=" << s2 << "  \t s3=" << s3 << endl;

    char *s1c = strchr(s1, 'C');//返回第一个C字符的指针位置
    if (s1c) {
        cout << "I hava found C in s1,and now s1 =" << s1 << endl;
    } else {
        cout << "I have not found C in s1,and now s1 =" << s1 << endl;
    }
    char *s2z = strchr(s2, 'z');
    if (s2z) {
        cout << "I hava found z in s2,and now s2 =" << s2 << endl;
    } else {
        cout << "I have not found z in s2,and now s2 =" << s2 << endl;
    }

    cout << "s1=" << s1 << " \t s2=" << s2 << "  \t s3=" << s3 << endl;

    char *s1str = strstr(s1, "abc");
    if (s1str) {
        cout << "I hava found abc in s1,and now s1 =" << s1 << ",now s1str=" << s1str << endl;
        cout << "I have found abc in " << strlen(s1) - strlen(s1str) << endl;
    } else {
        cout << "I have not found ABC in s1,and now s1 =" << s1 << endl;
    }

    char name[100] = "my name is sun guan yong";
    cout << "words=" << name << endl;
    char *split = strtok(name, " ");
    cout << "words=" << name << endl;
    cout << "splits=" << split << endl;
    if (split == name) {
        cout << "they are the same" << endl;
    }
    int i = 0;
    while (split != NULL) {
        i++;
        cout << i << ":" << split << endl;
        split = strtok(NULL, " ");
    }
    cout << "string test is finish" << endl;




    return 0;
}


