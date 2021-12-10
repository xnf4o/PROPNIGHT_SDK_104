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
//		Name   -> Function InteractableButtonsComponentWidget.InteractableButtonsComponentWidget_C.Construct
//		Flags  -> ()
void UInteractableButtonsComponentWidget_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractableButtonsComponentWidget.InteractableButtonsComponentWidget_C.Construct");

	UInteractableButtonsComponentWidget_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function InteractableButtonsComponentWidget.InteractableButtonsComponentWidget_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInteractableButtonsComponentWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractableButtonsComponentWidget.InteractableButtonsComponentWidget_C.Tick");

	UInteractableButtonsComponentWidget_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function InteractableButtonsComponentWidget.InteractableButtonsComponentWidget_C.SetMainText
//		Flags  -> ()
// Parameters:
//		struct FName                                       ActionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       InteractableText                                           (BlueprintVisible, BlueprintReadOnly, Parm)
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInteractableButtonsComponentWidget_C::SetMainText(const struct FName& ActionName, const struct FText& InteractableText, class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractableButtonsComponentWidget.InteractableButtonsComponentWidget_C.SetMainText");

	UInteractableButtonsComponentWidget_C_SetMainText_Params params {};
	params.ActionName = ActionName;
	params.InteractableText = InteractableText;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function InteractableButtonsComponentWidget.InteractableButtonsComponentWidget_C.ExecuteUbergraph_InteractableButtonsComponentWidget
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInteractableButtonsComponentWidget_C::ExecuteUbergraph_InteractableButtonsComponentWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractableButtonsComponentWidget.InteractableButtonsComponentWidget_C.ExecuteUbergraph_InteractableButtonsComponentWidget");

	UInteractableButtonsComponentWidget_C_ExecuteUbergraph_InteractableButtonsComponentWidget_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
