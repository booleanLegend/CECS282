#include "CardPile.h"
#include <time.h>
using namespace std;

void CardPile::add(Card c) { 
	pile.push_back(c);
}

void CardPile::remove() { 
	pile.pop_back();
}

int CardPile::pileSize() { 
	return pile.size();
}

void CardPile::shuffle() { 
	Card temp;
	int x, y;
	const int size = pile.size();
	srand((unsigned)time(0));

	for (int i = 0; i < 10000; i++){
		x = rand() % size;
		y = rand() % size;
		temp = pile[x];
		pile[x] = pile[y];
		pile[y] = temp;
	}
}
