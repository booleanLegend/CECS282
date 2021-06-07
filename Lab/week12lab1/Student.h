#ifndef Student_hpp
#define Student_hpp

#include <string>
#include <stdio.h>

using namespace std;


class Student{
	private:
		string name;
		double gpa;
		int ID;
	public:
		Student();
		Student(string name);
		void setName(string n);
		void setGpa(double g);
		string getName()const;
		double getGpa()const;
    void setId(int id);
		int getId()const;
		void output()const;
};
#endif /* Student_hpp */