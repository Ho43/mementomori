#pragma once
#include "Enum.h"
#include "Status.h"
#include "Potential.h"
#include "Equipment.h"

class Character
{
	int id;

	int attribute;
	int level;

public:
	Status status;
	Potential potential;
	Equipment eq;

	Character(int id = 0, int attribute = 0, int level = 0)
		:id(id), attribute(attribute), level(level) {
		InitCharacter(id);
	}

	void InitCharacter(int id)
	{
		InitStatus(id);
		InitPotential(id);
	}

	void InitStatus(int id) { status.InitStatus(id); }
	void InitPotential(int id) { potential.InitPotential(id); }

	// キャラクターの基本情報を表示する
	void DrawCharacterData(int index, int x, int y);
};

