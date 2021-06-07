//  Point.cpp
//  Composition
//

#include <iostream>
#include <cmath>
#include "Point.h"

using namespace std;


// If no coordinates are specified, uses (0, 0).
Point::Point(int x, int y) {
    setLocation(x, y);
}
 

// Returns the distance between two points.
double Point::distance(const Point& p) const {
    int dx = x - p.getX();
    int dy = y - p.getY();
    return sqrt(dx*dx + dy*dy);
}


// Returns the x coordinate of this Point.
int Point::getX() const {
    return x;
}

 
// Returns the y coordinate of this Point.
int Point::getY() const {
    return y;
}

 
// Sets the x/y coordinates of this Point to the given values.
void Point::setLocation(int x, int y) {
    this->x = x;
    this->y = y;
}

 
// Shifts this point's location by the given amount.
void Point::translate(int dx, int dy) {
    setLocation(x + dx, y + dy);
}


// operators overloading

// add two Points.
Point Point::operator+(const Point& p) const {
    Point result(x + p.getX(), y + p.getY());
    return result;
    // return Point(this->x + p.getX(), this->y + p.getY());
}

 
// check Points equality ==
bool Point::operator==(const Point& p) const {
    return x == p.getX() && y == p.getY();
}

 
// check if two Points are not equal !=
bool Point::operator!=(const Point& p) const {
    return !(*this == p);
}

 
// cout << Point
ostream& operator<<(ostream& out, const Point& p) {
    out << "(" << p.getX() << ", " << p.getY() << ")";
    return out;
}