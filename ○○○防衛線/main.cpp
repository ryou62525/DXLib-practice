#include "src/image.h"
#include "src/component.h"
#include "src/gameManager.h"
#include "src/enemy.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmaLine, int  nCmaShow)
{
	SetBackgroundColor(255, 255, 255);	//DxLib_Init関数の前に呼び出しておく
	ChangeWindowMode(TRUE);				//ウィンドウモードで描画
	DxLib_Init();						//ライブラリの初期化
	SetDrawScreen(DX_SCREEN_BACK);		//描画先を裏画面に設定
	SetGraphMode(1640, 450, 32);

	GameManager gameManager;

	int img = LoadGraph("res/shoot_ufo.png");
	//Enemy enemy(img);
	EnemyState enemy[] =
	{
		{ -50, 100, 1, FALSE, TRUE},
		{ -50, 200, 2, FALSE, TRUE },
		{ -50, 300, 3, FALSE, TRUE },
	};

	while (ScreenFlip() == 0 && ProcessMessage() == 0 && ClearDrawScreen() == 0)
	{

		/*gameManager.Update();
		gameManager.Draw();*/


		SortEnemy(enemy, (int)EnemyCount::MAX_ENEMY);
		DrawEnemy(enemy, (int)EnemyCount::MAX_ENEMY, img);


		for (int i = 0; i < (int)EnemyCount::MAX_ENEMY; ++i)
		{
			if (isPushKey(KEY_INPUT_SPACE))
			{
				if (enemy[i].receive_damage == TRUE)
				{
					enemy[i].pos_x -= 20;
				}
			}
		}
		if (isPushKey(KEY_INPUT_ESCAPE))break;
	}

	DxLib_End();

	return 0;
}
