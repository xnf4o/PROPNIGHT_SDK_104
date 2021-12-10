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
//		Name   -> Function InteractableButtonsInterface.InteractableButtonsInterface_C.RemoveInteractable
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInteractableButtonsInterface_C::RemoveInteractable(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractableButtonsInterface.InteractableButtonsInterface_C.RemoveInteractable");

	UInteractableButtonsInterface_C_RemoveInteractable_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function InteractableButtonsInterface.InteractableButtonsInterface_C.AddInteractable
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       InputMapping                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UInteractableButtonsInterface_C::AddInteractable(class AActor* Actor, const struct FName& InputMapping, const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function InteractableButtonsInterface.InteractableButtonsInterface_C.AddInteractable");

	UInteractableButtonsInterface_C_AddInteractable_Params params {};
	params.Actor = Actor;
	params.InputMapping = InputMapping;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
