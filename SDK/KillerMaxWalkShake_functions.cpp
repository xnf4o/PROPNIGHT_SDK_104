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
//		Name   -> Function KillerMaxWalkShake.KillerMaxWalkShake_C.ReceivePlayShake
//		Flags  -> ()
// Parameters:
//		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UKillerMaxWalkShake_C::ReceivePlayShake(float Scale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMaxWalkShake.KillerMaxWalkShake_C.ReceivePlayShake");

	UKillerMaxWalkShake_C_ReceivePlayShake_Params params {};
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMaxWalkShake.KillerMaxWalkShake_C.ExecuteUbergraph_KillerMaxWalkShake
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UKillerMaxWalkShake_C::ExecuteUbergraph_KillerMaxWalkShake(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMaxWalkShake.KillerMaxWalkShake_C.ExecuteUbergraph_KillerMaxWalkShake");

	UKillerMaxWalkShake_C_ExecuteUbergraph_KillerMaxWalkShake_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
