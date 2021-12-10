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
//		Name   -> Function BrokenTime.BrokenTime_C.ReceiveBeginPlay
//		Flags  -> ()
void UBrokenTime_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BrokenTime.BrokenTime_C.ReceiveBeginPlay");

	UBrokenTime_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BrokenTime.BrokenTime_C.CursedPropActivatePerkEffect
//		Flags  -> ()
void UBrokenTime_C::CursedPropActivatePerkEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BrokenTime.BrokenTime_C.CursedPropActivatePerkEffect");

	UBrokenTime_C_CursedPropActivatePerkEffect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BrokenTime.BrokenTime_C.CursedPropDeactivatePerkEffect
//		Flags  -> ()
void UBrokenTime_C::CursedPropDeactivatePerkEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BrokenTime.BrokenTime_C.CursedPropDeactivatePerkEffect");

	UBrokenTime_C_CursedPropDeactivatePerkEffect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BrokenTime.BrokenTime_C.ExecuteUbergraph_BrokenTime
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBrokenTime_C::ExecuteUbergraph_BrokenTime(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BrokenTime.BrokenTime_C.ExecuteUbergraph_BrokenTime");

	UBrokenTime_C_ExecuteUbergraph_BrokenTime_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
