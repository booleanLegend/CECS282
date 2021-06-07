#ifndef CAN_H
#define CAN_H

#include <string>
using namespace std;


class Can
{
    private:
        string contents;
        int volumes;
    public:
        Can();
        Can(string,int);
        void display();
        int getVolume();
	    	string getContents();
        void setVolume(int);
        void setContents(string);
};

#endif