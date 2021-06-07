// Names: Mark Fastner, Erik Nguyen, Destin Byrd, Matthew Zaldana
// Week 7 lab 1
// 3/2/2021
// Demo time: 7:57


#include <iostream>
using namespace std;
/*
Write the function swap that swaps the content of two integer variables using the following prototype: void swap (int *x, int & y) 
Write the main function that calls swap, show the content of the variables declared in main before and after calling the function.  
*/

void swap(int *x, int &y) {
	int temp = *x;
	*x = y;
	y = temp;
}

int main() {
	int a = 2;
	int b = 7;
	cout << "Before:" << endl;
	cout << "a is " << a << " and b is " << b << endl;
	swap(&a, b);
	cout << "After: " << endl;
	cout << "a is now " << a << " and b is now " << b << endl;
	cout << "Press any key to continue: ";
	getchar();
	return 0;
}