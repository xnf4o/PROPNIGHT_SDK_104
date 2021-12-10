// Name: P, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.EndOfPhraseAction
//		Flags  -> ()
// Parameters:
//		bool                                               bSuccessful                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AudioActor_SoundSpawner_C::EndOfPhraseAction(bool* bSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.EndOfPhraseAction");

	ABP_AudioActor_SoundSpawner_C_EndOfPhraseAction_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.PlayWordAtPhraseLocation
//		Flags  -> ()
// Parameters:
//		class USoundBase*                                  InSound                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AudioActor_SoundSpawner_C::PlayWordAtPhraseLocation(class USoundBase* InSound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.PlayWordAtPhraseLocation");

	ABP_AudioActor_SoundSpawner_C_PlayWordAtPhraseLocation_Params params {};
	params.InSound = InSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.InitializeTriggerSphere
//		Flags  -> ()
// Parameters:
void ABP_AudioActor_SoundSpawner_C::InitializeTriggerSphere()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.InitializeTriggerSphere");

	ABP_AudioActor_SoundSpawner_C_InitializeTriggerSphere_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.ReceiveBeginPlay
//		Flags  -> ()
void ABP_AudioActor_SoundSpawner_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.ReceiveBeginPlay");

	ABP_AudioActor_SoundSpawner_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.ExecuteSequence
//		Flags  -> ()
void ABP_AudioActor_SoundSpawner_C::ExecuteSequence()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.ExecuteSequence");

	ABP_AudioActor_SoundSpawner_C_ExecuteSequence_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.ExecuteTimer
//		Flags  -> ()
void ABP_AudioActor_SoundSpawner_C::ExecuteTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.ExecuteTimer");

	ABP_AudioActor_SoundSpawner_C_ExecuteTimer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABP_AudioActor_SoundSpawner_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_AudioActor_SoundSpawner_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AudioActor_SoundSpawner_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	ABP_AudioActor_SoundSpawner_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.ExecuteUbergraph_BP_AudioActor_SoundSpawner
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_AudioActor_SoundSpawner_C::ExecuteUbergraph_BP_AudioActor_SoundSpawner(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AudioActor_SoundSpawner.BP_AudioActor_SoundSpawner_C.ExecuteUbergraph_BP_AudioActor_SoundSpawner");

	ABP_AudioActor_SoundSpawner_C_ExecuteUbergraph_BP_AudioActor_SoundSpawner_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
