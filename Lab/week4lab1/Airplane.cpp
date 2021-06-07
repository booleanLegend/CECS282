#include "Airplane.h"
#include <iostream>

using namespace std;

Airplane::Airplane() {
	model = " ";
	minAltitude = 0;
  	setAltitude();
  	maxAltitude = 0;
}


Airplane::Airplane(string model, int minAltitude, int maxAltitude) {
	this->model = model;
	this->minAltitude = minAltitude;
	this->maxAltitude = maxAltitude;
	setAltitude();
}

void Airplane::setAltitude() {
	altitude = rand() % (maxAltitude - minAltitude) + minAltitude;
  //cout << "\nAltitude for " << model << " : " << altitude << "\n";
}

void Airplane::display() {
	cout << "✈ " << model << ":" << altitude << endl ;
}

int Airplane::getAltitude() {
	return this->altitude;
}

bool Airplane::crash(Airplane a) {
	//((a.getAltitude()-altitude)<200)&&((a.getAltitude()-altitude)>-200)
  int difference = a.getAltitude() - this->altitude;
  if ((difference <200)&&(difference > -200))
		return true;
  else 
    return false;
}
