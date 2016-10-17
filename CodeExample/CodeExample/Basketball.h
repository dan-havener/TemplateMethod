#include "Game.h"

class Basketball : Game
{
public:
	Basketball();
	~Basketball();

	void setUpGame() override;		//sets up the game
	void startGame() override;		//starts to play the game
	void endGame() override;		//ends the game

private:

};