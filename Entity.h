#pragma once
#include <glm/glm.hpp>
#include "SpriteBatch.h"
#include "GLTexture.h"
#include <vector>
#include <string>
//#include "Zombie.h"
//#include "Human.h"
class Human;
class Zombie;
using namespace std;

const float AGENT_WIDTH = 60.0f;
const float AGENT_RADIUS = AGENT_WIDTH / 2;
class Entity
{
protected:
	glm::vec2 position;
	float speed;
	void checkTilePosition(const vector<string>& levelData,
		vector<glm::vec2>&collideTilePositio,float x,float y);
	void collideWithTile(glm::vec2 tilePos);
public:
	Entity();
	glm::vec2 getPosition()const {
		return position;
	}
	virtual void update(const vector<string>& levelData,
		vector<Human*>& humans, vector<Zombie*>zombies) = 0;
	void draw(SpriteBatch& spritebatch);
	bool collideWithLevel(const vector<string>& levelData);
	virtual ~Entity();
	bool collideAgent(Entity* entity);
};

