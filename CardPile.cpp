/* 
 * Copyright (c) 2017 The Gupta Empire - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 *
 * Written by Aryan Gupta <me@theguptaempire.net>
 * 
 * =============================================================================
 * @author 			Aryan Gupta
 * @project 		
 * @title 			
 * @date			(YYYY-MM-DD)
 * @fversion		1.0.0
 * @description 	
 * =============================================================================
 */
#include "info.h"

#include <algorithm>

#include ".\h\main.h"

const int SHUFFLE_TIMES = 50;

CardPile::CardPile(CardPileTypes type) {
	if(type == PILE_DECK) {
		for(Suits i = 0; i < SUIT_TOTAL; ++i)
			for(Suits j = 0; j < CARDS_TOTAL; ++j)
				gDeck.push_back( new Card{i, j} ); // create cards with combinations of Suits and Cards
	}
	
	this->type = type;
}

void CardPile::shuffle() {
	int shuffle = SHUFFLE_TIMES;
	while(shuffle) { // Shuffle the deck
		int first = rand() % 52, second = rand() % 52; // Pick 2 random numbers
		
		std::swap(gDeck[first], gDeck[second]); // Swap those two cards
		
		suffle--;
	}
}

Card* getACard() {
	if(pile.size() == 0) // If pile is empty, return null
		return nullptr;
	
	Card* tmpCard = pile[0]; // get first card
	pile.erase(pile.begin()); // erase it
	return tmpCard; // return the card
}