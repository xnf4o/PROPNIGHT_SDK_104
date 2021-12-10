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

// Function Banshee.Banshee_C.OnRep_ScreamAnim
struct ABanshee_C_OnRep_ScreamAnim_Params
{
};

// Function Banshee.Banshee_C.CurseActorFind
struct ABanshee_C_CurseActorFind_Params
{
	class AActor*                                      InputPin;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Banshee.Banshee_C.Timeline_4_0__FinishedFunc
struct ABanshee_C_Timeline_4_0__FinishedFunc_Params
{
};

// Function Banshee.Banshee_C.Timeline_4_0__UpdateFunc
struct ABanshee_C_Timeline_4_0__UpdateFunc_Params
{
};

// Function Banshee.Banshee_C.Timeline_5_0__FinishedFunc
struct ABanshee_C_Timeline_5_0__FinishedFunc_Params
{
};

// Function Banshee.Banshee_C.Timeline_5_0__UpdateFunc
struct ABanshee_C_Timeline_5_0__UpdateFunc_Params
{
};

// Function Banshee.Banshee_C.InpActEvt_Jump_K2Node_InputActionEvent_7
struct ABanshee_C_InpActEvt_Jump_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Banshee.Banshee_C.InpActEvt_Jump_K2Node_InputActionEvent_6
struct ABanshee_C_InpActEvt_Jump_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Banshee.Banshee_C.InpActEvt_Use Skill 2_K2Node_InputActionEvent_5
struct ABanshee_C_InpActEvt_Use_Skill_2_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Banshee.Banshee_C.InpActEvt_Use Skill 2_K2Node_InputActionEvent_4
struct ABanshee_C_InpActEvt_Use_Skill_2_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Banshee.Banshee_C.InpActEvt_Use Skill 1_K2Node_InputActionEvent_3
struct ABanshee_C_InpActEvt_Use_Skill_1_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Banshee.Banshee_C.InpActEvt_Use Skill 3_K2Node_InputActionEvent_2
struct ABanshee_C_InpActEvt_Use_Skill_3_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Banshee.Banshee_C.InpActEvt_Use Skill 3_K2Node_InputActionEvent_1
struct ABanshee_C_InpActEvt_Use_Skill_3_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Banshee.Banshee_C.ReceiveBeginPlay
struct ABanshee_C_ReceiveBeginPlay_Params
{
};

// Function Banshee.Banshee_C.ReceiveTick
struct ABanshee_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Banshee.Banshee_C.BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABanshee_C_BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Banshee.Banshee_C.BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABanshee_C_BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Banshee.Banshee_C.MoveSound
struct ABanshee_C_MoveSound_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Banshee.Banshee_C.MoveSoundServ
struct ABanshee_C_MoveSoundServ_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Banshee.Banshee_C.MoveSoundMulti
struct ABanshee_C_MoveSoundMulti_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Banshee.Banshee_C.SoundRush
struct ABanshee_C_SoundRush_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Banshee.Banshee_C.SoundRushServ
struct ABanshee_C_SoundRushServ_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Banshee.Banshee_C.SoundRushMulti
struct ABanshee_C_SoundRushMulti_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Banshee.Banshee_C.CurseSound
struct ABanshee_C_CurseSound_Params
{
};

// Function Banshee.Banshee_C.CurseSoundServ
struct ABanshee_C_CurseSoundServ_Params
{
};

// Function Banshee.Banshee_C.CurseSoundMulti
struct ABanshee_C_CurseSoundMulti_Params
{
};

// Function Banshee.Banshee_C.ScreamLocal
struct ABanshee_C_ScreamLocal_Params
{
};

// Function Banshee.Banshee_C.ScreamServ
struct ABanshee_C_ScreamServ_Params
{
};

// Function Banshee.Banshee_C.ScreamMulti
struct ABanshee_C_ScreamMulti_Params
{
};

// Function Banshee.Banshee_C.MoveSoundMake
struct ABanshee_C_MoveSoundMake_Params
{
};

// Function Banshee.Banshee_C.AtackAudio
struct ABanshee_C_AtackAudio_Params
{
};

// Function Banshee.Banshee_C.AtackAudioServ
struct ABanshee_C_AtackAudioServ_Params
{
};

// Function Banshee.Banshee_C.AtackAudioMulti
struct ABanshee_C_AtackAudioMulti_Params
{
};

// Function Banshee.Banshee_C.JumpSoundStartServ
struct ABanshee_C_JumpSoundStartServ_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Banshee.Banshee_C.JumpSoundStartMulti
struct ABanshee_C_JumpSoundStartMulti_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Banshee.Banshee_C.CurseKeyStart
struct ABanshee_C_CurseKeyStart_Params
{
};

// Function Banshee.Banshee_C.KillerCatchSound
struct ABanshee_C_KillerCatchSound_Params
{
};

// Function Banshee.Banshee_C.KillerLaugh
struct ABanshee_C_KillerLaugh_Params
{
};

// Function Banshee.Banshee_C.JumpSoundKillerMulti
struct ABanshee_C_JumpSoundKillerMulti_Params
{
};

// Function Banshee.Banshee_C.BlindSound
struct ABanshee_C_BlindSound_Params
{
};

// Function Banshee.Banshee_C.KillerDetectMulti
struct ABanshee_C_KillerDetectMulti_Params
{
};

// Function Banshee.Banshee_C.SurvRunawaySound
struct ABanshee_C_SurvRunawaySound_Params
{
};

// Function Banshee.Banshee_C.DelayOffMulti
struct ABanshee_C_DelayOffMulti_Params
{
};

// Function Banshee.Banshee_C.PlayFast
struct ABanshee_C_PlayFast_Params
{
};

// Function Banshee.Banshee_C.StopFast
struct ABanshee_C_StopFast_Params
{
};

// Function Banshee.Banshee_C.AfterJumpMulti
struct ABanshee_C_AfterJumpMulti_Params
{
};

// Function Banshee.Banshee_C.PlayMove
struct ABanshee_C_PlayMove_Params
{
};

// Function Banshee.Banshee_C.StopMove
struct ABanshee_C_StopMove_Params
{
};

// Function Banshee.Banshee_C.LandJump
struct ABanshee_C_LandJump_Params
{
};

// Function Banshee.Banshee_C.KillerVisible
struct ABanshee_C_KillerVisible_Params
{
};

// Function Banshee.Banshee_C.hotkerStarterCurse
struct ABanshee_C_hotkerStarterCurse_Params
{
};

// Function Banshee.Banshee_C.NoActorsCurse
struct ABanshee_C_NoActorsCurse_Params
{
};

// Function Banshee.Banshee_C.StartAnimShot
struct ABanshee_C_StartAnimShot_Params
{
};

// Function Banshee.Banshee_C.StartAnimShotServ
struct ABanshee_C_StartAnimShotServ_Params
{
};

// Function Banshee.Banshee_C.StartAnimShotMulti
struct ABanshee_C_StartAnimShotMulti_Params
{
};

// Function Banshee.Banshee_C.SeekMulti
struct ABanshee_C_SeekMulti_Params
{
};

// Function Banshee.Banshee_C.InpAxisEvt_Backward_K2Node_InputAxisEvent_2
struct ABanshee_C_InpAxisEvt_Backward_K2Node_InputAxisEvent_2_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Banshee.Banshee_C.InpAxisEvt_Forward_K2Node_InputAxisEvent_1
struct ABanshee_C_InpAxisEvt_Forward_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Banshee.Banshee_C.BansheeScream
struct ABanshee_C_BansheeScream_Params
{
};

// Function Banshee.Banshee_C.BansheeFly
struct ABanshee_C_BansheeFly_Params
{
};

// Function Banshee.Banshee_C.ServerBreakGlass
struct ABanshee_C_ServerBreakGlass_Params
{
	class AInteractableDoor_C*                         Door;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Banshee.Banshee_C.BansheeBreakGlass
struct ABanshee_C_BansheeBreakGlass_Params
{
	class AInteractableDoor_C*                         Door;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Banshee.Banshee_C.JumpSoundKillerLocal
struct ABanshee_C_JumpSoundKillerLocal_Params
{
};

// Function Banshee.Banshee_C.RmbPresserServ
struct ABanshee_C_RmbPresserServ_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Banshee.Banshee_C.RmbPresserMulti
struct ABanshee_C_RmbPresserMulti_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Banshee.Banshee_C.ExecuteUbergraph_Banshee
struct ABanshee_C_ExecuteUbergraph_Banshee_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
