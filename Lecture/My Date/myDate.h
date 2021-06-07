#ifndef MYDATE_H
#define MYDATE_H

#include <iostream>
using namespace std;

class myDate {
    int month;
    int day;
    int year;
    public:
    myDate();
    myDate(int, int, int);
    void constructor();
    void display();
    void increaseDate(int);
    void decreaseDate(int);
    int daysBetween(myDate D);
    int getMonth();
    int getDay();
    int getYear();
    int dayOfYear();
    string dayName();
};
#endif