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

    int getId() {
        return id;
    }

    void setId(int id) {
        this->id = id;
    }
};

/**
 *复制构造方法的学习
 * @return
 */
int copyClass() {
    Stu *a = new Stu(3);//新建实例指针
    Stu b(4);           //新建实例方法1
    Stu c = {5};          //新建实例方法2
    Stu d = (6);              //新建实例方法3
    cout << "a id= " << a->getId() << endl;//3
    cout << "b id= " << b.getId() << endl;//4
    cout << "c id= " << c.getId() << endl;//5
    cout << "d id= " << d.getId() << endl;//6

    Stu e(b);//复制构造函数，新建实例方法4

    cout << "b id=" << b.getId() << endl;//4
    cout << "e id=" << e.getId() << endl;//4

    Stu f(*a);//复制构造函数，新建实例方法4

    cout << "f=" << f.getId() << endl;//3
    cout << "a id=" << a->getId() << endl;//3



    return 0;
}


