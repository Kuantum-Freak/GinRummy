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

#ifndef WINDOW_H_INC
#define WINDOW_H_INC

extern const int SCRN_W;
extern const int SCRN_H;
extern const int WIN_PAD;

class Window {
public:
	Window();  ///< Creates our Window
	~Window(); ///< Destroys our Window and cleans up variables
	
	/// @brief initializes all the variables in our window
	/// The variables aren't done in the constructor because many of the
	/// variables used in this class need to be accessed after the main window 
	/// is created, but after the window is set up
	void initWindow();
	
	void renderAll(); ///< Renders all of the objects on the screen
	
	bool checkKnockClick(const int x, const int y);
	bool checkSortClick(const int x, const int y);
	
	inline SDL_Renderer*  getRenderer(); ///< Get the current Window's renderer
private:
	SDL_Window* window;     ///< Stores our main Window
	SDL_Renderer* renderer; ///< Stores our main renderer
	
	SDL_Texture* background; ///< The background texture, Points to texture in /ref Resources
	
	SDL_Rect knockButton, ///< Knock button position
	         sortButton,  ///< Sort button position
	         deadwoodPanel,
	         meldsPanel,
	         helpPanel,
			 knockPos,    ///< Knock text position
			 sortPos,     ///< Sort text position
			 meldTextPos, ///< Meld text position
			 dwTextPos;   ///< Deadwood text position
			 
	SDL_Texture* knockTexture,    ///< Knock text texture
	           * knockTextureST,  ///< 
	           * sortTexture,     ///< Sort text texture
			   * meldTextTexture, ///< Meld text texture
			   * dwTextTexture;   ///< Deadwood text texture
			   
	SDL_Color textColor; ///< Text color
	
	void clear();  ///< Clear the window
	void renderBackground();    ///< Render the background
	void renderButtons();       ///< Render the buttons
	void renderMeldsDeadwood(); ///< Render the meld/deadwood texts
	void renderHelp();
	
	/// @brief draws a button
	/// @param [in] tex `SDL_Texture*` The texture to use when rendering
	/// @param [in] src `SDL_Rect` The texu
	/// @param [in] h_p `int` The texu
	/// @param [in] w_p `int` The texu
	/// @param [in] dest `SDL_Rect` The texu
	void drawAButton(SDL_Texture* tex, SDL_Rect src, int h_p, int w_p, SDL_Rect dest);
};


inline
SDL_Renderer* Window::getRenderer()
{ return renderer; }

#endif