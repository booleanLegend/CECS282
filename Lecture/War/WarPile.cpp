#include "WarPile.h"


void WarPile::display() {
	for (Card c : pile) {
		c.showCard();
		cout << " ";
	}
}

Card WarPile::deal() {
	Card top = pile.back();
	remove();
	return top;
}