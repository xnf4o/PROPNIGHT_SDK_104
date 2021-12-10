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
//		Name   -> Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.SwapidenticalKeys_Keyboard
//		Flags  -> ()
// Parameters:
//		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_KeyBindOverlay_C::SwapidenticalKeys_Keyboard(const struct FInputChord& SelectedKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.SwapidenticalKeys_Keyboard");

	UWB_KeyBindOverlay_C_SwapidenticalKeys_Keyboard_Params params {};
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.SearchingIdenticalKeys_Gamepad
//		Flags  -> ()
// Parameters:
//		struct FKey                                        CurrentKey                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		bool                                               Blocked_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_KeyBindOverlay_C::SearchingIdenticalKeys_Gamepad(const struct FKey& CurrentKey, bool* Blocked_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.SearchingIdenticalKeys_Gamepad");

	UWB_KeyBindOverlay_C_SearchingIdenticalKeys_Gamepad_Params params {};
	params.CurrentKey = CurrentKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Blocked_ != nullptr)
		*Blocked_ = params.Blocked_;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.SearchingIdenticalKeys_Keyboard
//		Flags  -> ()
// Parameters:
//		struct FInputChord                                 CurrentKey                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		bool                                               Blocked_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_KeyBindOverlay_C::SearchingIdenticalKeys_Keyboard(const struct FInputChord& CurrentKey, bool* Blocked_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.SearchingIdenticalKeys_Keyboard");

	UWB_KeyBindOverlay_C_SearchingIdenticalKeys_Keyboard_Params params {};
	params.CurrentKey = CurrentKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Blocked_ != nullptr)
		*Blocked_ = params.Blocked_;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BP_OnEntryReleased
//		Flags  -> ()
void UWB_KeyBindOverlay_C::BP_OnEntryReleased()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BP_OnEntryReleased");

	UWB_KeyBindOverlay_C_BP_OnEntryReleased_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BP_OnItemExpansionChanged
//		Flags  -> ()
// Parameters:
//		bool                                               bIsExpanded                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_KeyBindOverlay_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BP_OnItemExpansionChanged");

	UWB_KeyBindOverlay_C_BP_OnItemExpansionChanged_Params params {};
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BP_OnItemSelectionChanged
//		Flags  -> ()
// Parameters:
//		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWB_KeyBindOverlay_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BP_OnItemSelectionChanged");

	UWB_KeyBindOverlay_C_BP_OnItemSelectionChanged_Params params {};
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.Construct
//		Flags  -> ()
void UWB_KeyBindOverlay_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.Construct");

	UWB_KeyBindOverlay_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_KeyBindOverlay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.Tick");

	UWB_KeyBindOverlay_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BndEvt__WB_KeyBinds_ButtonReFocuser_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UWB_KeyBindOverlay_C::BndEvt__WB_KeyBinds_ButtonReFocuser_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BndEvt__WB_KeyBinds_ButtonReFocuser_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UWB_KeyBindOverlay_C_BndEvt__WB_KeyBinds_ButtonReFocuser_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.Select
//		Flags  -> ()
void UWB_KeyBindOverlay_C::Select()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.Select");

	UWB_KeyBindOverlay_C_Select_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BndEvt__WB_KeyBinds_ButtonReFocuser_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UWB_KeyBindOverlay_C::BndEvt__WB_KeyBinds_ButtonReFocuser_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BndEvt__WB_KeyBinds_ButtonReFocuser_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UWB_KeyBindOverlay_C_BndEvt__WB_KeyBinds_ButtonReFocuser_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BndEvt__WB_KeyBindOverlay_Gamepad_InputKeySelector_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature
//		Flags  -> ()
void UWB_KeyBindOverlay_C::BndEvt__WB_KeyBindOverlay_Gamepad_InputKeySelector_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BndEvt__WB_KeyBindOverlay_Gamepad_InputKeySelector_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature");

	UWB_KeyBindOverlay_C_BndEvt__WB_KeyBindOverlay_Gamepad_InputKeySelector_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BndEvt__WB_KeyBindOverlay_Keyboard_InputKeySelector_K2Node_ComponentBoundEvent_2_OnIsSelectingKeyChanged__DelegateSignature
