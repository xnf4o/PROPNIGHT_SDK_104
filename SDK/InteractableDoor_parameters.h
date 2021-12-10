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

// Function InteractableDoor.InteractableDoor_C.OpeningTimeline__FinishedFunc
struct AInteractableDoor_C_OpeningTimeline__FinishedFunc_Params
{
};

// Function InteractableDoor.InteractableDoor_C.OpeningTimeline__UpdateFunc
struct AInteractableDoor_C_OpeningTimeline__UpdateFunc_Params
{
};

// Function InteractableDoor.InteractableDoor_C.ClosingTimeline__FinishedFunc
struct AInteractableDoor_C_ClosingTimeline__FinishedFunc_Params
{
};

// Function InteractableDoor.InteractableDoor_C.ClosingTimeline__UpdateFunc
struct AInteractableDoor_C_ClosingTimeline__UpdateFunc_Params
{
};

// Function InteractableDoor.InteractableDoor_C.ReceiveBeginPlay
struct AInteractableDoor_C_ReceiveBeginPlay_Params
{
};

// Function InteractableDoor.InteractableDoor_C.ReceiveTick
struct AInteractableDoor_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractableDoor.InteractableDoor_C.InteractDoor
struct AInteractableDoor_C_InteractDoor_Params
{
	bool                                               Close_;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractableDoor.InteractableDoor_C.DoorDamaged
struct AInteractableDoor_C_DoorDamaged_Params
{
	struct FVector                                     HurtOrigin;                                                // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractableDoor.InteractableDoor_C.StartEvent
struct AInteractableDoor_C_StartEvent_Params
{
};

// Function InteractableDoor.InteractableDoor_C.ChangeRotationTimeline
struct AInteractableDoor_C_ChangeRotationTimeline_Params
{
	float                                              Alpha;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractableDoor.InteractableDoor_C.DestroyDoor
struct AInteractableDoor_C_DestroyDoor_Params
{
};

// Function InteractableDoor.InteractableDoor_C.CheckKiller
struct AInteractableDoor_C_CheckKiller_Params
{
};

// Function InteractableDoor.InteractableDoor_C.AfterDestroyDoor
struct AInteractableDoor_C_AfterDestroyDoor_Params
{
	struct FVector                                     HurtOrigin;                                                // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractableDoor.InteractableDoor_C.SpawnParticles
struct AInteractableDoor_C_SpawnParticles_Params
{
	int                                                DoorHealth;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     KillerPosition;                                            // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractableDoor.InteractableDoor_C.SwitchDoorPP
struct AInteractableDoor_C_SwitchDoorPP_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function InteractableDoor.InteractableDoor_C.SaveRotationTemp
struct AInteractableDoor_C_SaveRotationTemp_Params
{
};

// Function InteractableDoor.InteractableDoor_C.KillerFlashCapture
struct AInteractableDoor_C_KillerFlashCapture_Params
{
	class AKillerMasterBP_C*                           Killer;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractableDoor.InteractableDoor_C.PlayMarkAnimAppear
struct AInteractableDoor_C_PlayMarkAnimAppear_Params
{
};

// Function InteractableDoor.InteractableDoor_C.PlayMarkAnimDisapper
struct AInteractableDoor_C_PlayMarkAnimDisapper_Params
{
};

// Function InteractableDoor.InteractableDoor_C.OnAnimFineshed
struct AInteractableDoor_C_OnAnimFineshed_Params
{
};

// Function InteractableDoor.InteractableDoor_C.GlassEvent
struct AInteractableDoor_C_GlassEvent_Params
{
};

// Function InteractableDoor.InteractableDoor_C.PropGlassBreak
struct AInteractableDoor_C_PropGlassBreak_Params
{
	struct FVector                                     SurvPosition;                                              // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractableDoor.InteractableDoor_C.BndEvt__InteractableDoor_GlassBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AInteractableDoor_C_BndEvt__InteractableDoor_GlassBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function InteractableDoor.InteractableDoor_C.GlassBoxOverlap
struct AInteractableDoor_C_GlassBoxOverlap_Params
{
	class UObject*                                     Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     Component;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                GlassId;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractableDoor.InteractableDoor_C.PropGlassBreak2
struct AInteractableDoor_C_PropGlassBreak2_Params
{
	struct FVector                                     SurvPosition;                                              // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractableDoor.InteractableDoor_C.GlassDamage
struct AInteractableDoor_C_GlassDamage_Params
{
	struct FVector                                     HitOrigin;                                                 // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractableDoor.InteractableDoor_C.BndEvt__InteractableDoor_GlassBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct AInteractableDoor_C_BndEvt__InteractableDoor_GlassBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractableDoor.InteractableDoor_C.HitGlassWithSpell
struct AInteractableDoor_C_HitGlassWithSpell_Params
{
};

// Function InteractableDoor.InteractableDoor_C.BndEvt__InteractableDoor_GlassBox_Spell_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct AInteractableDoor_C_BndEvt__InteractableDoor_GlassBox_Spell_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function InteractableDoor.InteractableDoor_C.SaveBoolTemp
struct AInteractableDoor_C_SaveBoolTemp_Params
{
};

// Function InteractableDoor.InteractableDoor_C.BndEvt__InteractableDoor_Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
struct AInteractableDoor_C_BndEvt__InteractableDoor_Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function InteractableDoor.InteractableDoor_C.BndEvt__InteractableDoor_Sphere_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature
struct AInteractableDoor_C_BndEvt__InteractableDoor_Sphere_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractableDoor.InteractableDoor_C.DoorMarkUpdate
struct AInteractableDoor_C_DoorMarkUpdate_Params
{
};

// Function InteractableDoor.InteractableDoor_C.StartDestroy
struct AInteractableDoor_C_StartDestroy_Params
{
};

// Function InteractableDoor.InteractableDoor_C.MaterialEffect
struct AInteractableDoor_C_MaterialEffect_Params
{
};

// Function InteractableDoor.InteractableDoor_C.CreateMaterials
struct AInteractableDoor_C_CreateMaterials_Params
{
};

// Function InteractableDoor.InteractableDoor_C.EndTimer
struct AInteractableDoor_C_EndTimer_Params
{
};

// Function InteractableDoor.InteractableDoor_C.ExecuteUbergraph_InteractableDoor
struct AInteractableDoor_C_ExecuteUbergraph_InteractableDoor_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
