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
//		Name   -> Function Bait.Bait_C.CursedPropActivatePerkEffect
//		Flags  -> ()
void UBait_C::CursedPropActivatePerkEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Bait.Bait_C.CursedPropActivatePerkEffect");

	UBait_C_CursedPropActivatePerkEffect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Bait.Bait_C.CursedPropDeactivatePerkEffect
//		Flags  -> ()
void UBait_C::CursedPropDeactivatePerkEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Bait.Bait_C.CursedPropDeactivatePerkEffect");

	UBait_C_CursedPropDeactivatePerkEffect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Bait.Bait_C.ExecuteUbergraph_Bait
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBait_C::ExecuteUbergraph_Bait(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Bait.Bait_C.ExecuteUbergraph_Bait");

	UBait_C_ExecuteUbergraph_Bait_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