//		Flags  -> ()
void UWB_KeyBindOverlay_C::BndEvt__WB_KeyBindOverlay_Keyboard_InputKeySelector_K2Node_ComponentBoundEvent_2_OnIsSelectingKeyChanged__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BndEvt__WB_KeyBindOverlay_Keyboard_InputKeySelector_K2Node_ComponentBoundEvent_2_OnIsSelectingKeyChanged__DelegateSignature");

	UWB_KeyBindOverlay_C_BndEvt__WB_KeyBindOverlay_Keyboard_InputKeySelector_K2Node_ComponentBoundEvent_2_OnIsSelectingKeyChanged__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BndEvt__WB_KeyBindOverlay_Keyboard_InputKeySelector_K2Node_ComponentBoundEvent_4_OnKeySelected__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_KeyBindOverlay_C::BndEvt__WB_KeyBindOverlay_Keyboard_InputKeySelector_K2Node_ComponentBoundEvent_4_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BndEvt__WB_KeyBindOverlay_Keyboard_InputKeySelector_K2Node_ComponentBoundEvent_4_OnKeySelected__DelegateSignature");

	UWB_KeyBindOverlay_C_BndEvt__WB_KeyBindOverlay_Keyboard_InputKeySelector_K2Node_ComponentBoundEvent_4_OnKeySelected__DelegateSignature_Params params {};
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BndEvt__WB_KeyBindOverlay_Gamepad_InputKeySelector_K2Node_ComponentBoundEvent_5_OnKeySelected__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_KeyBindOverlay_C::BndEvt__WB_KeyBindOverlay_Gamepad_InputKeySelector_K2Node_ComponentBoundEvent_5_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BndEvt__WB_KeyBindOverlay_Gamepad_InputKeySelector_K2Node_ComponentBoundEvent_5_OnKeySelected__DelegateSignature");

	UWB_KeyBindOverlay_C_BndEvt__WB_KeyBindOverlay_Gamepad_InputKeySelector_K2Node_ComponentBoundEvent_5_OnKeySelected__DelegateSignature_Params params {};
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.Gamepad_Diff_Icons_SHOW
//		Flags  -> ()
void UWB_KeyBindOverlay_C::Gamepad_Diff_Icons_SHOW()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.Gamepad_Diff_Icons_SHOW");

	UWB_KeyBindOverlay_C_Gamepad_Diff_Icons_SHOW_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.Gamepad_Diff_icons_HIDE
//		Flags  -> ()
void UWB_KeyBindOverlay_C::Gamepad_Diff_icons_HIDE()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.Gamepad_Diff_icons_HIDE");

	UWB_KeyBindOverlay_C_Gamepad_Diff_icons_HIDE_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.SetFocusToGeneral
//		Flags  -> ()
void UWB_KeyBindOverlay_C::SetFocusToGeneral()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.SetFocusToGeneral");

	UWB_KeyBindOverlay_C_SetFocusToGeneral_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.NewStyle
//		Flags  -> ()
void UWB_KeyBindOverlay_C::NewStyle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.NewStyle");

	UWB_KeyBindOverlay_C_NewStyle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.OnAccept_Event
//		Flags  -> ()
void UWB_KeyBindOverlay_C::OnAccept_Event()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.OnAccept_Event");

	UWB_KeyBindOverlay_C_OnAccept_Event_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.OnDecline_Event
//		Flags  -> ()
void UWB_KeyBindOverlay_C::OnDecline_Event()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.OnDecline_Event");

	UWB_KeyBindOverlay_C_OnDecline_Event_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.StartBind_Keyboard
//		Flags  -> ()
// Parameters:
//		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_KeyBindOverlay_C::StartBind_Keyboard(const struct FInputChord& SelectedKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.StartBind_Keyboard");

	UWB_KeyBindOverlay_C_StartBind_Keyboard_Params params {};
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.Save_Update
//		Flags  -> ()
void UWB_KeyBindOverlay_C::Save_Update()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.Save_Update");

	UWB_KeyBindOverlay_C_Save_Update_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.ExecuteUbergraph_WB_KeyBindOverlay
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_KeyBindOverlay_C::ExecuteUbergraph_WB_KeyBindOverlay(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.ExecuteUbergraph_WB_KeyBindOverlay");

	UWB_KeyBindOverlay_C_ExecuteUbergraph_WB_KeyBindOverlay_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.CurrentKey__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UWB_KeyBindOverlay_C::CurrentKey__DelegateSignature(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.CurrentKey__DelegateSignature");

	UWB_KeyBindOverlay_C_CurrentKey__DelegateSignature_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.OnPressed__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UWB_KeyBindOverlay_C*                        Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWB_KeyBindOverlay_C::OnPressed__DelegateSignature(class UWB_KeyBindOverlay_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.OnPressed__DelegateSignature");

	UWB_KeyBindOverlay_C_OnPressed__DelegateSignature_Params params {};
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.EventDispatcher_RightBtn__DelegateSignature
//		Flags  -> ()
void UWB_KeyBindOverlay_C::EventDispatcher_RightBtn__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.EventDispatcher_RightBtn__DelegateSignature");

	UWB_KeyBindOverlay_C_EventDispatcher_RightBtn__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.EventDispatcher_LeftBtn__DelegateSignature
//		Flags  -> ()
void UWB_KeyBindOverlay_C::EventDispatcher_LeftBtn__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.EventDispatcher_LeftBtn__DelegateSignature");

	UWB_KeyBindOverlay_C_EventDispatcher_LeftBtn__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
