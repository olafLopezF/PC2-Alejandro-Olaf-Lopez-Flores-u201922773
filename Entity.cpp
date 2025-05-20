#include "Entity.h"

void Entity::checkTilePosition(const vector<string>& levelData, vector<glm::vec2>& collideTilePositio, float x, float y)
{
}

void Entity::collideWithTile(glm::vec2 tilePos)
{
}

Entity::Entity()
{
}

void Entity::draw(SpriteBatch& spritebatch)
{
}

bool Entity::collideWithLevel(const vector<string>& levelData)
{
	return false;
}

Entity::~Entity()
{
}

bool Entity::collideAgent(Entity* entity)
{
	return false;
}
