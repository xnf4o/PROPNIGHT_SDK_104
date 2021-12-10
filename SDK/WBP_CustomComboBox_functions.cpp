// Name: P, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_CustomComboBox.WBP_CustomComboBox_C.SelectEntry
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomComboBox_C::SelectEntry(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_CustomComboBox.WBP_CustomComboBox_C.SelectEntry");

	UWBP_CustomComboBox_C_SelectEntry_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_CustomComboBox.WBP_CustomComboBox_C.Clear
//		Flags  -> ()
void UWBP_CustomComboBox_C::Clear()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_CustomComboBox.WBP_CustomComboBox_C.Clear");

	UWBP_CustomComboBox_C_Clear_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_CustomComboBox.WBP_CustomComboBox_C.CalculateContentHeight
//		Flags  -> ()
// Parameters:
//		int                                                EntryNumber                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomComboBox_C::CalculateContentHeight(int EntryNumber, float* Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_CustomComboBox.WBP_CustomComboBox_C.CalculateContentHeight");

	UWBP_CustomComboBox_C_CalculateContentHeight_Params params {};
	params.EntryNumber = EntryNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_CustomComboBox.WBP_CustomComboBox_C.SetScrollbarVisibility
//		Flags  -> ()
// Parameters:
//		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CustomComboBox_C::SetScrollbarVisibility(bool Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_CustomComboBox.WBP_CustomComboBox_C.SetScrollbarVisibility");

	UWBP_CustomComboBox_C_SetScrollbarVisibility_Params params {};
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_CustomComboBox.WBP_CustomComboBox_C.GetEntryWidgetAt
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWBP_CustomComboBoxEntry_C*                  EntryWidget                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomComboBox_C::GetEntryWidgetAt(int Index, class UWBP_CustomComboBoxEntry_C** EntryWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_CustomComboBox.WBP_CustomComboBox_C.GetEntryWidgetAt");

	UWBP_CustomComboBox_C_GetEntryWidgetAt_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EntryWidget != nullptr)
		*EntryWidget = params.EntryWidget;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_CustomComboBox.WBP_CustomComboBox_C.AddEntry
//		Flags  -> ()
// Parameters:
//		struct FText                                       EntryName                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               Added                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CustomComboBox_C::AddEntry(const struct FText& EntryName, bool* Added)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_CustomComboBox.WBP_CustomComboBox_C.AddEntry");

	UWBP_CustomComboBox_C_AddEntry_Params params {};
	params.EntryName = EntryName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Added != nullptr)
		*Added = params.Added;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_CustomComboBox.WBP_CustomComboBox_C.Get Selected Entries
//		Flags  -> ()
// Parameters:
//		TArray<struct FText>                               Entries                                                    (Parm, OutParm)
void UWBP_CustomComboBox_C::Get_Selected_Entries(TArray<struct FText>* Entries)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_CustomComboBox.WBP_CustomComboBox_C.Get Selected Entries");

	UWBP_CustomComboBox_C_Get_Selected_Entries_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Entries != nullptr)
		*Entries = params.Entries;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_CustomComboBox.WBP_CustomComboBox_C.GetCurrentEntry
//		Flags  -> ()
// Parameters:
//		struct FText                                       EntryName                                                  (Parm, OutParm)
void UWBP_CustomComboBox_C::GetCurrentEntry(struct FText* EntryName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_CustomComboBox.WBP_CustomComboBox_C.GetCurrentEntry");

	UWBP_CustomComboBox_C_GetCurrentEntry_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EntryName != nullptr)
		*EntryName = params.EntryName;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_CustomComboBox.WBP_CustomComboBox_C.GetEntryAt
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       EntryName                                                  (Parm, OutParm)
void UWBP_CustomComboBox_C::GetEntryAt(int Index, struct FText* EntryName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_CustomComboBox.WBP_CustomComboBox_C.GetEntryAt");

	UWBP_CustomComboBox_C_GetEntryAt_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EntryName != nullptr)
		*EntryName = params.EntryName;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_CustomComboBox.WBP_CustomComboBox_C.FindEntry
//		Flags  -> ()
// Parameters:
//		struct FText                                       EntryName                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
//		int                                                Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomComboBox_C::FindEntry(const struct FText& EntryName, int* Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_CustomComboBox.WBP_CustomComboBox_C.FindEntry");

	UWBP_CustomComboBox_C_FindEntry_Params params {};
	params.EntryName = EntryName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_CustomComboBox.WBP_CustomComboBox_C.ExpandTick
//		Flags  -> ()
// Parameters:
void UWBP_CustomComboBox_C::ExpandTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_CustomComboBox.WBP_CustomComboBox_C.ExpandTick");

	UWBP_CustomComboBox_C_ExpandTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_CustomComboBox.WBP_CustomComboBox_C.Expand
