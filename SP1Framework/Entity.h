#pragma once
#include "Position.h"
class Entity
{
public:
	int HP;
	Position Pos;

	Entity();
	~Entity();
	virtual void Attack(Entity *ptrEntity) = 0;
	virtual void Defend() = 0;
	int getHP();
	void setPos(Position p);
	Position getPos();
};
