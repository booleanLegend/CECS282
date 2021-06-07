// Names: Alex Camacho, Matthew Zaldana, John Apale, Erik Nguyen
// Lab 12 Week 2
// Date: 4-8-21
// Demo Time: 8:18PM


/*
Line segment is defined by two end points (a Line has two Points).

Given the Point class and part of the Line class. Implement the following function definitions in the Line class:

The helper initialization function
The normal constructor
The length function using the distance function from the point class
The slope function that calculates the slope of the line
Write a simple driver that outputs (annotate your output):
The distance between two points
A message showing whether or not two points are equal
The length and the slope of different lines
*/
#include <iostream>
#include "Line.h"
#include "Point.h"
using namespace std;

int main() {
	Line l1(3,5,6,7);
	Line l2(50,100,200,400);
  
  Point p1(l1.getX1(),l1.getY1());
  Point p11(l1.getX2(),l1.getY2());
  
  Point p2(l2.getX1(),l2.getY1());
  Point p22(l2.getX2(),l2.getY2());
	
	cout << "The points for Line 1 are: (" << l1.getX1() << ", " << l1.getY1() 
		<< ") and (" << l1.getX2() << ", " << l1.getY2() << ")" << endl;
	cout << "The points for Line 2 are: (" << l2.getX1() << ", " << l2.getY1()
		<< ") and (" << l2.getX2() << ", " << l2.getY2() << ")" << endl;
	cout << "The distance/length between the 2 points in Line 1 is: " 
		<< l1.length() << endl;
	cout << "The distance/length between the 2 points in Line 2 is: " 
		<< l2.length() << endl;
	cout << "The slope for Line 1 is: " << l1.slope() << "\nand the slope for	Line 2 is: " << l2.slope() << endl;
	cout << "Are two x-coords points on the same line equal: " << (p1 == p11) << endl;
	cout << "Are two y-coords points on the same line equal: " << (p2 == p22) << endl;
	cout << "Press any key to continue...";
	getchar();
	return 0;
}