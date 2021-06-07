// Names: Matthew Zaldana, Abraham Ungos, Melissa Gaines, Aryan Sanyal
// Week 14 - Lab 2 - int overflow / exception handling
// 4/22/21
// Time Demoed: 7:57 PM
#include <iostream>
#include <climits>
using namespace std;
/*
Write a function called safeAdd that adds two positive integers together and returns the sum. However, if the function detects that the two integers will cause integer overflow, the function will throw an exception.

Write a test driver that has a try/catch block around the safeAdd function. Build 2 arrays with the following values:

Array 1: INT_MAX, INT_MAX, 1, 42

Array 2: INT_MAX, 1, 200, 1200

Create a loop that adds each array pair using the safeAdd function. Inside the loop, print the 2 integers that are being added together as well as the sum. If the safeAdd produces an exception, notify the user by printing out the 2 numbers and an error message.
*/
int safeAdd(int, int);

int main() {
	int arr1[] = {INT_MAX, INT_MAX, 1, 42};
  	int arr2[] = {INT_MAX, 1, 200, 1200};
	int counter = 0;
  	for (int i = 0; i < 4; ++i) {
      try {
			cout << arr1[i] << " + " << arr2[i] << " = " << safeAdd(arr1[i], arr2[i]);
			cout << endl;
			++counter;
    	} catch (...){
		    cout << " produced an integer overflow error.\n";
	    }
	} 
}

int safeAdd(int a, int b) {
	int sum = a + b;
  if (sum < 0) {
    throw ("Integer Overflow");
  } else {
    return sum;
  }
}