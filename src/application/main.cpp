#include <iostream>
#include "examples/demo1/box.h"

using namespace std;

int main() {
    Box box{};
    box.set(1,2,3);
    cout << "a: "<< box.get() << endl;
}