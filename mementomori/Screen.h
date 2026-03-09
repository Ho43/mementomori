#pragma once

// DrawBoxの座標入れるところ
struct BoxPosition
{
	int x1;	// X軸の始点
	int x2;	// X軸の終点
	int y1;	// Y軸の始点
	int y2;	// Y軸の終点
};

// GetColorの色を入れるところ
struct Color
{
	int R;	// 赤
	int G;	// 緑
	int B;	// 青
};

class Screen
{
public:

	// カーソルがアイコンに重なっているかを確認する
	bool CheckCursor(BoxPosition box);

	// アイコンを強調する
	void Highlight(Color *color);

	// メニューを描画
	void DrawMenu();

	void DrawScreen();

};