//		Flags  -> ()
void UWBP_CustomComboBox_C::Expand()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_CustomComboBox.WBP_CustomComboBox_C.Expand");

	UWBP_CustomComboBox_C_Expand_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_CustomComboBox.WBP_CustomComboBox_C.CollapseTick
//		Flags  -> ()
// Parameters:
void UWBP_CustomComboBox_C::CollapseTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_CustomComboBox.WBP_CustomComboBox_C.CollapseTick");

	UWBP_CustomComboBox_C_CollapseTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_CustomComboBox.WBP_CustomComboBox_C.Collapse
//		Flags  -> ()
void UWBP_CustomComboBox_C::Collapse()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_CustomComboBox.WBP_CustomComboBox_C.Collapse");

	UWBP_CustomComboBox_C_Collapse_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_CustomComboBox.WBP_CustomComboBox_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CustomComboBox_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_CustomComboBox.WBP_CustomComboBox_C.PreConstruct");

	UWBP_CustomComboBox_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_CustomComboBox.WBP_CustomComboBox_C.BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UWBP_CustomComboBox_C::BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_CustomComboBox.WBP_CustomComboBox_C.BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UWBP_CustomComboBox_C_BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_CustomComboBox.WBP_CustomComboBox_C.BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UWBP_CustomComboBox_C::BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_CustomComboBox.WBP_CustomComboBox_C.BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWBP_CustomComboBox_C_BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_CustomComboBox.WBP_CustomComboBox_C.EntryClicked
//		Flags  -> ()
// Parameters:
//		struct FText                                       EntryName                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               Clicked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CustomComboBox_C::EntryClicked(const struct FText& EntryName, bool Clicked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_CustomComboBox.WBP_CustomComboBox_C.EntryClicked");

	UWBP_CustomComboBox_C_EntryClicked_Params params {};
	params.EntryName = EntryName;
	params.Clicked = Clicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_CustomComboBox.WBP_CustomComboBox_C.CustomClick
//		Flags  -> ()
// Parameters:
//		bool                                               PlaySound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CustomComboBox_C::CustomClick(bool PlaySound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_CustomComboBox.WBP_CustomComboBox_C.CustomClick");

	UWBP_CustomComboBox_C_CustomClick_Params params {};
	params.PlaySound = PlaySound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_CustomComboBox.WBP_CustomComboBox_C.BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
//		Flags  -> ()
void UWBP_CustomComboBox_C::BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_CustomComboBox.WBP_CustomComboBox_C.BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	UWBP_CustomComboBox_C_BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_CustomComboBox.WBP_CustomComboBox_C.ExecuteUbergraph_WBP_CustomComboBox
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomComboBox_C::ExecuteUbergraph_WBP_CustomComboBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_CustomComboBox.WBP_CustomComboBox_C.ExecuteUbergraph_WBP_CustomComboBox");

	UWBP_CustomComboBox_C_ExecuteUbergraph_WBP_CustomComboBox_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_CustomComboBox.WBP_CustomComboBox_C.OnCollapsed__DelegateSignature
//		Flags  -> ()
void UWBP_CustomComboBox_C::OnCollapsed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_CustomComboBox.WBP_CustomComboBox_C.OnCollapsed__DelegateSignature");

	UWBP_CustomComboBox_C_OnCollapsed__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_CustomComboBox.WBP_CustomComboBox_C.OnExpanded__DelegateSignature
//		Flags  -> ()
void UWBP_CustomComboBox_C::OnExpanded__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_CustomComboBox.WBP_CustomComboBox_C.OnExpanded__DelegateSignature");

	UWBP_CustomComboBox_C_OnExpanded__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_CustomComboBox.WBP_CustomComboBox_C.OnEntrySelected__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FText                                       EntryName                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
//		int                                                EntryIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                SelectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Clicked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_CustomComboBox_C::OnEntrySelected__DelegateSignature(const struct FText& EntryName, int EntryIndex, int SelectedIndex, bool Clicked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_CustomComboBox.WBP_CustomComboBox_C.OnEntrySelected__DelegateSignature");

	UWBP_CustomComboBox_C_OnEntrySelected__DelegateSignature_Params params {};
	params.EntryName = EntryName;
	params.EntryIndex = EntryIndex;
	params.SelectedIndex = SelectedIndex;
	params.Clicked = Clicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_CustomComboBox.WBP_CustomComboBox_C.OnEntryClicked__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FText                                       EntryName                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
//		int                                                EntryIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_CustomComboBox_C::OnEntryClicked__DelegateSignature(const struct FText& EntryName, int EntryIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_CustomComboBox.WBP_CustomComboBox_C.OnEntryClicked__DelegateSignature");

	UWBP_CustomComboBox_C_OnEntryClicked__DelegateSignature_Params params {};
	params.EntryName = EntryName;
	params.EntryIndex = EntryIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
