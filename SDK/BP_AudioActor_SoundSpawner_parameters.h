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

// Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.EndOfPhraseAction
struct ABP_AudioActor_SoundSpawner_C_EndOfPhraseAction_Params
{
	bool                                               bSuccessful;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.PlayWordAtPhraseLocation
struct ABP_AudioActor_SoundSpawner_C_PlayWordAtPhraseLocation_Params
{
	class USoundBase*                                  InSound;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.InitializeTriggerSphere
struct ABP_AudioActor_SoundSpawner_C_InitializeTriggerSphere_Params
{
};

// Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.ReceiveBeginPlay
struct ABP_AudioActor_SoundSpawner_C_ReceiveBeginPlay_Params
{
};

// Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.ExecuteSequence
struct ABP_AudioActor_SoundSpawner_C_ExecuteSequence_Params
{
};

// Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.ExecuteTimer
struct ABP_AudioActor_SoundSpawner_C_ExecuteTimer_Params
{
};

// Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_AudioActor_SoundSpawner_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
struct ABP_AudioActor_SoundSpawner_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.ExecuteUbergraph_BP_AudioActor_SoundSpawner
struct ABP_AudioActor_SoundSpawner_C_ExecuteUbergraph_BP_AudioActor_SoundSpawner_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
