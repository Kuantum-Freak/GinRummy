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

#ifndef PLAYER_H_INC
#define PLAYER_H_INC

#include <vector>

enum MeldTypes {
	MELD_SETS,
	MELD_RUNS,
	
	MELD_TOTAL,
	MELD_NONE
};

struct Meld {
	MeldTypes type;
	std::vector<Card*> cards;
};

class Player {
public:
	std::vector<Meld> getMelds();
private:
	std::vector<Card*> hand;
	
	bool isUser;
};

#endif