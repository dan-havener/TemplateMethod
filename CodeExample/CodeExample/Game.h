#ifndef _GAME_H
#define _GAME_H

#include <stdio.h>

class Game
{
public:
	Game();
	~Game();
	
	void play();	//runs the whole game

	virtual void setUpGame();	//sets up the game
	virtual void startGame();	//starts to play the game
	virtual void endGame();		//ends the game

private:

};

#endif _GAME_H