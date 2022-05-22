#pragma once
#include <iostream>
#include <vector>

class Character; //전방선언

using namespace std;

class World
{
public:
	World();
	virtual ~World();

	virtual void Init();
	virtual void Term();
	virtual void Tick();
	virtual void Render();

	vector<Character*> MyCharacters; //  동적 배열을 더 안전하고 쉽게 해준다.
};

