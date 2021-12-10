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

// Function W_ServerEntryV3.W_ServerEntryV3_C.GetCurrentTimeAnimation
struct UW_ServerEntryV3_C_GetCurrentTimeAnimation_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_ServerEntryV3.W_ServerEntryV3_C.ApplyMapNameAndPreview
struct UW_ServerEntryV3_C_ApplyMapNameAndPreview_Params
{
};

// Function W_ServerEntryV3.W_ServerEntryV3_C.ApplyPlayerCounter
struct UW_ServerEntryV3_C_ApplyPlayerCounter_Params
{
};

// Function W_ServerEntryV3.W_ServerEntryV3_C.ApplyStatus
struct UW_ServerEntryV3_C_ApplyStatus_Params
{
};

// Function W_ServerEntryV3.W_ServerEntryV3_C.ApplyGameMode
struct UW_ServerEntryV3_C_ApplyGameMode_Params
{
};

// Function W_ServerEntryV3.W_ServerEntryV3_C.ApplyOwnerName
struct UW_ServerEntryV3_C_ApplyOwnerName_Params
{
};

// Function W_ServerEntryV3.W_ServerEntryV3_C.AnimateNickname_Stop
struct UW_ServerEntryV3_C_AnimateNickname_Stop_Params
{
};

// Function W_ServerEntryV3.W_ServerEntryV3_C.AnimateNickname
struct UW_ServerEntryV3_C_AnimateNickname_Params
{
	bool                                               IsForwardDirection;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_ServerEntryV3.W_ServerEntryV3_C.BP_OnEntryReleased
struct UW_ServerEntryV3_C_BP_OnEntryReleased_Params
{
};

// Function W_ServerEntryV3.W_ServerEntryV3_C.BP_OnItemExpansionChanged
struct UW_ServerEntryV3_C_BP_OnItemExpansionChanged_Params
{
	bool                                               bIsExpanded;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_ServerEntryV3.W_ServerEntryV3_C.BP_OnItemSelectionChanged
struct UW_ServerEntryV3_C_BP_OnItemSelectionChanged_Params
{
	bool                                               bIsSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_ServerEntryV3.W_ServerEntryV3_C.Construct
struct UW_ServerEntryV3_C_Construct_Params
{
};

// Function W_ServerEntryV3.W_ServerEntryV3_C.SetSessionData
struct UW_ServerEntryV3_C_SetSessionData_Params
{
	class UObject*                                     session;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_ServerEntryV3.W_ServerEntryV3_C.Apply
struct UW_ServerEntryV3_C_Apply_Params
{
};

// Function W_ServerEntryV3.W_ServerEntryV3_C.OnItemSelected
struct UW_ServerEntryV3_C_OnItemSelected_Params
{
};

// Function W_ServerEntryV3.W_ServerEntryV3_C.OnItemDeselected
struct UW_ServerEntryV3_C_OnItemDeselected_Params
{
};

// Function W_ServerEntryV3.W_ServerEntryV3_C.OnMouseEnter
struct UW_ServerEntryV3_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function W_ServerEntryV3.W_ServerEntryV3_C.OnMouseLeave
struct UW_ServerEntryV3_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function W_ServerEntryV3.W_ServerEntryV3_C.DoPing
struct UW_ServerEntryV3_C_DoPing_Params
{
};

// Function W_ServerEntryV3.W_ServerEntryV3_C.PlayWaitingAnim
struct UW_ServerEntryV3_C_PlayWaitingAnim_Params
{
	float                                              StartAtTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_ServerEntryV3.W_ServerEntryV3_C.StopWaitingAnim
struct UW_ServerEntryV3_C_StopWaitingAnim_Params
{
};

// Function W_ServerEntryV3.W_ServerEntryV3_C.AnimateNicknameTick
struct UW_ServerEntryV3_C_AnimateNicknameTick_Params
{
};

// Function W_ServerEntryV3.W_ServerEntryV3_C.ExecuteUbergraph_W_ServerEntryV3
struct UW_ServerEntryV3_C_ExecuteUbergraph_W_ServerEntryV3_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
