#include "Player.h"
#include <iostream>
#include <stdio.h>
using namespace std;


Player::Player() {
	battles = 0;
	won = 0;
}

double Player::getFierceness() {
	if (pile.size() == 0)
		return 0;
	else {
		double sum = 0;
		for (unsigned i = 0; i < pile.size(); i++)
			sum += pile[i].getValue();
		return sum / pile.size();
	}
}

int Player::getBattles() {
    return battles;
}

int Player::getWins() {
	return won;
}

void Player::display() {
	printf("Fierceness: %.2f Cards: %i Battles: %i Wins: %i\n", getFierceness(), pile.size(), getBattles(), getWins());
}

Card Player::deal() {
	Card top = pile.back();
	pile.pop_back();
	return top;
}

bool Player::hasCards() {
	if (pileSize() > 0)
		return true;
	else
		return false;
}

void Player::addBattle(){
	battles++;
}

void Player::addWin(){
	won++;
}

void Player::setCardInPlay(Card c) {
	cardInPlay = c;
}

Card Player::getCardInPlay(){
	return cardInPlay;
}

void Player::addToBottom(Card c){
	pile.insert(pile.begin(), c);
}
