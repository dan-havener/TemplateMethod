#include "Game.h"

class Football : Game
{
public:
	Football();
	~Football();

	void setUpGame() override;		//sets up the game
	void startGame() override;		//starts to play the game
	void endGame() override;		//ends the game

private:

};