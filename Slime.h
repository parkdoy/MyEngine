#pragma once
#include "Monster.h"

class Slime :
    public Monster
{
public:
    Slime();
    virtual ~Slime();

    virtual void move() override;
    virtual void Attack()override;
    virtual void Drop()override;
};

