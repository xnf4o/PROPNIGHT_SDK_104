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

// Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.OnKeyDown
struct UWBP_DetailedFriendList_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.SearchFunction
struct UWBP_DetailedFriendList_C_SearchFunction_Params
{
	struct FString                                     Nickname;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FSteamFriend>                        Friends;                                                   // 0x0010(0x0010)  (Parm, OutParm)
};

// Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.GetFriendByID
struct UWBP_DetailedFriendList_C_GetFriendByID_Params
{
	struct FString                                     SteamId;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Index;                                                     // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.InitFriends
struct UWBP_DetailedFriendList_C_InitFriends_Params
{
};

// Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.Construct
struct UWBP_DetailedFriendList_C_Construct_Params
{
};

// Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.BndEvt__WBP_DetailedFriendList_Button_Friends_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UWBP_DetailedFriendList_C_BndEvt__WBP_DetailedFriendList_Button_Friends_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.BndEvt__WBP_DetailedFriendList_Button_Friends_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_DetailedFriendList_C_BndEvt__WBP_DetailedFriendList_Button_Friends_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.BndEvt__WBP_DetailedFriendList_Button_Invites_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_DetailedFriendList_C_BndEvt__WBP_DetailedFriendList_Button_Invites_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.BndEvt__WBP_DetailedFriendList_Button_Invites_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UWBP_DetailedFriendList_C_BndEvt__WBP_DetailedFriendList_Button_Invites_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.BndEvt__WBP_DetailedFriendList_Button_Friends_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
struct UWBP_DetailedFriendList_C_BndEvt__WBP_DetailedFriendList_Button_Friends_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.BndEvt__WBP_DetailedFriendList_Button_Invites_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
struct UWBP_DetailedFriendList_C_BndEvt__WBP_DetailedFriendList_Button_Invites_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.ComeOnline
struct UWBP_DetailedFriendList_C_ComeOnline_Params
{
	struct FString                                     SteamId;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.GoneOffline
struct UWBP_DetailedFriendList_C_GoneOffline_Params
{
	struct FString                                     SteamId;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.InitButtons
struct UWBP_DetailedFriendList_C_InitButtons_Params
{
};

// Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.SetCurrentPage
struct UWBP_DetailedFriendList_C_SetCurrentPage_Params
{
	int                                                Page;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.GenerateFakeFriends
struct UWBP_DetailedFriendList_C_GenerateFakeFriends_Params
{
};

// Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.BndEvt__WBP_DetailedFriendList_EditableTextBox_SearchLine_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature
struct UWBP_DetailedFriendList_C_BndEvt__WBP_DetailedFriendList_EditableTextBox_SearchLine_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.BndEvt__WBP_DetailedFriendList_Button_Search_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
struct UWBP_DetailedFriendList_C_BndEvt__WBP_DetailedFriendList_Button_Search_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.ExecuteUbergraph_WBP_DetailedFriendList
struct UWBP_DetailedFriendList_C_ExecuteUbergraph_WBP_DetailedFriendList_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.OnHide__DelegateSignature
struct UWBP_DetailedFriendList_C_OnHide__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
