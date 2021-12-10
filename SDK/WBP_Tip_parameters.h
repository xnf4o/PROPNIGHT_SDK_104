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

// Function WBP_Tip.WBP_Tip_C.LoadTip
struct UWBP_Tip_C_LoadTip_Params
{
	struct FName                                       TipName;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Tip.WBP_Tip_C.PreConstruct
struct UWBP_Tip_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_Tip.WBP_Tip_C.RemoveTips
struct UWBP_Tip_C_RemoveTips_Params
{
};

// Function WBP_Tip.WBP_Tip_C.Construct
struct UWBP_Tip_C_Construct_Params
{
};

// Function WBP_Tip.WBP_Tip_C.Tick
struct UWBP_Tip_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Tip.WBP_Tip_C.Show
struct UWBP_Tip_C_Show_Params
{
};

// Function WBP_Tip.WBP_Tip_C.SetCurrentTip
struct UWBP_Tip_C_SetCurrentTip_Params
{
	int                                                TipIndex;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_Tip.WBP_Tip_C.ShowCurrentTip
struct UWBP_Tip_C_ShowCurrentTip_Params
{
};

// Function WBP_Tip.WBP_Tip_C.ExecuteUbergraph_WBP_Tip
struct UWBP_Tip_C_ExecuteUbergraph_WBP_Tip_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
