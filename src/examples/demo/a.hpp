#pragma once

#include "xbase/xns.h"
#include <iostream>

NS_BEG2(examples, demo)

void print_a();


void print_a() {
    for (int i = 0; i < 10; i++) {
        std::cout << "aaaaaaa" << std::endl;
    }
}

NS_END2