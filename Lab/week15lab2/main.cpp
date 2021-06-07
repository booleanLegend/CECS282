// Deva Nguyen,  Aryan Sanyal, Joshua Decano,  Matthew Zaldana
// CECS 282 - Setion 06
// Week 15 - Lab 02
// Time Demoed: 7:53 PM

#include <iostream>
#include <vector>
#include "Point.h"
using namespace std;

int main() {
	vector<Point> vect{Point(1,1), Point(1,2), Point(5,10)};
	cout << "Initial vector: \n";
	for (auto it = vect.begin(); it!= vect.end(); ++it) {
    	it->outs();
  	}
	cout << endl;
  	vect.push_back(Point(8,4));
	cout << "Pushed back (8, 4)\n";	
	for (auto it = vect.begin(); it!= vect.end(); ++it) {
		it->outs();
	}
	cout << endl;
		vect.insert(vect.begin(), Point(15,9));
	cout << "After inserting Point (15,9)" << endl;
	for (auto it = vect.begin(); it!= vect.end(); ++it) {
		it->outs();
	}
  	cout << endl;
	vect.erase(vect.begin());

  	cout << "After removing first element" << endl;
	for (auto it = vect.begin(); it!= vect.end(); ++it) {
		it->outs();
	}
}