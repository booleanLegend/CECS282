#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <stdio.h>
#include<string>
#include "Student.h"
using namespace std;


struct node {
	Student data;
	node *next;
};


class list {
	private:
		node *head, *tail;
	public:
		list();
		~list();
		int size();
		void add(Student s);
		void addHead(Student value);
    // int deleteTail();
		Student deleteTail();
		void display();
		string to_string();
};
#endif /* LinkedList_hpp */