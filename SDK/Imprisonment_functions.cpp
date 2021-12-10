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
//		Name   -> Function Imprisonment.Imprisonment_C.ReceiveBeginPlay
//		Flags  -> ()
void UImprisonment_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Imprisonment.Imprisonment_C.ReceiveBeginPlay");

	UImprisonment_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Imprisonment.Imprisonment_C.CursedPropActivatePerkEffect
//		Flags  -> ()
void UImprisonment_C::CursedPropActivatePerkEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Imprisonment.Imprisonment_C.CursedPropActivatePerkEffect");

	UImprisonment_C_CursedPropActivatePerkEffect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Imprisonment.Imprisonment_C.CursedPropDeactivatePerkEffect
//		Flags  -> ()
void UImprisonment_C::CursedPropDeactivatePerkEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Imprisonment.Imprisonment_C.CursedPropDeactivatePerkEffect");

	UImprisonment_C_CursedPropDeactivatePerkEffect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Imprisonment.Imprisonment_C.ExecuteUbergraph_Imprisonment
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UImprisonment_C::ExecuteUbergraph_Imprisonment(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Imprisonment.Imprisonment_C.ExecuteUbergraph_Imprisonment");

	UImprisonment_C_ExecuteUbergraph_Imprisonment_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
