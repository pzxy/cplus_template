#include "examples/demo1/box.h"

namespace xxx::examples::demo1 {
// 成员函数定义
    void Box::set(double len, double bre, double hei) {
        length = len;
        breadth = bre;
        height = hei;
    }

    double Box::get() const {
        return length * breadth * height;
    }

}
