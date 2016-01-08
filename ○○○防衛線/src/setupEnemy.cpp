#include "setupEnemy.h"

SetupEnemy::SetupEnemy()
{
	
}

SetupEnemy::~SetupEnemy()
{

}

void SetupEnemy::Update()
{

}

void SetupEnemy::Draw(Enemy enemy[], const int num)
{
	for (int i = 0; i < num; ++i)
	{
		if (enemy[i].getActive() == true)
		{
//			DrawGraph(enemy[i].getPosX(), enemy[i].getPosY(), , FALSE);
			 enemy[i].setMove(enemy[i].getVelocity());
		}
	}
}

void SetupEnemy::Sort()
{

}
