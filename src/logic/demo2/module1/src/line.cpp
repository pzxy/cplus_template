#include <iostream>
#include "module1/line.h"

using namespace std;

// 成员函数定义，包括构造函数
Line::Line(void)
{
    cout << "Object is being created" << endl;
}
Line::~Line(void)
{
    // 程序结束时这一行会被打印。
    cout << "Object is being deleted" << endl;
}