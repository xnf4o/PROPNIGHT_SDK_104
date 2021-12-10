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

// Function PerkManager.PerkManager_C.ReceiveBeginPlay
struct UPerkManager_C_ReceiveBeginPlay_Params
{
};

// Function PerkManager.PerkManager_C.ReceiveTick
struct UPerkManager_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkManager.PerkManager_C.AddPerk1
struct UPerkManager_C_AddPerk1_Params
{
	bool                                               Surv_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                      Perk;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkManager.PerkManager_C.AddPerk2
struct UPerkManager_C_AddPerk2_Params
{
	bool                                               Surv_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                      Perk;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkManager.PerkManager_C.AddPerk3
struct UPerkManager_C_AddPerk3_Params
{
	bool                                               Surv_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                      Perk;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkManager.PerkManager_C.PerksNames
struct UPerkManager_C_PerksNames_Params
{
	bool                                               Surv_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                      Perk;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkManager.PerkManager_C.CheckPerk1
struct UPerkManager_C_CheckPerk1_Params
{
};

// Function PerkManager.PerkManager_C.CheckPerk2
struct UPerkManager_C_CheckPerk2_Params
{
};

// Function PerkManager.PerkManager_C.CheckPerk3
struct UPerkManager_C_CheckPerk3_Params
{
};

// Function PerkManager.PerkManager_C.ExecuteUbergraph_PerkManager
struct UPerkManager_C_ExecuteUbergraph_PerkManager_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
