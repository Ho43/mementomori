#pragma once
#include "Enum.h"
#include "Status.h"
#include "Potential.h"
#include "Equipment.h"

class Character
{
	int id;			// ID

	int attribute;	// 属性
	int level;		// レベル

public:
	Status status;			// ステータス
	Potential potential;	// 潜在能力
	Equipment eq;			// 装備

	// キャラクターコンストラクタ
	Character(int id = 0, int attribute = 0, int level = 0)
		:id(id), attribute(attribute), level(level)
	{InitCharacter(id);}

	// キャラクター初期化
	void InitCharacter(int id)
	{
		InitStatus(id);
		InitPotential(id);
	}

	// ステータス初期化
	void InitStatus(int id) { status.InitStatus(id); }

	// 潜在能力初期化
	void InitPotential(int id) { potential.InitPotential(id); }

	// キャラクターの基本情報を表示する
	void DrawCharacterData(int index, int x, int y);
};

