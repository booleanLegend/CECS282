// Name: Matthew Zaldana
// Due Date: 5-6-21
// Project #6 - MegaWar
// Instructor: Steve Gold


#include "WarPile.h"
/*
#include "Deck.h"
#include "LostAndFound.h"
#include "Card.h"
#include "Player.h"
 */
#include "MegaDeck.h"
#include <vector>
/*
#include <map>
 */
#include <iostream>
using namespace std;


void war(vector<Player*>& battleWinners, LostAndFound& lost) {
	WarPile pile;
	int lostSize = lost.pileSize();
	for (int i = 0; i < lostSize; i++)
		pile.add(lost.deal());
	vector<Player*> warPlayers;
	vector<Player*>::iterator it = battleWinners.begin();
	while (it != battleWinners.end()) {
		if ((*it)->pileSize() < 4) {
			int size = (*it)->pileSize();
			for (int i = 0; i < size; i++)
				pile.add((*it)->deal());
			it = battleWinners.erase(it);
		}
		else
		    ++it;
	}
	for (unsigned int i = 0; i < battleWinners.size(); i++) { 
		for (unsigned int j = 0; j < 4; j++) {
			Card c = (*battleWinners[i]).deal();
			pile.add(c);
			(*battleWinners[i]).setCardInPlay(c);
		}
	}
	int highestCardValue = 0;
	for (unsigned i = 0; i < battleWinners.size(); i++) {
		if ((*battleWinners[i]).getCardInPlay().getValue() > highestCardValue)
			highestCardValue = (*battleWinners[i]).getCardInPlay().getValue();
	}
	for (unsigned int i = 0; i < battleWinners.size(); i++) {
		if ((*battleWinners[i]).getCardInPlay().getValue() == highestCardValue)
			warPlayers.push_back(battleWinners[i]);
	}
	if (warPlayers.size() == 1) {
		int pileSize = pile.pileSize();
		for (int i = 0; i < pileSize; i++)
			(*warPlayers[0]).addToBottom(pile.deal());
		(*warPlayers[0]).addWin();
	} else {
		int pileSize = pile.pileSize();
		for (int i = 0; i < pileSize; i++)
			lost.add(pile.deal());
		war(warPlayers, lost);
	}
}


int main() {
	cout << "Mega War!" << endl;
	cout << "Enter number of players: " << endl;
	int playerNum;
	cin >> playerNum;
	cout << "Enter number of decks: " << endl;
	int deckNum;
	cin >> deckNum;
	vector<Player*> players;
	vector<Player*> battlers;
	for (int i = 1; i <= playerNum; i++) {
		Player* p = new Player();
		players.push_back(p);
		battlers.push_back(p);
	}
	MegaDeck deck(deckNum);
	deck.shuffle();
	int numCardsPerPlayer = deck.pileSize() / playerNum;
	for (int i = 0; i < playerNum; i++) {
		for (int j = 0; j < numCardsPerPlayer; j++)
			(*players[i]).add(deck.deal());
	}
	int battles = 1;
	bool canContinue = true;
	LostAndFound lost;
	WarPile battlePile;
	while (canContinue) {
		vector<Player*> winners;
		int highestValue = 0;
		vector<Player*>::iterator it = battlers.begin();
		while (it != battlers.end()) {
		    if (!(*it)->hasCards())
                it = battlers.erase(it);
		    else
                ++it;
		}
		for (unsigned int i = 0; i < battlers.size(); i++) {
			(*battlers[i]).addBattle();
			Card c = (*battlers[i]).deal();
			battlePile.add(c);
			(*battlers[i]).setCardInPlay(c);
		}
		for (unsigned int i = 0; i < battlers.size(); i++) {
			if ((*battlers[i]).getCardInPlay().getValue() > highestValue)
				highestValue = (*battlers[i]).getCardInPlay().getValue();
		}
		for (unsigned int i = 0; i < battlers.size(); i++) {
			if ((*battlers[i]).getCardInPlay().getValue() == highestValue)
				winners.push_back(battlers[i]);
		}
		if (winners.size() == 1) { 
			(*winners[0]).addWin();
			int battleSize = battlePile.pileSize();
			for (int i = 0; i < battleSize; i++)
				(*winners[0]).addToBottom(battlePile.deal());
		} else {
			int battleSize = battlePile.pileSize();
			for (int i = 0; i < battleSize; i++)
				lost.add(battlePile.deal());
			war(winners, lost);
		}
		cout << "Battle " << battles++ << " stats: " << endl;
		for (unsigned int i = 0; i < players.size(); i++) {
			cout << " Player " << i + 1 << " ";
			(*players[i]).display();
		}
		int playersWithCards = 0;
		for (unsigned int i = 0; i < players.size(); i++) {
			if (players[i]->pileSize() > 0)
			    playersWithCards++;
		}
		if (playersWithCards > 1)
			canContinue = true;
		else
			canContinue = false;
	} 
}