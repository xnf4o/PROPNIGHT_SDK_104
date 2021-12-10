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
//		Name   -> Function SurvPropDestruction.SurvPropDestruction_C.CallDestruction
//		Flags  -> ()
// Parameters:
//		int                                                Stage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void USurvPropDestruction_C::CallDestruction(int Stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvPropDestruction.SurvPropDestruction_C.CallDestruction");

	USurvPropDestruction_C_CallDestruction_Params params {};
	params.Stage = Stage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvPropDestruction.SurvPropDestruction_C.CallDestructionHit
//		Flags  -> ()
// Parameters:
//		float                                              VectorLenght                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvPropDestruction_C::CallDestructionHit(float VectorLenght)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvPropDestruction.SurvPropDestruction_C.CallDestructionHit");

	USurvPropDestruction_C_CallDestructionHit_Params params {};
	params.VectorLenght = VectorLenght;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvPropDestruction.SurvPropDestruction_C.CallDestructionHitServer
//		Flags  -> ()
void USurvPropDestruction_C::CallDestructionHitServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvPropDestruction.SurvPropDestruction_C.CallDestructionHitServer");

	USurvPropDestruction_C_CallDestructionHitServer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvPropDestruction.SurvPropDestruction_C.CallDestructionHitMulticast
//		Flags  -> ()
void USurvPropDestruction_C::CallDestructionHitMulticast()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvPropDestruction.SurvPropDestruction_C.CallDestructionHitMulticast");

	USurvPropDestruction_C_CallDestructionHitMulticast_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvPropDestruction.SurvPropDestruction_C.PropHitCD
//		Flags  -> ()
void USurvPropDestruction_C::PropHitCD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvPropDestruction.SurvPropDestruction_C.PropHitCD");

	USurvPropDestruction_C_PropHitCD_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvPropDestruction.SurvPropDestruction_C.ExecuteUbergraph_SurvPropDestruction
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvPropDestruction_C::ExecuteUbergraph_SurvPropDestruction(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvPropDestruction.SurvPropDestruction_C.ExecuteUbergraph_SurvPropDestruction");

	USurvPropDestruction_C_ExecuteUbergraph_SurvPropDestruction_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
