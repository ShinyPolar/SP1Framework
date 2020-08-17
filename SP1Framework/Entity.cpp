#include "Entity.h"

Entity::Entity()
{
}

Entity::~Entity()
{
}

int Entity::getHP()
{
	return HP;
}

void Entity::setPos(Position p)
{
	Pos = p;
}

Position Entity::getPos()
{
	return Pos;
}
