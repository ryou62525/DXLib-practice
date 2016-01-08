#pragma once
#include "component.h"

class TestEnemy
{

	int pos_x, pos_y;
	int ber_x, ber_y;
	int ber_size;
	float velocity;
	int enemy_img;

	bool is_active;

public:

	TestEnemy();
	~TestEnemy();

	void Update();
	void Draw();
	void Move();
	void drawStrengthGauge();

	void setReceiveDamage(int damage) { ber_size -= damage; }
};