#include "Box.hpp"
#include <iostream>
using namespace std;

int main(void) {
    Box a(10, 10, 10), b(20, 20, 20), c;

    c = a + b;
    printBox(c);

    cout << (a == b) << endl;

    printBox(a);
    return 0;
}