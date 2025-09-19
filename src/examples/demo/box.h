#pragma once

#include <spdlog/spdlog.h>
#include "xbase/xns.h"

NS_BEG2(examples, demo)

class Box {
private:
    double length;
    double breadth;
    double height;

public:
    void set(double len, double bre, double hei);
    double get_volume() const;
    void print_volume() const;
};

NS_END2