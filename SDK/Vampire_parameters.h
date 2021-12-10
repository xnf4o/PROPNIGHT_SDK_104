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

// Function Vampire.Vampire_C.Timeline_7__FinishedFunc
struct AVampire_C_Timeline_7__FinishedFunc_Params
{
};

// Function Vampire.Vampire_C.Timeline_7__UpdateFunc
struct AVampire_C_Timeline_7__UpdateFunc_Params
{
};

// Function Vampire.Vampire_C.InpActEvt_Use Skill 2_K2Node_InputActionEvent_3
struct AVampire_C_InpActEvt_Use_Skill_2_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Vampire.Vampire_C.InpActEvt_Use Skill 1_K2Node_InputActionEvent_2
struct AVampire_C_InpActEvt_Use_Skill_1_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Vampire.Vampire_C.InpActEvt_RMB_K2Node_InputActionEvent_1
struct AVampire_C_InpActEvt_RMB_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Vampire.Vampire_C.ReceiveBeginPlay
struct AVampire_C_ReceiveBeginPlay_Params
{
};

// Function Vampire.Vampire_C.ReceiveTick
struct AVampire_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Vampire.Vampire_C.AltAttackServ
struct AVampire_C_AltAttackServ_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Vampire.Vampire_C.AltAttackMulti
struct AVampire_C_AltAttackMulti_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Vampire.Vampire_C.AltAttack
struct AVampire_C_AltAttack_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Vampire.Vampire_C.Hitter
struct AVampire_C_Hitter_Params
{
	class ASurvivorMasterBP_C*                         SurvRef;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Damage;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               knife;                                                     // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Range;                                                     // 0x000D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               BackStab;                                                  // 0x000E(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               VampireBite;                                               // 0x000F(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Vampire.Vampire_C.AltAttackAnim
struct AVampire_C_AltAttackAnim_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Vampire.Vampire_C.MeshVisibilityOn
struct AVampire_C_MeshVisibilityOn_Params
{
};

// Function Vampire.Vampire_C.MeshVisibiltyOff
struct AVampire_C_MeshVisibiltyOff_Params
{
};

// Function Vampire.Vampire_C.BndEvt__Vampire_BladeDanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AVampire_C_BndEvt__Vampire_BladeDanceSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Vampire.Vampire_C.KillerLaugh
struct AVampire_C_KillerLaugh_Params
{
};

// Function Vampire.Vampire_C.SurvRunawaySound
struct AVampire_C_SurvRunawaySound_Params
{
};

// Function Vampire.Vampire_C.KillerDetectMulti
struct AVampire_C_KillerDetectMulti_Params
{
};

// Function Vampire.Vampire_C.DelayOffMulti
struct AVampire_C_DelayOffMulti_Params
{
};

// Function Vampire.Vampire_C.JumpSoundKillerMulti
struct AVampire_C_JumpSoundKillerMulti_Params
{
};

// Function Vampire.Vampire_C.JumpSoundKillerLocal
struct AVampire_C_JumpSoundKillerLocal_Params
{
};

// Function Vampire.Vampire_C.AfterJumpMulti
struct AVampire_C_AfterJumpMulti_Params
{
};

// Function Vampire.Vampire_C.BlindSound
struct AVampire_C_BlindSound_Params
{
};

// Function Vampire.Vampire_C.SeekMulti
struct AVampire_C_SeekMulti_Params
{
};

// Function Vampire.Vampire_C.AttackAudioServ
struct AVampire_C_AttackAudioServ_Params
{
};

// Function Vampire.Vampire_C.AttackAudioMulti
struct AVampire_C_AttackAudioMulti_Params
{
};

// Function Vampire.Vampire_C.AtackAudio
struct AVampire_C_AtackAudio_Params
{
};

// Function Vampire.Vampire_C.SurvOffInEye
struct AVampire_C_SurvOffInEye_Params
{
	class ASurvivorMasterBP_C*                         SurvRef;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Vampire.Vampire_C.SurvOnInEye
struct AVampire_C_SurvOnInEye_Params
{
	class ASurvivorMasterBP_C*                         SurvRef;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASpyEye_C*                                   SpyEye;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Vampire.Vampire_C.EyeSpooting
struct AVampire_C_EyeSpooting_Params
{
	class USkeletalMeshComponent*                      NewParam;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Vampire.Vampire_C.SurvSpyEyeOff
struct AVampire_C_SurvSpyEyeOff_Params
{
	class ASpyEye_C*                                   SpyEye;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASurvivorMasterBP_C*                         SurvRef;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Vampire.Vampire_C.EyeSpootingServ
struct AVampire_C_EyeSpootingServ_Params
{
	class USkeletalMeshComponent*                      NewParam;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Vampire.Vampire_C.EyeSpootingMulti
struct AVampire_C_EyeSpootingMulti_Params
{
	class USkeletalMeshComponent*                      NewParam;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Vampire.Vampire_C.SurvSpyEyeOn
struct AVampire_C_SurvSpyEyeOn_Params
{
	class ASurvivorMasterBP_C*                         SurvRef;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASpyEye_C*                                   SpyEye;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Vampire.Vampire_C.CreateChildPPMaterial
struct AVampire_C_CreateChildPPMaterial_Params
{
};

// Function Vampire.Vampire_C.SwitchBloodlustPP
struct AVampire_C_SwitchBloodlustPP_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Vampire.Vampire_C.ExecuteUbergraph_Vampire
struct AVampire_C_ExecuteUbergraph_Vampire_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
