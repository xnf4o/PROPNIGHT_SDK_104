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

// Function WBP_LastChance.WBP_LastChance_C.Construct
struct UWBP_LastChance_C_Construct_Params
{
};

// Function WBP_LastChance.WBP_LastChance_C.Tick
struct UWBP_LastChance_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_LastChance.WBP_LastChance_C.ShowLastChance
struct UWBP_LastChance_C_ShowLastChance_Params
{
};

// Function WBP_LastChance.WBP_LastChance_C.HideLastChance
struct UWBP_LastChance_C_HideLastChance_Params
{
};

// Function WBP_LastChance.WBP_LastChance_C.ExecuteUbergraph_WBP_LastChance
struct UWBP_LastChance_C_ExecuteUbergraph_WBP_LastChance_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
