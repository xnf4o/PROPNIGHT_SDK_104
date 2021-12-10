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
//		Name   -> Function SurvOnChair.SurvOnChair_C.K2_Tick
//		Flags  -> ()
// Parameters:
//		class UATPCCameraComponent*                        Camera                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvOnChair_C::K2_Tick(class UATPCCameraComponent* Camera, float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvOnChair.SurvOnChair_C.K2_Tick");

	USurvOnChair_C_K2_Tick_Params params {};
	params.Camera = Camera;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvOnChair.SurvOnChair_C.K2_OnEnterCameraMode
//		Flags  -> ()
// Parameters:
//		class UATPCCameraComponent*                        Camera                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvOnChair_C::K2_OnEnterCameraMode(class UATPCCameraComponent* Camera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvOnChair.SurvOnChair_C.K2_OnEnterCameraMode");

	USurvOnChair_C_K2_OnEnterCameraMode_Params params {};
	params.Camera = Camera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvOnChair.SurvOnChair_C.K2_OnExitCameraMode
//		Flags  -> ()
// Parameters:
//		class UATPCCameraComponent*                        Camera                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvOnChair_C::K2_OnExitCameraMode(class UATPCCameraComponent* Camera)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvOnChair.SurvOnChair_C.K2_OnExitCameraMode");

	USurvOnChair_C_K2_OnExitCameraMode_Params params {};
	params.Camera = Camera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SurvOnChair.SurvOnChair_C.ExecuteUbergraph_SurvOnChair
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USurvOnChair_C::ExecuteUbergraph_SurvOnChair(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SurvOnChair.SurvOnChair_C.ExecuteUbergraph_SurvOnChair");

	USurvOnChair_C_ExecuteUbergraph_SurvOnChair_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
