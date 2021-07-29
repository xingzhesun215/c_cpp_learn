//
// Created by sun on 2021/7/24.
//

#include <iostream>

using namespace std;

void printArr(int *data, int length) {
    for (int i = 0; i < length; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
}

struct Student {
    char *name;
    int id;
    double gpa;
};

void printStudents(Student *stus, int length) {
    for (int i = 0; i < length; i++) {
        cout << "(id=" << stus[i].id << "\tname=" << stus[i].name << "\tgpa=" << stus[i].gpa << ")" << endl;
    }
    cout << endl;
}


struct StudentRule1 {//按名字从小到大排序
    bool operator()(const Student &s1, const Student &s2) const {
        if (strcmp(s1.name, s2.name)) {
            return true;
        } else {
            return false;
        }
    }
};

struct StudentRule2 {//按id从小到大排序
    bool operator()(const Student &s1, const Student &s2) const {
        return s1.id < s2.id;
    }
};

struct StudentRule3 {//按gpa从高到低
    bool operator()(const Student &s1, const Student &s2) const {
        return s1.gpa > s2.gpa;
    }
};

/**
 * stl排序使用
 * @return
 */
int main1() {
    int data[] = {2, 1, 10, 3, 5, 4, 6, 8, 7, 9};
    int size = sizeof(data) / sizeof(int);
    cout << "size=" << size << endl;
    cout << "当前数组:" << endl;
    printArr(data, size);
    cout << "从小到大 sort后：" << endl;
    sort(data, data + size);//默认进行从小到大排序
    printArr(data, size);
    cout << "从大到小sort后：" << endl;
    sort(data, data + size, greater<int>());
    printArr(data, size);


    Student stus[] = {{"Ala",  333, 3.5},
                      {"Jack", 112, 3.4},
                      {"Mary", 102, 3.8},
                      {"Mar",  117, 3.9},
                      {"Zero", 101, 4}};
    int n = sizeof(stus) / sizeof(Student);
    printStudents(stus, n);

    sort(stus, stus + n, StudentRule1());
    cout << "student.name排序后";
    printStudents(stus, n);
    sort(stus, stus + n, StudentRule2());
    cout << "student.id排序后";
    printStudents(stus, n);
    cout << "student.gpa排序后";
    sort(stus, stus + n, StudentRule3());
    printStudents(stus, n);
    return 0;
}


