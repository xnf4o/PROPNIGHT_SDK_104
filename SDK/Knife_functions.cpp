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
//		Name   -> Function Knife.Knife_C.RotationChanger__FinishedFunc
//		Flags  -> ()
void AKnife_C::RotationChanger__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Knife.Knife_C.RotationChanger__FinishedFunc");

	AKnife_C_RotationChanger__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Knife.Knife_C.RotationChanger__UpdateFunc
//		Flags  -> ()
void AKnife_C::RotationChanger__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Knife.Knife_C.RotationChanger__UpdateFunc");

	AKnife_C_RotationChanger__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Knife.Knife_C.MoveStart
//		Flags  -> ()
// Parameters:
//		struct FVector                                     v3                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AKillerMasterBP_C*                           KillerRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKnife_C::MoveStart(const struct FVector& v3, class AKillerMasterBP_C* KillerRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Knife.Knife_C.MoveStart");

	AKnife_C_MoveStart_Params params {};
	params.v3 = v3;
	params.KillerRef = KillerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Knife.Knife_C.ReceiveHit
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
void AKnife_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Knife.Knife_C.ReceiveHit");

	AKnife_C_ReceiveHit_Params params {};
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
//		Name   -> Function Knife.Knife_C.ForwardMove
//		Flags  -> ()
// Parameters:
//		struct FVector                                     v3                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AKillerMasterBP_C*                           KillerRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    KnifeRotation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AKnife_C::ForwardMove(const struct FVector& v3, class AKillerMasterBP_C* KillerRef, const struct FRotator& KnifeRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Knife.Knife_C.ForwardMove");

	AKnife_C_ForwardMove_Params params {};
	params.v3 = v3;
	params.KillerRef = KillerRef;
	params.KnifeRotation = KnifeRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Knife.Knife_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKnife_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Knife.Knife_C.ReceiveTick");

	AKnife_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Knife.Knife_C.KnifeAnim
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKnife_C::KnifeAnim(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Knife.Knife_C.KnifeAnim");

	AKnife_C_KnifeAnim_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Knife.Knife_C.ReceiveBeginPlay
//		Flags  -> ()
void AKnife_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Knife.Knife_C.ReceiveBeginPlay");

	AKnife_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Knife.Knife_C.SetRotationKnife
//		Flags  -> ()
void AKnife_C::SetRotationKnife()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Knife.Knife_C.SetRotationKnife");

	AKnife_C_SetRotationKnife_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Knife.Knife_C.RotateEvent
//		Flags  -> ()
void AKnife_C::RotateEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Knife.Knife_C.RotateEvent");

	AKnife_C_RotateEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Knife.Knife_C.AstralChecker
//		Flags  -> ()
// Parameters:
//		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKnife_C::AstralChecker(float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Knife.Knife_C.AstralChecker");

	AKnife_C_AstralChecker_Params params {};
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Knife.Knife_C.ExecuteUbergraph_Knife
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AKnife_C::ExecuteUbergraph_Knife(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Knife.Knife_C.ExecuteUbergraph_Knife");

	AKnife_C_ExecuteUbergraph_Knife_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
