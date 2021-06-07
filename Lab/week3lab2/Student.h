#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class Student {
	private:
		string name;
		int score;
		char grade;

	public:
		Student();
		Student(string name, int score);
		void print();  
};

#endif