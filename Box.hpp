#include <iostream>

class Box {
private:
    double length;
    double width;
    double height;
    bool isEmpty;
public:
    Box();
    Box(double w, double l, double h);
    
    double getVolume();
    double getLength();
    double getWidth();
    double getHeight();

    Box operator+(Box& ref);
    bool operator==(Box& ref);
};

void printBox(Box& ref);