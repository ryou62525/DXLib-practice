#include "player.h"

Player::Player()
{
	player_img = LoadGraph("res/yjimage.jpg");
	pos_x = 1200, pos_y = 225;
	ber_size = 0;
	is_attack = FALSE;
}

void Player::Update()
{
	if (ber_size <= 70)
	{
		ber_size += 1;
		is_attack = FALSE;
	}
	if (ber_size >= 70)
	{
		is_attack = TRUE;
		ber_size = 0;
	}
}

void Player::Draw()
{
	DrawGraph(pos_x, pos_y, player_img, FALSE);
	DrawBox(pos_x, pos_y + 95, pos_x + 70, pos_y + 110, GetColor(0, 0, 0), FALSE);
	DrawBox(pos_x, pos_y + 95, pos_x + ber_size, pos_y + 110, GetColor(0, 0, 0), TRUE);
}
