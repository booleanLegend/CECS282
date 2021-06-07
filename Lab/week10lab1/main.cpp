// Names: Ashur Motlagh, Ghabrille Ampo, Matthew Zaldana
// Date: 3/23/2021
// Time Demoed 8:27

// Implement the following functions     
// void add(int);           //that adds a node at the end of the list
// int deleteTail();        //that delete the node at the end of the list

#include <string>
#include <iostream>
#include "LinkedList.h"

using namespace std;


int main(int argc, const char * argv[]) {   
    int a = 3;
    string s = "M";

    cout << s << a;

    s = s + to_string(a);

    cout << s;

    list myList;

    cout << myList.size();

    myList.add(1);
    myList.add(2);
    myList.add(3);
    myList.add(4);
    myList.addHead(11);
    myList.addHead(22);
    myList.addHead(33);

    cout << "\nSize..." << myList.size()<< endl;
    cout << myList.to_string();
    cout << "\nSize..." << myList.size()<< endl;
    cout << myList.to_string();
    cout << "\nDelete Tail.. " << myList.deleteTail();
    cout << "\nSize..." << myList.size()<< endl;
    cout << myList.to_string();
    return 0;

}