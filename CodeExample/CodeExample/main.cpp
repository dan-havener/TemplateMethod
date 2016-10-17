#include <stdio.h>
#include "Baseball.h"
#include "Basketball.h"
#include "Football.h"
#include "Hockey.h"

int main(int argc, char* argv[])
{

	Game* game = new Basketball();
	game->play();

	game = new Baseball();
	game->play();

	game = new Football();
	game->play();

	game = new Hockey(); //Go Bruins
	game->play();
	
	return 0;
}