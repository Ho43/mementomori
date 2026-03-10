#include "MouseUIInputManager.h"
#include "DxLib.h"

bool MouseUIInputManager::IsClickNow()
{
	// mouseに現在のマウスの状態を保存しておく
	int mouse = GetMouseInput();

	// 過去に押されていなくて、クリックした場合true
	bool clicked = (mouse & MOUSE_INPUT_LEFT) && !(prevMouse & MOUSE_INPUT_LEFT);

	// 現在の状態をprevMouseに保存しておく
	prevMouse = mouse;

	// 結果を返す
	return clicked;
}

void MouseUIInputManager::GatyaClickZone(int index)
{
	MenuClickZone(index);
}

void MouseUIInputManager::QuestClickZone(int index)
{
	MenuClickZone(index);
}

void MouseUIInputManager::EquipClickZone(int index)
{
	MenuClickZone(index);
}

void MouseUIInputManager::CharaClickZone(int index)
{
	MenuClickZone(index);
}

void MouseUIInputManager::MyPageClickZone(int index)
{
	MenuClickZone(index);
}

void MouseUIInputManager::MenuClickZone(int index)
{
	switch (index)
	{
	case (int)Page_ID::MYPAGE:	page.SetPage(Page_ID::MYPAGE);	break;
	case (int)Page_ID::CHARA:	page.SetPage(Page_ID::CHARA);	break;
	case (int)Page_ID::EQUIP:	page.SetPage(Page_ID::EQUIP);	break;
	case (int)Page_ID::QUEST:	page.SetPage(Page_ID::QUEST);	break;
	case (int)Page_ID::GATYA:	page.SetPage(Page_ID::GATYA);	break;

	}
}

void MouseUIInputManager::SwitchPage(int index, Page_ID page)
{
	switch (page)
	{
	case Page_ID::MYPAGE:	MyPageClickZone(index);	break;
	case Page_ID::CHARA:	CharaClickZone(index);	break;
	case Page_ID::EQUIP:	EquipClickZone(index);	break;
	case Page_ID::QUEST:	QuestClickZone(index);	break;
	case Page_ID::GATYA:	GatyaClickZone(index);	break;
	}
}

bool MouseUIInputManager::CheckCursor(BoxPosition box)
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
