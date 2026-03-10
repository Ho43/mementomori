#pragma once

#include <string>
#include "MouseUIInputManager.h"

#define MAX_MENU (5)		// メニューの数
#define WINDOW_WIDTH  (640)	// ウィンドウの幅
#define WINDOW_HEIGHT (480)	// ウィンドウの高さ


// GetColorの色を入れるところ
struct Color
{
	int R;	// 赤
	int G;	// 緑
	int B;	// 青
};



class Screen
{
	// アイコンの表記名を入れるところ
	std::string iconTexts[MAX_MENU];
public:
	MouseUIInputManager mouseInput;

	// アイコンを強調する
	void Highlight(Color *color);

	// アイコンテキストの初期化
	void InitMenuIconText();

	// テキストを中央ぞろえにする
	int TextCenter(std::string text);

	// メニューを描画
	void DrawMenu();


	void DrawScreen(int index);

};

