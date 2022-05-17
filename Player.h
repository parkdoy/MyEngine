#pragma once
#include "Character.h"

class Player : public Character
{
public:
	Player();
	virtual ~Player();

	virtual void Drop() override;
	virtual void move()override;
	virtual void Attack()override;
	virtual void Pickup();

};

