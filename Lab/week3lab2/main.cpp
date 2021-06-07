// Names: Matthew Zaldana, Javier Sanchez, Mark Fastner
// Week 3 Lab 2 - Array of Objects
// Demo time: 8:02 pm

#include <iostream>
#include "Student.h"

using namespace std;

/*
Create a class named Student with private data members – name (string), score (int), and  grade (char). The class Student should have the following constructors, and function:

Student ();//Empty constructor
Student (string name, int score);
void print();//Display name (left  alignment ), score (right alignment ), and grade (right alignment). 

To determine the grade, use the following grade scale:

A  100-90
B  89-80
C  79-70
D  69-60
D  59-0

In the parameter constructor, you write code to assign a grade,

Write the main function to create an array of Student objects. Initialize the following Student objects using parameter constructor:

Tom    85
Alice   71
Jack    93
Mary   65
Sue    54

The program then print students' name, score, and grade.


Tom         85     B 
Alice        71     C
Jack        93     A
Mary       65     D
Sue        40     F
*/
int main() {
	Student students[5];
	Student s1("Tom", 85);
	Student s2("Alice", 71);
	Student s3("Jack", 93);
	Student s4("Mary", 65);
	Student s5("Sue", 54);
	
	students[0] = s1;
	students[1] = s2;
	students[2] = s3;
	students[3] = s4;
	students[4] = s5;

	for (int i = 0; i < 5; i++) {
		students[i].print();
	}
}