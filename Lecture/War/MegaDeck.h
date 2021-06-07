#ifndef MEGADECK_H
#define MEGADECK_H
#include "Deck.h"
#include "CardPile.h"

class MegaDeck : public CardPile {
    private:
        int numDecks;
    public:
        MegaDeck(int num);
        void display();
        Card deal();
};
#endif
