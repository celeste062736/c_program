#include "Box.hpp"

using namespace std;

Box::Box() : length(0), width(0), height(0) {
    isEmpty = true;
}

Box::Box(double w, double l, double h) : length(l), width(w), height(h) {
    isEmpty = true;
}

double Box::getVolume() {
    return length * width * height;
}

double Box::getLength() {
    return length;
}

double Box::getWidth() {
    return width;
}

double Box::getHeight() {
    return height;
}

Box Box::operator+(Box& ref) {
    double w;
    double l;
    double h;

    w = this->width + ref.getWidth();
    l = this->length + ref.getLength();
    h = this->height + ref.getHeight();

    Box newBox(w, l, h);

    return newBox;
}

bool Box::operator==(Box& ref) {
    return ((this->width == ref.getWidth()) &&
             this->length == ref.getLength() &&
             this->height == ref.getHeight());
}

void printBox(Box& ref) {
    cout << "Box Length: " << ref.getLength() << endl;
    cout << "Box Width: " << ref.getWidth() << endl;
    cout << "Box Height: " << ref.getHeight() << endl;
    cout << "Box Volume: " << ref.getVolume() << endl;
}

