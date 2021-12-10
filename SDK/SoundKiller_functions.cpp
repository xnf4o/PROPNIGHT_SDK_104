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
//		Name   -> Function SoundKiller.SoundKiller_C.ReceiveBeginPlay
//		Flags  -> ()
void USoundKiller_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundKiller.SoundKiller_C.ReceiveBeginPlay");

	USoundKiller_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundKiller.SoundKiller_C.Stop
//		Flags  -> ()
void USoundKiller_C::Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundKiller.SoundKiller_C.Stop");

	USoundKiller_C_Stop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SoundKiller.SoundKiller_C.ExecuteUbergraph_SoundKiller
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USoundKiller_C::ExecuteUbergraph_SoundKiller(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SoundKiller.SoundKiller_C.ExecuteUbergraph_SoundKiller");

	USoundKiller_C_ExecuteUbergraph_SoundKiller_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
