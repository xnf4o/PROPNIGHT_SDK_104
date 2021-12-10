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
//		Name   -> Function W_PerkButton.W_PerkButton_C.BndEvt__W_PerkButton_PerkButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_PerkButton_C::BndEvt__W_PerkButton_PerkButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PerkButton.W_PerkButton_C.BndEvt__W_PerkButton_PerkButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UW_PerkButton_C_BndEvt__W_PerkButton_PerkButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PerkButton.W_PerkButton_C.CustomPress
//		Flags  -> ()
void UW_PerkButton_C::CustomPress()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PerkButton.W_PerkButton_C.CustomPress");

	UW_PerkButton_C_CustomPress_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PerkButton.W_PerkButton_C.ExecuteUbergraph_W_PerkButton
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_PerkButton_C::ExecuteUbergraph_W_PerkButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PerkButton.W_PerkButton_C.ExecuteUbergraph_W_PerkButton");

	UW_PerkButton_C_ExecuteUbergraph_W_PerkButton_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
