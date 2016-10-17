#include <stdio.h>

class Game
{
public:
	Game();
	~Game();
	
	void play();//runs the whole game

	virtual void init() = 0;//sets up the game
	virtual void startPlay() = 0;//starts to play the game
	virtual void endPlay() = 0;//ends the game

private:

};

