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

// Function BulletBP.BulletBP_C.ImpactFlashTime__FinishedFunc
struct ABulletBP_C_ImpactFlashTime__FinishedFunc_Params
{
};

// Function BulletBP.BulletBP_C.ImpactFlashTime__UpdateFunc
struct ABulletBP_C_ImpactFlashTime__UpdateFunc_Params
{
};

// Function BulletBP.BulletBP_C.ReceiveBeginPlay
struct ABulletBP_C_ReceiveBeginPlay_Params
{
};

// Function BulletBP.BulletBP_C.ReceiveTick
struct ABulletBP_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BulletBP.BulletBP_C.ReceiveHit
struct ABulletBP_C_ReceiveHit_Params
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

// Function BulletBP.BulletBP_C.StartMulti
struct ABulletBP_C_StartMulti_Params
{
	struct FVector                                     v3;                                                        // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKillerMasterBP_C*                           kiler;                                                     // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Damage;                                                    // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                    // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BulletBP.BulletBP_C.PhysicsOffServ
struct ABulletBP_C_PhysicsOffServ_Params
{
};

// Function BulletBP.BulletBP_C.PhysicsOffMulti
struct ABulletBP_C_PhysicsOffMulti_Params
{
};

// Function BulletBP.BulletBP_C.VisibleON
struct ABulletBP_C_VisibleON_Params
{
};

// Function BulletBP.BulletBP_C.Hitter
struct ABulletBP_C_Hitter_Params
{
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Damage;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                    // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BulletBP.BulletBP_C.SphereDrawServ
struct ABulletBP_C_SphereDrawServ_Params
{
};

// Function BulletBP.BulletBP_C.SphereDrawMulti
struct ABulletBP_C_SphereDrawMulti_Params
{
};

// Function BulletBP.BulletBP_C.SpawnServ
struct ABulletBP_C_SpawnServ_Params
{
};

// Function BulletBP.BulletBP_C.SpawnMulti
struct ABulletBP_C_SpawnMulti_Params
{
};

// Function BulletBP.BulletBP_C.Explosion
struct ABulletBP_C_Explosion_Params
{
};

// Function BulletBP.BulletBP_C.serv
struct ABulletBP_C_serv_Params
{
};

// Function BulletBP.BulletBP_C.MULTI
struct ABulletBP_C_MULTI_Params
{
};

// Function BulletBP.BulletBP_C.BndEvt__Cube_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ABulletBP_C_BndEvt__Cube_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NormalImpulse;                                             // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  hit;                                                       // 0x0024(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BulletBP.BulletBP_C.ExecuteUbergraph_BulletBP
struct ABulletBP_C_ExecuteUbergraph_BulletBP_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
