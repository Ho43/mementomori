#pragma once
#include "Enum.h"

class Status
{
	float status[(int)STATUS_ID::STATUS_MAX];	// ステータス

public:
	// ステータスを初期化する
	void InitStatus(int id);

	// 指定したステータスを取得する
	float GetStatus(STATUS_ID s) { return status[(int)s]; }
};

