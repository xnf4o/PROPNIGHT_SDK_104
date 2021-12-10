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
//		Name   -> Function Save_OutChairCoin.Save_OutChairCoin_C.TakeCoinMulti
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                P                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASave_OutChairCoin_C::TakeCoinMulti(class AActor* Actor, int P)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Save_OutChairCoin.Save_OutChairCoin_C.TakeCoinMulti");

	ASave_OutChairCoin_C_TakeCoinMulti_Params params {};
	params.Actor = Actor;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Save_OutChairCoin.Save_OutChairCoin_C.ReceiveBeginPlay
//		Flags  -> ()
void ASave_OutChairCoin_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Save_OutChairCoin.Save_OutChairCoin_C.ReceiveBeginPlay");

	ASave_OutChairCoin_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Save_OutChairCoin.Save_OutChairCoin_C.ExecuteUbergraph_Save_OutChairCoin
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASave_OutChairCoin_C::ExecuteUbergraph_Save_OutChairCoin(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Save_OutChairCoin.Save_OutChairCoin_C.ExecuteUbergraph_Save_OutChairCoin");

	ASave_OutChairCoin_C_ExecuteUbergraph_Save_OutChairCoin_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
