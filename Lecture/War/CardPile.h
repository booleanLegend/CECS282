#ifndef CARDPILE_H
#define CARDPILE_H
#include <iostream>
#include <vector>
#include "Card.h"
using namespace std;

class CardPile {
protected:
	vector<Card> pile;
public:
	void shuffle(); 
	void add(Card c);
	void remove();
	int pileSize();
	virtual void display() = 0;
	virtual Card deal() = 0;
};
#endif
