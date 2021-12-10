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

// Function WBP_CustomComboBoxEntry.WBP_CustomComboBoxEntry_C.SetStyle
struct UWBP_CustomComboBoxEntry_C_SetStyle_Params
{
	struct FCheckBoxStyle                              Style;                                                     // 0x0000(0x0580)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_CustomComboBoxEntry.WBP_CustomComboBoxEntry_C.SetSelected
struct UWBP_CustomComboBoxEntry_C_SetSelected_Params
{
	bool                                               Selected;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomComboBoxEntry.WBP_CustomComboBoxEntry_C.PreConstruct
struct UWBP_CustomComboBoxEntry_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomComboBoxEntry.WBP_CustomComboBoxEntry_C.BndEvt__WBP_CustomComboBoxEntry_Button_Entry_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_CustomComboBoxEntry_C_BndEvt__WBP_CustomComboBoxEntry_Button_Entry_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_CustomComboBoxEntry.WBP_CustomComboBoxEntry_C.SetChecked
struct UWBP_CustomComboBoxEntry_C_SetChecked_Params
{
	bool                                               Checked;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_CustomComboBoxEntry.WBP_CustomComboBoxEntry_C.BndEvt__WBP_CustomComboBoxEntry_Button_Entry_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
struct UWBP_CustomComboBoxEntry_C_BndEvt__WBP_CustomComboBoxEntry_Button_Entry_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function WBP_CustomComboBoxEntry.WBP_CustomComboBoxEntry_C.ExecuteUbergraph_WBP_CustomComboBoxEntry
struct UWBP_CustomComboBoxEntry_C_ExecuteUbergraph_WBP_CustomComboBoxEntry_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_CustomComboBoxEntry.WBP_CustomComboBoxEntry_C.OnClicked__DelegateSignature
struct UWBP_CustomComboBoxEntry_C_OnClicked__DelegateSignature_Params
{
	struct FText                                       EntryName;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Clicked;                                                   // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
