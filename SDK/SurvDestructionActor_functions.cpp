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
//		Name   -> Function SurvDestructionActor.SurvDestructionActor_C.AfterSpawn
//		Flags  -> ()
// Parameters:
//		class UDestructibleMesh*                           NewMesh                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvDestructionActor_C::AfterSpawn(class UDestructibleMesh* NewMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvDestructionActor.SurvDestructionActor_C.AfterSpawn");

	ASurvDestructionActor_C_AfterSpawn_Params params {};
	params.NewMesh = NewMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvDestructionActor.SurvDestructionActor_C.StartDestroy
//		Flags  -> ()
void ASurvDestructionActor_C::StartDestroy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvDestructionActor.SurvDestructionActor_C.StartDestroy");

	ASurvDestructionActor_C_StartDestroy_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvDestructionActor.SurvDestructionActor_C.MaterialEffect
//		Flags  -> ()
void ASurvDestructionActor_C::MaterialEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvDestructionActor.SurvDestructionActor_C.MaterialEffect");

	ASurvDestructionActor_C_MaterialEffect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvDestructionActor.SurvDestructionActor_C.ExecuteUbergraph_SurvDestructionActor
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASurvDestructionActor_C::ExecuteUbergraph_SurvDestructionActor(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvDestructionActor.SurvDestructionActor_C.ExecuteUbergraph_SurvDestructionActor");

	ASurvDestructionActor_C_ExecuteUbergraph_SurvDestructionActor_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
