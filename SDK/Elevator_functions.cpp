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
//		Name   -> Function Elevator.Elevator_C.ElevatorInteract
//		Flags  -> ()
void AElevator_C::ElevatorInteract()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Elevator.Elevator_C.ElevatorInteract");

	AElevator_C_ElevatorInteract_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Elevator.Elevator_C.StartMoveElevator
//		Flags  -> ()
void AElevator_C::StartMoveElevator()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Elevator.Elevator_C.StartMoveElevator");

	AElevator_C_StartMoveElevator_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Elevator.Elevator_C.AddToQueue
//		Flags  -> ()
// Parameters:
//		int                                                FloorToGo                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Floor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AElevator_C::AddToQueue(int FloorToGo, int Floor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Elevator.Elevator_C.AddToQueue");

	AElevator_C_AddToQueue_Params params {};
	params.FloorToGo = FloorToGo;
	params.Floor = Floor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Elevator.Elevator_C.Move
//		Flags  -> ()
// Parameters:
//		TArray<class AActor*>                              Refs                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		float                                              ZLocation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AElevator_C::Move(TArray<class AActor*> Refs, float ZLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Elevator.Elevator_C.Move");

	AElevator_C_Move_Params params {};
	params.Refs = Refs;
	params.ZLocation = ZLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Elevator.Elevator_C.ExecuteUbergraph_Elevator
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AElevator_C::ExecuteUbergraph_Elevator(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Elevator.Elevator_C.ExecuteUbergraph_Elevator");

	AElevator_C_ExecuteUbergraph_Elevator_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
