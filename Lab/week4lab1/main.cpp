// Names: Giovanni Quevedo, Ghabrille Ampo, Matthew Zaldana
// Week 4 Lab 1 Random Number Airplane Simulation
// Demo Time:8:2
// Date: 2-9-21

#include <iostream>
#include "Airplane.h"
using namespace std;

int main() {
  	srand(time(NULL));
	Airplane a1 = Airplane("Boeing 747",2000,10000);
	Airplane a2 = Airplane("MIG Fighter",2000,10000);
	int crashCount = 0;
	while(true){
		for (int i = 0; i < 1000; i++) {
			a1.setAltitude();
			a2.setAltitude();
      		if (a1.crash(a2)) {
				crashCount++;
				a1.display();
				cout << " crashed with ";
				a2.display();
				cout << endl;
			}
			
		}
		if (crashCount > 5) {
			break;
		} else { 
      cout << "Not enough crashing! Restarting simulation..." <<endl;
		}
  } 
	double per = double(crashCount) / 10.0;
	cout << "1,000 trials were ran, and our planes crashed " << crashCount << " time(s)." << endl;
	cout << "The planes crashed " << per << "% of the time" << endl;
}
