#include "Screen.h"
#include "DxLib.h"



void Screen::Highlight(Color* color)
{
	// colorを+30して色を強調する
	color->R += 30;
	color->G += 30;
	color->B += 30;
}

void Screen::InitMenuIconText()
{
	iconTexts[0] = "マイページ";
	iconTexts[1] = "キャラ";
	iconTexts[2] = "装備";
	iconTexts[3] = "クエスト";
	iconTexts[4] = "ガチャ";
}

int Screen::TextCenter(std::string text)
{
	// ずらす座標の合計
	int sum = 0;

	// 文字数偶数だったら半文字分ずらす
	if (text.size() % 2 == 0)	sum = 15 / 2;

	for (int i = 0; i < text.size(); ++i)
	{
		// 文字数分3を足す
		sum += 3;
	}

	// return sum
	return sum;
}

void Screen::DrawMenu()
{
	// BoxPositionを一旦0で初期化
	BoxPosition box{ 0 };

	// Colorを一旦0で初期化
	Color color{ 0 };

	// メニューに表示するテキストを初期化
	InitMenuIconText();

	// MAX_MENU分繰り返す
	for (int i = 0; i < MAX_MENU; ++i)
	{
		// メニューの背景の描画
	//-------------------------------------------------------------------------------------------
		// RGBを99で設定
		color.R = 99;
		color.G = 99;
		color.B = 99;

		// アイコンの大きさを設定
		box.x1 = WINDOW_WIDTH / MAX_MENU * i;
		box.x2 = WINDOW_WIDTH / MAX_MENU * (i + 1);
		box.y1 = WINDOW_HEIGHT - 30;
		box.y2 = WINDOW_HEIGHT;

		// もしカーソルがアイコンと重なっていたら
		if (mouseInput.CheckCursor(box))
		{
			Highlight(&color);	// 色を強調する

			// かつ、左クリックをしたら
			if (mouseInput.IsClickNow())
				mouseInput.SwitchPage(i,mouseInput.page.GetPage());	//クリックした場所によってページを切り替える
		}

		// アイコン描写
		DrawBox(box.x1, box.y1, box.x2, box.y2, GetColor(color.R, color.G, color.B), true);

		
	//-------------------------------------------------------------------------------------------

		// メニューのテキストの描画
	//-------------------------------------------------------------------------------------------

		// アイコンボックスの中心を求める
		int textPositionX = (box.x1 + box.x2) / 2;
		int textPositionY = (box.y1 + box.y2) / 2;

		// テキストを中央ぞろえにする
		textPositionX -= TextCenter(iconTexts[i].c_str());

		// テキストを書く
		DrawFormatString
		(
			textPositionX,
			textPositionY - 5,
			GetColor(244, 244, 244),
			"%s", iconTexts[i].c_str()
		);
	//-------------------------------------------------------------------------------------------
	}
}

