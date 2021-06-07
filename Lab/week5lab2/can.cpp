#include "can.h"
#include <string>
#include <iostream>
using namespace std;

Can::Can() {  
	contents = "empty";
	volumes = 0;    
}

Can::Can(string c, int v) {
	contents = c;
	volumes = v;
}

void Can::display() {
  	if (volumes == 0){
		  contents = "empty";
    }
	cout << contents << ": " << volumes << endl;
}
int Can::getVolume() {
  return volumes;
}
string Can::getContents() {
  return contents;
}
void Can::setVolume(int v){
  this->volumes = v;
}
void Can::setContents(string s){
  this->contents = s;
}