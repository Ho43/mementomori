#pragma once
#include "Enum.h"
class Page
{
	Page_ID page = Page_ID::MYPAGE;	// ページを入れるところ

public:
	const Page_ID& GetPage() const { return page; }	// ページを取得する
	void SetPage(Page_ID p) { page = p; }			// ページをセットする
};

