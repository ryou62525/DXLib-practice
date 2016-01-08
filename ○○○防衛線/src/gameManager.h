#pragma once
#include "player.h"
#include "testEnemy.h"

class GameManager
{
	Player *player;
	TestEnemy *test_enemy;

public:

	GameManager();
	~GameManager();

	void Update();
	void Draw();

};