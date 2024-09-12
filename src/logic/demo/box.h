#pragma once

class Box
{
public:
    double length;
    double breadth;
    double height;
    // 成员函数声明
    double get(void) const {
        return length * breadth * height;
    }
    void set(double len, double bre, double hei);
};
