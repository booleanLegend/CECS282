// Name: Matthew Zaldana
// Date: 4-6-21
// Lab: Operator Overloading


#include "upDate.h"
#include <iostream>

using namespace std;


// Global variable
int upDate::count = 0;


// Greg converter
int Greg2Julian(int month, int day, int year) {
    int JD = day - 32075 + 1461 * (year + 4800 + (month - 14) / 12) / 4 + 367
    * (month - 2 - (month - 14) / 12 * 12) / 12 - 3
    * ((year + 4900 + (month - 14) / 12) / 100) / 4;
    return JD;
}


// Julian converter
void Julian2Greg(int JD, int & month, int & day, int & year) {
    int L = JD + 68569;
    int N = 4 * L / 146097;
    L = L - (146097 * N + 3) / 4;
    int I = 4000 * (L + 1) / 1461001;
    L = L - 1461 * I / 4 + 31;
    int J = 80 * L / 2447;
    int K = L - 2447 * J / 80;
    L = J / 11;
    J = J + 2 - 12 * L;
    I = 100 * (N - 49) + I + L;
      
    year = I;
    month = J;
    day = K;
}


// Constructor
upDate::upDate() {
    dptr = new int[3];
    dptr[0] = 5;
    dptr[1] = 11;
    dptr[2] = 1959;
    count++;
}


// Overloaded constructor
upDate::upDate(int M, int D, int Y) {
    dptr = new int[3];
    dptr[0] = M;
    dptr[1] = D;
    dptr[2] = Y;
      
    int jd = Greg2Julian(M, D, Y);
    Julian2Greg(jd, M, D, Y);
    if (M == dptr[0] && D == dptr[1] && Y == dptr[2]) {
        dptr[0] = M;
        dptr[1] = D;
        dptr[2] = Y;
    } else {
        dptr[0] = 5;
        dptr[1] = 11;
        dptr[2] = 1959;
    }
    count++;
}


// Overloaded constructor
upDate::upDate(int j) {
    dptr = new int[3];
    Julian2Greg(j, dptr[0], dptr[1], dptr[2]);
    count++;
}


// Destructor
upDate::~upDate() {
    count--;
    delete []dptr;
}


// Function to set date
void upDate::setDate(int M, int D, int Y) {
    dptr = new int[3];
    dptr[0] = M;
    dptr[1] = D;
    dptr[2] = Y;
      
    int jd = Greg2Julian(M, D, Y);
    Julian2Greg(jd, M, D, Y);
    if (M == dptr[0] && D == dptr[1] && Y == dptr[2]) {
        dptr[0] = M;
        dptr[1] = D;
        dptr[2] = Y;
    } else {
        dptr[0] = 5;
        dptr[1] = 11;
        dptr[2] = 1959;
    }
}


// Overloaded constructor
upDate::upDate(const upDate &obj) {
    dptr = new int[3];
    dptr[0] = obj.dptr[0];
    dptr[1] = obj.dptr[1];
    dptr[2] = obj.dptr[2];
      
    count++;
}


// Returns month
int upDate::getMonth() {
    return dptr[0];
}


// Returns day in array by pointer
int upDate::getDay() {
    return dptr[1];
}


// Returns year in array by pointer
int upDate::getYear() {
    return dptr[2];
}


// Returns month name in array 
string upDate::getMonthName() {
    string months[] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    return months[dptr[0] - 1];
}


// Returns count of days in between
int upDate::GetDateCount() {
    return count;
}

//Get num of julian
int upDate::julian() {
    int month, day, year;
    month = dptr[0];
    day = dptr[1];
    year = dptr[2];
      
    int JD = day - 32075 + 1461 * (year + 4800 + (month - 14) / 12) / 4 + 367
    * (month - 2 - (month - 14) / 12 * 12) / 12 - 3
    * ((year + 4900 + (month - 14) / 12) / 100) / 4;
    return JD;
}


