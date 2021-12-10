#pragma once

// Name: P, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Curse.Curse_C.BoostExitServ
struct UCurse_C_BoostExitServ_Params
{
	class AExit_C*                                     Exit;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Curse.Curse_C.BoostExitMulti
struct UCurse_C_BoostExitMulti_Params
{
	class AExit_C*                                     Exit;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Curse.Curse_C.LootboxBlockServ
struct UCurse_C_LootboxBlockServ_Params
{
	class ALootBox_C*                                  lootbox;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Curse.Curse_C.LootboxBlockMulti
struct UCurse_C_LootboxBlockMulti_Params
{
	class ALootBox_C*                                  lootbox;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Curse.Curse_C.BoostAlarmServ
struct UCurse_C_BoostAlarmServ_Params
{
	class ANewAlarmBP_C*                               Alarm;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Curse.Curse_C.BoostAlarmMulti
struct UCurse_C_BoostAlarmMulti_Params
{
	class ANewAlarmBP_C*                               Alarm;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Curse.Curse_C.Cast
struct UCurse_C_Cast_Params
{
};

// Function Curse.Curse_C.ReceiveTick
struct UCurse_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Curse.Curse_C.BoostChairServ
struct UCurse_C_BoostChairServ_Params
{
	class AHypnoChairBP_C*                             Chair;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Curse.Curse_C.BoostChairMulti
struct UCurse_C_BoostChairMulti_Params
{
	class AHypnoChairBP_C*                             Chair;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Curse.Curse_C.Consume
struct UCurse_C_Consume_Params
{
};

// Function Curse.Curse_C.ExecuteUbergraph_Curse
struct UCurse_C_ExecuteUbergraph_Curse_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
