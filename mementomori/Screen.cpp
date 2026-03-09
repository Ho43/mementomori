#include "Screen.h"
#include "DxLib.h"

#define MAX_MENU (5)		// メニューの数
#define WINDOW_WIDTH  (640)	// ウィンドウの幅
#define WINDOW_HEIGHT (480)	// ウィンドウの高さ

bool Screen::CheckCursor(BoxPosition box)
{
	// 座標の箱をつくる
	int mouseX = 0;
	int mouseY = 0;

	// マウスの座標を取得
	GetMousePoint(&mouseX, &mouseY);

	// もしカーソルがアイコンと重なっていたら
	if (mouseX >= box.x1 && mouseX <= box.x2 &&
		mouseY >= box.y1 && mouseY <= box.y2)
	{
		// true
		return true;	
	}
	// そうでなかったら
	else
	{
		// false
		return false;
	}
}

void Screen::Highlight(Color* color)
{
	// +30して色を強調する
	color->R += 30;
	color->G += 30;
	color->B += 30;
}

void Screen::DrawMenu()
{
	// BoxPositionを一旦0で初期化
	BoxPosition box{0};

	// Colorを一旦0で初期化
	Color color{0};

	// MAX_MENU分繰り返す
	for (int i = 0; i < MAX_MENU; ++i)
	{
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
		if(CheckCursor(box))

			// 色を強調する
			Highlight(&color);

		// アイコン描写
		DrawBox(box.x1, box.y1, box.x2, box.y2, GetColor(color.R, color.G, color.B), true);
	}
}
