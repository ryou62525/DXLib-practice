#pragma once
#include "component.h"

class Player
{

	int player_img;
	float pos_x, pos_y;
	float ber_size;
	bool is_attack;

public:
	
	Player();

	void Update();
	void Draw();

	bool getIsAttack() { return is_attack; }
};