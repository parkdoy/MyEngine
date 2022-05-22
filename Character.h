#pragma once
#include <iostream>
using namespace std;

class Character 
{
public:
	Character();
	virtual ~Character();

	int HP;
	int MP;
	int Gold;

	virtual void move();
	virtual void Attack();
	virtual void Drop();
};

