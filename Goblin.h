#pragma once
#include "Monster.h"



class Goblin :
    public Monster
{
public:
    Goblin();
    virtual ~Goblin();

    virtual void move() override;
    virtual void Attack()override;
    virtual void Drop()override;
};

