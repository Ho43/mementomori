#pragma once
#include <vector>
#include <string>
#include"Enum.h"

class Item
{
	int id;					// ID

	std::string name;		// 名前
	std::string rarity;		// レアリティ

	static const int baseStatusSize = 5;
	static const int bonusStatusSize = 4;

	float baseStatus[baseStatusSize];	// 基礎ステータス
	float bonusStatus[bonusStatusSize];	// 追加ステータス
public:
	const int& GetID()const { return id; }										// IDを取得
	const float& GetBaseStatus(int index)const { return baseStatus[index]; }	// 基礎ステータスを取得
	const float& GetBonusStatus(int index)const { return bonusStatus[index]; }	// 追加ステータスを取得
	const std::string& GetName()const { return name; }							// 名前を取得
	const std::string& GetRarity()const { return rarity; }						// レアリティを取得

	void SetName(std::string n) { name = n; }		// 名前をセットする
	void SetRarity(std::string r) { rarity = r; }	// レアリティをセットする


	// アイテムコンストラクタ
	Item(int id = 0, std::string name = "empty", std::string rarity = "empty") :
		id(id), name(name), rarity(rarity), baseStatus{ 0 }, bonusStatus{ 0 } {}
};


class Equipment
{
	// アイテムを格納するベクター
	std::vector<Item> items;
public:
	static int swordID;
	static int bookID;
	static int gunID;
	static int hatID;
	static int dressID;
	static int armID;
	static int shoesID;
	static int equipMaxID;

	// アイテムnecklesIDベクターにアイテムを追加する
	void AddIteitemMaxIDm(Item i) { items.push_back(i); }

	// indexで指定した番号のアイテムの情報を表示する。
	void DrawData(int index, int x, int y)const;
};

