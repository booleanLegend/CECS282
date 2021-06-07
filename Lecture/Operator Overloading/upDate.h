#ifndef upDate_h
#define upDate_h

#include <string>
using namespace std;

class upDate {
	private:
		int *dptr;
		static int count;

	public:
		upDate();
		upDate(int m, int d, int y);
		upDate(int j);
		upDate(const upDate &obj);
		~upDate();
		void setDate(int M, int D, int Y);
		int getMonth();
		int getDay();
		int getYear();
		string getMonthName();
		upDate operator=(upDate D);
		upDate operator+=(int n);
		upDate operator-=(int n);
		upDate operator+(int n);
		friend upDate operator+(int n, upDate D);
		upDate operator-(int n);
		friend upDate operator-(int n, upDate D);
		int operator-(upDate D);
		static int GetDateCount();
		friend ostream& operator <<(ostream &out, upDate D);
		upDate operator++();
		upDate operator++(int n);
		upDate operator--();
		upDate operator--(int n);
		int julian();
		bool operator<(upDate D);
		bool operator>(upDate D);
		bool operator==(upDate D);
};
#endif