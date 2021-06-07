#ifndef AIRPLANE_H
#define AIRPLANE_H
#include <string>
using namespace std;

class Airplane{
	private:
		string model;
		int minAltitude, maxAltitude, altitude;
  public:
		Airplane();
		Airplane(string model, int minAltitude, int maxAltitude);
		void display();
		void setAltitude();
		bool crash(Airplane);
    int getAltitude();
};
#endif