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

// Function BasePropBP.BasePropBP_C.ShakeTimeline__FinishedFunc
struct ABasePropBP_C_ShakeTimeline__FinishedFunc_Params
{
};

// Function BasePropBP.BasePropBP_C.ShakeTimeline__UpdateFunc
struct ABasePropBP_C_ShakeTimeline__UpdateFunc_Params
{
};

// Function BasePropBP.BasePropBP_C.HitShake
struct ABasePropBP_C_HitShake_Params
{
	struct FVector                                     From;                                                      // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BasePropBP.BasePropBP_C.HitShakeMulti
struct ABasePropBP_C_HitShakeMulti_Params
{
	struct FVector                                     From;                                                      // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BasePropBP.BasePropBP_C.CursedPropSwitcher
struct ABasePropBP_C_CursedPropSwitcher_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPerkKiller_C*                               PerkKiller;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Killer_;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BasePropBP.BasePropBP_C.DeleteOutline
struct ABasePropBP_C_DeleteOutline_Params
{
};

// Function BasePropBP.BasePropBP_C.SurvDeactivated
struct ABasePropBP_C_SurvDeactivated_Params
{
};

// Function BasePropBP.BasePropBP_C.StartChallenge
struct ABasePropBP_C_StartChallenge_Params
{
	bool                                               Killer_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BasePropBP.BasePropBP_C.FailedChallenge
struct ABasePropBP_C_FailedChallenge_Params
{
	bool                                               Killer_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BasePropBP.BasePropBP_C.EndChallenge
struct ABasePropBP_C_EndChallenge_Params
{
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BasePropBP.BasePropBP_C.CreateOutline
struct ABasePropBP_C_CreateOutline_Params
{
};

// Function BasePropBP.BasePropBP_C.CreateMaterials
struct ABasePropBP_C_CreateMaterials_Params
{
};

// Function BasePropBP.BasePropBP_C.MaterialsSwitch
struct ABasePropBP_C_MaterialsSwitch_Params
{
	bool                                               Dynamic_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BasePropBP.BasePropBP_C.StopOutline
struct ABasePropBP_C_StopOutline_Params
{
};

// Function BasePropBP.BasePropBP_C.StartOutline
struct ABasePropBP_C_StartOutline_Params
{
};

// Function BasePropBP.BasePropBP_C.SurvPropMaterialsReturn
struct ABasePropBP_C_SurvPropMaterialsReturn_Params
{
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BasePropBP.BasePropBP_C.BndEvt__BasePropBP_PropStaticMesh_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature
struct ABasePropBP_C_BndEvt__BasePropBP_PropStaticMesh_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         WakingComponent;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       BoneName;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BasePropBP.BasePropBP_C.ReceiveTick
struct ABasePropBP_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BasePropBP.BasePropBP_C.BndEvt__BasePropBP_PropStaticMesh_K2Node_ComponentBoundEvent_1_ComponentSleepSignature__DelegateSignature
struct ABasePropBP_C_BndEvt__BasePropBP_PropStaticMesh_K2Node_ComponentBoundEvent_1_ComponentSleepSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         SleepingComponent;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       BoneName;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BasePropBP.BasePropBP_C.MulticastSound
struct ABasePropBP_C_MulticastSound_Params
{
	class UFMODEvent*                                  Sound;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BasePropBP.BasePropBP_C.BndEvt__BasePropBP_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct ABasePropBP_C_BndEvt__BasePropBP_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BasePropBP.BasePropBP_C.ReceiveHit
struct ABasePropBP_C_ReceiveHit_Params
{
	class UPrimitiveComponent*                         MyComp;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Other;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bSelfMoved;                                                // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     HitLocation;                                               // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HitNormal;                                                 // 0x0028(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NormalImpulse;                                             // 0x0034(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  hit;                                                       // 0x0040(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BasePropBP.BasePropBP_C.ReceiveBeginPlay
struct ABasePropBP_C_ReceiveBeginPlay_Params
{
};

// Function BasePropBP.BasePropBP_C.StartTutorial
struct ABasePropBP_C_StartTutorial_Params
{
};

// Function BasePropBP.BasePropBP_C.StopTutorial
struct ABasePropBP_C_StopTutorial_Params
{
};

// Function BasePropBP.BasePropBP_C.ExecuteUbergraph_BasePropBP
struct ABasePropBP_C_ExecuteUbergraph_BasePropBP_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
