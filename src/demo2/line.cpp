#include <iostream>

using namespace std;

// 成员函数定义，包括构造函数
Line::Line()
{
    Line2 line2{};
    cout << "Object is being created" << endl;
}
Line::~Line()
{
    // 程序结束时这一行会被打印。
    cout << "Object is being deleted" << endl;
}