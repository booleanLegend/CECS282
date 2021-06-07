#include "Card.h"
#include <string>
#include <sstream>
#include <iostream>
#include <stdio.h>
using namespace std;

Card::Card() {
	rank = ACE;
	suit = SPADE;
}

Card::Card(Ranks r, Suits s){
	rank = r;
	suit = s;
}

void Card::showCard(){
	cout << getValue() << endl;
}

void Card::setCard(Ranks r, Suits s){
	rank = r;
	suit = s;
}

int Card::getValue(){
	switch (rank) {
	case ACE:
		return 1;
	case TWO:
		return 2;
	case THREE:
		return 3;
	case FOUR:
		return 4;
	case FIVE:
		return 5;
	case SIX:
		return 6;
	case SEVEN:
		return 7;
	case EIGHT:
		return 8;
	case NINE:
		return 9;
	case TEN:
		return 10;
	case JACK:
		return 11;
	case QUEEN:
		return 12;
	case KING:
		return 13;
	}
}


