// Group: Matthew Zaldana, Mark Fastner, Abraham Ungos
// Date: 2/23/21
// Week 6 - Lab 1 (Pointers)
// Time Demoed: 7:51 PM

#include <iostream>
using namespace std;

int main() {
	long value1 = 200000;
	long value2;
	long *longPtr;
	longPtr = &value1;
	cout << *longPtr << endl;
	value2 = *longPtr;
	cout << value2 << endl;
	cout <<  &value1 << endl;
	cout << longPtr << endl;  
}
