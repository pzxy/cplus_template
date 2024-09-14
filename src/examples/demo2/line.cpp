#include <iostream>
#include "examples/demo2/line.h"
#include "examples/demo2/module/line2.h"

using namespace std;
namespace xxx::examples::demo2 {

// 成员函数定义，包括构造函数
    Line::Line() {
        xxx::examples::demo2::Line2 line2{};
        cout << "Object is being created" << endl;
    }

    Line::~Line() {
        // 程序结束时这一行会被打印。
        cout << "Object is being deleted" << endl;
    }
}