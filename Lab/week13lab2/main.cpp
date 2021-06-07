// Names:Ashur Motlagh , Matthew Zaldana, Saul Martinez
// Week 13 Lab 2 Map
// Demo time: 8:08
// Date: 4-15-21

#include <iostream>
#include <fstream>
#include <map>
#include "string"
#include <stdio.h>
using namespace std; 
int main() {
	fstream infile;
	infile.open("info.txt");
	char letter;
	string word;
	int appearance = 0;
    map<string, int> wordMap;
    while (infile >> word){
        for (int i = 0; i < word.size(); i ++ )
        if (ispunct(word[i])){
            word.erase(i--, 1);
        }
        ++wordMap[word];
    }
    infile.close();
    for (map<string, int>::iterator it= wordMap.begin(); it!= wordMap.end(); ++it ){
        cout << it->first << "=> "<< it->second << endl;
    }
	getchar();
	return 0;
}