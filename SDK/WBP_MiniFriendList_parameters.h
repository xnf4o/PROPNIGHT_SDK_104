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

// Function WBP_MiniFriendList.WBP_MiniFriendList_C.LeaveLobby
struct UWBP_MiniFriendList_C_LeaveLobby_Params
{
};

// Function WBP_MiniFriendList.WBP_MiniFriendList_C.FindNewOwner
struct UWBP_MiniFriendList_C_FindNewOwner_Params
{
};

// Function WBP_MiniFriendList.WBP_MiniFriendList_C.LeavingLobbyAnimFinishedHandler
struct UWBP_MiniFriendList_C_LeavingLobbyAnimFinishedHandler_Params
{
};

// Function WBP_MiniFriendList.WBP_MiniFriendList_C.MoveAnimTick
struct UWBP_MiniFriendList_C_MoveAnimTick_Params
{
};

// Function WBP_MiniFriendList.WBP_MiniFriendList_C.StartMoveAnim
struct UWBP_MiniFriendList_C_StartMoveAnim_Params
{
};

// Function WBP_MiniFriendList.WBP_MiniFriendList_C.HideOcupiedSlots
struct UWBP_MiniFriendList_C_HideOcupiedSlots_Params
{
};

// Function WBP_MiniFriendList.WBP_MiniFriendList_C.RemoveEntry
struct UWBP_MiniFriendList_C_RemoveEntry_Params
{
	struct FString                                     SteamId;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WBP_MiniFriendList.WBP_MiniFriendList_C.AddEntry
struct UWBP_MiniFriendList_C_AddEntry_Params
{
	struct FString                                     SteamId;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     NameUser;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Added;                                                     // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_MiniFriendList.WBP_MiniFriendList_C.HasEntry
struct UWBP_MiniFriendList_C_HasEntry_Params
{
	struct FString                                     SteamId;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Result;                                                    // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_MiniFriendList.WBP_MiniFriendList_C.GetEmptySlot
struct UWBP_MiniFriendList_C_GetEmptySlot_Params
{
	class UWBP_MiniFriendEntry_C*                      Slot;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MiniFriendList.WBP_MiniFriendList_C.Construct
struct UWBP_MiniFriendList_C_Construct_Params
{
};

// Function WBP_MiniFriendList.WBP_MiniFriendList_C.BndEvt__WBP_MiniFriendList_Button_FriendList_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
struct UWBP_MiniFriendList_C_BndEvt__WBP_MiniFriendList_Button_FriendList_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function WBP_MiniFriendList.WBP_MiniFriendList_C.BndEvt__WBP_MiniFriendList_Button_FriendList_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_MiniFriendList_C_BndEvt__WBP_MiniFriendList_Button_FriendList_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_MiniFriendList.WBP_MiniFriendList_C.BndEvt__WBP_MiniFriendList_Button_FriendList_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_MiniFriendList_C_BndEvt__WBP_MiniFriendList_Button_FriendList_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_MiniFriendList.WBP_MiniFriendList_C.GoneOffline
struct UWBP_MiniFriendList_C_GoneOffline_Params
{
	struct FString                                     SteamId;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WBP_MiniFriendList.WBP_MiniFriendList_C.StartLeavingLobbyAnim
struct UWBP_MiniFriendList_C_StartLeavingLobbyAnim_Params
{
};

// Function WBP_MiniFriendList.WBP_MiniFriendList_C.ExecuteUbergraph_WBP_MiniFriendList
struct UWBP_MiniFriendList_C_ExecuteUbergraph_WBP_MiniFriendList_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_MiniFriendList.WBP_MiniFriendList_C.MovindAnimFinished__DelegateSignature
struct UWBP_MiniFriendList_C_MovindAnimFinished__DelegateSignature_Params
{
};

// Function WBP_MiniFriendList.WBP_MiniFriendList_C.OnButtonPressed__DelegateSignature
struct UWBP_MiniFriendList_C_OnButtonPressed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
