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

#ifndef OPPONENT_H_INC
#define OPPONENT_H_INC

#include ".\Player.h"

class Opponent : public Player {
public:
	Opponent() {};
	virtual ~Opponent() {};

	virtual void doTurn(); ///< Does a turn for the player
	virtual void render();

protected:
	virtual void renderCards();    ///< Render all the cards

private:
	
};

#endif