// Overloaded = operator
upDate upDate::operator=(upDate D) {
    dptr = new int[3];
    dptr[0] = D.dptr[0];
    dptr[1] = D.dptr[1];
    dptr[2] = D.dptr[2];
    return (*this);
}


// Overloaded += operator
upDate upDate::operator+=(int n) {
    upDate temp(*this);
    int jd = Greg2Julian(temp.dptr[0], temp.dptr[1], temp.dptr[2]);
    jd += n;
    Julian2Greg(jd, dptr[0], dptr[1], dptr[2]);
    return temp;
}


// Overloaded -= operator
upDate upDate::operator-=(int n) {
    upDate temp(*this);
    int jd = Greg2Julian(temp.dptr[0], temp.dptr[1], temp.dptr[2]);
    jd -= n;
    Julian2Greg(jd, dptr[0], dptr[1], dptr[2]);
    return temp;
}


// Overloaded + operator to add days
upDate upDate::operator+(int n) {
    upDate temp(*this);
    int jd = Greg2Julian(temp.dptr[0], temp.dptr[1], temp.dptr[2]);
    jd += n;
    Julian2Greg(jd, temp.dptr[0], temp.dptr[1], temp.dptr[2]);
    return temp;
}


// Overloaded + operator with new Date to add
upDate operator+(int n, upDate D) {
    return D + n;
}


// Overloaded - operator to subtract days
upDate upDate::operator-(int n) {
    upDate temp(*this);
    int jd = Greg2Julian(temp.dptr[0], temp.dptr[1], temp.dptr[2]);
    jd -= n;
    Julian2Greg(jd, temp.dptr[0], temp.dptr[1], temp.dptr[2]);
    return temp;
}


// Overloaded - operator to subtract a date
upDate operator-(int n, upDate D) {
    return D - n;
}


// Overloaded - operator given a Date
int upDate::operator-(upDate D) {
    int jd1 = Greg2Julian(dptr[0], dptr[1], dptr[2]);
    int jd2 = Greg2Julian(D.dptr[0], D.dptr[1], D.dptr[2]);
    int result = jd1 - jd2;
    return result;
}


// Overloaded << operator to compare dates and print them
ostream &operator<<(ostream& out, upDate D) {
    out << D.getMonth() << "/" << D.getDay() << "/" << D.getYear();
    return out;
}


// Overloaded ++ operator 
upDate upDate::operator++() {
    upDate temp(*this);
    int jd = Greg2Julian(temp.dptr[0], temp.dptr[1], temp.dptr[2]);
    jd += 1;
    Julian2Greg(jd, temp.dptr[0], temp.dptr[1], temp.dptr[2]);
    return temp;
}


// Overloaded ++ operator for Julian dates
upDate upDate::operator++(int n) {
    upDate temp(*this);
    int jd = Greg2Julian(temp.dptr[0], temp.dptr[1], temp.dptr[2]);
    ++jd;
    Julian2Greg(jd, dptr[0], dptr[1], dptr[2]);
    return temp;
}


// Overloaded -- operator for Julian dates
upDate upDate::operator--() {
    upDate temp(*this);
    int jd = Greg2Julian(temp.dptr[0], temp.dptr[1], temp.dptr[2]);
    jd -= 1;
    Julian2Greg(jd, temp.dptr[0], temp.dptr[1], temp.dptr[2]);
    return temp;
}


// Overloaded -- operator given amt of days
upDate upDate::operator--(int n) {
    upDate temp(*this);
    --*this;
    return temp;
}


// Overloaded < operator to compares dates
bool upDate::operator<(upDate D) {
    if (this->julian() < D.julian()) {
        return true;
    }
    else {
        return false;
    }
}


// Overloaded > operator to compare dates
bool upDate::operator>(upDate D) {
    if (this->julian() > D.julian())
        return true;
    else
        return false;
}


// Overloaded == operator to compare dates
bool upDate::operator==(upDate D) {
    if (this->julian() == D.julian())
        return true;
    else
        return false;
}