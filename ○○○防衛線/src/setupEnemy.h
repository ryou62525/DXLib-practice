#pragma once
#include "enemy.h"

class SetupEnemy
{
	Enemy *enemy;


public:

	SetupEnemy();
	~SetupEnemy();

	void Update();
	void Draw(Enemy enemy[], const int num);
	void Sort();

};