#include "DxLib.h"
#include "Enum.h"
#include "Equipment.h"
#include "Character.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow)
{
	// ウィンドウモードで起動
	ChangeWindowMode(true);

	// DXライブラリの初期化
	if (DxLib_Init() < 0)
	{
		return -1;
	}

	const int cordieID = (int)CHARACTER_ID::CORDIE;
	const int florenceID = (int)CHARACTER_ID::FLORENCE;
	const int characterMaxID = (int)CHARACTER_ID::CHARACTER_MAX;


	Item items[Equipment::equipMaxID]
	{
		{swordID	,"サタンの覇王剣","SSR"},
		{bookID		,"サタンの神滅書","SSR"},
		{gunID		,"サタンの魔召銃","SSR"},
		{hatID		,"サタンの夜会帽","SSR"},
		{dressID	,"サタンのドレス","SSR"},
		{armID		,"サタンの夜華"  ,"SSR"},
		{shoesID	,"サタンの宝靴"  ,"SSR"},
		{necklesID	,"サタンの瞳晶"  ,"SSR"}
	};

	Character character[characterMaxID] =
	{
		{cordieID,(int)ATTRIBUTE_ID::GREEN,240},
		{(int)CHARACTER_ID::FLORENCE,(int)ATTRIBUTE_ID::BLUE,240}
	};
	for (int i = 0; i < (int)EquipName::EQUIP_NAME_MAX; ++i)
		// character[cordieID].eq.AddItem(items[i]);
		// character[GetID(EquipName::SWORD)].eq.AddItem(items[i]);
		character[Equipment::swordID].eq.AddItem(items[i]);


	// ----------------------------------------------------------------------------
	// メインループ
	while (CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		// 画面のクリア
		ClearDrawScreen();

		character[cordieID].DrawCharacterData((int)CHARACTER_ID::CORDIE, 10, 10);

		// 画面を更新する
		ScreenFlip();
	}

	// DXライブラリの終了
	DxLib_End();

	// プログラムの終了
	return 0;
}