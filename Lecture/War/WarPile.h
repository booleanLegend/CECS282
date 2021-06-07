#ifndef WARPILE_H
#define WARPILE_H
#include "CardPile.h"
#include "LostAndFound.h"
#include "Player.h"


class WarPile : public CardPile {
    public:
        void display();
    	Card deal();
};
#endif

