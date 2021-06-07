#include "Student.h"
#include <iostream>

using namespace std;

Student::Student() {
}

Student::Student(string name) {
	this->name = name;
}

void Student::setName(string name) {
	name = name;
}

string Student::getName() const {
  return this->name;
}

void Student::setGpa(double g) {
	gpa = g;
}

double Student::getGpa()const {
	return this->gpa;
}

int Student::getId()const {
	return this->ID;
}

void Student::output()const {
	cout << "Name: " << this->name << "-GPA: " << this->gpa << endl;
}

void Student::setId(int id){  
  ID = id; 
}