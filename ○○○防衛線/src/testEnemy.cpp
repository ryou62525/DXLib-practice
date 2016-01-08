#include "testEnemy.h"

TestEnemy::TestEnemy()
{
	pos_x = 50, pos_y = 100;

	ber_x = pos_x - 12;
	ber_y = pos_y + 32;
	ber_size = 50;
	velocity = 1.0f;

	is_active = TRUE;
	enemy_img = LoadGraph("res/shoot_ufo.png");
}

TestEnemy::~TestEnemy()
{

}

void TestEnemy::Update()
{
	Move();
	if (ber_x + ber_size <= ber_x)is_active = FALSE;
}

void TestEnemy::Draw()
{
	if (is_active == TRUE)
	{
		DrawGraph(pos_x, pos_y, enemy_img, FALSE);
		drawStrengthGauge();
	}
}

void TestEnemy::Move()
{
	pos_x += velocity;
	ber_x += velocity;
}

void TestEnemy::drawStrengthGauge()
{
	DrawBox(ber_x, ber_y, ber_x+50, ber_y+10, GetColor(0, 0, 0), FALSE);
	DrawBox(ber_x, ber_y, ber_x+ber_size, ber_y+10, GetColor(0, 0, 0), TRUE);
}

