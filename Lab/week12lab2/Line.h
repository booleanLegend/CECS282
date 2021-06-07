//
//  Line.h
//  Composition
//

#ifndef Line_h
#define Line_h

#include "Point.h"
#include <stdio.h>


class Line {
    private:
        Point* p1;
        Point* p2;
        // private initialization method (called by constructors and =)
        void init(int x1, int y1, int x2, int y2);
    public:
        // constructors/destructors
        Line(int x1, int y1, int x2, int y2);
        Line(const Line& line);         // copy constructor
        ~Line();                               // destructor
        // methods
        int getX1() const;
        int getY1() const;
        int getX2() const;
        int getY2() const;
        double length() const;
        double slope() const;
        void translate(int dx, int dy);
        // overloaded assignment = operator (to avoid memory leaks)
        const Line& operator=(const Line& rhs);
};
#endif /* Line_h */