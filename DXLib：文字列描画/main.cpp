#include "DxLib.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmaLine, int  nCmaShow)
{
	if (DxLib_Init() == -1)return -1;
	
	ChangeWindowMode(TRUE);
	SetGraphMode(640, 480, GetColor(0, 0, 0));

	unsigned int color = GetColor(255, 255, 255);

	//文字列描画
	DrawString(20, 20, "こんにちは。", color);

	//書式付き文字列の描画
	int value = 10;
	DrawFormatString(20, 40, color, "valueの中身は %dです。", value );

	//描画した時の文字列の幅(ドット単位)を得る
	int StrWidth, StrLen;
	StrLen = strlen("こんにちは、　");						//文字列の長さを取得
	StrWidth = GetDrawStringWidth("こんにちは、　", StrLen);	//描画時の文字列の幅を取得
	DrawString(20, 60, "こんにちは、　", color);
	DrawString(StrWidth, 60, "いい天気ですね。", color);
	
	

	WaitKey();
	DxLib_End();

	return 0;
}