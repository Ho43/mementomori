#include "DxLib.h"
#include "Enum.h"
#include "Equipment.h"
#include "Character.h"
#include "Screen.h"
#include "time.h"

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


	Character character[(int)CHARACTER_ID::CHARACTER_MAX] =
	{
		{(int)CHARACTER_ID::CORDIE,(int)ATTRIBUTE_ID::GREEN,240},
		{(int)CHARACTER_ID::FLORENCE,(int)ATTRIBUTE_ID::BLUE,240}
	};


	character[(int)CHARACTER_ID::FLORENCE].eq.Equip(masterItem[(int)EquipName_ID::ASTAROTH_ARM]);
	character[(int)CHARACTER_ID::FLORENCE].eq.Equip(masterItem[(int)EquipName_ID::SATAN_ARM]);

	int x = 0;
	int y = 0;

	// スクリーンクラス
	Screen screen;
	// ----------------------------------------------------------------------------
	// メインループ
	while (CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		// 画面のクリア
		ClearDrawScreen();

		character[(int)CHARACTER_ID::FLORENCE].DrawCharacterData((int)CHARACTER_ID::CORDIE, 10, 10);



		character[(int)CHARACTER_ID::FLORENCE].eq.DrawData(character[(int)CHARACTER_ID::FLORENCE].eq.GetSlotID((int)EquipSlot_ID::ARM),100,100);


		GetMousePoint(&x, &y);

		DrawFormatString(500, 200, GetColor(244, 244, 244), "x = %d, y = %d", x, y);
		DrawFormatString(500, 150, GetColor(244, 244, 244), "page = %d",(int)screen.mouseInput.page.GetPage());

		screen.DrawMenu();

		// 画面を更新する
		ScreenFlip();
	}

	// DXライブラリの終了
	DxLib_End();

	// プログラムの終了
	return 0;
}