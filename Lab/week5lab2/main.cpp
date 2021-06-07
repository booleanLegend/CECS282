// Names: Matthew Zaldaña, Giovanni Contreras, Alex Camacho, Destin Byrd
// CECS 282 - Sec 06
// February 18, 2021
// Time Demoed: 8:06 PM

#include <iostream>
#include <string>
#include "can.h"
using namespace std;

void pour(Can &c1, Can &c2);
Can mix(Can c1, Can c2);
void stretch(Can& c1, int v);

int main() {
	Can c1("Peaches", 15);
	Can c2("Peas", 20);
	Can c3("soup", 24);
	Can c4 = mix(c1,c3); 	// c4 will have a mixture of c1 and c3. c1 and c3 remain unchanged
	pour(c2,c1); 			// pour c1 into c2. c1 will be empty
	stretch(c3,20); 		// stretch c3 by 20 ounces
	cout << "C1 - ";
	c1.display(); 			// empty:0
	cout << "C2 - ";
	c2.display(); 			// Peas,Peaches:35
	cout << "C3 - ";
	c3.display(); 			// soup:44
	cout << "C4 - ";
	c4.display(); 			// Peaches, soup:39

	return 0; 
}

void pour(Can &c1, Can &c2){
	c1.setContents(c1.getContents() + ", " + c2.getContents());
	c1.setVolume(c1.getVolume() + c2.getVolume());
  	c2.setContents("");
  	c2.setVolume(0);
}

Can mix(Can c1, Can c2) {
	Can c3(c1.getContents() + ", " + c2.getContents(), c1.getVolume() + c2.getVolume()) ;
	return c3;
}

void stretch(Can& c1, int v){
	int newV = c1.getVolume() + v;
	c1.setVolume(newV);
}