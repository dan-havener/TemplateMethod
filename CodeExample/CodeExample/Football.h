#ifndef _FOOTBALL_H
#define _FOOTBALL_H

#include "Game.h"

class Football : public Game
{
public:
	Football();
	~Football();

	void setUpGame() override;		//sets up the game
	void startGame() override;		//starts to play the game
	void endGame() override;		//ends the game

private:

};

#endif _FOOTBALL_H