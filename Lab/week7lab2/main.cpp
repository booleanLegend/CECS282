// Names: Matthew Zaldana, Claudia Fierro, Sze Man Tang
// Date: 3/4/21
// Lab: Week 7 Lab 2 - Array of Pointers
// Time: 7:49pm
#include <iostream>

using namespace std;
/*
The idea of this program is to create an array of pointers to objects of the person class. The program can sort a group of person objects based on the alphabetical order of their names or the numerical order of their salary. When the program is first executed it asks for a name. When the user gives it one, it creates an object of type person and sets the name data in this object to the named entered by the user. The program also stores a pointer to the object in the persPtr array.
When the user types n to indicate that no more names will be entered, the program calls the bsort function to sort the objects based on their name member variables. 

Attached is the program file arrayofpointers.cpp. The program is incomplete. You need to complete the function bsort and the main function. The function bsort sorts pointers to objects based on the alphabetical order of their names.

The main function will do the following:

Create an array of pointers to persons.
Input person objects and put them into the array.
Display the unsorted array of persons
Call the function bsort to sort pointers by names.
Display the sorted list
Runtime output

Enter name: Tom
Enter another (y/n)? y
Enter name: John
Enter another (y/n)? y
Enter name: Alice
Enter another (y/n)? y
Enter name: Bill
Enter another (y/n)? n

Unsorted list:
Tom
John
Alice
Bill

Sorted list:
Alice
Bill
John
Tom
*/


// sorts person objects using array of pointers
class person {                    //class of persons
	protected:
		string name;                //person's name
	public:
    	void setName() {             //set the name
			cout << "Enter name: "; cin >> name; 
		}
        void printName() {          //display the name
        	cout << endl << name; 
		}
      	string getName() {           //return the name
        	return name; 
		}
};
////////////////////////////////////////////////////////////////
int main() {
	void bsort(person**, int);     //prototype
   	person* persPtr[100];          //array of pointers to persons
   	int n = 0;                     //number of persons in array
   	char choice;                   //input char
          
	do {                           //put persons in array
		persPtr[n] = new person;    //make new object
		persPtr[n]->setName();      //set person's name
		n++;                        //count new person
		cout << "Enter another (y/n)? "; //enter another
		cin >> choice;              //   person?
	} while (choice=='y' );          //quit on 'n'

   cout << "\nUnsorted list:";
   for (int j=0; j<n; j++) {        //print unsorted list
      persPtr[j]->printName(); }     

   bsort(persPtr, n);             //sort pointers

   cout << "\nSorted list:";
   for(int j=0; j<n; j++)             //print sorted list
      { persPtr[j]->printName(); }
   cout << endl;
   return 0;
   }  //end main()
//--------------------------------------------------------------
void bsort(person** pp, int n)    //sort pointers to persons
   {                              
  // void order(person**, person**);  //prototype
   int j, k;                      //indexes to array

   for(long j=0; j<n-1; j++)           //outer loop
      for(long k=j+1; k<n; k++)        //inner loop starts at outer
//	      order(pp+j, pp+k);
       //order the pointer contents
       { person ** p1 = pp+j;
         person ** p2 = pp+k;
	   
        if( (*p1)->getName() < (*p2)->getName() )
        {
          person* tempptr = *p1;     //swap the pointers
          *p1 = *p2;
          *p2 = tempptr;
        }
       }
   }

