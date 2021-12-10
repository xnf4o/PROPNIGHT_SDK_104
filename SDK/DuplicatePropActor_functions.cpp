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
//		Name   -> Function DuplicatePropActor.DuplicatePropActor_C.PropVolumeHeight
//		Flags  -> ()
// Parameters:
//		float                                              Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADuplicatePropActor_C::PropVolumeHeight(float* Out)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DuplicatePropActor.DuplicatePropActor_C.PropVolumeHeight");

	ADuplicatePropActor_C_PropVolumeHeight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DuplicatePropActor.DuplicatePropActor_C.PropVolume
//		Flags  -> ()
// Parameters:
//		float                                              Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADuplicatePropActor_C::PropVolume(float* Out)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DuplicatePropActor.DuplicatePropActor_C.PropVolume");

	ADuplicatePropActor_C_PropVolume_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DuplicatePropActor.DuplicatePropActor_C.AfterSpawn
//		Flags  -> ()
// Parameters:
//		class UStaticMesh*                                 NewMesh                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UStaticMeshComponent*                        MeshComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADuplicatePropActor_C::AfterSpawn(class UStaticMesh* NewMesh, class UStaticMeshComponent* MeshComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DuplicatePropActor.DuplicatePropActor_C.AfterSpawn");

	ADuplicatePropActor_C_AfterSpawn_Params params {};
	params.NewMesh = NewMesh;
	params.MeshComponent = MeshComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DuplicatePropActor.DuplicatePropActor_C.ReceiveHit
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
void ADuplicatePropActor_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DuplicatePropActor.DuplicatePropActor_C.ReceiveHit");

	ADuplicatePropActor_C_ReceiveHit_Params params {};
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
//		Name   -> Function DuplicatePropActor.DuplicatePropActor_C.Hitted
//		Flags  -> ()
void ADuplicatePropActor_C::Hitted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DuplicatePropActor.DuplicatePropActor_C.Hitted");

	ADuplicatePropActor_C_Hitted_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DuplicatePropActor.DuplicatePropActor_C.DeathEffectEvent
//		Flags  -> ()
void ADuplicatePropActor_C::DeathEffectEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DuplicatePropActor.DuplicatePropActor_C.DeathEffectEvent");

	ADuplicatePropActor_C_DeathEffectEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DuplicatePropActor.DuplicatePropActor_C.Spawned
//		Flags  -> ()
void ADuplicatePropActor_C::Spawned()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DuplicatePropActor.DuplicatePropActor_C.Spawned");

	ADuplicatePropActor_C_Spawned_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DuplicatePropActor.DuplicatePropActor_C.SpawnedEffect
//		Flags  -> ()
void ADuplicatePropActor_C::SpawnedEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DuplicatePropActor.DuplicatePropActor_C.SpawnedEffect");

	ADuplicatePropActor_C_SpawnedEffect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DuplicatePropActor.DuplicatePropActor_C.ExecuteUbergraph_DuplicatePropActor
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADuplicatePropActor_C::ExecuteUbergraph_DuplicatePropActor(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DuplicatePropActor.DuplicatePropActor_C.ExecuteUbergraph_DuplicatePropActor");

	ADuplicatePropActor_C_ExecuteUbergraph_DuplicatePropActor_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
