// Name:Matthew Zaldana, Jonathan Truong, Giovanni Quevedo, Alex Camacho
// CECS 282 - Section 6
// Date: 4-27-21
// Week 15 Lab 1 Map
// Demo Time - 7:45 PM


#include <iostream>
#include <fstream>
#include <map>
#include <string>
using namespace std;

// Use typedef to define StrIntMap as map<string,int>
// YOUR CODE
typedef std::map<string,int> StrIntMap;

//Function countWord to count the number of word use in as filestream and words as a map container
//YOUR CODE

void countWords(istream& in, map<string,int>& words) {
	string s;
	while (in >> s) {
		//While in has input
		++words[s];
	}
}       

int main(){
  	//Define an ifstream object called in to associate the file data.txt
  	//YOUR CODE
  	ifstream in("data.txt");
  	if (!in)
	  exit(EXIT_FAILURE);

  	//Declare w as a map container - key as string , value as integer. Use type StrIntMap
  	//YOUR CODE
  	StrIntMap w;
   
	//Call function countWords
	//YOUR CODE
	countWords(in, w);
		
	//Use a for loop and iterator today display the keys and values
	//YOUR CODE
		
	for (map<string,int>::iterator p = w.begin(); p != w.end(); p++) {
		cout << p->first << " : " << p->second << " times.\n";
	}
}