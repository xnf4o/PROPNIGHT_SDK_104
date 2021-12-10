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
//		Name   -> Function Footprint_Actor.Footprint_Actor_C.ReceiveBeginPlay
//		Flags  -> ()
void AFootprint_Actor_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Footprint_Actor.Footprint_Actor_C.ReceiveBeginPlay");

	AFootprint_Actor_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Footprint_Actor.Footprint_Actor_C.ExecuteUbergraph_Footprint_Actor
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AFootprint_Actor_C::ExecuteUbergraph_Footprint_Actor(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Footprint_Actor.Footprint_Actor_C.ExecuteUbergraph_Footprint_Actor");

	AFootprint_Actor_C_ExecuteUbergraph_Footprint_Actor_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
