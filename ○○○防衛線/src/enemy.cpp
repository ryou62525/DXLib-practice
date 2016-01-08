#include "enemy.h"

Enemy::Enemy(int graph_handle)
{
	pos_x = -50, pos_y = 200;
	velocity = 1.0f;

	move_start = FALSE;
	receive_damage = FALSE;
	is_active = TRUE;

	enemy_img = graph_handle;
}

Enemy::~Enemy()
{

}

void Enemy::Update()
{
	Move();
	move_start = TRUE;
}

void Enemy::Draw()
{
	DrawGraph(pos_x, pos_y, enemy_img, FALSE);
}

void Enemy::Move()
{
	if (move_start == TRUE)
	{
		pos_x += (int)velocity;
	}
}