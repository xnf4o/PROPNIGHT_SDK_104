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
//		Name   -> Function StunCoin.StunCoin_C.TakeCoinMulti
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                P                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStunCoin_C::TakeCoinMulti(class AActor* Actor, int P)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StunCoin.StunCoin_C.TakeCoinMulti");

	AStunCoin_C_TakeCoinMulti_Params params {};
	params.Actor = Actor;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function StunCoin.StunCoin_C.ReceiveBeginPlay
//		Flags  -> ()
void AStunCoin_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StunCoin.StunCoin_C.ReceiveBeginPlay");

	AStunCoin_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function StunCoin.StunCoin_C.ExecuteUbergraph_StunCoin
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AStunCoin_C::ExecuteUbergraph_StunCoin(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function StunCoin.StunCoin_C.ExecuteUbergraph_StunCoin");

	AStunCoin_C_ExecuteUbergraph_StunCoin_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
