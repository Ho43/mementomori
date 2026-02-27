#include "potential.h"
#include "Enum.h"

void Potential::InitPotential(int id)
{
    // キャラクターによって分岐
    switch (id)
    {
    case (int)CHARACTER_ID::CORDIE:    // コルディの場合
        str = 631721.0f;                    // 腕力
        physicalDef = 631721.0f;            // 物理防御
        hit = 315860.0f;                    // 命中率

        tec = 701912.0f;                    // 技力
        eva = 350956.0f;                    // 回避率
        critical = 350956.0f;               // クリティカル

        mag = 554510.0f;                    // 魔力
        magicDef = 554510.0f;               // 魔法防御力
        debuffHitRate = 277255.0f;          // 弱体効果命中

        vitality = 484319.0f;               // 耐久力
        hp = 4843190.0f;                    // HP
        criticalResistance = 242159.0f;     // クリティカル耐性

        atk = 701912.0f;                    // 攻撃力
        break;

    case (int)CHARACTER_ID::FLORENCE:       // フローレンスの場合
        str = 694893.0f;                    // 腕力
        physicalDef = 694893.0f;            // 物理防御
        hit = 347446.0f;                    // 命中率

        tec = 596625.0f;                    // 技力
        eva = 298312.0f;                    // 回避率
        critical = 298312.0f;               // クリティカル

        mag = 596625.0f;                    // 魔力
        magicDef = 596625.0f;               // 魔法防御力
        debuffHitRate = 298312.0f;          // 弱体効果命中

        vitality = 484319.0f;               // 耐久力
        hp = 4843190.0f;                    // HP
        criticalResistance = 242159.0f;     // クリティカル耐性

        atk = 694893.0f;                    // 攻撃力
        break;

    default:
        break;
    }
}

