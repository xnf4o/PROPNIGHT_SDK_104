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
//		Name   -> Function BasePropBP.BasePropBP_C.ShakeTimeline__FinishedFunc
//		Flags  -> ()
void ABasePropBP_C::ShakeTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePropBP.BasePropBP_C.ShakeTimeline__FinishedFunc");

	ABasePropBP_C_ShakeTimeline__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BasePropBP.BasePropBP_C.ShakeTimeline__UpdateFunc
//		Flags  -> ()
void ABasePropBP_C::ShakeTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePropBP.BasePropBP_C.ShakeTimeline__UpdateFunc");

	ABasePropBP_C_ShakeTimeline__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BasePropBP.BasePropBP_C.HitShake
//		Flags  -> ()
// Parameters:
//		struct FVector                                     From                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABasePropBP_C::HitShake(const struct FVector& From)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePropBP.BasePropBP_C.HitShake");

	ABasePropBP_C_HitShake_Params params {};
	params.From = From;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BasePropBP.BasePropBP_C.HitShakeMulti
//		Flags  -> ()
// Parameters:
//		struct FVector                                     From                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABasePropBP_C::HitShakeMulti(const struct FVector& From)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePropBP.BasePropBP_C.HitShakeMulti");

	ABasePropBP_C_HitShakeMulti_Params params {};
	params.From = From;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BasePropBP.BasePropBP_C.CursedPropSwitcher
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UPerkKiller_C*                               PerkKiller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Killer_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABasePropBP_C::CursedPropSwitcher(bool On_, class UPerkKiller_C* PerkKiller, bool Killer_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePropBP.BasePropBP_C.CursedPropSwitcher");

	ABasePropBP_C_CursedPropSwitcher_Params params {};
	params.On_ = On_;
	params.PerkKiller = PerkKiller;
	params.Killer_ = Killer_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BasePropBP.BasePropBP_C.DeleteOutline
//		Flags  -> ()
void ABasePropBP_C::DeleteOutline()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePropBP.BasePropBP_C.DeleteOutline");

	ABasePropBP_C_DeleteOutline_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BasePropBP.BasePropBP_C.SurvDeactivated
//		Flags  -> ()
void ABasePropBP_C::SurvDeactivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePropBP.BasePropBP_C.SurvDeactivated");

	ABasePropBP_C_SurvDeactivated_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BasePropBP.BasePropBP_C.StartChallenge
//		Flags  -> ()
// Parameters:
//		bool                                               Killer_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABasePropBP_C::StartChallenge(bool Killer_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePropBP.BasePropBP_C.StartChallenge");

	ABasePropBP_C_StartChallenge_Params params {};
	params.Killer_ = Killer_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BasePropBP.BasePropBP_C.FailedChallenge
//		Flags  -> ()
// Parameters:
//		bool                                               Killer_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABasePropBP_C::FailedChallenge(bool Killer_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePropBP.BasePropBP_C.FailedChallenge");

	ABasePropBP_C_FailedChallenge_Params params {};
	params.Killer_ = Killer_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BasePropBP.BasePropBP_C.EndChallenge
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABasePropBP_C::EndChallenge(class ASurvivorMasterBP_C* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePropBP.BasePropBP_C.EndChallenge");

	ABasePropBP_C_EndChallenge_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BasePropBP.BasePropBP_C.CreateOutline
//		Flags  -> ()
void ABasePropBP_C::CreateOutline()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePropBP.BasePropBP_C.CreateOutline");

	ABasePropBP_C_CreateOutline_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BasePropBP.BasePropBP_C.CreateMaterials
//		Flags  -> ()
void ABasePropBP_C::CreateMaterials()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePropBP.BasePropBP_C.CreateMaterials");

	ABasePropBP_C_CreateMaterials_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BasePropBP.BasePropBP_C.MaterialsSwitch
//		Flags  -> ()
// Parameters:
//		bool                                               Dynamic_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABasePropBP_C::MaterialsSwitch(bool Dynamic_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePropBP.BasePropBP_C.MaterialsSwitch");

	ABasePropBP_C_MaterialsSwitch_Params params {};
	params.Dynamic_ = Dynamic_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BasePropBP.BasePropBP_C.StopOutline
//		Flags  -> ()
void ABasePropBP_C::StopOutline()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePropBP.BasePropBP_C.StopOutline");

	ABasePropBP_C_StopOutline_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BasePropBP.BasePropBP_C.StartOutline
//		Flags  -> ()
void ABasePropBP_C::StartOutline()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePropBP.BasePropBP_C.StartOutline");

	ABasePropBP_C_StartOutline_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BasePropBP.BasePropBP_C.SurvPropMaterialsReturn
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABasePropBP_C::SurvPropMaterialsReturn(class ASurvivorMasterBP_C* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePropBP.BasePropBP_C.SurvPropMaterialsReturn");

	ABasePropBP_C_SurvPropMaterialsReturn_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BasePropBP.BasePropBP_C.BndEvt__BasePropBP_PropStaticMesh_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UPrimitiveComponent*                         WakingComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       BoneName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABasePropBP_C::BndEvt__BasePropBP_PropStaticMesh_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature(class UPrimitiveComponent* WakingComponent, const struct FName& BoneName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePropBP.BasePropBP_C.BndEvt__BasePropBP_PropStaticMesh_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature");

	ABasePropBP_C_BndEvt__BasePropBP_PropStaticMesh_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature_Params params {};
	params.WakingComponent = WakingComponent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BasePropBP.BasePropBP_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABasePropBP_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePropBP.BasePropBP_C.ReceiveTick");

	ABasePropBP_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BasePropBP.BasePropBP_C.BndEvt__BasePropBP_PropStaticMesh_K2Node_ComponentBoundEvent_1_ComponentSleepSignature__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UPrimitiveComponent*                         SleepingComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       BoneName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABasePropBP_C::BndEvt__BasePropBP_PropStaticMesh_K2Node_ComponentBoundEvent_1_ComponentSleepSignature__DelegateSignature(class UPrimitiveComponent* SleepingComponent, const struct FName& BoneName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePropBP.BasePropBP_C.BndEvt__BasePropBP_PropStaticMesh_K2Node_ComponentBoundEvent_1_ComponentSleepSignature__DelegateSignature");

	ABasePropBP_C_BndEvt__BasePropBP_PropStaticMesh_K2Node_ComponentBoundEvent_1_ComponentSleepSignature__DelegateSignature_Params params {};
	params.SleepingComponent = SleepingComponent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BasePropBP.BasePropBP_C.MulticastSound
//		Flags  -> ()
// Parameters:
//		class UFMODEvent*                                  Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABasePropBP_C::MulticastSound(class UFMODEvent* Sound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePropBP.BasePropBP_C.MulticastSound");

	ABasePropBP_C_MulticastSound_Params params {};
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BasePropBP.BasePropBP_C.BndEvt__BasePropBP_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABasePropBP_C::BndEvt__BasePropBP_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePropBP.BasePropBP_C.BndEvt__BasePropBP_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	ABasePropBP_C_BndEvt__BasePropBP_Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
//		Name   -> Function BasePropBP.BasePropBP_C.ReceiveHit
//		Flags  -> ()
// Parameters:
//		class UPrimitiveComponent*                         MyComp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Other                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bSelfMoved                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     HitNormal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FHitResult                                  hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABasePropBP_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePropBP.BasePropBP_C.ReceiveHit");

	ABasePropBP_C_ReceiveHit_Params params {};
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.hit = hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BasePropBP.BasePropBP_C.ReceiveBeginPlay
//		Flags  -> ()
void ABasePropBP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePropBP.BasePropBP_C.ReceiveBeginPlay");

	ABasePropBP_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BasePropBP.BasePropBP_C.StartTutorial
//		Flags  -> ()
void ABasePropBP_C::StartTutorial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePropBP.BasePropBP_C.StartTutorial");

	ABasePropBP_C_StartTutorial_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BasePropBP.BasePropBP_C.StopTutorial
//		Flags  -> ()
void ABasePropBP_C::StopTutorial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePropBP.BasePropBP_C.StopTutorial");

	ABasePropBP_C_StopTutorial_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BasePropBP.BasePropBP_C.ExecuteUbergraph_BasePropBP
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABasePropBP_C::ExecuteUbergraph_BasePropBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BasePropBP.BasePropBP_C.ExecuteUbergraph_BasePropBP");

	ABasePropBP_C_ExecuteUbergraph_BasePropBP_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
