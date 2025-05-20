#include "InputManager.h"

InputManager::InputManager():mouseCoords(0,0)
{
}

InputManager::~InputManager()
{
}

void InputManager::setMouseCoords(float x, float y)
{
	mouseCoords.x = x;
	mouseCoords.y = y;
}

void InputManager::pressKey(unsigned int keyCode)
{
	keys[keyCode] = true;
}

void InputManager::releaseKey(unsigned int keyCode)
{
	keys[keyCode] = false;
}

bool InputManager::isKeyPressed(unsigned int keyCode)
{
	return false;
}

glm::vec2 InputManager::getMouseCoords()
{
	return glm::vec2();
}
