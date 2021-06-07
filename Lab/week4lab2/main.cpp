// Names: Thomson Nguyen, Matthew Zaldana, Juan Anaya, Efrain Miranda
// Week 4 Lab 2 - sort Numbers using Reference Variables
// Date: 02/11/2021
// Demo Time: 8:03pm

#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std;

int sort6(int &a, int &b, int &c, int &d, int &e, int &f);

int main() 
{
	srand(time(NULL));
	int a = rand() % 401 + 100;
	int b = rand() % 401 + 100;
	int c = rand() % 401 + 100;
	int d = rand() % 401 + 100;
	int e = rand() % 401 + 100;
	int f = rand() % 401 + 100;

	cout << "A: " << a << "\nB: " << b << "\nC: " << c << "\nD: " << d 
			<< "\nE: " << e << "\nF: " << f << endl;
	cout << "Sum: " << sort6(a, b, c, d, e, f) << endl;

	cout << "\nSorted\n";
	cout << "A: " << a << "\nB: " << b << "\nC: " << c << "\nD: " << d 
			<< "\nE: " << e << "\nF: " << f << endl;

}

int sort6(int &a, int &b, int &c, int &d, int &e, int &f) {
	int sum = 0;
	sum = a + b + c + d + e + f;
	int list[6] = {a, b, c, d, e, f};
	sort(list, list + 6);

	a = list[0];
	b = list[1];
	c = list[2];
	d = list[3];
	e = list[4];
	f = list[5];

  	return sum;
}