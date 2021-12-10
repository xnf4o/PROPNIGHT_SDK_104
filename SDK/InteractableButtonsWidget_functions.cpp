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
//		Name   -> Function InteractableButtonsWidget.InteractableButtonsWidget_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInteractableButtonsWidget_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractableButtonsWidget.InteractableButtonsWidget_C.PreConstruct");

	UInteractableButtonsWidget_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function InteractableButtonsWidget.InteractableButtonsWidget_C.ShowButton
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       InputMapping                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UInteractableButtonsWidget_C::ShowButton(class AActor* Actor, const struct FName& InputMapping, const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractableButtonsWidget.InteractableButtonsWidget_C.ShowButton");

	UInteractableButtonsWidget_C_ShowButton_Params params {};
	params.Actor = Actor;
	params.InputMapping = InputMapping;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function InteractableButtonsWidget.InteractableButtonsWidget_C.HideButton
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UInteractableButtonsWidget_C::HideButton(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractableButtonsWidget.InteractableButtonsWidget_C.HideButton");

	UInteractableButtonsWidget_C_HideButton_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function InteractableButtonsWidget.InteractableButtonsWidget_C.HideAllButtons
//		Flags  -> ()
void UInteractableButtonsWidget_C::HideAllButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractableButtonsWidget.InteractableButtonsWidget_C.HideAllButtons");

	UInteractableButtonsWidget_C_HideAllButtons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function InteractableButtonsWidget.InteractableButtonsWidget_C.AddInteractable
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       InputMapping                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UInteractableButtonsWidget_C::AddInteractable(class AActor* Actor, const struct FName& InputMapping, const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractableButtonsWidget.InteractableButtonsWidget_C.AddInteractable");

	UInteractableButtonsWidget_C_AddInteractable_Params params {};
	params.Actor = Actor;
	params.InputMapping = InputMapping;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function InteractableButtonsWidget.InteractableButtonsWidget_C.RemoveInteractable
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInteractableButtonsWidget_C::RemoveInteractable(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractableButtonsWidget.InteractableButtonsWidget_C.RemoveInteractable");

	UInteractableButtonsWidget_C_RemoveInteractable_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function InteractableButtonsWidget.InteractableButtonsWidget_C.Construct
//		Flags  -> ()
void UInteractableButtonsWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractableButtonsWidget.InteractableButtonsWidget_C.Construct");

	UInteractableButtonsWidget_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function InteractableButtonsWidget.InteractableButtonsWidget_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInteractableButtonsWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractableButtonsWidget.InteractableButtonsWidget_C.Tick");

	UInteractableButtonsWidget_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function InteractableButtonsWidget.InteractableButtonsWidget_C.ShowButtonAndClearOtherButtons
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		struct FName                                       ActionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UInteractableButtonsWidget_C::ShowButtonAndClearOtherButtons(const struct FKey& Key, const struct FName& ActionName, const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractableButtonsWidget.InteractableButtonsWidget_C.ShowButtonAndClearOtherButtons");

	UInteractableButtonsWidget_C_ShowButtonAndClearOtherButtons_Params params {};
	params.Key = Key;
	params.ActionName = ActionName;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function InteractableButtonsWidget.InteractableButtonsWidget_C.ExecuteUbergraph_InteractableButtonsWidget
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInteractableButtonsWidget_C::ExecuteUbergraph_InteractableButtonsWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractableButtonsWidget.InteractableButtonsWidget_C.ExecuteUbergraph_InteractableButtonsWidget");

	UInteractableButtonsWidget_C_ExecuteUbergraph_InteractableButtonsWidget_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
