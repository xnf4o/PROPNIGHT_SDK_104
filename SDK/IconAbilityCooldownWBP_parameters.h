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

// Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.GetCount
struct UIconAbilityCooldownWBP_C_GetCount_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.Construct
struct UIconAbilityCooldownWBP_C_Construct_Params
{
};

// Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.Tick
struct UIconAbilityCooldownWBP_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.AbilityEvent
struct UIconAbilityCooldownWBP_C_AbilityEvent_Params
{
};

// Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.RefFinder
struct UIconAbilityCooldownWBP_C_RefFinder_Params
{
	class UCoolDownWBP_C*                              NewParam;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.KeyTextSet
struct UIconAbilityCooldownWBP_C_KeyTextSet_Params
{
};

// Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.DoppelSwitchSprite
struct UIconAbilityCooldownWBP_C_DoppelSwitchSprite_Params
{
	bool                                               IsProp;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.PlayCoolDownBeginAnimation
struct UIconAbilityCooldownWBP_C_PlayCoolDownBeginAnimation_Params
{
};

// Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.PlayCoolDownEndShortAnimation
struct UIconAbilityCooldownWBP_C_PlayCoolDownEndShortAnimation_Params
{
};

// Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.PlayCoolDownEndLongAnimation
struct UIconAbilityCooldownWBP_C_PlayCoolDownEndLongAnimation_Params
{
};

// Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.Interrupt
struct UIconAbilityCooldownWBP_C_Interrupt_Params
{
};

// Function IconAbilityCooldownWBP.IconAbilityCooldownWBP_C.ExecuteUbergraph_IconAbilityCooldownWBP
struct UIconAbilityCooldownWBP_C_ExecuteUbergraph_IconAbilityCooldownWBP_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
