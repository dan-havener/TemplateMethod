#include <stdio.h>

class Game
{
public:
	Game();
	~Game();
	
	void play();	//runs the whole game

	virtual void setUpGame() = 0;	//sets up the game
	virtual void startGame() = 0;	//starts to play the game
	virtual void endGame() = 0;		//ends the game

private:

};