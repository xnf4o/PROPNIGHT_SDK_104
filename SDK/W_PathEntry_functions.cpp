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
//		Name   -> Function W_PathEntry.W_PathEntry_C.SetEnabled
//		Flags  -> ()
// Parameters:
//		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ChangeTextColor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_PathEntry_C::SetEnabled(bool Enabled, bool ChangeTextColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PathEntry.W_PathEntry_C.SetEnabled");

	UW_PathEntry_C_SetEnabled_Params params {};
	params.Enabled = Enabled;
	params.ChangeTextColor = ChangeTextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PathEntry.W_PathEntry_C.Construct
//		Flags  -> ()
void UW_PathEntry_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PathEntry.W_PathEntry_C.Construct");

	UW_PathEntry_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PathEntry.W_PathEntry_C.BndEvt__W_PathEntry_Button_Entry_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_PathEntry_C::BndEvt__W_PathEntry_Button_Entry_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PathEntry.W_PathEntry_C.BndEvt__W_PathEntry_Button_Entry_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UW_PathEntry_C_BndEvt__W_PathEntry_Button_Entry_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PathEntry.W_PathEntry_C.BndEvt__W_PathEntry_Button_Entry_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_PathEntry_C::BndEvt__W_PathEntry_Button_Entry_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PathEntry.W_PathEntry_C.BndEvt__W_PathEntry_Button_Entry_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UW_PathEntry_C_BndEvt__W_PathEntry_Button_Entry_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PathEntry.W_PathEntry_C.BndEvt__W_PathEntry_Button_Entry_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
//		Flags  -> ()
void UW_PathEntry_C::BndEvt__W_PathEntry_Button_Entry_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PathEntry.W_PathEntry_C.BndEvt__W_PathEntry_Button_Entry_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	UW_PathEntry_C_BndEvt__W_PathEntry_Button_Entry_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PathEntry.W_PathEntry_C.ExecuteUbergraph_W_PathEntry
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_PathEntry_C::ExecuteUbergraph_W_PathEntry(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PathEntry.W_PathEntry_C.ExecuteUbergraph_W_PathEntry");

	UW_PathEntry_C_ExecuteUbergraph_W_PathEntry_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_PathEntry.W_PathEntry_C.Click__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FName                                       EntryName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_PathEntry_C::Click__DelegateSignature(const struct FName& EntryName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_PathEntry.W_PathEntry_C.Click__DelegateSignature");

	UW_PathEntry_C_Click__DelegateSignature_Params params {};
	params.EntryName = EntryName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
