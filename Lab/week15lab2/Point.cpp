#include <iostream>
#include "Point.h"
using namespace std;

Point::Point() {
    x = y = 0;
}

Point::Point(int a, int b) {
    x = a;
    y = b;
}

void Point::setX(int a) {
    x =a;
}

int Point::get() {
    return x;
}

void Point::outs() const{
    cout << "\n my point is ( " << x << ", " << y << ")";
}