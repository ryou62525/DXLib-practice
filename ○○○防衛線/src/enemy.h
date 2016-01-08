#pragma once
#include "DxLib.h"
#include <iostream>

enum class EnemyCount
{
	ENEMY1,
	ENEMY2,
	ENEMY3,
	MAX_ENEMY
};

enum class EnemyID
{
	ENEMY_01,
	ENEMY_02,
	ENEMY_03,
	MAX_ENEMY
};

struct EnemyState
{
	float pos_x;
	float pos_y;
	float speed;

	bool receive_damage;
	bool is_active;
};

static void SortEnemy(EnemyState enemy[], int num)
{
	enemy[0].receive_damage = TRUE;
	enemy[1].receive_damage = FALSE;
	enemy[2].receive_damage = FALSE;

	for (int h = 0; h < (num - 1); ++h)
	{
		for (int i = 0; i < (num - 1 - h); ++i)
		{
			if (enemy[i].pos_x < enemy[i + 1].pos_x)
			{
				std::swap(enemy[i], enemy[i + 1]);
			}
		}
	}

}

static void DrawEnemy(EnemyState enemy[], int num, int graph_handle)
{

	for (int i = 0; i < num; ++i)
	{
		if (enemy[i].is_active == TRUE)
		{
			DrawGraph((int)enemy[i].pos_x, (int)enemy[i].pos_y, graph_handle, FALSE);
			enemy[i].pos_x += enemy[i].speed;
		}
	}

}



class Enemy
{
	int pos_x, pos_y;
	float velocity;

	bool move_start;
	bool receive_damage;
	bool is_active;

	int enemy_img;

public:

	Enemy(int graph_handle);
	~Enemy();

	void Update();
	void Draw();
	
	void Move();
	void setMove(float velocity) { pos_x += (int)velocity; }

	int getPosX() { return pos_x; }
	int getPosY() { return pos_y; }
	float getVelocity() { return velocity; }
	
	bool getMoveStart() { return move_start; }
	bool getActive() { return is_active; }
	bool getReceiveDamage() { return receive_damage; }

};