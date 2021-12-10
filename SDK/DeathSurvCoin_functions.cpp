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
//		Name   -> Function DeathSurvCoin.DeathSurvCoin_C.ReceiveBeginPlay
//		Flags  -> ()
void ADeathSurvCoin_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DeathSurvCoin.DeathSurvCoin_C.ReceiveBeginPlay");

	ADeathSurvCoin_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DeathSurvCoin.DeathSurvCoin_C.ExecuteUbergraph_DeathSurvCoin
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADeathSurvCoin_C::ExecuteUbergraph_DeathSurvCoin(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DeathSurvCoin.DeathSurvCoin_C.ExecuteUbergraph_DeathSurvCoin");

	ADeathSurvCoin_C_ExecuteUbergraph_DeathSurvCoin_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
