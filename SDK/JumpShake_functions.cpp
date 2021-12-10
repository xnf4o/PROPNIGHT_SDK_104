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
//		Name   -> Function JumpShake.JumpShake_C.ReceivePlayShake
//		Flags  -> ()
// Parameters:
//		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UJumpShake_C::ReceivePlayShake(float Scale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JumpShake.JumpShake_C.ReceivePlayShake");

	UJumpShake_C_ReceivePlayShake_Params params {};
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function JumpShake.JumpShake_C.ExecuteUbergraph_JumpShake
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UJumpShake_C::ExecuteUbergraph_JumpShake(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JumpShake.JumpShake_C.ExecuteUbergraph_JumpShake");

	UJumpShake_C_ExecuteUbergraph_JumpShake_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
