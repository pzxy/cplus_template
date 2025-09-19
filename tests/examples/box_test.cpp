#include <gtest/gtest.h>
#include "demo/box.h"

using namespace examples::demo;

// 测试基本体积计算
TEST(box_test, basic_volume_calculation) {
    Box box{};
    box.set(1.0, 2.0, 3.0);
    double volume = box.get_volume();
    ASSERT_DOUBLE_EQ(volume, 6.0);
}

// 测试浮点数体积计算
TEST(box_test, float_volume_calculation) {
    Box box{};
    box.set(1.5, 2.5, 3.5);
    double volume = box.get_volume();
    ASSERT_DOUBLE_EQ(volume, 13.125);
}