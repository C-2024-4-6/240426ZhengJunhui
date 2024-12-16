#include <iostream>
#include<cstring>
#include"student.h"
using namespace std;   //不要漏写此行，否则编译通不过
void Student::display()         //在类外定义display类函数
{
    cout << "num" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}
void Student::set_value(int num, const char* name, char sex) {
    this->num = num;
    strncpy(this->name, name, sizeof(this->name) - 1);
    this->name[sizeof(this->name) - 1] = '\0';
    this->sex = sex;
}