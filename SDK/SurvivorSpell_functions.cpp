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
//		Name   -> Function SurvivorSpell.SurvivorSpell_C.Consume
//		Flags  -> ()
void USurvivorSpell_C::Consume()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivorSpell.SurvivorSpell_C.Consume");

	USurvivorSpell_C_Consume_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivorSpell.SurvivorSpell_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvivorSpell_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivorSpell.SurvivorSpell_C.ReceiveTick");

	USurvivorSpell_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivorSpell.SurvivorSpell_C.ReceiveBeginPlay
//		Flags  -> ()
void USurvivorSpell_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivorSpell.SurvivorSpell_C.ReceiveBeginPlay");

	USurvivorSpell_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvivorSpell.SurvivorSpell_C.ExecuteUbergraph_SurvivorSpell
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvivorSpell_C::ExecuteUbergraph_SurvivorSpell(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvivorSpell.SurvivorSpell_C.ExecuteUbergraph_SurvivorSpell");

	USurvivorSpell_C_ExecuteUbergraph_SurvivorSpell_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
