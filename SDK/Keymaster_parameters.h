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

// Function Keymaster.Keymaster_C.Timeline_5_0__FinishedFunc
struct AKeymaster_C_Timeline_5_0__FinishedFunc_Params
{
};

// Function Keymaster.Keymaster_C.Timeline_5_0__UpdateFunc
struct AKeymaster_C_Timeline_5_0__UpdateFunc_Params
{
};

// Function Keymaster.Keymaster_C.InpActEvt_Use Skill 1_K2Node_InputActionEvent_4
struct AKeymaster_C_InpActEvt_Use_Skill_1_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Keymaster.Keymaster_C.InpActEvt_Use Skill 2_K2Node_InputActionEvent_3
struct AKeymaster_C_InpActEvt_Use_Skill_2_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Keymaster.Keymaster_C.InpActEvt_Use Skill 3_K2Node_InputActionEvent_2
struct AKeymaster_C_InpActEvt_Use_Skill_3_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Keymaster.Keymaster_C.InpActEvt_Use Skill 3_K2Node_InputActionEvent_1
struct AKeymaster_C_InpActEvt_Use_Skill_3_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Keymaster.Keymaster_C.AtackAudio
struct AKeymaster_C_AtackAudio_Params
{
};

// Function Keymaster.Keymaster_C.AstralSoundIn
struct AKeymaster_C_AstralSoundIn_Params
{
};

// Function Keymaster.Keymaster_C.AstralSoundInvisibility
struct AKeymaster_C_AstralSoundInvisibility_Params
{
};

