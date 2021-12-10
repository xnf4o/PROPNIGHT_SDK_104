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

// Function CrossHairWBP.CrossHairWBP_C.GetVisibility_1
struct UCrossHairWBP_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CrossHairWBP.CrossHairWBP_C.JumpEndCH
struct UCrossHairWBP_C_JumpEndCH_Params
{
	class AKillerMasterBP_C*                           KillerRef;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CrossHairWBP.CrossHairWBP_C.JumpStartCH
struct UCrossHairWBP_C_JumpStartCH_Params
{
	class AKillerMasterBP_C*                           KillerRef;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CrossHairWBP.CrossHairWBP_C.CrossToBigAnim
struct UCrossHairWBP_C_CrossToBigAnim_Params
{
	class AKillerMasterBP_C*                           KillerRef;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CrossHairWBP.CrossHairWBP_C.HitEvent
struct UCrossHairWBP_C_HitEvent_Params
{
	class AKillerMasterBP_C*                           KillerRef;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CrossHairWBP.CrossHairWBP_C.AttackEvent
struct UCrossHairWBP_C_AttackEvent_Params
{
	class AKillerMasterBP_C*                           KillerRef;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CrossHairWBP.CrossHairWBP_C.Tick
struct UCrossHairWBP_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CrossHairWBP.CrossHairWBP_C.Construct
struct UCrossHairWBP_C_Construct_Params
{
};

// Function CrossHairWBP.CrossHairWBP_C.ExecuteUbergraph_CrossHairWBP
struct UCrossHairWBP_C_ExecuteUbergraph_CrossHairWBP_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
