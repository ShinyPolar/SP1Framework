#pragma once
#include "Position.h"
class Entity
{
private:
	int HP;
public:
	virtual void Attack(Entity *ptrEntity) = 0;
	virtual void Defend() = 0;
	int getHP();
};
