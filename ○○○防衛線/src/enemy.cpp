#include "enemy.h"

Enemy::Enemy()
{

	status.pos_x = -50, status.pos_y = 200;
	status.velocity = 1.0f;

	status.move_start = FALSE;
	status.receive_damage = FALSE;
	status.is_active = TRUE;

	enemy_img = LoadGraph("shoot_ufo.png");
}

Enemy::~Enemy()
{

}

void Enemy::Update()
{
	Move();
	status.move_start = TRUE;
}

void Enemy::Draw()
{
	DrawGraph(status.pos_x, status.pos_y, enemy_img, FALSE);
}

void Enemy::Move()
{
	if (status.move_start == TRUE)
	{
		status.pos_x += (int)status.velocity;
	}
}