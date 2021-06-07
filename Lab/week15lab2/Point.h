#ifndef Point_h
#define Point_h
#include <stdio.h>

class Point {
	private:
		int x, y;
	public:
		Point();
		Point(int, int);
		void setX(int);
		int get();
		void outs() const;
};
#endif