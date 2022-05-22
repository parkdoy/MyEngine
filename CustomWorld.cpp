#include "CustomWorld.h"
#include "Player.h"
#include "Bore.h"
#include "Goblin.h"
#include "Slime.h"


CustomWorld::CustomWorld()
{

}

CustomWorld::~CustomWorld()
{

}

void CustomWorld::Init()
{
	MyCharacters.push_back(new Player);
	MyCharacters.push_back(new Goblin);
	MyCharacters.push_back(new Slime);
}
