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

// Function KillerMesh.KillerMesh_C.UserConstructionScript
struct AKillerMesh_C_UserConstructionScript_Params
{
};

// Function KillerMesh.KillerMesh_C.ReceiveBeginPlay
struct AKillerMesh_C_ReceiveBeginPlay_Params
{
};

// Function KillerMesh.KillerMesh_C.ReceiveTick
struct AKillerMesh_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMesh.KillerMesh_C.TransitionEvent
struct AKillerMesh_C_TransitionEvent_Params
{
	float                                              Time;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KillerMesh.KillerMesh_C.ExecuteUbergraph_KillerMesh
struct AKillerMesh_C_ExecuteUbergraph_KillerMesh_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
