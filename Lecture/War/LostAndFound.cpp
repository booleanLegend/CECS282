#include "LostAndFound.h"

void LostAndFound::display() {
	for (int i = 0; i < pileSize(); i++) {
		pile.at(i).showCard();
		cout << " ";
	}
}

Card LostAndFound::deal() { 
	Card top = pile.back();
	remove();
	return top;
}
