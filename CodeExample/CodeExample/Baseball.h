#include "Game.h"

class Baseball : Game
{
public:
	Baseball();
	~Baseball();

	void setUpGame() override;		//sets up the game
	void startGame() override;		//starts to play the game
	void endGame() override;		//ends the game

private:

};