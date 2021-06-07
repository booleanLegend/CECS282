// Names: Matthew Zaldana, Javier Sanchez, Mark Fastner
// Week 3 Lab 2 - Array of Objects
// Demo time: 8:02 pm
#include <iostream>
#include "Student.h"
using namespace std;

Student::Student() {
	name = "BLANK";
	score = 0;
	grade= 'A';
}

Student::Student(string setName, int setScore) {
	name = setName;
	score = setScore;
	if (score >= 90 && score <= 100)
		grade = 'A';
	else if (score >= 80 && score <= 89)
		grade = 'B';
	else if (score >= 70 && score <= 79)
		grade = 'C';
	else if (score >= 60 && score <= 69)
		grade = 'D';
	else
		grade = 'F';
}

void Student::print() {
  cout << "Name: " << name << "		Score: " << score << "		Grade: " << grade << endl;
}