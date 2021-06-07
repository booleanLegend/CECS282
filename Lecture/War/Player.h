#ifndef PLAYER_H
#define PLAYER_H
#include "CardPile.h"


class Player : public CardPile {
    private:
        int battles;
        int won;
        Card cardInPlay;
    public:
        Player();
        double getFierceness();
        bool hasCards();
        void addBattle();
        void addWin();
        int getBattles();
        int getWins();
        void display();
        Card getCardInPlay();
        void setCardInPlay(Card c);
        void addToBottom(Card c);
        Card deal();
};
#endif
