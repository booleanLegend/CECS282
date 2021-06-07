#include "Deck.h"
using namespace std;

Deck::Deck(){
	Card::Suits suits[] = { Card::HEART, Card::DIAMOND, Card::SPADE, Card::CLUB };
	Card::Ranks ranks[] = { Card::ACE, Card::TWO, Card::THREE, Card::FOUR, Card::FIVE, Card::SIX, Card::SEVEN, Card::EIGHT, Card::NINE, Card::TEN, Card::JACK, Card::QUEEN, Card::KING };
	Card C1;
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 13; j++){
			C1 = Card(ranks[j], suits[i]);
			add(C1);
		}
	}
}

void Deck::display() {
	int x = 0;
	for (int i = 0; i < 4; i++){
		for (int z = 0; z < 13; z++){
			pile[x++].showCard();
			cout << " ";
		}
		cout << "" << endl;
	}
}

Card Deck::deal() {
	Card top = pile.back();
	remove();
	return top;
}