 #include "LinkedList.h"
#include <iostream>
#include<string>
#include "Student.h"

using namespace std;

list::list() {
	head=NULL;
	tail=NULL;
}
 

list::~list() {
	node *n = this->head, *current = NULL; //initialization part
	// start cleanup of nodes of the list
	while(n) {
		current = n;
		n=n->next;
		delete(current);
    }
	head = tail = NULL;
}


int list::size() {
	node *cur=new node;
  cur=head;
  int size = 0;

  while(cur!=NULL) {
		size++;
		cur=cur->next;
	}
  return size;
}

// at the end of the list
void list::add(Student value) {

	node *newest = new node;
	node *cur = new node;
	cur = head;
	newest->data = value;
	newest->next = NULL;
	if (head == NULL) {
		head = newest;
		tail = newest;
		return;
	}
	while (cur->next != NULL) {
		cur = cur->next;
	}
	cur->next = newest;
	tail = newest;
	return;

}

void list::addHead(Student value) {
	node *newest=new node;
	newest->data=value;
	newest->next=head;
	head=newest;  
}



Student list::deleteTail(){
  if(head == NULL){
    Student s1 = Student();
    return s1;
  }
  if(head->next == NULL) {
    delete head;
  }

  node * second_last = head;
  while(second_last->next->next != NULL)
    second_last = second_last -> next;

  delete(second_last -> next);

  second_last->next = NULL;
  Student temp = head->data;
  return temp;
}




void list::display() {
	node *cur=new node;
	cur=head;

  while(cur!=NULL) {
	  cur->data.output();
    cur=cur->next;
  }
}
 

string list::to_string() {
    string str = "";
    node *temp = new node;
    temp = head;
    while (temp != NULL) {
        //in java I can str + int
        str = str + (temp->data.getName()) + "-" + ::to_string(temp->data.getGpa()) + "\t";
        temp = temp->next;
    }
    return str;
}