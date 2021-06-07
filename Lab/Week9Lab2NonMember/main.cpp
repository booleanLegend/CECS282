// Names: Melissa Gaines, Erik Nguyen, Matthew Zaldana
// Date: 3-18-21
// Demo Time: 8:55 pm

#include <iostream>
#include <string>
using namespace std;

class Can
{
	string mixture;
	int quantity;
        
public:
	
	
	Can()
	{
		mixture = "air";
		quantity = 0;
	}
	
	
	Can(string mixture, int quantity)
	{
		this->mixture = mixture;
		this->quantity = quantity;
	}
	
	string getMixture()
	{
		return mixture;
	}
	
	int getQuantity()
	{
		return quantity;
	}
	
	void setComound(string c)
	{
		mixture = c;
	}
	
	void setQuantity(int q)
	{
		quantity = q;
	}
	
	friend ostream& operator<<(ostream &out, Can &c);
};

ostream& operator<<(ostream &out, Can &c)
{
	out << c.mixture << ": " << c.quantity << " Ounces";
	
	return out;
}

Can operator+(Can &c1, Can &c2)
{
	string c;
	int q;
	if (c1.getMixture().compare(c2.getMixture()) == 0)
	{
		c = c1.getMixture();
	}
	else
	{
		c = "mixed";
	}

	q = c1.getQuantity() + c2.getQuantity();
					
	return Can(c, q);
}
        
Can operator-(Can &c1, Can &c2)
{
	string c = c1.getMixture();
	int q;
	if (c1.getQuantity() < c2.getQuantity())
	{
		q = 0;
	}
	else
	{
		q = c1.getQuantity() - c2.getQuantity();
	}
	
	return Can(c, q);
}
int main()
{
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
	cout << c1 <<'\n'<< c2<<'\n' << c3 <<'\n'<< c4 <<'\n'<< c5<<'\n' << c6<<'\n' << c7;  // prints all output on the same line
}