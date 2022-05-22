#pragma once
#include <iostream>
#include <vector>

class Character; //���漱��

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

	vector<Character*> MyCharacters; //  ���� �迭�� �� �����ϰ� ���� ���ش�.
};

