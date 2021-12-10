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

// Function FMODSoundTrigger.FMODSoundTrigger_C.ReceiveActorBeginOverlap
struct AFMODSoundTrigger_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FMODSoundTrigger.FMODSoundTrigger_C.ReceiveTick
struct AFMODSoundTrigger_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FMODSoundTrigger.FMODSoundTrigger_C.ReceiveActorEndOverlap
struct AFMODSoundTrigger_C_ReceiveActorEndOverlap_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function FMODSoundTrigger.FMODSoundTrigger_C.ReceiveBeginPlay
struct AFMODSoundTrigger_C_ReceiveBeginPlay_Params
{
};

// Function FMODSoundTrigger.FMODSoundTrigger_C.ExecuteUbergraph_FMODSoundTrigger
struct AFMODSoundTrigger_C_ExecuteUbergraph_FMODSoundTrigger_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
