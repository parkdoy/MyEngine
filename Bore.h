#pragma once
#include "Monster.h"

class Bore :
    public Monster
{
public:

    Bore();
    virtual ~Bore();
    
    virtual void move() override;
    virtual void Attack()override;
    virtual void Drop()override;

};

