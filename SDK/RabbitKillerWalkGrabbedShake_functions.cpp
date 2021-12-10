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
//		Name   -> Function RabbitKillerWalkGrabbedShake.RabbitKillerWalkGrabbedShake_C.ReceivePlayShake
//		Flags  -> ()
// Parameters:
//		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URabbitKillerWalkGrabbedShake_C::ReceivePlayShake(float Scale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RabbitKillerWalkGrabbedShake.RabbitKillerWalkGrabbedShake_C.ReceivePlayShake");

	URabbitKillerWalkGrabbedShake_C_ReceivePlayShake_Params params {};
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function RabbitKillerWalkGrabbedShake.RabbitKillerWalkGrabbedShake_C.ExecuteUbergraph_RabbitKillerWalkGrabbedShake
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URabbitKillerWalkGrabbedShake_C::ExecuteUbergraph_RabbitKillerWalkGrabbedShake(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RabbitKillerWalkGrabbedShake.RabbitKillerWalkGrabbedShake_C.ExecuteUbergraph_RabbitKillerWalkGrabbedShake");

	URabbitKillerWalkGrabbedShake_C_ExecuteUbergraph_RabbitKillerWalkGrabbedShake_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
