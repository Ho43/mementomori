#include "Equipment.h"
#include "DxLib.h"
#include "Enum.h"

// キャラクターが装備している指定した部位の武具の情報を指定した座標に出す
void Equipment::DrawData(Item i, int x, int y) const
{
	std::string name = i.GetName();
	std::string rarity = i.GetRarity();
	int id = i.GetID();

	DrawFormatString(
		x,
		y,
		GetColor(244, 244, 244),
		"%s\n%s\n%d", name.c_str(), rarity.c_str(), id
	);

}

void Equipment::Equip(Item i)
{
	// もし装備が重複していなかったら ←　[あとで実装]
	/*if()*/
		// 装備する
		slot[i.EquipIDtoSlot(i.GetID())] = i;
}

int Equipment::GetTotalATK()
{
	int sum = 0;
	for (int i = 0; i < MAX_SLOT; ++i)
		slot[i].GetBaseStatus((int)EquipStatus_ID::ATK);

	return sum;
}

// 装備に関する情報をまとめたところ
Item masterItem[(int)EquipName_ID::EQUIP_NAME_MAX] =
{
	//-----------------------------------------------------------------------
	{(int)EquipName_ID::SATAN_SWORD	 ,"サタンの覇王剣"	,"SSR"},
	{(int)EquipName_ID::SATAN_BOOK	 ,"サタンの神滅書"	,"SSR"},
	{(int)EquipName_ID::SATAN_GUN	 ,"サタンの魔召銃"	,"SSR"},
	{(int)EquipName_ID::SATAN_HAT	 ,"サタンの夜会帽"	,"SSR"},
	{(int)EquipName_ID::SATAN_DRESS	 ,"サタンのドレス"	,"SSR"},
	{(int)EquipName_ID::SATAN_ARM	 ,"サタンの夜華"	,"SSR"},
	{(int)EquipName_ID::SATAN_SHOES	 ,"サタンの宝靴"	,"SSR"},
	{(int)EquipName_ID::SATAN_NECKLES,"サタンの瞳晶"	,"SSR"},
	//-----------------------------------------------------------------------

	//-----------------------------------------------------------------------
	{(int)EquipName_ID::BEELZEBUB_SWORD	 ,"ベルゼブブの闘剣"	,"SSR"},
	{(int)EquipName_ID::BEELZEBUB_BOOK	 ,"ベルゼブブの破戒論"	,"SSR"},
	{(int)EquipName_ID::BEELZEBUB_GUN	 ,"ベルゼブブの禍銃"	,"SSR"},
	{(int)EquipName_ID::BEELZEBUB_HAT	 ,"ベルゼブブの戦兜"	,"SSR"},
	{(int)EquipName_ID::BEELZEBUB_DRESS	 ,"ベルゼブブの邪大鎧"	,"SSR"},
	{(int)EquipName_ID::BEELZEBUB_ARM	 ,"ベルゼブブの武拳甲"	,"SSR"},
	{(int)EquipName_ID::BEELZEBUB_SHOES	 ,"ベルゼブブの武双脚"	,"SSR"},
	{(int)EquipName_ID::BEELZEBUB_NECKLES,"ベルゼブブの契り"	,"SSR"},
	//-----------------------------------------------------------------------

	//-----------------------------------------------------------------------
	{(int)EquipName_ID::LUCIFUGES_SWORD	 ,"ルキフグスの獄炎剣"	,"SSR"},
	{(int)EquipName_ID::LUCIFUGES_BOOK	 ,"ルキフグスの血盟書"	,"SSR"},
	{(int)EquipName_ID::LUCIFUGES_GUN	 ,"ルキフグスの紅弾銃"	,"SSR"},
	{(int)EquipName_ID::LUCIFUGES_HAT	 ,"ルキフグスの角帽"	,"SSR"},
	{(int)EquipName_ID::LUCIFUGES_DRESS	 ,"ルキフグスのドレス"	,"SSR"},
	{(int)EquipName_ID::LUCIFUGES_ARM	 ,"ルキフグスの紅朱拳"	,"SSR"},
	{(int)EquipName_ID::LUCIFUGES_SHOES	 ,"ルキフグスの紅爪"	,"SSR"},
	{(int)EquipName_ID::LUCIFUGES_NECKLES,"ルキフグスの祈り"	,"SSR"},
	//-----------------------------------------------------------------------

	//-----------------------------------------------------------------------
	{(int)EquipName_ID::ASTAROTH_SWORD	 ,"アスタロトの竜牙剣"	,"SSR"},
	{(int)EquipName_ID::ASTAROTH_BOOK	 ,"アスタロトの指導書"	,"SSR"},
	{(int)EquipName_ID::ASTAROTH_GUN	 ,"アスタロトの賢銃"	,"SSR"},
	{(int)EquipName_ID::ASTAROTH_HAT	 ,"アスタロトの花飾"	,"SSR"},
	{(int)EquipName_ID::ASTAROTH_DRESS	 ,"アスタロトの鎧衣"	,"SSR"},
	{(int)EquipName_ID::ASTAROTH_ARM	 ,"アスタロトの手套"	,"SSR"},
	{(int)EquipName_ID::ASTAROTH_SHOES	 ,"アスタロトのブーツ"	,"SSR"},
	{(int)EquipName_ID::ASTAROTH_NECKLES ,"アスタロトの誓い"	,"SSR"}
	//-----------------------------------------------------------------------
};

void Item::SetBaseStatus(float bs1, float bs2, float bs3, float bs4, float bs5)
{
	baseStatus[0] = bs1;
	baseStatus[1] = bs2;
	baseStatus[2] = bs3;
	baseStatus[3] = bs4;
	baseStatus[4] = bs5;
}

void Item::SetBonusStatus(float bns1, float bns2, float bns3, float bns4)
{
	bonusStatus[0] = bns1;
	bonusStatus[1] = bns2;
	bonusStatus[2] = bns3;
	bonusStatus[3] = bns4;
}

int Item::EquipIDtoSlot(int id)
{
	int eq = id % 8;
	int weapon = 0;
	
	// Sword Book Gunなら、「武器」と返す
	if (eq < 3 && eq >= 0)	return weapon;

	// それ以外なら、id % 8(そこの部位)をSlotに変換して返す
	else	return eq - 2;
}
