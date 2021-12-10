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
//		Name   -> Function BulletBP.BulletBP_C.ImpactFlashTime__FinishedFunc
//		Flags  -> ()
void ABulletBP_C::ImpactFlashTime__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BulletBP.BulletBP_C.ImpactFlashTime__FinishedFunc");

	ABulletBP_C_ImpactFlashTime__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BulletBP.BulletBP_C.ImpactFlashTime__UpdateFunc
//		Flags  -> ()
void ABulletBP_C::ImpactFlashTime__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BulletBP.BulletBP_C.ImpactFlashTime__UpdateFunc");

	ABulletBP_C_ImpactFlashTime__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BulletBP.BulletBP_C.ReceiveBeginPlay
//		Flags  -> ()
void ABulletBP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BulletBP.BulletBP_C.ReceiveBeginPlay");

	ABulletBP_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BulletBP.BulletBP_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABulletBP_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BulletBP.BulletBP_C.ReceiveTick");

	ABulletBP_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BulletBP.BulletBP_C.ReceiveHit
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
void ABulletBP_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BulletBP.BulletBP_C.ReceiveHit");

	ABulletBP_C_ReceiveHit_Params params {};
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
//		Name   -> Function BulletBP.BulletBP_C.StartMulti
//		Flags  -> ()
// Parameters:
//		struct FVector                                     v3                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AKillerMasterBP_C*                           kiler                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABulletBP_C::StartMulti(const struct FVector& v3, class AKillerMasterBP_C* kiler, int Damage, float Radius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BulletBP.BulletBP_C.StartMulti");

	ABulletBP_C_StartMulti_Params params {};
	params.v3 = v3;
	params.kiler = kiler;
	params.Damage = Damage;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BulletBP.BulletBP_C.PhysicsOffServ
//		Flags  -> ()
void ABulletBP_C::PhysicsOffServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BulletBP.BulletBP_C.PhysicsOffServ");

	ABulletBP_C_PhysicsOffServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BulletBP.BulletBP_C.PhysicsOffMulti
//		Flags  -> ()
void ABulletBP_C::PhysicsOffMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BulletBP.BulletBP_C.PhysicsOffMulti");

	ABulletBP_C_PhysicsOffMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BulletBP.BulletBP_C.VisibleON
//		Flags  -> ()
void ABulletBP_C::VisibleON()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BulletBP.BulletBP_C.VisibleON");

	ABulletBP_C_VisibleON_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BulletBP.BulletBP_C.Hitter
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Radius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABulletBP_C::Hitter(class ASurvivorMasterBP_C* Surv, int Damage, float Radius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BulletBP.BulletBP_C.Hitter");

	ABulletBP_C_Hitter_Params params {};
	params.Surv = Surv;
	params.Damage = Damage;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BulletBP.BulletBP_C.SphereDrawServ
//		Flags  -> ()
void ABulletBP_C::SphereDrawServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BulletBP.BulletBP_C.SphereDrawServ");

	ABulletBP_C_SphereDrawServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BulletBP.BulletBP_C.SphereDrawMulti
//		Flags  -> ()
void ABulletBP_C::SphereDrawMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BulletBP.BulletBP_C.SphereDrawMulti");

	ABulletBP_C_SphereDrawMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BulletBP.BulletBP_C.SpawnServ
//		Flags  -> ()
void ABulletBP_C::SpawnServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BulletBP.BulletBP_C.SpawnServ");

	ABulletBP_C_SpawnServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BulletBP.BulletBP_C.SpawnMulti
//		Flags  -> ()
void ABulletBP_C::SpawnMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BulletBP.BulletBP_C.SpawnMulti");

	ABulletBP_C_SpawnMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BulletBP.BulletBP_C.Explosion
//		Flags  -> ()
void ABulletBP_C::Explosion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BulletBP.BulletBP_C.Explosion");

	ABulletBP_C_Explosion_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BulletBP.BulletBP_C.serv
//		Flags  -> ()
void ABulletBP_C::serv()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BulletBP.BulletBP_C.serv");

	ABulletBP_C_serv_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BulletBP.BulletBP_C.MULTI
//		Flags  -> ()
void ABulletBP_C::MULTI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BulletBP.BulletBP_C.MULTI");

	ABulletBP_C_MULTI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BulletBP.BulletBP_C.BndEvt__Cube_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UPrimitiveComponent*                         HitComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FHitResult                                  hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ABulletBP_C::BndEvt__Cube_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BulletBP.BulletBP_C.BndEvt__Cube_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ABulletBP_C_BndEvt__Cube_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params {};
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.hit = hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BulletBP.BulletBP_C.ExecuteUbergraph_BulletBP
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABulletBP_C::ExecuteUbergraph_BulletBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BulletBP.BulletBP_C.ExecuteUbergraph_BulletBP");

	ABulletBP_C_ExecuteUbergraph_BulletBP_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
