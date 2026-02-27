#pragma once

// キャラクター識別列挙型
enum class CHARACTER_ID
{
	CORDIE,
	FLORENCE,
	CHARACTER_MAX
};

// 属性識別列挙型
enum class ATTRIBUTE_ID
{
	BLUE = 1,
	RED,
	GREEN,
	YELLOW,
	SKY,
	DARK
};

// ページ名列挙型
enum class PEGE_ID
{
	MYPAGE,
	CHARA,
	BOX,
	QUEST,
	CHALLENGE,
	GTYA,
	CHAT,
	GUILD,

	BATTLE_WINDOW,
	BATTLE,
	MAX_PAGE
};

// ステータス識別列挙型
enum class STATUS_ID
{
	HP,						// HP
	ATK,					// 攻撃力
	DEF,					// 防御力
	DEF_PEN,				// 防御貫通	
	SPEED,					// スピード

	PHYSICAL_DEF_PEN,		// 物理防御貫通

	HIT,					// 命中
	CRITICAL,				// クリティカル
	CRITICAL_DAMAGE_UP,		// クリダメ強化

	DEBUFF_HIT_RATE,		// 弱体命中効果
	COUNTER,				// カウンター

	PHYSICAL_DEF, 			// 物理防御力
	MAGIC_DEF,				// 魔法防御力
	EVA,					// 回避
	CRITICAL_RESISTANCE,						// クリティカル耐性
	PHYSICAL_CRITICAL_DAMAGE_MITIGATION,		// 物理クリダメ緩和
	MAGIC_CRITICAL_DAMAGE_MITIGATION,			// 魔法クリダメ緩和
	DEBUFF_RESISTANCE,							// 弱体効果耐性 
	HP_DRAIN,									// HPドレイン
	STATUS_MAX
};

// 潜在能力識別
enum class POTENTIAL_ID
{
	STR,							// 腕力
	PHYSICAL_DEF,					// 物理防御
	HIT,							// 命中率

	TEC,							// 技力
	EVA,							// 回避率
	CRITICAL,							// クリティカル

	MAG,							// 魔力
	MAGIC_DEF,						// 魔法防御力
	DEBUFF_HIT_RATE,				// 弱体効果命中

	VITALITY,						// 耐久力
	HP,								// HP
	CRITICAL_RESISTANCE,			// クリティカル耐性

	ATK,								// 攻撃力
	POTENTIAL_MAX
};

// 武具レアリティ識別
enum class EquipRarity_ID
{
	R,				// 0 R
	SR,				// 1 SR
	SSR,			// 2 SSR
	UR,				// 3 UR
	LR,				// 4 LR
	DEDICATED,		// 5 専用武器
	EQUIP_RARITY_MAX
};

// 武具シリーズ識別
enum class EquipSeries_ID
{
	NAHEMA,      // 0	ナヘマー
	LILITH,      // 1	リリス
	ADRAMALECH,  // 2	アドラメレク
	BAAL,        // 3	バアル	

	SANDALPHON,  // 4	サンダルフォン
	GABRIEL,     // 5	ガブリエル
	RAPHAEL,     // 6	ラファエル	
	HANIEL,      // 7	ハニエル

	ASTAROTH,    // 8	アスタロト
	LUCIFUGE,    // 9	ルキフグス
	BEELZEBUB,   // 10	ベルゼブブ
	SATAN,       // 11	サタン

	MICHAEL,     // 12	ミカエル
	METATRON,    // 13	メタトロン
	EQUIP_SERIES_MAX
};

enum class EquipSlot_ID
{
	WEAPON,		// 0
	HAT,		// 1
	DRESS,		// 2
	ARM,		// 3
	SHOES,		// 4
	NECKLES,	// 5
	EQUIP_SLOT_MAX
};

// 装備基礎ステータス識別
enum class EquipStatus_ID
{
	ATK,					// 0 攻撃力
	DEF,					// 1 防御力
	PHYSICAL_DEF,			// 2 物理防御力
	MAGIC_DEF,				// 3 魔法防御力
	DEBUFF_RESISTANCE,		// 4 弱体効果耐性
	EQUIP_STATUS_MAX
};

// 装備潜在能力識別
enum class EquipPotential_ID
{
	STR,					// 0 腕力
	TEC,					// 1 技力
	MAG,					// 2 魔力
	VITALITY, 				// 3 耐久力
	EQUIP_POTENTIAL_MAX
};


// test中。装備識別
enum class EquipName
{
	SWORD,			// 0
	BOOK,			// 1
	GUN,			// 2
	HAT,			// 3
	DRESS,			// 4
	ARM,			// 5
	SHOES,			// 6
	NECKLES,		// 7
	EQUIP_NAME_MAX
};



