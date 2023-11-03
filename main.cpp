#include "Box.hpp"
#include <iostream>
using namespace std;

int main(void) {
    Box a(10, 10, 10), b(20, 20, 20), c;

    //1
    c = a + b;
    printBox(c);

    //2
    cout << (a == b) << endl;

    //3
    printBox(a);
    return 0;
}