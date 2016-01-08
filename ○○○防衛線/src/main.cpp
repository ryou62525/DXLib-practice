#include "DxLib.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmaLine, int  nCmaShow)
{
	SetBackgroundColor(255, 255, 255);
	if (DxLib_Init() == -1)return -1;

	ChangeWindowMode(TRUE);
	SetGraphMode(640, 480, GetColor(0, 0, 0));

	LoadGraphScreen(100, 100, "res/shoot_player.bmp", FALSE);

	WaitKey();
	DxLib_End();

	return 0;
}