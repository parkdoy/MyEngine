#pragma once
#include "Character.h"

class Monster : public Character
{
public:
	Monster();
	virtual ~Monster();
	
	virtual void move() override;
	virtual void Attack()override;
	virtual void Drop()override;

};

