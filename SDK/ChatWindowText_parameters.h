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

// Function ChatWindowText.ChatWindowText_C.IsClipped
struct UChatWindowText_C_IsClipped_Params
{
	bool                                               IsClipped;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ChatWindowText.ChatWindowText_C.Construct
struct UChatWindowText_C_Construct_Params
{
};

// Function ChatWindowText.ChatWindowText_C.StartHiding
struct UChatWindowText_C_StartHiding_Params
{
	float                                              TimeOffset;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChatWindowText.ChatWindowText_C.StartDisplaying
struct UChatWindowText_C_StartDisplaying_Params
{
};

// Function ChatWindowText.ChatWindowText_C.HidingTick
struct UChatWindowText_C_HidingTick_Params
{
};

// Function ChatWindowText.ChatWindowText_C.DisplayingTick
struct UChatWindowText_C_DisplayingTick_Params
{
};

// Function ChatWindowText.ChatWindowText_C.HiddenMessage
struct UChatWindowText_C_HiddenMessage_Params
{
};

// Function ChatWindowText.ChatWindowText_C.ShowMessage
struct UChatWindowText_C_ShowMessage_Params
{
};

// Function ChatWindowText.ChatWindowText_C.ExecuteUbergraph_ChatWindowText
struct UChatWindowText_C_ExecuteUbergraph_ChatWindowText_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
