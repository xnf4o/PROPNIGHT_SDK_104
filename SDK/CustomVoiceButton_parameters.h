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

// Function CustomVoiceButton.CustomVoiceButton_C.DoNavigateRight
struct UCustomVoiceButton_C_DoNavigateRight_Params
{
	SlateCore_EUINavigation                            Navigation;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CustomVoiceButton.CustomVoiceButton_C.DoNavigateLeft
struct UCustomVoiceButton_C_DoNavigateLeft_Params
{
	SlateCore_EUINavigation                            Navigation;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CustomVoiceButton.CustomVoiceButton_C.PreConstruct
struct UCustomVoiceButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CustomVoiceButton.CustomVoiceButton_C.Construct
struct UCustomVoiceButton_C_Construct_Params
{
};

// Function CustomVoiceButton.CustomVoiceButton_C.Tick
struct UCustomVoiceButton_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CustomVoiceButton.CustomVoiceButton_C.BndEvt__ComboBox_InputDevice_1_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
struct UCustomVoiceButton_C_BndEvt__ComboBox_InputDevice_1_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CustomVoiceButton.CustomVoiceButton_C.BndEvt__ComboBox_InputDevice_1_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature
struct UCustomVoiceButton_C_BndEvt__ComboBox_InputDevice_1_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature_Params
{
};

// Function CustomVoiceButton.CustomVoiceButton_C.Focus
struct UCustomVoiceButton_C_Focus_Params
{
};

// Function CustomVoiceButton.CustomVoiceButton_C.UnFocus
struct UCustomVoiceButton_C_UnFocus_Params
{
};

// Function CustomVoiceButton.CustomVoiceButton_C.ExecuteUbergraph_CustomVoiceButton
struct UCustomVoiceButton_C_ExecuteUbergraph_CustomVoiceButton_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CustomVoiceButton.CustomVoiceButton_C.EventDispatcher_Open__DelegateSignature
struct UCustomVoiceButton_C_EventDispatcher_Open__DelegateSignature_Params
{
};

// Function CustomVoiceButton.CustomVoiceButton_C.EventDispatcher_SetMicrophone__DelegateSignature
struct UCustomVoiceButton_C_EventDispatcher_SetMicrophone__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CustomVoiceButton.CustomVoiceButton_C.EventDispatcher_FocusedStyle__DelegateSignature
struct UCustomVoiceButton_C_EventDispatcher_FocusedStyle__DelegateSignature_Params
{
};

// Function CustomVoiceButton.CustomVoiceButton_C.EventDispatcher_Right__DelegateSignature
struct UCustomVoiceButton_C_EventDispatcher_Right__DelegateSignature_Params
{
};

// Function CustomVoiceButton.CustomVoiceButton_C.EventDispatcher_Left__DelegateSignature
struct UCustomVoiceButton_C_EventDispatcher_Left__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
