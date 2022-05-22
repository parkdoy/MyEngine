#pragma once
#include "World.h"
#include "CustomWorld.h"


class Engine
{
public: 
	Engine();
	virtual ~Engine();
	void Run();

	World* MyWorld; // 어떤 자료형태인가?? MyWorld = new CustomWorld();


};

