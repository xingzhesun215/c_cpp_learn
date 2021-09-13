

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * STL中的容器/算法/迭代器
 */
void test01() {
    vector<int> v;//STL中的标准容器之一：动态数组
    v.push_back(1);
    v.push_back(5);
    v.push_back(3);
    v.push_back(7);
    v.push_back(5);
    //迭代器
    vector<int>::iterator pStart = v.begin();//vector容器提供begin()，返回指向第一个元素的迭代器
    vector<int>::iterator pEnd = v.end();//vector提供end(),返回指向最后一个元素的迭代器

    //*通过迭代器遍历
    while (pStart != pEnd) {
        cout << *pStart << " ";
        pStart++;
    }

    cout << endl;
    //算法count统计元素的个数
    int n = count(pStart, pEnd, 5);
    cout << "n:" << n << endl;
}

class Teacher {
public:
    int age;

    Teacher(int age) : age(age) {

    };

    ~Teacher() {

    }
};

void test02() {
    vector<Teacher> v;
    Teacher t1(10), t2(20), t3(30);
    v.push_back(t1);
    v.push_back(t1);
    v.push_back(t2);
    v.push_back(t3);
    vector<Teacher>::iterator tStart = v.begin();
    vector<Teacher>::iterator tEnd = v.end();
    while (tStart != tEnd) {
        cout << tStart->age << " ";
        tStart++;
    }
    cout << endl;
}

void test03() {
    vector<Teacher *> v;

    Teacher *t1 = new Teacher(10);
    Teacher *t2 = new Teacher(20);
    Teacher *t3 = new Teacher(30);
    Teacher *t4 = new Teacher(40);

    v.push_back(t1);
    v.push_back(t2);
    v.push_back(t3);
    v.push_back(t4);

    vector<Teacher *>::iterator pStart = v.begin();
    vector<Teacher *>::iterator pEnd = v.end();
    while (pStart != pEnd) {
        cout << (*pStart)->age << " ";
        pStart++;
    }
    cout << endl;
}

//容器嵌套容器
void test04() {
    vector<vector<int>> v;

    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);

    vector<int> v2;
    v2.push_back(11);
    v2.push_back(12);

    vector<int> v3;
    v3.push_back(101);
    v3.push_back(102);

    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    vector<vector<int>>::iterator  ps=v.begin();
    vector<vector<int>>::iterator  pe=v.end();
    while (ps!=pe){
        vector<int> vtemp=*ps;
        vector<int>::iterator vts= vtemp.begin();
        vector<int>::iterator vte= vtemp.end();
        while (vts!=vte){
            cout<<*vts<<" ";
            vts++;
        }
        cout<<endl;
        ps++;
    }
}

int main1() {
    //test01();
    //test02();
    //test03();
    test04();
    return 0;
}


