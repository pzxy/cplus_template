#include <iostream>
#include <spdlog/spdlog.h>
#include "demo/box.h"

using namespace std;

int main() {
    spdlog::info("Welcome to spdlog!");
    examples::demo::Box box{};
    box.set(1, 2.3, 5);
    box.print_volume();
}