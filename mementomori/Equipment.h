#pragma once
#include <vector>
#include <string>
#include"Enum.h"

#define MAX_SLOT (6)	// キャラクターが装備できる武具の種類

class Item
{
	int id;					// ID

	std::string name;		// 名前
	std::string rarity;		// レアリティ

	float baseStatus[5] = {0};	// 基礎ステータス
	float bonusStatus[4] = {0};	// 追加ステータス

	bool isEquipped = false;
public:
	const int& GetID()const { return id; }										// IDを取得
	const float& GetBaseStatus(int index)const { return baseStatus[index]; }	// 基礎ステータスを取得
	const float& GetBonusStatus(int index)const { return bonusStatus[index]; }	// 追加ステータスを取得
	const std::string& GetName()const { return name; }							// 名前を取得
	const std::string& GetRarity()const { return rarity; }						// レアリティを取得

	void SetName(std::string n) { name = n; }		// 名前をセットする
	void SetRarity(std::string r) { rarity = r; }	// レアリティをセットする
	void SetBaseStatus(float bs1, float bs2, float bs3, float bs4, float bs5);	// 基礎ステータスをセットする
	void SetBonusStatus(float bns1, float bns2, float bns3, float bns4);		// 追加ステータスをセットする

	// 装備している武具がどの部位のものか調べ、値を返す
	int EquipIDtoSlot(int id);

	// アイテムコンストラクタ
	Item(int i = 0, std::string n = "empty", std::string r = "empty") : id(i), name(n), rarity(r) {}
};


class Equipment
{
	// アイテムを格納するベクター
	Item slot[MAX_SLOT];
public:
	// indexで指定した番号のアイテムの情報を表示する。
	void DrawData(Item i, int x, int y)const;

	// キャラクターに武具を装備する
	void Equip(Item i);

	// 武具スロットIDを取得する
	Item GetSlotID(int index){ return slot[index]; }

	// 装備している武具の合計攻撃力を取得する
	int GetTotalATK();
};

extern Item masterItem[(int)EquipName_ID::EQUIP_NAME_MAX];