#include "demo/box.h"
#include "xbase/xns.h"

NS_BEG2(examples, demo)

// 成员函数定义
    void Box::set(double len, double bre, double hei) {
        length = len;
        breadth = bre;
        height = hei;
    }

    double Box::get_volume() const {
        return length * breadth * height;
    }

    void Box::print_volume() const {
        double volume = get_volume();
        spdlog::info("Box volume: {}", volume);
    }

NS_END2
