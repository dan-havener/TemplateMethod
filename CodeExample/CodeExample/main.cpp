#include <stdio.h>
#include "Game.h"

int main(int argc, char* argv[])
{

	Game game = new Basketball();
	game.play();

	Game game = new Baseball();
	game.play();

	Game game = new Football();
	game.play();

	Game game = new Hockey(); //Go Bruins
	game.play();

	system("pause");
	
	return 0;
}