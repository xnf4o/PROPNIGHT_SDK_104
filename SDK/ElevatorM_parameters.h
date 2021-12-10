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

// Function ElevatorM.ElevatorM_C.ReceiveTick
struct AElevatorM_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ElevatorM.ElevatorM_C.InteractElevatorM
struct AElevatorM_C_InteractElevatorM_Params
{
	class UActorComponent*                             Component;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      ActorRef;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ElevatorM.ElevatorM_C.OpenElevator
struct AElevatorM_C_OpenElevator_Params
{
};

// Function ElevatorM.ElevatorM_C.CloseElevator
struct AElevatorM_C_CloseElevator_Params
{
};

// Function ElevatorM.ElevatorM_C.ExecuteUbergraph_ElevatorM
struct AElevatorM_C_ExecuteUbergraph_ElevatorM_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
