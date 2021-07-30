//
// Created by sun on 2021/7/24.
//

#include <iostream>
#include "c_test/myUtil.h"

class Stu {
    int id;
public:
    Stu() {
        cout << "stu() called,id =" << id << endl;//默认为0
    }

    Stu(int id) {
        this->id = id;
        cout << "Stu(id) called,id = " << id << endl;
    }
};

/**
 *构造方法的学习
 * @return
 */
int test4() {
    Stu array1[2];//()()
    cout << "----------------step1" << endl;
    Stu array2[2] = {1, 2};//(id)(id)
    cout << "----------------step2" << endl;
    Stu array3[2] = {3};//(id)()
    cout << "----------------step3" << endl;
    Stu *array4 = new Stu[2];//（）（）

    delete[] array4;

    return 0;
}


