#include "gameManager.h"

GameManager::GameManager()
{
	player = new Player;
	test_enemy = new TestEnemy;
}

GameManager::~GameManager()
{
	delete player;
	delete test_enemy;
}

void GameManager::Update()
{
	player->Update();
	test_enemy->Update();
	if (player->getIsAttack()==TRUE)test_enemy->setReceiveDamage(5);
}

void GameManager::Draw()
{
	player->Draw();
	test_enemy->Draw();
}
