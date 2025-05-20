#pragma once
#include <SDL3/SDL.h>
#include <GL/glew.h>
#include <iostream>
#include "Sprite.h"
#include "GLSProgram.h"
#include "InputManager.h"
#include "Camera2D.h"
#include <vector>
using namespace std;
enum class GameState {
	PLAY,EXIT
};

class MainGame
{
private:
	int witdh;
	int height;
	InputManager inputManager;
	Camera2D camera2D;
	float time = 0;
	Sprite sprite;
	vector<Sprite*> sprites;
	GLSProgram program;
	SDL_Window* window;
	void init();
	void processInput();
	void initShaders();
public:
	MainGame();
	~MainGame();
	GameState gameState;
	void run();
	void update();
	void draw();
};

