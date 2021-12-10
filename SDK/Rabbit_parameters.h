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

// Function Rabbit.Rabbit_C.InpActEvt_Use Skill 1_K2Node_InputActionEvent_4
struct ARabbit_C_InpActEvt_Use_Skill_1_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Rabbit.Rabbit_C.InpActEvt_Use Skill 2_K2Node_InputActionEvent_3
struct ARabbit_C_InpActEvt_Use_Skill_2_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Rabbit.Rabbit_C.InpActEvt_Use Skill 3_K2Node_InputActionEvent_2
struct ARabbit_C_InpActEvt_Use_Skill_3_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Rabbit.Rabbit_C.InpActEvt_Use Skill 3_K2Node_InputActionEvent_1
struct ARabbit_C_InpActEvt_Use_Skill_3_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function Rabbit.Rabbit_C.ReceiveBeginPlay
struct ARabbit_C_ReceiveBeginPlay_Params
{
};

// Function Rabbit.Rabbit_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ARabbit_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NormalImpulse;                                             // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  hit;                                                       // 0x0024(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Rabbit.Rabbit_C.ChargeStartServ
struct ARabbit_C_ChargeStartServ_Params
{
	bool                                               Cast;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Move;                                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Rabbit.Rabbit_C.ChargeStartMulti
struct ARabbit_C_ChargeStartMulti_Params
{
	bool                                               Cast;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Move;                                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Rabbit.Rabbit_C.ChargeAttackServ
struct ARabbit_C_ChargeAttackServ_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Rabbit.Rabbit_C.ChargeAttackMulti
struct ARabbit_C_ChargeAttackMulti_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Rabbit.Rabbit_C.IntroWeapon
struct ARabbit_C_IntroWeapon_Params
{
};

// Function Rabbit.Rabbit_C.MeshVisibiltyOff
struct ARabbit_C_MeshVisibiltyOff_Params
{
};

// Function Rabbit.Rabbit_C.MeshVisibilityOn
struct ARabbit_C_MeshVisibilityOn_Params
{
};

// Function Rabbit.Rabbit_C.PickUp Multi
struct ARabbit_C_PickUp_Multi_Params
{
	class ASurvivorMasterBP_C*                         SurvRef;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Rabbit.Rabbit_C.FirstPersonCamEvent
struct ARabbit_C_FirstPersonCamEvent_Params
{
	bool                                               Now_;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               NoDelay_;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Rabbit.Rabbit_C.TPPWeaponOnServ
struct ARabbit_C_TPPWeaponOnServ_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Rabbit.Rabbit_C.TPPWeaponOnMulti
struct ARabbit_C_TPPWeaponOnMulti_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Rabbit.Rabbit_C.AttackAudioServ
struct ARabbit_C_AttackAudioServ_Params
{
};

// Function Rabbit.Rabbit_C.AttackAudioMulti
struct ARabbit_C_AttackAudioMulti_Params
{
};

// Function Rabbit.Rabbit_C.AtackAudio
struct ARabbit_C_AtackAudio_Params
{
};

// Function Rabbit.Rabbit_C.KillerLaugh
struct ARabbit_C_KillerLaugh_Params
{
};

// Function Rabbit.Rabbit_C.SurvRunawaySound
struct ARabbit_C_SurvRunawaySound_Params
{
};

// Function Rabbit.Rabbit_C.KillerDetectMulti
struct ARabbit_C_KillerDetectMulti_Params
{
};

// Function Rabbit.Rabbit_C.DelayOffMulti
struct ARabbit_C_DelayOffMulti_Params
{
};

// Function Rabbit.Rabbit_C.JumpSoundKillerMulti
struct ARabbit_C_JumpSoundKillerMulti_Params
{
};

// Function Rabbit.Rabbit_C.JumpSoundKillerLocal
struct ARabbit_C_JumpSoundKillerLocal_Params
{
};

// Function Rabbit.Rabbit_C.AfterJumpMulti
struct ARabbit_C_AfterJumpMulti_Params
{
};

// Function Rabbit.Rabbit_C.BlindSound
struct ARabbit_C_BlindSound_Params
{
};

// Function Rabbit.Rabbit_C.ChargeSoundLocal
struct ARabbit_C_ChargeSoundLocal_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Rabbit.Rabbit_C.SeekMulti
struct ARabbit_C_SeekMulti_Params
{
};

// Function Rabbit.Rabbit_C.BndEvt__ChainCollusion_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct ARabbit_C_BndEvt__ChainCollusion_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function Rabbit.Rabbit_C.CollisionChain
struct ARabbit_C_CollisionChain_Params
{
};

// Function Rabbit.Rabbit_C.ChainsawTerrorLocal
struct ARabbit_C_ChainsawTerrorLocal_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Rabbit.Rabbit_C.ChainsawTerrorServ
struct ARabbit_C_ChainsawTerrorServ_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Rabbit.Rabbit_C.ChainsawTerrorMulti
struct ARabbit_C_ChainsawTerrorMulti_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Rabbit.Rabbit_C.AmbientOff
struct ARabbit_C_AmbientOff_Params
{
};

// Function Rabbit.Rabbit_C.DropMulti
struct ARabbit_C_DropMulti_Params
{
};

// Function Rabbit.Rabbit_C.ToChairMulti
struct ARabbit_C_ToChairMulti_Params
{
	class AHypnoChairBP_C*                             NewParam;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Rabbit.Rabbit_C.ExecuteUbergraph_Rabbit
struct ARabbit_C_ExecuteUbergraph_Rabbit_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
