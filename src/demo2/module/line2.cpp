#include <iostream>

using namespace std;

// 成员函数定义，包括构造函数
Line2::Line2()
{
    cout << "Object2 is being created" << endl;
}
Line2::~Line2()
{
    // 程序结束时这一行会被打印。
    cout << "Object2 is being deleted" << endl;
}