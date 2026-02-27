#pragma once
#include "Enum.h"

class Potential
{
private:
	float potential[(int)POTENTIAL_ID::POTENTIAL_MAX];

	float str;						// 腕力
	float physicalDef;				// 物理防御
	float hit;						// 命中率

	float tec;						// 技力
	float eva;						// 回避率
	float critical;					// クリティカル

	float mag;						// 魔力
	float magicDef;					// 魔法防御力
	float debuffHitRate;			// 弱体効果命中

	float vitality;					// 耐久力
	float hp;						// HP
	float criticalResistance;		// クリティカル耐性

	float atk;						// 攻撃力

public:
	void InitPotential(int id);
	float GetPotential(POTENTIAL_ID p)const { return potential[(int)p]; }
};

