#include "Game.h"

class Hockey : Game
{
public:
	Hockey();
	~Hockey();

	void setUpGame() override;		//sets up the game
	void startGame() override;		//starts to play the game
	void endGame() override;		//ends the game

private:

};