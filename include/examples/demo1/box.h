#pragma once

namespace xxx::examples::demo1{
    class Box
    {
    public:
        double length;
        double breadth;
        double height;
        // 成员函数声明
        double get() const;
        void set(double len, double bre, double hei);
    };
}

