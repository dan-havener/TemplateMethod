#ifndef _HOCKEY_H
#define _HOCKEY_H

#include "Game.h"

class Hockey : public Game
{
public:
	Hockey();
	~Hockey();

	void setUpGame() override;		//sets up the game
	void startGame() override;		//starts to play the game
	void endGame() override;		//ends the game

private:

};

#endif _HOCKEY_H