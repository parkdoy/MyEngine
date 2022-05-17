#pragma once
#include <iostream>
using namespace std;

class Character
{
public:
	Character();
	virtual ~Character();

	virtual void move();
	virtual void Attack();
	virtual void Drop();
};

