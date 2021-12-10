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
//		Name   -> Function SurvParticleActor.SurvParticleActor_C.ReceiveBeginPlay
//		Flags  -> ()
void ASurvParticleActor_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvParticleActor.SurvParticleActor_C.ReceiveBeginPlay");

	ASurvParticleActor_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvParticleActor.SurvParticleActor_C.Destr
//		Flags  -> ()
void ASurvParticleActor_C::Destr()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvParticleActor.SurvParticleActor_C.Destr");

	ASurvParticleActor_C_Destr_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvParticleActor.SurvParticleActor_C.ExecuteUbergraph_SurvParticleActor
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvParticleActor_C::ExecuteUbergraph_SurvParticleActor(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvParticleActor.SurvParticleActor_C.ExecuteUbergraph_SurvParticleActor");

	ASurvParticleActor_C_ExecuteUbergraph_SurvParticleActor_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
