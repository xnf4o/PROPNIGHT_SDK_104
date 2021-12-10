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

// Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.Clear
struct UWBP_FriendsComboBox_C_Clear_Params
{
};

// Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.CalculateContentHeight
struct UWBP_FriendsComboBox_C_CalculateContentHeight_Params
{
	int                                                EntryNumber;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Height;                                                    // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.SetScrollbarVisibility
struct UWBP_FriendsComboBox_C_SetScrollbarVisibility_Params
{
	bool                                               Visible;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.RemoveEntry
struct UWBP_FriendsComboBox_C_RemoveEntry_Params
{
	struct FString                                     SteamId;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Result;                                                    // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.GetEntryWidgetAt
struct UWBP_FriendsComboBox_C_GetEntryWidgetAt_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_CustomComboBoxEntry_C*                  EntryWidget;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.AddEntry
struct UWBP_FriendsComboBox_C_AddEntry_Params
{
	struct FSteamFriend                                EntryStruct;                                               // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Added;                                                     // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.GetEntryAt
struct UWBP_FriendsComboBox_C_GetEntryAt_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_FriendEntry_C*                          EntryName;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.FindEntry
struct UWBP_FriendsComboBox_C_FindEntry_Params
{
	struct FString                                     SteamId;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Index;                                                     // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.ExpandTick
struct UWBP_FriendsComboBox_C_ExpandTick_Params
{
};

// Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.Expand
struct UWBP_FriendsComboBox_C_Expand_Params
{
};

// Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.CollapseTick
struct UWBP_FriendsComboBox_C_CollapseTick_Params
{
};

// Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.Collapse
struct UWBP_FriendsComboBox_C_Collapse_Params
{
};

// Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.PreConstruct
struct UWBP_FriendsComboBox_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UWBP_FriendsComboBox_C_BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_FriendsComboBox_C_BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UWBP_FriendsComboBox_C_BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.CustomClick
struct UWBP_FriendsComboBox_C_CustomClick_Params
{
};

// Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.ExecuteUbergraph_WBP_FriendsComboBox
struct UWBP_FriendsComboBox_C_ExecuteUbergraph_WBP_FriendsComboBox_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.OnCollapsed__DelegateSignature
struct UWBP_FriendsComboBox_C_OnCollapsed__DelegateSignature_Params
{
};

// Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.OnExpanded__DelegateSignature
struct UWBP_FriendsComboBox_C_OnExpanded__DelegateSignature_Params
{
};

// Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.OnEntrySelected__DelegateSignature
struct UWBP_FriendsComboBox_C_OnEntrySelected__DelegateSignature_Params
{
	struct FText                                       EntryName;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                EntryIndex;                                                // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SelectedIndex;                                             // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Clicked;                                                   // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.OnEntryClicked__DelegateSignature
struct UWBP_FriendsComboBox_C_OnEntryClicked__DelegateSignature_Params
{
	struct FText                                       EntryName;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                EntryIndex;                                                // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
