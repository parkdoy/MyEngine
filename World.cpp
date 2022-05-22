#include "World.h"
#include "Bore.h"
#include "Goblin.h"
#include "Slime.h"
#include "Player.h"


World::World()
{
	Init();
}

World::~World()
{
	Term();
}

void World::Init()
{
	//Map Load
	MyCharacters.push_back(new Player);
	MyCharacters.push_back(new Goblin);
	MyCharacters.push_back(new Slime);
	MyCharacters.push_back(new Bore);
}

void World::Term()
{
	for (size_t i = 0; i < MyCharacters.size(); ++i)
	{
		delete MyCharacters[i];
	}
}

void World::Tick()
{
	//All Monster
	for (size_t i = 0; i < MyCharacters.size(); ++i)
	{
		MyCharacters[i]->move();
	}
}

void World::Render()
{
}

