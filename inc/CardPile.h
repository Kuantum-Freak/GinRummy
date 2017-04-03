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

#ifndef CARD_H_INC
#define CARD_H_INC

/// @brief the Suits of a card
enum Suits {
	SUIT_CLUBS,
	SUIT_DIAMONDS,
	SUIT_HEARTS,
	SUIT_SPADES,
	
	SUIT_TOTAL
};

/// @brief The values of a card
enum Cards {
	CARD_ACE,
	CARD_2,
	CARD_3,
	CARD_4,
	CARD_5,
	CARD_6,
	CARD_7,
	CARD_8,
	CARD_9,
	CARD_10,
	CARD_JACK,
	CARD_QUEEN,
	CARD_KING,
	
	CARDS_TOTAL
};

/// @brief A card
struct Card {
	Suits suit;
	Cards card;
};

enum CardPileTypes {
	PILE_DECK,
	PILE_DISCARD,
	PILE_MELD,
	PILE_TOTAL
};

class CardPile {
public:
	CardPile(CardPileTypes type);
	~CardPile();
	
	void shuffle();
	
	Card* getACard();
private:
	std::vector<Card*> pile;
	CardPileTypes type;
};

#endif