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

// Function PerkKiller.PerkKiller_C.Bloodhound
struct UPerkKiller_C_Bloodhound_Params
{
};

// Function PerkKiller.PerkKiller_C.CursedLock
struct UPerkKiller_C_CursedLock_Params
{
};

// Function PerkKiller.PerkKiller_C.ShowCircuit
struct UPerkKiller_C_ShowCircuit_Params
{
};

// Function PerkKiller.PerkKiller_C.FurryDropItem
struct UPerkKiller_C_FurryDropItem_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkKiller.PerkKiller_C.ActivateBloodlustIfPropmachineFixed
struct UPerkKiller_C_ActivateBloodlustIfPropmachineFixed_Params
{
};

// Function PerkKiller.PerkKiller_C.ActivateBloodlust
struct UPerkKiller_C_ActivateBloodlust_Params
{
};

// Function PerkKiller.PerkKiller_C.ReceiveBeginPlay
struct UPerkKiller_C_ReceiveBeginPlay_Params
{
};

// Function PerkKiller.PerkKiller_C.ReceiveTick
struct UPerkKiller_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkKiller.PerkKiller_C.CursedPropActivate
struct UPerkKiller_C_CursedPropActivate_Params
{
};

// Function PerkKiller.PerkKiller_C.CursedPropDeactivate
struct UPerkKiller_C_CursedPropDeactivate_Params
{
};

// Function PerkKiller.PerkKiller_C.CursedPropActivatePerkEffect
struct UPerkKiller_C_CursedPropActivatePerkEffect_Params
{
};

// Function PerkKiller.PerkKiller_C.CursedPropDeactivatePerkEffect
struct UPerkKiller_C_CursedPropDeactivatePerkEffect_Params
{
};

// Function PerkKiller.PerkKiller_C.CursedPropVisualEffectSwitcher
struct UPerkKiller_C_CursedPropVisualEffectSwitcher_Params
{
	class ABasePropBP_C*                               Prop;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               On_;                                                       // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PerkKiller.PerkKiller_C.SetPerk2Activated_SERV
struct UPerkKiller_C_SetPerk2Activated_SERV_Params
{
};

// Function PerkKiller.PerkKiller_C.SetPerk2Activated_MULTI
struct UPerkKiller_C_SetPerk2Activated_MULTI_Params
{
};

// Function PerkKiller.PerkKiller_C.SetPerk1activated_SERV
struct UPerkKiller_C_SetPerk1activated_SERV_Params
{
};

// Function PerkKiller.PerkKiller_C.SetPerk1Activated_MULTI
struct UPerkKiller_C_SetPerk1Activated_MULTI_Params
{
};

// Function PerkKiller.PerkKiller_C.SetPerk3Activated_SERV
struct UPerkKiller_C_SetPerk3Activated_SERV_Params
{
};

// Function PerkKiller.PerkKiller_C.SetPerk3Activated_MULTI
struct UPerkKiller_C_SetPerk3Activated_MULTI_Params
{
};

// Function PerkKiller.PerkKiller_C.BlockLootBox_SERV
struct UPerkKiller_C_BlockLootBox_SERV_Params
{
	class ALootBox_C*                                  LP;                                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkKiller.PerkKiller_C.BlockLootBox_MULTI
struct UPerkKiller_C_BlockLootBox_MULTI_Params
{
	class ALootBox_C*                                  LP;                                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkKiller.PerkKiller_C.ShowCircuit_SERV
struct UPerkKiller_C_ShowCircuit_SERV_Params
{
	class ANewAlarmBP_C*                               Alarm;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Index;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PerkKiller.PerkKiller_C.ShowCircuit_MULTI
struct UPerkKiller_C_ShowCircuit_MULTI_Params
{
	class ANewAlarmBP_C*                               Alarm;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Index;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PerkKiller.PerkKiller_C.ExecuteUbergraph_PerkKiller
struct UPerkKiller_C_ExecuteUbergraph_PerkKiller_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
