#pragma once
#include "DxLib.h"

static bool isPushKey(int key_num)
{
	if (CheckHitKey(key_num) == 1)
	{
		return true;
	}
	return false;
}
