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
//		Name   -> Function Regeneration.Regeneration_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URegeneration_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Regeneration.Regeneration_C.ReceiveTick");

	URegeneration_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Regeneration.Regeneration_C.ServerSelfRegeneration
//		Flags  -> ()
void URegeneration_C::ServerSelfRegeneration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Regeneration.Regeneration_C.ServerSelfRegeneration");

	URegeneration_C_ServerSelfRegeneration_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Regeneration.Regeneration_C.MulticastSelfRegeneration
//		Flags  -> ()
void URegeneration_C::MulticastSelfRegeneration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Regeneration.Regeneration_C.MulticastSelfRegeneration");

	URegeneration_C_MulticastSelfRegeneration_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Regeneration.Regeneration_C.ReceiveBeginPlay
//		Flags  -> ()
void URegeneration_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Regeneration.Regeneration_C.ReceiveBeginPlay");

	URegeneration_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Regeneration.Regeneration_C.ExecuteUbergraph_Regeneration
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URegeneration_C::ExecuteUbergraph_Regeneration(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Regeneration.Regeneration_C.ExecuteUbergraph_Regeneration");

	URegeneration_C_ExecuteUbergraph_Regeneration_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
