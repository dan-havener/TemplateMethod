#ifndef _BASKETBALL_H
#define _BASKETBALL_H

#include "Game.h"

class Basketball : public Game
{
public:
	Basketball();
	~Basketball();

	void setUpGame() override;		//sets up the game
	void startGame() override;		//starts to play the game
	void endGame() override;		//ends the game

private:

};

#endif _BASKETBALL_H