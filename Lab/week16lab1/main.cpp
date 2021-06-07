// Name: Matthew Zaldana, Alan Marin, Jonathan Truong,Javier Sanchez
// Date: 5-4-21
// Week 16 lab 1
// Demo Time - 8:05pm
#include<iostream>
#include<iomanip>
using namespace std;


class pointType {
	public:
		void setPoint(double x, double y);
		void print() const;
		double getX() const;
		double getY() const;
		pointType(double x = 0.0, double y = 0.0);
	
	protected:
		double xCoordinate;
		double yCoordinate;
};


class circleType: public pointType {
	public:
		void print() const;
		void setRadius(double r);
		double getRadius() const;
		double getCircumference() const;
		double getArea() const;
		circleType(double x = 0.0, double y = 0.0, double r = 0.0);
	
	protected:
		double radius;
};


class cylinderType: public circleType {
	public:
		void print() const;
		void setHeight(double h);
		void setBaseCenter(double x, double y);
		void setCenterRadiusHeight(double x, double y,
		double r, double h);
		
		double getHeight() const;
		double getVolume() const;
		double getSurfaceArea() const;
		cylinderType(double x = 0.0, double y = 0.0,
		double r = 0.0, double h = 0.0);
	
	protected:
		double height;
};


void pointType::setPoint(double x, double y) {
	xCoordinate = x;
	yCoordinate = y;
}

void pointType::print() const {
	cout << "(" << xCoordinate << ", " << yCoordinate << ")" << endl;
}

double pointType::getX() const {
	return xCoordinate;
}

double pointType::getY() const {
	return yCoordinate;
}

pointType::pointType(double x, double y) {
	xCoordinate = x;
	yCoordinate = y;
}

void circleType::print() const {
	cout << "Base Center: ";
	pointType::print();
	cout << endl;
	
	cout << "Base Radius: " << radius << endl;
	cout << "Base Circumference: " << getCircumference() << endl;
	cout << "Base Area: " << getArea() << endl;
}

void circleType::setRadius(double r) {
	radius = r;
}

double circleType::getRadius() const {
	return radius;
}

double circleType::getCircumference() const {
	return (2 * 3.1416 * radius);
}

double circleType::getArea() const {
	return (3.1416 * radius * radius);
}

circleType::circleType(double x, double y, double r):pointType(x,y) {
	radius = r;
}

//YOUR CODE TO IMPLMENT THE CONSTRUCTORS AND FUNCTIONS IN THE CLASS Cylinder
cylinderType::cylinderType(double x, double y, double r, double h):circleType(x,y,r) {
	height = h;
}

void cylinderType::setHeight(double h) {
	height = h;
}

void cylinderType::setBaseCenter(double x, double y) {
  	this->setPoint(x,y);
}

void cylinderType::setCenterRadiusHeight(double x, double y, double r, double h) {
	this->setPoint(x, y);
	this->setRadius(r);
	height = h;
}

double cylinderType::getHeight() const{
	return height;
}

double cylinderType::getSurfaceArea() const {
	double const PI = 3.1416;
	return (2 * getArea()) + (2 * PI * getRadius() * getHeight());
}

double cylinderType::getVolume() const {
	return ( height *  getArea());
}

void cylinderType::print() const {
	circleType::print(); // prints radius Circumference area
	cout << "Cylinder Height: " << height << endl;
	cout << "Cylinder Surface Area: " << getSurfaceArea() << endl;
	cout << "Cylinder Volume: " << getVolume() << endl;
}



int main() {
	cylinderType cylinder1(3, 2.5, 4, 2.5);
	cylinderType cylinder2;

	cout << fixed << showpoint;
	cout << setprecision(2);

	cout << "***** Cylinder 1 *****" << endl;
	cylinder1.print();
	cout << endl;

	cylinder2.setPoint(-2.5, 7);
	cylinder2.setRadius(4);
	cylinder2.setHeight(3.9);
	cout << "***** Cylinder 2 *****" << endl;
	cylinder2.print();
	cout << endl;

	double x, y;
	double r;
	double h;

	cylinderType cylinder3;

	cout << "Enter x Coordinates of the center: ";
	cin >> x;
	cout << endl;

	cout << "Enter y Coordinate of the center: ";
	cin >> y;
	cout << endl;

	cout << "Enter base radius: ";
	cin >> r;
	cout << endl;

	cout << "Enter cylinder height: ";
	cin >> h;
	cout << endl;

	cylinder3.setCenterRadiusHeight(x, y, r, h);

	cout << "***** Cylinder 3 *****" << endl;
	cylinder3.print();
	cout << endl;

	return 0;
}