// Names: Melissa Gaines, Matthew Zaldana
// Demo time: 8:55PM
#include <iostream>
#include <string>
#include <cstring>


using namespace std;
/*
When you create overloaded operators, the operators can often be member functions or non-member functions. This lab requires you to create 2 versions of the same class using member functions in one version and non-member functions in the other.

Create 2 versions of the Can class which support the following operators:

Can c1("water",12);

Can c2("water",20);

Can c3 = c2 + c1;  // c3 now has 32 ounces of water

Can c4 = c2 - c1;  // c4 now has 8 ounces of water

Can c5("milk", 32);

Can c6("milk", 64);

Can c7;    // this will produce a can of air with 0 ounces using default constructor

c7 = c1 + c5;  // c7 will have 44 ounces of "mixed" because the contents of c1 and c5 were not the same

c1 = c5 + c6; // c1 will now have 96 ounces of milk

cout << c1;  // output -> milk:96

cout << endl;

cout << endl;

cout << c1 <<'/'<< c2<<'/' << c3 <<'/'<< c4 <<'/'<< c5<<'/' << c6<<'/' << c7;  // prints all output on the same line

 
You will demo 2 programs, each main program will be exactly the same - each program will use the different version of the Can class.

Additional rules:

1) when 2 cans are added together, the resulting amount is the sum

2) when 2 cans are added together, the contents of the resulting can is the same as both cans if both cans have the same contents. If the content are now the same then the resulting contents are "mixed".

3) when 2 cans use the subtraction operator, the amount is the difference of the cans - however the value of amount can never be negative. The contents of the result will be  the contents of the can on the left side of the operator. 

4) the stream insertion operator ( cout << c1 ) cannot be a member function because the left most operand is not a member of the Can class. 
*/

//CAN CLASS
class Can {
	public: 
		string drink;
		int oz;	
		Can() {
			drink = "";				
			oz = 0;
		}

		Can(string drink, int oz) 
		{
			this->drink = drink;
			this->oz = oz;
		}

		string getDrink() 
		{ 
			return drink;
		}
	
		int getOz() 
		{
			return oz;
		}
		
		void setDrink(string d) {
				drink = d;
		}

		void setOz(int o) {
				oz = o;
		}
		
		Can operator+(Can &c2) {
			string d;
			int o = c2.getOz() +oz;
			if (drink.compare(c2.getDrink()) != 0)
				d="mixed";
			else
				d=drink;
			return Can(d, o);
		}
		
		Can operator-(Can &c2) {
			string d;
			int o = 0;
			if (c2.getOz() > oz) 
        		o = c2.getOz() -oz;
			else 
				o = oz - c2.getOz();
			return Can(d,o);
		}
					
		friend ostream& operator << (ostream &out, Can &c) {
			out << c.getDrink() << ":" << c.getOz();
			return out;
		}	
};

int main() {
  Can c1("water",12);
	Can c2("water",20);
	Can c3 = c2 + c1;  // c3 now has 32 ounces of water
  Can c4= c2 - c1;  // c4 now has 8 ounces of water

	Can c5("milk", 32);
	Can c6("milk", 64);
	Can c7;    // this will produce a can of air with 0 ounces using default constructor

	c7 = c1 + c5;  // c7 will have 44 ounces of "mixed" because the contents of c1 and c5 were not the same
	c1 = c5 + c6; // c1 will now have 96 ounces of milk
	
	cout << c1;  // output -> milk:96

	cout << endl;
	cout << endl;
	
	cout << c1 <<'/'<< c2<<'/' << c3 <<'/'<< c4 <<'/'<< c5<<'/' << c6<<'/' << c7;  // prints all output on the same line
} 