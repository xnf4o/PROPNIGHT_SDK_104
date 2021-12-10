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
//		Name   -> Function ElevatorM.ElevatorM_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AElevatorM_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ElevatorM.ElevatorM_C.ReceiveTick");

	AElevatorM_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ElevatorM.ElevatorM_C.InteractElevatorM
//		Flags  -> ()
// Parameters:
//		class UActorComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      ActorRef                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AElevatorM_C::InteractElevatorM(class UActorComponent* Component, class AActor* ActorRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ElevatorM.ElevatorM_C.InteractElevatorM");

	AElevatorM_C_InteractElevatorM_Params params {};
	params.Component = Component;
	params.ActorRef = ActorRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ElevatorM.ElevatorM_C.OpenElevator
//		Flags  -> ()
void AElevatorM_C::OpenElevator()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ElevatorM.ElevatorM_C.OpenElevator");

	AElevatorM_C_OpenElevator_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ElevatorM.ElevatorM_C.CloseElevator
//		Flags  -> ()
void AElevatorM_C::CloseElevator()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ElevatorM.ElevatorM_C.CloseElevator");

	AElevatorM_C_CloseElevator_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ElevatorM.ElevatorM_C.ExecuteUbergraph_ElevatorM
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AElevatorM_C::ExecuteUbergraph_ElevatorM(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ElevatorM.ElevatorM_C.ExecuteUbergraph_ElevatorM");

	AElevatorM_C_ExecuteUbergraph_ElevatorM_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
