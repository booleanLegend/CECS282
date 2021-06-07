// Names: Spencer Breding, Matthew Chen, Matthew Zaldana
// Date: 4-20-2021
// Week 14 Lab 1 Recursion
// Demo time - 7:54pm

#include <iostream>
using namespace std;
/*
Write an iterative and a recursive function to calculate x^ y without using the power function. (x and y are real values that can be entered by the user) 

You should always use a clear prompt and annotation messages for inputs and outputs

Write a main function to demo your power function. Calculate the following in a loop

2 ^ 0   to 2 ^ 36

Explain any anomalies.
*/
int recursivePower(int, int);
int iterativePower(int, int);

int main() {
	int x = 2;
	cout << "Recursive: " << endl;
	for (int i = 0; i <= 36; i++) {
		cout << "2 ^ " << i << ": "<< recursivePower(x, i) << endl;
	}
	cout << "Iterative: " << endl;
	for (int i = 0; i <= 36; i++) {
		cout << "2 ^ " << i << ": "<< iterativePower(x, i) << endl;
	}

}

int recursivePower(int x, int y) 
{
  	static int base = x;
	if (y > 1) {
		return recursivePower(x * base, --y);
  	} else if (y == 0) {
    	return 1;
	}
  	return x;
}


int iterativePower(int x, int y) {
  	static int base = x;
	if (y > 0) {
		for (int i = 1; i < y; i++) {
			x *= base;
		}
	} else {
		return 1;
  	}
  	return x;
}