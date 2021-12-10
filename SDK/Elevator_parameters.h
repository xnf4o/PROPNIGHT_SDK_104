#pragma once

// Name: P, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Elevator.Elevator_C.ElevatorInteract
struct AElevator_C_ElevatorInteract_Params
{
};

// Function Elevator.Elevator_C.StartMoveElevator
struct AElevator_C_StartMoveElevator_Params
{
};

// Function Elevator.Elevator_C.AddToQueue
struct AElevator_C_AddToQueue_Params
{
	int                                                FloorToGo;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Floor;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Elevator.Elevator_C.Move
struct AElevator_C_Move_Params
{
	TArray<class AActor*>                              Refs;                                                      // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              ZLocation;                                                 // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Elevator.Elevator_C.ExecuteUbergraph_Elevator
struct AElevator_C_ExecuteUbergraph_Elevator_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
