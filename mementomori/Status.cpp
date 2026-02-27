#include "Status.h"
#include "Enum.h"

void Status::InitStatus(int id)
{
    // enum class から const int に
    // -----------------------------------------------------------------------------------------------------
    const int hp = (int)STATUS_ID::HP;
    const int atk = (int)STATUS_ID::ATK;
    const int def = (int)STATUS_ID::DEF;
    const int defPEN = (int)STATUS_ID::DEF_PEN;
    const int speed = (int)STATUS_ID::SPEED;
    const int physicalDefPEN = (int)STATUS_ID::PHYSICAL_DEF_PEN;
    const int hit = (int)STATUS_ID::HIT;
    const int critical = (int)STATUS_ID::CRITICAL;
    const int critical_damage_up = (int)STATUS_ID::CRITICAL_DAMAGE_UP;
    const int debuffHitRate = (int)STATUS_ID::DEBUFF_HIT_RATE;
    const int counter = (int)STATUS_ID::COUNTER;
    const int physicalDef = (int)STATUS_ID::PHYSICAL_DEF;
    const int magicDef = (int)STATUS_ID::MAGIC_DEF;
    const int eva = (int)STATUS_ID::EVA;
    const int criticalResistance = (int)STATUS_ID::CRITICAL_RESISTANCE;
    const int physicalCriticalDamageMitigation = (int)STATUS_ID::PHYSICAL_CRITICAL_DAMAGE_MITIGATION;
    const int magicCriticalDamageMitigation = (int)STATUS_ID::MAGIC_CRITICAL_DAMAGE_MITIGATION;
    const int debuffResistance = (int)STATUS_ID::DEBUFF_RESISTANCE;
    const int hpDrain = (int)STATUS_ID::HP_DRAIN;
    // -----------------------------------------------------------------------------------------------------

    switch (id)
    {
        // コルディ初期化
        // -----------------------------------------------------------------------------------------------------
    case (int)CHARACTER_ID::CORDIE:
        status[hp] = 4843188.0f;            // HP
        status[atk] = 701916.0f;            // 攻撃力
        status[def] = 7.0f;                 // 防御力
        status[defPEN] = 0.0f;              // 防御貫通
        status[speed] = 3562.0f;            // スピード

        status[physicalDefPEN] = 0.0f;      // 物理防御貫通

        status[hit] = 315862.0f;            // 命中
        status[critical] = 350956.0f;       // クリティカル
        status[critical_damage_up] = 0.0f;  // クリダメ強化

        status[debuffHitRate] = 277255.0f;  // 弱体命中効果
        status[counter] = 0.0f;             // カウンター

        status[physicalDef] = 631721.0f;    // 物理防御力
        status[magicDef] = 554510.0f;       // 魔法防御力
        status[eva] = 350956.0f;            // 回避
        status[criticalResistance] = 242159.0f;                 // クリティカル耐性
        status[physicalCriticalDamageMitigation] = 0.0f;        // 物理クリダメ緩和
        status[magicCriticalDamageMitigation] = 0.0f;           // 魔法クリダメ緩和
        status[debuffResistance] = 0.0f;                        // 弱体効果耐性
        status[hpDrain] = 0.0f;                                 // HPドレイン
        break;
        // -----------------------------------------------------------------------------------------------------

        // フローレンス初期化
        // -----------------------------------------------------------------------------------------------------
    case (int)CHARACTER_ID::FLORENCE:
        status[hp] = 4843187.0f;            // HP
        status[atk] = 694896.0f;            // 攻撃力
        status[def] = 10.0f;                // 防御力
        status[defPEN] = 0.0f;              // 防御貫通
        status[speed] = 3022.0f;            // スピード

        status[physicalDefPEN] = 2.0f;      // 物理防御貫通

        status[hit] = 347446.0f;            // 命中
        status[critical] = 298310.0f;       // クリティカル
        status[critical_damage_up] = 0.0f;  // クリダメ強化

        status[debuffHitRate] = 298312.0f;  // 弱体命中効果
        status[counter] = 0.0f;             // カウンター

        status[physicalDef] = 694893.0f;    // 物理防御力
        status[magicDef] = 596625.0f;       // 魔法防御力
        status[eva] = 298312.0f;            // 回避
        status[criticalResistance] = 242159.0f;                 // クリティカル耐性
        status[physicalCriticalDamageMitigation] = 0.0f;        // 物理クリダメ緩和
        status[magicCriticalDamageMitigation] = 0.0f;           // 魔法クリダメ緩和
        status[debuffResistance] = 0.0f;                        // 弱体効果耐性
        status[hpDrain] = 0.0f;                                 // HPドレイン
        break;
        // -----------------------------------------------------------------------------------------------------
    default:
        break;
    }
}
