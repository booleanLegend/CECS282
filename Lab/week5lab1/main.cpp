// Edward Kuoch, Matthew Zaldana, Colin Creasman, Giovanni Contreras
// Class (CECS 282-06)
// Project Name (Week 5 - Lab 1 (Julian Dates))
// Due Date (2/16/2021)
// Demoed at 8:38
#include <iostream>
#include <cmath>
#include <string>

/*
Write a main function that lists all the leap years from the year 1000 to 1500. Your results should follow these rules:

If a year is divisible by 4, it is a leap year.  (1004 is a leap year)

However, if a year is divisible by 100, it is NOT a leap year. (1000, and 1100 are NOT leap years

However, if a year is divisible by 400, it IS a leap year.  (1200 is a leap year)
*/
int Greg2Julian(int m, int d, int y);
void Julian2Greg(int JD, int &m, int &d, int &y);

using namespace std;
int main() {
	int m, d, y;
	/* pass in jan 1st for i, store the return value as a
    pass in jan 1st for i + 1, store the return value as b
    find b - a 
    if b - a > 365, it's a leap year
	*/
  	for (int i = 1000; i <= 1500; i ++){
		  /*
		int a = Greg2Julian(1, 1, i);
		int b = Greg2Julian (12, 31, i);
		int days = b - a + 1;

		if (days == 366) {
			cout << i << " is a leap year" << endl;
		} 
		*/
		int JD = Greg2Julian(2, 28, i);
		cout << JD << endl;
		Julian2Greg(JD, m, d, y);   
		if (m == 2 && d == 28) {
			cout << i << " is a leap year" << endl;
		}

	}
	cout << "Press any key to continue.";
	getchar();
}

int Greg2Julian(int month, int day, int year) {
    double a = (month + 9)/12;
    int intA = a;
    double b = 7*(year + intA)/4;
    int intB = b;
    double c = (275*month)/9;
    int intC = c;
      
    double UT = 12/24;
    double doublesin = 0.5*sin(100*year + month-19002.5);
    double roundUT = round(UT+doublesin);
    int intUT = roundUT;
      
      
    int JD = 367*year - intB + intC + day + 1721013.5 + intUT + 0.5;
    return JD;
}

void Julian2Greg(int JD, int &month, int &day, int &year) {
    int p,q,r,s,t,u,v;
    p = JD + 68569;
    q = 4*p/146097;
    r = p - (146097*q + 3)/4;
    s = 4000*(r+1)/1461001;
    t = r - 1461*s/4 + 31;
    u = 80*t/2447;
    v = u/11;
      
    year = 100*(q-49)+s+v;
    month = u + 2 - 12*v;
    day = t - 2447*u/80;
}