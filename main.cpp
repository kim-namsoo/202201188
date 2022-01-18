#include <iostream>
#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "Wildboar.h"

using namespace std;

int main()
{
	Player NewPlayer;

	NewPlayer.Gold = 10;
	NewPlayer.HP = 100;
	NewPlayer.Collect();

	return 0;
}