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
//		Name   -> Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.Clear
//		Flags  -> ()
void UWBP_FriendsComboBox_C::Clear()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.Clear");

	UWBP_FriendsComboBox_C_Clear_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.CalculateContentHeight
//		Flags  -> ()
// Parameters:
//		int                                                EntryNumber                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Height                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_FriendsComboBox_C::CalculateContentHeight(int EntryNumber, float* Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.CalculateContentHeight");

	UWBP_FriendsComboBox_C_CalculateContentHeight_Params params {};
	params.EntryNumber = EntryNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Height != nullptr)
		*Height = params.Height;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.SetScrollbarVisibility
//		Flags  -> ()
// Parameters:
//		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_FriendsComboBox_C::SetScrollbarVisibility(bool Visible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.SetScrollbarVisibility");

	UWBP_FriendsComboBox_C_SetScrollbarVisibility_Params params {};
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.RemoveEntry
//		Flags  -> ()
// Parameters:
//		struct FString                                     SteamId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_FriendsComboBox_C::RemoveEntry(const struct FString& SteamId, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.RemoveEntry");

	UWBP_FriendsComboBox_C_RemoveEntry_Params params {};
	params.SteamId = SteamId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.GetEntryWidgetAt
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWBP_CustomComboBoxEntry_C*                  EntryWidget                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_FriendsComboBox_C::GetEntryWidgetAt(int Index, class UWBP_CustomComboBoxEntry_C** EntryWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.GetEntryWidgetAt");

	UWBP_FriendsComboBox_C_GetEntryWidgetAt_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EntryWidget != nullptr)
		*EntryWidget = params.EntryWidget;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.AddEntry
//		Flags  -> ()
// Parameters:
//		struct FSteamFriend                                EntryStruct                                                (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               Added                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_FriendsComboBox_C::AddEntry(const struct FSteamFriend& EntryStruct, bool* Added)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.AddEntry");

	UWBP_FriendsComboBox_C_AddEntry_Params params {};
	params.EntryStruct = EntryStruct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Added != nullptr)
		*Added = params.Added;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.GetEntryAt
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWBP_FriendEntry_C*                          EntryName                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_FriendsComboBox_C::GetEntryAt(int Index, class UWBP_FriendEntry_C** EntryName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.GetEntryAt");

	UWBP_FriendsComboBox_C_GetEntryAt_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (EntryName != nullptr)
		*EntryName = params.EntryName;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.FindEntry
//		Flags  -> ()
// Parameters:
//		struct FString                                     SteamId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_FriendsComboBox_C::FindEntry(const struct FString& SteamId, int* Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.FindEntry");

	UWBP_FriendsComboBox_C_FindEntry_Params params {};
	params.SteamId = SteamId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.ExpandTick
//		Flags  -> ()
// Parameters:
void UWBP_FriendsComboBox_C::ExpandTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.ExpandTick");

	UWBP_FriendsComboBox_C_ExpandTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.Expand
//		Flags  -> ()
void UWBP_FriendsComboBox_C::Expand()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.Expand");

	UWBP_FriendsComboBox_C_Expand_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.CollapseTick
//		Flags  -> ()
// Parameters:
void UWBP_FriendsComboBox_C::CollapseTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.CollapseTick");

	UWBP_FriendsComboBox_C_CollapseTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.Collapse
//		Flags  -> ()
void UWBP_FriendsComboBox_C::Collapse()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.Collapse");

	UWBP_FriendsComboBox_C_Collapse_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_FriendsComboBox_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.PreConstruct");

	UWBP_FriendsComboBox_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UWBP_FriendsComboBox_C::BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UWBP_FriendsComboBox_C_BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UWBP_FriendsComboBox_C::BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWBP_FriendsComboBox_C_BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UWBP_FriendsComboBox_C::BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UWBP_FriendsComboBox_C_BndEvt__WBP_CustomComboBox_Button_Selector_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.CustomClick
//		Flags  -> ()
void UWBP_FriendsComboBox_C::CustomClick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.CustomClick");

	UWBP_FriendsComboBox_C_CustomClick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.ExecuteUbergraph_WBP_FriendsComboBox
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_FriendsComboBox_C::ExecuteUbergraph_WBP_FriendsComboBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.ExecuteUbergraph_WBP_FriendsComboBox");

	UWBP_FriendsComboBox_C_ExecuteUbergraph_WBP_FriendsComboBox_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.OnCollapsed__DelegateSignature
//		Flags  -> ()
void UWBP_FriendsComboBox_C::OnCollapsed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.OnCollapsed__DelegateSignature");

	UWBP_FriendsComboBox_C_OnCollapsed__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.OnExpanded__DelegateSignature
//		Flags  -> ()
void UWBP_FriendsComboBox_C::OnExpanded__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.OnExpanded__DelegateSignature");

	UWBP_FriendsComboBox_C_OnExpanded__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.OnEntrySelected__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FText                                       EntryName                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
//		int                                                EntryIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                SelectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Clicked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_FriendsComboBox_C::OnEntrySelected__DelegateSignature(const struct FText& EntryName, int EntryIndex, int SelectedIndex, bool Clicked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.OnEntrySelected__DelegateSignature");

	UWBP_FriendsComboBox_C_OnEntrySelected__DelegateSignature_Params params {};
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
//		Name   -> Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.OnEntryClicked__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FText                                       EntryName                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
//		int                                                EntryIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_FriendsComboBox_C::OnEntryClicked__DelegateSignature(const struct FText& EntryName, int EntryIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_FriendsComboBox.WBP_FriendsComboBox_C.OnEntryClicked__DelegateSignature");

	UWBP_FriendsComboBox_C_OnEntryClicked__DelegateSignature_Params params {};
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
