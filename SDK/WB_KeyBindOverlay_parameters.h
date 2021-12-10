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

// Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.SwapidenticalKeys_Keyboard
struct UWB_KeyBindOverlay_C_SwapidenticalKeys_Keyboard_Params
{
	struct FInputChord                                 SelectedKey;                                               // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.SearchingIdenticalKeys_Gamepad
struct UWB_KeyBindOverlay_C_SearchingIdenticalKeys_Gamepad_Params
{
	struct FKey                                        CurrentKey;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               Blocked_;                                                  // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.SearchingIdenticalKeys_Keyboard
struct UWB_KeyBindOverlay_C_SearchingIdenticalKeys_Keyboard_Params
{
	struct FInputChord                                 CurrentKey;                                                // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               Blocked_;                                                  // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BP_OnEntryReleased
struct UWB_KeyBindOverlay_C_BP_OnEntryReleased_Params
{
};

// Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BP_OnItemExpansionChanged
struct UWB_KeyBindOverlay_C_BP_OnItemExpansionChanged_Params
{
	bool                                               bIsExpanded;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BP_OnItemSelectionChanged
struct UWB_KeyBindOverlay_C_BP_OnItemSelectionChanged_Params
{
	bool                                               bIsSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.Construct
struct UWB_KeyBindOverlay_C_Construct_Params
{
};

// Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.Tick
struct UWB_KeyBindOverlay_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BndEvt__WB_KeyBinds_ButtonReFocuser_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UWB_KeyBindOverlay_C_BndEvt__WB_KeyBinds_ButtonReFocuser_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.Select
struct UWB_KeyBindOverlay_C_Select_Params
{
};

// Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BndEvt__WB_KeyBinds_ButtonReFocuser_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UWB_KeyBindOverlay_C_BndEvt__WB_KeyBinds_ButtonReFocuser_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BndEvt__WB_KeyBindOverlay_Gamepad_InputKeySelector_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature
struct UWB_KeyBindOverlay_C_BndEvt__WB_KeyBindOverlay_Gamepad_InputKeySelector_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature_Params
{
};

// Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BndEvt__WB_KeyBindOverlay_Keyboard_InputKeySelector_K2Node_ComponentBoundEvent_2_OnIsSelectingKeyChanged__DelegateSignature
struct UWB_KeyBindOverlay_C_BndEvt__WB_KeyBindOverlay_Keyboard_InputKeySelector_K2Node_ComponentBoundEvent_2_OnIsSelectingKeyChanged__DelegateSignature_Params
{
};

// Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BndEvt__WB_KeyBindOverlay_Keyboard_InputKeySelector_K2Node_ComponentBoundEvent_4_OnKeySelected__DelegateSignature
struct UWB_KeyBindOverlay_C_BndEvt__WB_KeyBindOverlay_Keyboard_InputKeySelector_K2Node_ComponentBoundEvent_4_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.BndEvt__WB_KeyBindOverlay_Gamepad_InputKeySelector_K2Node_ComponentBoundEvent_5_OnKeySelected__DelegateSignature
struct UWB_KeyBindOverlay_C_BndEvt__WB_KeyBindOverlay_Gamepad_InputKeySelector_K2Node_ComponentBoundEvent_5_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.Gamepad_Diff_Icons_SHOW
struct UWB_KeyBindOverlay_C_Gamepad_Diff_Icons_SHOW_Params
{
};

// Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.Gamepad_Diff_icons_HIDE
struct UWB_KeyBindOverlay_C_Gamepad_Diff_icons_HIDE_Params
{
};

// Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.SetFocusToGeneral
struct UWB_KeyBindOverlay_C_SetFocusToGeneral_Params
{
};

// Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.NewStyle
struct UWB_KeyBindOverlay_C_NewStyle_Params
{
};

// Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.OnAccept_Event
struct UWB_KeyBindOverlay_C_OnAccept_Event_Params
{
};

// Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.OnDecline_Event
struct UWB_KeyBindOverlay_C_OnDecline_Event_Params
{
};

// Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.StartBind_Keyboard
struct UWB_KeyBindOverlay_C_StartBind_Keyboard_Params
{
	struct FInputChord                                 SelectedKey;                                               // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.Save_Update
struct UWB_KeyBindOverlay_C_Save_Update_Params
{
};

// Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.ExecuteUbergraph_WB_KeyBindOverlay
struct UWB_KeyBindOverlay_C_ExecuteUbergraph_WB_KeyBindOverlay_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.CurrentKey__DelegateSignature
struct UWB_KeyBindOverlay_C_CurrentKey__DelegateSignature_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.OnPressed__DelegateSignature
struct UWB_KeyBindOverlay_C_OnPressed__DelegateSignature_Params
{
	class UWB_KeyBindOverlay_C*                        Button;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.EventDispatcher_RightBtn__DelegateSignature
struct UWB_KeyBindOverlay_C_EventDispatcher_RightBtn__DelegateSignature_Params
{
};

// Function WB_KeyBindOverlay.WB_KeyBindOverlay_C.EventDispatcher_LeftBtn__DelegateSignature
struct UWB_KeyBindOverlay_C_EventDispatcher_LeftBtn__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
