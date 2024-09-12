#include <iostream>
#include "demo/box.h"
#include "module1/line.h"

using namespace std;

int main() {
    Line line1{};
    Box box1{};
    box1.set(2, 2.0, 4.9);
    cout << "a: " << box1.get() << endl;
}
