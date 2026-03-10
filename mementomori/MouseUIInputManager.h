#pragma once

#include "DxLib.h"
#include "Enum.h"
#include "Page.h"

// DrawBoxの座標入れるところ
struct BoxPosition
{
	int x1;	// X軸の始点
	int x2;	// X軸の終点
	int y1;	// Y軸の始点
	int y2;	// Y軸の終点
};


class MouseUIInputManager
{
	int prevMouse = 0;	// マウスの過去の状態
	int mouse = 0;		// マウスの今の状態
public:

	// ページクラス
	Page page;

	const int &GetPrevMouse()const { return prevMouse; }	// 過去のマウスの状態を取得する
	const int &GetMouse()const { return mouse; }			// 今のマウスの状態を取得する
	void SetPrevMouse(int p) { prevMouse = p; }	// prevMouseをセットする
	void SetMouse(int m) { mouse = m; }			// mouseをセットする

	// クリックした瞬間を検出する
	bool IsClickNow();

	// ガチャのクリックのあたり判定
	void GatyaClickZone(int index);

	// クエストのクリックのあたり判定
	void QuestClickZone(int index);

	// 装備のクリックのあたり判定
	void EquipClickZone(int index);

	// キャラのクリックのあたり判定
	void CharaClickZone(int index);

	// マイページのクリックのあたり判定
	void MyPageClickZone(int index);

	// メニューバーのクリックのあたり判定
	void MenuClickZone(int index);

	// クリックされた場所によってページを切り替える
	void SwitchPage(int index, Page_ID page);

	// カーソルがアイコンに重なっているかを確認する
	bool CheckCursor(BoxPosition box);
};