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
//		Name   -> Function DeathSparks.DeathSparks_C.ReceiveBeginPlay
//		Flags  -> ()
void ADeathSparks_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DeathSparks.DeathSparks_C.ReceiveBeginPlay");

	ADeathSparks_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DeathSparks.DeathSparks_C.ExecuteUbergraph_DeathSparks
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADeathSparks_C::ExecuteUbergraph_DeathSparks(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DeathSparks.DeathSparks_C.ExecuteUbergraph_DeathSparks");

	ADeathSparks_C_ExecuteUbergraph_DeathSparks_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
