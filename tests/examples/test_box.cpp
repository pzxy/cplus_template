#include <gtest/gtest.h>
#include "examples/demo1/box.h"

using namespace xxx::examples::demo1;

class test_demo1 : public testing::Test {
protected:
    void SetUp() override {
    }
    void TearDown() override {
    }
public:
};

TEST(test_demo1, box
) {
    Box box1{};
    box1.set(1, 2, 3);
    auto a = box1.get();
    ASSERT_EQ(a, 6);
}