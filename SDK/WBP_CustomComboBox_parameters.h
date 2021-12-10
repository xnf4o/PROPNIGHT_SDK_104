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

// Function WBP_CustomComboBox.WBP_CustomComboBox_C.SelectEntry
struct UWBP_CustomComboBox_C_SelectEntry_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomComboBox.WBP_CustomComboBox_C.Clear
struct UWBP_CustomComboBox_C_Clear_Params
{
};

// Function WBP_CustomComboBox.WBP_CustomComboBox_C.CalculateContentHeight
struct UWBP_CustomComboBox_C_CalculateContentHeight_Params
{
	int                                                EntryNumber;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Height;                                                    // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomComboBox.WBP_CustomComboBox_C.SetScrollbarVisibility
struct UWBP_CustomComboBox_C_SetScrollbarVisibility_Params
{
	bool                                               Visible;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomComboBox.WBP_CustomComboBox_C.GetEntryWidgetAt
struct UWBP_CustomComboBox_C_GetEntryWidgetAt_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_CustomComboBoxEntry_C*                  EntryWidget;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomComboBox.WBP_CustomComboBox_C.AddEntry
struct UWBP_CustomComboBox_C_AddEntry_Params
{
	struct FText                                       EntryName;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Added;                                                     // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomComboBox.WBP_CustomComboBox_C.Get Selected Entries
struct UWBP_CustomComboBox_C_Get_Selected_Entries_Params
{
	TArray<struct FText>                               Entries;                                                   // 0x0000(0x0010)  (Parm, OutParm)
};

// Function WBP_CustomComboBox.WBP_CustomComboBox_C.GetCurrentEntry
struct UWBP_CustomComboBox_C_GetCurrentEntry_Params
{
	struct FText                                       EntryName;                                                 // 0x0000(0x0018)  (Parm, OutParm)
};

// Function WBP_CustomComboBox.WBP_CustomComboBox_C.GetEntryAt
struct UWBP_CustomComboBox_C_GetEntryAt_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       EntryName;                                                 // 0x0008(0x0018)  (Parm, OutParm)
};

// Function WBP_CustomComboBox.WBP_CustomComboBox_C.FindEntry
struct UWBP_CustomComboBox_C_FindEntry_Params
{
	struct FText                                       EntryName;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Index;                                                     // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomComboBox.WBP_CustomComboBox_C.ExpandTick
struct UWBP_CustomComboBox_C_ExpandTick_Params
{
};

// Function WBP_CustomComboBox.WBP_CustomComboBox_C.Expand
struct UWBP_CustomComboBox_C_Expand_Params
{
};

// Function WBP_CustomComboBox.WBP_CustomComboBox_C.CollapseTick
struct UWBP_CustomComboBox_C_CollapseTick_Params
{
};

// Function WBP_CustomComboBox.WBP_CustomComboBox_C.Collapse
struct UWBP_CustomComboBox_C_Collapse_Params
{
};

// Function WBP_CustomComboBox.WBP_CustomComboBox_C.PreConstruct
struct UWBP_CustomComboBox_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomComboBox.WBP_CustomComboBox_C.BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UWBP_CustomComboBox_C_BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_CustomComboBox.WBP_CustomComboBox_C.BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_CustomComboBox_C_BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_CustomComboBox.WBP_CustomComboBox_C.EntryClicked
struct UWBP_CustomComboBox_C_EntryClicked_Params
{
	struct FText                                       EntryName;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Clicked;                                                   // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomComboBox.WBP_CustomComboBox_C.CustomClick
struct UWBP_CustomComboBox_C_CustomClick_Params
{
	bool                                               PlaySound;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomComboBox.WBP_CustomComboBox_C.BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
struct UWBP_CustomComboBox_C_BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function WBP_CustomComboBox.WBP_CustomComboBox_C.ExecuteUbergraph_WBP_CustomComboBox
struct UWBP_CustomComboBox_C_ExecuteUbergraph_WBP_CustomComboBox_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomComboBox.WBP_CustomComboBox_C.OnCollapsed__DelegateSignature
struct UWBP_CustomComboBox_C_OnCollapsed__DelegateSignature_Params
{
};

// Function WBP_CustomComboBox.WBP_CustomComboBox_C.OnExpanded__DelegateSignature
struct UWBP_CustomComboBox_C_OnExpanded__DelegateSignature_Params
{
};

// Function WBP_CustomComboBox.WBP_CustomComboBox_C.OnEntrySelected__DelegateSignature
struct UWBP_CustomComboBox_C_OnEntrySelected__DelegateSignature_Params
{
	struct FText                                       EntryName;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                EntryIndex;                                                // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SelectedIndex;                                             // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Clicked;                                                   // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomComboBox.WBP_CustomComboBox_C.OnEntryClicked__DelegateSignature
struct UWBP_CustomComboBox_C_OnEntryClicked__DelegateSignature_Params
{
	struct FText                                       EntryName;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                EntryIndex;                                                // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
