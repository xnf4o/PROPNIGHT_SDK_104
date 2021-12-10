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
//		Name   -> Function AlarmCoin.AlarmCoin_C.ReceiveBeginPlay
//		Flags  -> ()
void AAlarmCoin_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmCoin.AlarmCoin_C.ReceiveBeginPlay");

	AAlarmCoin_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmCoin.AlarmCoin_C.TakeCoinMulti
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                P                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAlarmCoin_C::TakeCoinMulti(class AActor* Actor, int P)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmCoin.AlarmCoin_C.TakeCoinMulti");

	AAlarmCoin_C_TakeCoinMulti_Params params {};
	params.Actor = Actor;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AlarmCoin.AlarmCoin_C.ExecuteUbergraph_AlarmCoin
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AAlarmCoin_C::ExecuteUbergraph_AlarmCoin(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AlarmCoin.AlarmCoin_C.ExecuteUbergraph_AlarmCoin");

	AAlarmCoin_C_ExecuteUbergraph_AlarmCoin_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
