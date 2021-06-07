// Names: Melissa Gaines, Jacob Gurley, Matthew Zaldana
// Due Date: 5-6-21
// Week 16 Lab 2 - Template Fibonacci
// Demo Time - 7:55 pm

#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;


template <class type>


type Fibonacci(type n) {
	type x = 0, y = 1, z = 0;
  	for (type i = 0; i < n; i++) {
		z = x + y;
      	x = y;
      	y = z;
    	if(z < 0) {
      		throw string("Overflow error at " + to_string(i));
      		break;
    	}  
  	}
    return z;
}


int main() {
	short s1 = 125;
	char c1 = 125;
	
	int i1 = 125;
	long l1 = 125;
	float f1 = 125;
	double d1 = 125;
	string error = "Error! Overflow detected!";

	try {
		cout << "Data type short has "<< sizeof(s1)<< " bytes."<< endl;
		cout << "Fibonacci(" << s1 << ") is: " << Fibonacci(s1);
	} 
  catch (string error) {
		cout << error << endl;
	}
	try {
		cout << "Data type char has "<< sizeof(c1)<< " bytes."<< endl;
		cout << "Fibonacci(" << (int)c1 << ") is: " << Fibonacci(c1);
	} 
  catch (string error) {
		cout << error << endl;
	}
	try {
		cout << "Data type int has "<< sizeof(i1)<< " bytes." << endl;
		cout << "Fibonacci(" << i1 << ") is: " << Fibonacci(i1);
	} 
  catch (string error) {
		cout << error << endl;
	}
	try {
		cout << "Data type long has "<< sizeof(l1)<< " bytes."<< endl;
		cout << "Fibonacci(" << l1 << ") is: " << Fibonacci(l1);
	} 
  catch (string error) {
		cout << error << endl;
	}
	try {
		cout << "Data type float has "<< sizeof(f1)<< " bytes."<< endl;
		cout << "Fibonacci(" << f1 << ") is: " << Fibonacci(f1) << endl;
	} 
  catch (string error) {
		cout << error << endl;
	}
	try {
		cout << "Data type double has "<< sizeof(d1)<< " bytes."<< endl;
		cout << "Fibonacci(" << d1 << ") is: " << Fibonacci(d1);
	} 
  catch (string error) {
		cout << error << endl;
	}
}