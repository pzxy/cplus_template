#include <iostream>
#include "module2/line2.h"

using namespace std;

// 成员函数定义，包括构造函数
Line2::Line2(void)
{
    cout << "Line2 Object is being created" << endl;
}
Line2::~Line2(void)
{
    // 程序结束时这一行会被打印。
    cout << "Line2 Object is being deleted" << endl;
}