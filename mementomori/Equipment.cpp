#include "Equipment.h"
#include "DxLib.h"
#include "Enum.h"

int Equipment::swordID = (int)EquipName::SWORD;
int Equipment::bookID = (int)EquipName::BOOK;
int Equipment::gunID = (int)EquipName::GUN;
int Equipment::hatID = (int)EquipName::HAT;
int Equipment::dressID = (int)EquipName::DRESS;
int Equipment::armID = (int)EquipName::ARM;
int Equipment::shoesID = (int)EquipName::SHOES;
int Equipment::equipMaxID = (int)EquipName::EQUIP_NAME_MAX;

void Equipment::DrawData(int index, int x, int y) const
{
	if (index <= items.size())
	{
		std::string name = items[index].GetName();
		std::string rarity = items[index].GetRarity();
		int id = items[index].GetID();

		DrawFormatString(
			x,
			y,
			GetColor(244, 244, 244),
			"%s\n%s\n%d", name.c_str(), rarity.c_str(), id
		);
	}
}

