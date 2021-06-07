#include "MegaDeck.h"
using namespace std;


MegaDeck::MegaDeck(int num) {
	numDecks = num;
	Deck deck;
	for (int i = 0; i < numDecks; i++) {
		for (int s = 0; s < 52; s++) {
			Card C1 = deck.deal();
			add(C1);
		}
		deck = Deck();
	}
}

void MegaDeck::display() {
	int x = 0;
	for (int i = 0; i < numDecks; i++) {
		for (int s = 0; s < 4; s++) {
			for (int r = 0; r < 13; r++) {
				pile[x++].showCard();
				cout << " ";
			}
			cout << "" << endl;
		}
	}
}

Card MegaDeck::deal() {
	Card top = pile.back();
	remove();
	return top;
}
