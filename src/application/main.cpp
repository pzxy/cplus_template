#include <iostream>
#include "examples/demo1/box.h"

using namespace std;

int main() {
    xxx::examples::demo1::Box box{};
    box.set(1,2.3,5);
    cout << "this box size is : "<< box.get() << endl;
}