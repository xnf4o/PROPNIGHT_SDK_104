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
//		Name   -> Function CoinSpawner.CoinSpawner_C.ReceiveBeginPlay
//		Flags  -> ()
void ACoinSpawner_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoinSpawner.CoinSpawner_C.ReceiveBeginPlay");

	ACoinSpawner_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CoinSpawner.CoinSpawner_C.ExecuteUbergraph_CoinSpawner
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACoinSpawner_C::ExecuteUbergraph_CoinSpawner(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoinSpawner.CoinSpawner_C.ExecuteUbergraph_CoinSpawner");

	ACoinSpawner_C_ExecuteUbergraph_CoinSpawner_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
