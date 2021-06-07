// Matthew Chen
// James Cho
// Matthew Zaldana
// Class (CECS 282-06)
// Week 8 Lab 2
// Due Date 3/11/2021
// Demoed at 7:45pm

#include <iostream>

using namespace std;

const int SIZE = 5;


int main () 
{
  int grade[SIZE] = {10, 20, 30, 40, 50};
  int * aptr[SIZE]; 
  int average = 0;
    for (int i = 0; i < SIZE; i++) {
      aptr[i] = &grade[i];
    }
    int sum = 0;
    for (int i = 0; i < SIZE; i++) 
    {
      sum += *aptr[i];
      cout << "Value of grade[" << i << "] = ";
      cout << *aptr[i] << endl;
      cout << aptr + i << endl; //increments the address of aptr by 8 bytes
      cout << aptr[i] << endl; //indexes through aptr
   }
  average = sum / SIZE;
  cout << average << endl;

   return 0;

}