#ifndef _BASEBALL_H
#define _BASEBALL_H

#include "Game.h"

class Baseball : public Game
{
public:
	Baseball();
	~Baseball();

	void setUpGame() override;		//sets up the game
	void startGame() override;		//starts to play the game
	void endGame() override;		//ends the game

private:

};

#endif _BASEBALL_H