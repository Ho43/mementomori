#include "Character.h"
#include "DxLib.h"

void Character::DrawCharacterData(int index, int x, int y)
{
	DrawFormatString(
		x,
		y,
		GetColor(244, 244, 244),
		"ID = %d\nattribute = %d\nlevel = %d", id, attribute, level
	);
}
