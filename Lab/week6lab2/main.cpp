// Name: Saul Martinez, Colin Creasman, Matthew Zaldana
// Lab: Week 6 Lab 2 - Car Lot Passing
// Date: 2/25/21
// Time Demoed: 8:20 pm

#include <iostream>
using namespace std;


struct Car {
	string make;
	string model;
    string color;
    int year;
	int currentMileage;
	int mpg;
	int salePrice;
};

void displayCars(Car argCar[]);

int main() {
	struct Car carLot[5];

    carLot[0].make = "Toyota";
    carLot[0].model = "Prius";
    carLot[0].color = "grey";
    carLot[0].year = 2008;
    carLot[0].currentMileage = 200000;
    carLot[0].mpg = 45;
    carLot[0].salePrice = 2000;
	
	carLot[1].make = "Volkswagen";
	carLot[1].model = "GTI Manual";
	carLot[1].color  = "Dark forest green";
	carLot[1].year = 2017;
	carLot[1].currentMileage = 10000;
	carLot[1].mpg = 30;
	carLot[1].salePrice = 12000;

    carLot[2].make = "Toyota";
    carLot[2].model = "Echo";
    carLot[2].color = "grey";
    carLot[2].year = 2003;
    carLot[2].currentMileage = 167000;
    carLot[2].mpg = 35;
    carLot[2].salePrice = 3200;

    carLot[3].make = "Pagani";
    carLot[3].model = "Zonda R";
    carLot[3].color = "Yellow on Black";
    carLot[3].year = 2007;
    carLot[3].currentMileage = 2000;
	carLot[3].mpg = 25;
	carLot[3].salePrice = 2800000;
    
	carLot[4].make = "Tesla";
    carLot[4].model = "S";
    carLot[4].color = "Red";
    carLot[4].year = 2019;
    carLot[4].currentMileage = 5000;
	carLot[4].mpg = 120;
	carLot[4].salePrice = 70000;

	displayCars(carLot);
	return 0;
}

void displayCars(Car *argCar) {
    for (int i = 0; i < 5; i ++){
        cout << "Make: " << argCar[i].make << endl;
        cout << "Model: " << argCar[i].model << endl;
        cout << "Color: " << argCar[i].color << endl;
        cout << "Year: " << argCar[i].year << endl;
        cout << "currentMileage: " << argCar[i].currentMileage << endl;
        cout << "MPG: " << argCar[i].mpg << endl;
        cout << "salePrice: " << argCar[i].salePrice << endl;

        cout <<"------------------------------------"<< endl;
    }
}