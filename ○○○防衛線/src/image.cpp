#include "image.h"

Image::Image()
{
	image = LoadGraph("res/shoot_ufo.png");
	pos_x = 100;
	rotate_value = 1;
}

void Image::Draw()
{

	pos_x = pos_x + 2;
	rotate_value += 0.001f;

	DrawGraph(pos_x, 80, image, FALSE);
	DrawBox(pos_x - 10, 120, pos_x + 40, 130, GetColor(0, 0, 0), TRUE);

	DrawGraph(pos_x / 2, 180, image, FALSE);
	DrawBox(pos_x / 2 - 10, 220, pos_x / 2 + 40, 230, GetColor(0, 0, 0), TRUE);

	DrawGraph(pos_x / 3, 380, image, FALSE);
	DrawBox(pos_x / 3 - 10, 420, pos_x / 3 + 40, 430, GetColor(0, 0, 0), TRUE);

}
