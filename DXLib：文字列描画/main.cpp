#include "DxLib.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmaLine, int  nCmaShow)
{
	if (DxLib_Init() == -1)return -1;
	
	ChangeWindowMode(TRUE);
	SetGraphMode(640, 480, GetColor(0, 0, 0));

	unsigned int color = GetColor(255, 255, 255);

	//������`��
	DrawString(20, 20, "����ɂ��́B", color);

	//�����t��������̕`��
	int value = 10;
	DrawFormatString(20, 40, color, "value�̒��g�� %d�ł��B", value );

	//�`�悵�����̕�����̕�(�h�b�g�P��)�𓾂�
	int StrWidth, StrLen;
	StrLen = strlen("����ɂ��́A�@");						//������̒������擾
	StrWidth = GetDrawStringWidth("����ɂ��́A�@", StrLen);	//�`�掞�̕�����̕����擾
	DrawString(20, 60, "����ɂ��́A�@", color);
	DrawString(StrWidth, 60, "�����V�C�ł��ˁB", color);
	
	

	WaitKey();
	DxLib_End();

	return 0;
}