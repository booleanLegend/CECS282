//  Jonathan Truong, Matthew Zaldana and Julian Saldana
//  Class (CECS 282-06)
//  Week 10 - Lab 2 (Big 3)
//  Due Date (3/25/2021)
//  Demoed at  8:11 PM
#include <iostream>
using namespace std;

class Can {
	private: 
		string contents;
		int volume;
	public: 
		Can() {
			contents = "";				
			volume = 0;
		}

		Can(string drink, int oz) 
		{
			this->contents = drink;
			this->volume = oz;
		}

		Can(const Can &c1) {
			cout << "Entering Copy Constructor\n";
			this->contents = c1.contents;
			this->volume = c1. volume;
		}

		void operator= (const Can &c1) {
			cout << "Entering Copy Assignment Operator\n";
			this->contents = c1.contents;
			this->volume = c1.volume;
		}

		~Can() {
			cout << "In Destructor\n";
		}
    
		string getContent() 
		{ 
			return contents;
		}
	
		int getVolume()
		{
			return volume;
		}
		
		void setContents(string d) {
			this->contents = d;
		}

		void setVolume(int o) {
			this->volume = o;
		}
		
		void display() {
			cout << this->contents << " oz of " << this->contents << endl;
		}	
};


Can max(Can &c1, Can &c2) {
	Can can;
	if (c1.getVolume() > c2.getVolume()) {
		can.setVolume(c1.getVolume());
		can.setContents(c1.getContent());
	} else {
		can.setVolume(c2.getVolume());
		can.setContents(c2.getContent());
	}
	return can; 
}

int main()

{

    Can c1("Coke",12);

    Can c2("beans",20);

    Can c3 = c2;

    {

        Can c4("juice", 32);

        Can c5("juice", 12);

        c4 = c5;

        cout << "\n--------Can #4->";

        c4.display();

        cout << "\n--------Can #5->";

        c5.display();

    }

 

    c3 = max(c1, c2);

    cout << "\n--------Max size->";

    c3.display();

    // the following code does not compile - why?
	/*

     cout << "--------Can #4->";

     c4.display();              

     cout << "--------Can #5->";

     c5.display();
	*/
}