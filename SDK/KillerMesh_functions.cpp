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
//		Name   -> Function KillerMesh.KillerMesh_C.UserConstructionScript
//		Flags  -> ()
void AKillerMesh_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMesh.KillerMesh_C.UserConstructionScript");

	AKillerMesh_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMesh.KillerMesh_C.ReceiveBeginPlay
//		Flags  -> ()
void AKillerMesh_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMesh.KillerMesh_C.ReceiveBeginPlay");

	AKillerMesh_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMesh.KillerMesh_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMesh_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMesh.KillerMesh_C.ReceiveTick");

	AKillerMesh_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMesh.KillerMesh_C.TransitionEvent
//		Flags  -> ()
// Parameters:
//		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMesh_C::TransitionEvent(float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMesh.KillerMesh_C.TransitionEvent");

	AKillerMesh_C_TransitionEvent_Params params {};
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function KillerMesh.KillerMesh_C.ExecuteUbergraph_KillerMesh
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKillerMesh_C::ExecuteUbergraph_KillerMesh(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function KillerMesh.KillerMesh_C.ExecuteUbergraph_KillerMesh");

	AKillerMesh_C_ExecuteUbergraph_KillerMesh_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
