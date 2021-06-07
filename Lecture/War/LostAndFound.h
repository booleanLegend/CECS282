#ifndef LOSTANDFOUND_H
#define LOSTANDFOUND_H
#include "CardPile.h"
#include "Player.h"


class LostAndFound : public CardPile {
    public:
        void display();
    	Card deal();
};
#endif

