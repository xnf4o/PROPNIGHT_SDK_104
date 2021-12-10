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
//		Name   -> Function CustomVoiceButton.CustomVoiceButton_C.DoNavigateRight
//		Flags  -> ()
// Parameters:
//		SlateCore_EUINavigation                            Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UCustomVoiceButton_C::DoNavigateRight(SlateCore_EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomVoiceButton.CustomVoiceButton_C.DoNavigateRight");

	UCustomVoiceButton_C_DoNavigateRight_Params params {};
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CustomVoiceButton.CustomVoiceButton_C.DoNavigateLeft
//		Flags  -> ()
// Parameters:
//		SlateCore_EUINavigation                            Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UCustomVoiceButton_C::DoNavigateLeft(SlateCore_EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomVoiceButton.CustomVoiceButton_C.DoNavigateLeft");

	UCustomVoiceButton_C_DoNavigateLeft_Params params {};
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CustomVoiceButton.CustomVoiceButton_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCustomVoiceButton_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomVoiceButton.CustomVoiceButton_C.PreConstruct");

	UCustomVoiceButton_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CustomVoiceButton.CustomVoiceButton_C.Construct
//		Flags  -> ()
void UCustomVoiceButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomVoiceButton.CustomVoiceButton_C.Construct");

	UCustomVoiceButton_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CustomVoiceButton.CustomVoiceButton_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCustomVoiceButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomVoiceButton.CustomVoiceButton_C.Tick");

	UCustomVoiceButton_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CustomVoiceButton.CustomVoiceButton_C.BndEvt__ComboBox_InputDevice_1_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FString                                     SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCustomVoiceButton_C::BndEvt__ComboBox_InputDevice_1_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomVoiceButton.CustomVoiceButton_C.BndEvt__ComboBox_InputDevice_1_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	UCustomVoiceButton_C_BndEvt__ComboBox_InputDevice_1_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params params {};
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CustomVoiceButton.CustomVoiceButton_C.BndEvt__ComboBox_InputDevice_1_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature
//		Flags  -> ()
void UCustomVoiceButton_C::BndEvt__ComboBox_InputDevice_1_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomVoiceButton.CustomVoiceButton_C.BndEvt__ComboBox_InputDevice_1_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature");

	UCustomVoiceButton_C_BndEvt__ComboBox_InputDevice_1_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CustomVoiceButton.CustomVoiceButton_C.Focus
//		Flags  -> ()
void UCustomVoiceButton_C::Focus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomVoiceButton.CustomVoiceButton_C.Focus");

	UCustomVoiceButton_C_Focus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CustomVoiceButton.CustomVoiceButton_C.UnFocus
//		Flags  -> ()
void UCustomVoiceButton_C::UnFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomVoiceButton.CustomVoiceButton_C.UnFocus");

	UCustomVoiceButton_C_UnFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CustomVoiceButton.CustomVoiceButton_C.ExecuteUbergraph_CustomVoiceButton
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCustomVoiceButton_C::ExecuteUbergraph_CustomVoiceButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomVoiceButton.CustomVoiceButton_C.ExecuteUbergraph_CustomVoiceButton");

	UCustomVoiceButton_C_ExecuteUbergraph_CustomVoiceButton_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CustomVoiceButton.CustomVoiceButton_C.EventDispatcher_Open__DelegateSignature
//		Flags  -> ()
void UCustomVoiceButton_C::EventDispatcher_Open__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomVoiceButton.CustomVoiceButton_C.EventDispatcher_Open__DelegateSignature");

	UCustomVoiceButton_C_EventDispatcher_Open__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CustomVoiceButton.CustomVoiceButton_C.EventDispatcher_SetMicrophone__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FString                                     SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCustomVoiceButton_C::EventDispatcher_SetMicrophone__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomVoiceButton.CustomVoiceButton_C.EventDispatcher_SetMicrophone__DelegateSignature");

	UCustomVoiceButton_C_EventDispatcher_SetMicrophone__DelegateSignature_Params params {};
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CustomVoiceButton.CustomVoiceButton_C.EventDispatcher_FocusedStyle__DelegateSignature
//		Flags  -> ()
void UCustomVoiceButton_C::EventDispatcher_FocusedStyle__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomVoiceButton.CustomVoiceButton_C.EventDispatcher_FocusedStyle__DelegateSignature");

	UCustomVoiceButton_C_EventDispatcher_FocusedStyle__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CustomVoiceButton.CustomVoiceButton_C.EventDispatcher_Right__DelegateSignature
//		Flags  -> ()
void UCustomVoiceButton_C::EventDispatcher_Right__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomVoiceButton.CustomVoiceButton_C.EventDispatcher_Right__DelegateSignature");

	UCustomVoiceButton_C_EventDispatcher_Right__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CustomVoiceButton.CustomVoiceButton_C.EventDispatcher_Left__DelegateSignature
//		Flags  -> ()
void UCustomVoiceButton_C::EventDispatcher_Left__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomVoiceButton.CustomVoiceButton_C.EventDispatcher_Left__DelegateSignature");

	UCustomVoiceButton_C_EventDispatcher_Left__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
