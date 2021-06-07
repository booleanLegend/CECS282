#ifndef Point_h
#define Point_h

#include <stdio.h>
#include <iostream>

using namespace std;

class Point {

    private:
        int x;
        int y;
    public:
        // constructor
        Point(int x = 0, int y = 0);
        // methods

        double distance(const Point& p) const;
        int    getX() const;
        int    getY() const;
        void   setLocation(int x, int y);
        void   translate(int x, int y);

        // overloaded operators
        Point  operator+(const Point& p) const;
        bool   operator==(const Point& p) const;
        bool   operator!=(const Point& p) const;
        friend ostream& operator<<(ostream& out, const Point& p);
};
#endif /* Point_hpp */