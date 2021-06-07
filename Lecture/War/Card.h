#ifndef CARD_H	
#define CARD_H

class Card{
public:
	enum Ranks { ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING };
	enum Suits { HEART, DIAMOND, SPADE, CLUB };
	Card(Ranks r, Suits s);
	Card();
	void showCard();
	void setCard(Ranks r, Suits s);
	int getValue();
private:
	Suits suit;
	Ranks rank;
};

#endif
