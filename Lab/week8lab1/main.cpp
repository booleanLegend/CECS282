// Names: , Matthew Zaldana, James Cho, Edward Kuoch, Jacob Gurley
// Date: 3/9/21
// Lab: Week 8 Lab 1 - strlen, strcpy, strcat
// Demo time: 7:56 PM

#include <iostream>
using namespace std;

/*
The <cstring> library provides several functions for null-terminated arrays - also known as cstrings. Among these functions are the following:

int strlen(char *); // returns the length of the cstring

char * strcpy(char *dest, char *source}; // returns address of dest, also copies source to dest

char * strcat(char *dest, char *source)); // returns address of dest, also concatenates source to the end of dest.


Your task is to write each function listed above and show they work by writing a program that uses them all correctly - and displays the results.

DO NOT include the <cstring> library in your program
*/

int strlen(char *c) {
	int count = 0;
	while(*c != '\0') {
		count++;
		c++;
	}
	return count;
}

// Implements strcat 
char* strcat(char* destination, char* source) {
	// makes ptr point to end of destination string
	char* ptr = destination + strlen(destination);
	
	// Appends characters to source of destination string
	while (*source != '\0')
		*ptr++ = *source++;
	// Terminate destination string
	*ptr = '\0';
	return destination;
}

char* strcpy(char *dest, char *source) {
	char *start = dest;
	while(*source != '\0') {
		*dest = *source;
		dest++;
		source++;
	}
	*dest = '\0';
	return start;
}


int main() {
	char string1[20] = "dolphin";
	char string2[20] = "shark";
	cout << "String 1: " << string1 << " String 2: " << string2 << endl;
	cout << strlen(string1) << " " << strlen(string2) << endl;
	cout << strcpy(string1, string2) << endl;
	cout << "String 1: " << string1 << " String 2: " << string2 << endl;
	cout << strcat(string1, string2) << endl;
	cout << "String 1: " << string1 << " String 2: " << string2 << endl;

	cout << "Press any key to continue: ";
	getchar();
	return 0;
}