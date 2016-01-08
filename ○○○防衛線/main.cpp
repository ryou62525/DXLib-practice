#include "src/image.h"
#include "src/component.h"
#include "src/gameManager.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmaLine, int  nCmaShow)
{
	SetBackgroundColor(255, 255, 255);	//DxLib_Init�֐��̑O�ɌĂяo���Ă���
	ChangeWindowMode(TRUE);				//�E�B���h�E���[�h�ŕ`��
	DxLib_Init();						//���C�u�����̏�����
	SetDrawScreen(DX_SCREEN_BACK);		//�`���𗠉�ʂɐݒ�
	SetGraphMode(1640, 450, 32);

	GameManager gameManager;


	while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0)
	{
	
		gameManager.Update();
		gameManager.Draw();


	

		if (isPushKey(KEY_INPUT_ESCAPE))break;
	}

	DxLib_End();

	return 0;
}

/*SortEnemy(enemy, (int)EnemyCount::MAX_ENEMY);
DrawEnemy(enemy, (int)EnemyCount::MAX_ENEMY, enemy_img);*/


/*for (int i = 0; i < (int)EnemyCount::MAX_ENEMY; ++i)
{
if (isPushKey(KEY_INPUT_SPACE))
{
if (enemy[i].receive_damage == TRUE)
{
enemy[i].pos_x-=20;
}
}
}*/