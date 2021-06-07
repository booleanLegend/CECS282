// Names: Javier Sanchez, Julian Saldana, Matthew Zaldana
// Date: 4-6-21
// Time Demoed: 8:52PM

/*
Modify lab Week 10-1 to use an object of class student store from the node instead of an integer value only. When you print your list output the student name and GPA.
Note: Implement the class Student definition.
*/

#include <string>
#include <iostream>
#include "LinkedList.h"
#include "Student.h"

using namespace std;


int main(int argc, const char * argv[]) {   
	Student x("Eren");
	Student y("Deku");
	Student z("Foxtrot");
	Student a("StudentA");
	Student b("StudentB");
	Student c("StudentC");
	Student d("StudentD");

	a.setGpa(4.0);
	b.setGpa(3.0);
	c.setGpa(2.0);
	d.setGpa(1.0);
	x.setGpa(4.0);
	y.setGpa(3.0);
	z.setGpa(2.0);

	list myList;

	cout << myList.size();

	myList.add(x);
	myList.add(y);
	myList.add(z);
	myList.add(a);
	myList.addHead(b);
	myList.addHead(c);
	myList.addHead(d);

	cout << "\nSize..." << myList.size()<< endl;
	cout << myList.to_string();
	cout << "\nSize..." << myList.size()<< endl;
	cout << myList.to_string();
	cout << "\nDelete Tail.. " << myList.deleteTail().getName();
	cout << "\nSize..." << myList.size()<< endl;
	cout << myList.to_string();
	return 0;
}