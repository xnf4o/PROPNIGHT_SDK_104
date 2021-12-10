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

// Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.ChaseON
struct USurvivorSoundsMaster_2D_C_ChaseON_Params
{
};

// Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.ChaseOff
struct USurvivorSoundsMaster_2D_C_ChaseOff_Params
{
};

// Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.GrabSound
struct USurvivorSoundsMaster_2D_C_GrabSound_Params
{
	TEnumAsByte<ItemType_EItemType>                    ItemType;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.StopKiller
struct USurvivorSoundsMaster_2D_C_StopKiller_Params
{
};

// Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.IncreaseSoundLevelChase
struct USurvivorSoundsMaster_2D_C_IncreaseSoundLevelChase_Params
{
	float                                              Time;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.ChaseChange
struct USurvivorSoundsMaster_2D_C_ChaseChange_Params
{
	float                                              Time;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.LevelAmbienceCustomStop
struct USurvivorSoundsMaster_2D_C_LevelAmbienceCustomStop_Params
{
};

// Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.AfterChase
struct USurvivorSoundsMaster_2D_C_AfterChase_Params
{
};

// Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.AllSoundsFade
struct USurvivorSoundsMaster_2D_C_AllSoundsFade_Params
{
};

// Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.TakeItem
struct USurvivorSoundsMaster_2D_C_TakeItem_Params
{
};

// Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.TakeMoney
struct USurvivorSoundsMaster_2D_C_TakeMoney_Params
{
};

// Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.EnergyDrinkSound
struct USurvivorSoundsMaster_2D_C_EnergyDrinkSound_Params
{
};

// Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.PotionSound
struct USurvivorSoundsMaster_2D_C_PotionSound_Params
{
};

// Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.GetDistanceKiller
struct USurvivorSoundsMaster_2D_C_GetDistanceKiller_Params
{
};

// Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.ReceiveTick
struct USurvivorSoundsMaster_2D_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.ReceiveBeginPlay
struct USurvivorSoundsMaster_2D_C_ReceiveBeginPlay_Params
{
};

// Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.SendSkillCheck
struct USurvivorSoundsMaster_2D_C_SendSkillCheck_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.SendFailed
struct USurvivorSoundsMaster_2D_C_SendFailed_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.SendSuccess
struct USurvivorSoundsMaster_2D_C_SendSuccess_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.SendGreat
struct USurvivorSoundsMaster_2D_C_SendGreat_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.NoiseSound
struct USurvivorSoundsMaster_2D_C_NoiseSound_Params
{
};

// Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.Checker
struct USurvivorSoundsMaster_2D_C_Checker_Params
{
};

// Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.NoiseDelay
struct USurvivorSoundsMaster_2D_C_NoiseDelay_Params
{
};

// Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.heartbeatNew
struct USurvivorSoundsMaster_2D_C_heartbeatNew_Params
{
};

// Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.HeartbeatInterp
struct USurvivorSoundsMaster_2D_C_HeartbeatInterp_Params
{
	float                                              Float;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.LastSurvSound
struct USurvivorSoundsMaster_2D_C_LastSurvSound_Params
{
};

// Function SurvivorSoundsMaster-2D.SurvivorSoundsMaster-2D_C.ExecuteUbergraph_SurvivorSoundsMaster-2D
struct USurvivorSoundsMaster_2D_C_ExecuteUbergraph_SurvivorSoundsMaster_2D_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