// Function Keymaster.Keymaster_C.AstralSoundOut
struct AKeymaster_C_AstralSoundOut_Params
{
	bool                                               NewParam;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Keymaster.Keymaster_C.ReceiveBeginPlay
struct AKeymaster_C_ReceiveBeginPlay_Params
{
};

// Function Keymaster.Keymaster_C.CD_Widget_Strat
struct AKeymaster_C_CD_Widget_Strat_Params
{
	struct FString                                     AbilityName;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function Keymaster.Keymaster_C.SurvSpyEyeOff
struct AKeymaster_C_SurvSpyEyeOff_Params
{
	class ASpyEye_C*                                   SpyEye;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASurvivorMasterBP_C*                         SurvRef;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Keymaster.Keymaster_C.ExplosionSoundServ
struct AKeymaster_C_ExplosionSoundServ_Params
{
	class UStaticMeshComponent*                        bullet;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Keymaster.Keymaster_C.ExplosionSoundMulti
struct AKeymaster_C_ExplosionSoundMulti_Params
{
	class UStaticMeshComponent*                        BulletMesh;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Keymaster.Keymaster_C.ShootAudio
struct AKeymaster_C_ShootAudio_Params
{
};

// Function Keymaster.Keymaster_C.ShootAudioServ
struct AKeymaster_C_ShootAudioServ_Params
{
};

// Function Keymaster.Keymaster_C.ShootAudioMulti
struct AKeymaster_C_ShootAudioMulti_Params
{
};

// Function Keymaster.Keymaster_C.AmmoSet
struct AKeymaster_C_AmmoSet_Params
{
	int                                                Ammo;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Keymaster.Keymaster_C.AmmoRotation
struct AKeymaster_C_AmmoRotation_Params
{
	struct FRotator                                    Rotator;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Keymaster.Keymaster_C.StartAnimShot
struct AKeymaster_C_StartAnimShot_Params
{
};

// Function Keymaster.Keymaster_C.StartAnimShotServ
struct AKeymaster_C_StartAnimShotServ_Params
{
};

// Function Keymaster.Keymaster_C.StartAnimShotMulti
struct AKeymaster_C_StartAnimShotMulti_Params
{
};

// Function Keymaster.Keymaster_C.EyeSpooting
struct AKeymaster_C_EyeSpooting_Params
{
	class USkeletalMeshComponent*                      NewParam;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Keymaster.Keymaster_C.EyeSpootingServ
struct AKeymaster_C_EyeSpootingServ_Params
{
	class USkeletalMeshComponent*                      NewParam;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Keymaster.Keymaster_C.EyeSpootingMulti
struct AKeymaster_C_EyeSpootingMulti_Params
{
	class USkeletalMeshComponent*                      NewParam;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Keymaster.Keymaster_C.AstralSoundInServ
struct AKeymaster_C_AstralSoundInServ_Params
{
};

// Function Keymaster.Keymaster_C.AstralSoundInMulti
struct AKeymaster_C_AstralSoundInMulti_Params
{
};

// Function Keymaster.Keymaster_C.AstralSoundInvisibiltyServ
struct AKeymaster_C_AstralSoundInvisibiltyServ_Params
{
};

// Function Keymaster.Keymaster_C.AstralSoundInvisibilityMulti
struct AKeymaster_C_AstralSoundInvisibilityMulti_Params
{
};

// Function Keymaster.Keymaster_C.AstralSoundOutServ
struct AKeymaster_C_AstralSoundOutServ_Params
{
};

// Function Keymaster.Keymaster_C.AstralSoundOutMulti
struct AKeymaster_C_AstralSoundOutMulti_Params
{
};

// Function Keymaster.Keymaster_C.SurvOffInEye
struct AKeymaster_C_SurvOffInEye_Params
{
	class ASurvivorMasterBP_C*                         SurvRef;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Keymaster.Keymaster_C.SurvOnInEye
struct AKeymaster_C_SurvOnInEye_Params
{
	class ASurvivorMasterBP_C*                         SurvRef;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASpyEye_C*                                   SpyEye;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Keymaster.Keymaster_C.SurvSpyEyeOn
struct AKeymaster_C_SurvSpyEyeOn_Params
{
	class ASurvivorMasterBP_C*                         SurvRef;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASpyEye_C*                                   SpyEye;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Keymaster.Keymaster_C.AttackAudioServ
struct AKeymaster_C_AttackAudioServ_Params
{
};

// Function Keymaster.Keymaster_C.AttackAudioMulti
struct AKeymaster_C_AttackAudioMulti_Params
{
};

// Function Keymaster.Keymaster_C.SetLevelSystem
struct AKeymaster_C_SetLevelSystem_Params
{
};

// Function Keymaster.Keymaster_C.KillerCatchSound
struct AKeymaster_C_KillerCatchSound_Params
{
};

// Function Keymaster.Keymaster_C.KillerLaugh
struct AKeymaster_C_KillerLaugh_Params
{
};

// Function Keymaster.Keymaster_C.JumpSoundKillerMulti
struct AKeymaster_C_JumpSoundKillerMulti_Params
{
};

// Function Keymaster.Keymaster_C.BlindSound
struct AKeymaster_C_BlindSound_Params
{
};

// Function Keymaster.Keymaster_C.AfterJumpMulti
struct AKeymaster_C_AfterJumpMulti_Params
{
};

// Function Keymaster.Keymaster_C.SurvRunawaySound
struct AKeymaster_C_SurvRunawaySound_Params
{
};

// Function Keymaster.Keymaster_C.KillerDetectMulti
struct AKeymaster_C_KillerDetectMulti_Params
{
};

// Function Keymaster.Keymaster_C.DelayOffMulti
struct AKeymaster_C_DelayOffMulti_Params
{
};

// Function Keymaster.Keymaster_C.SeekMulti
struct AKeymaster_C_SeekMulti_Params
{
};

// Function Keymaster.Keymaster_C.MeshVisibiltyOff
struct AKeymaster_C_MeshVisibiltyOff_Params
{
};

// Function Keymaster.Keymaster_C.MeshVisibilityOn
struct AKeymaster_C_MeshVisibilityOn_Params
{
};

// Function Keymaster.Keymaster_C.HammerMatDyn
struct AKeymaster_C_HammerMatDyn_Params
{
};

// Function Keymaster.Keymaster_C.HammerVfx
struct AKeymaster_C_HammerVfx_Params
{
};

// Function Keymaster.Keymaster_C.IntroWeapon
struct AKeymaster_C_IntroWeapon_Params
{
};

// Function Keymaster.Keymaster_C.PickUp Multi
struct AKeymaster_C_PickUp_Multi_Params
{
	class ASurvivorMasterBP_C*                         SurvRef;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Keymaster.Keymaster_C.Hum
struct AKeymaster_C_Hum_Params
{
};

// Function Keymaster.Keymaster_C.HumMulti
struct AKeymaster_C_HumMulti_Params
{
};

// Function Keymaster.Keymaster_C.FirstPersonCamEvent
struct AKeymaster_C_FirstPersonCamEvent_Params
{
	bool                                               Now_;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               NoDelay_;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Keymaster.Keymaster_C.JumpSoundKillerLocal
struct AKeymaster_C_JumpSoundKillerLocal_Params
{
};

// Function Keymaster.Keymaster_C.ExecuteUbergraph_Keymaster
struct AKeymaster_C_ExecuteUbergraph_Keymaster_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
