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

// Function DuplicatePropActor.DuplicatePropActor_C.PropVolumeHeight
struct ADuplicatePropActor_C_PropVolumeHeight_Params
{
	float                                              Out;                                                       // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DuplicatePropActor.DuplicatePropActor_C.PropVolume
struct ADuplicatePropActor_C_PropVolume_Params
{
	float                                              Out;                                                       // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DuplicatePropActor.DuplicatePropActor_C.AfterSpawn
struct ADuplicatePropActor_C_AfterSpawn_Params
{
	class UStaticMesh*                                 NewMesh;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        MeshComponent;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DuplicatePropActor.DuplicatePropActor_C.ReceiveHit
struct ADuplicatePropActor_C_ReceiveHit_Params
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

// Function DuplicatePropActor.DuplicatePropActor_C.Hitted
struct ADuplicatePropActor_C_Hitted_Params
{
};

// Function DuplicatePropActor.DuplicatePropActor_C.DeathEffectEvent
struct ADuplicatePropActor_C_DeathEffectEvent_Params
{
};

// Function DuplicatePropActor.DuplicatePropActor_C.Spawned
struct ADuplicatePropActor_C_Spawned_Params
{
};

// Function DuplicatePropActor.DuplicatePropActor_C.SpawnedEffect
struct ADuplicatePropActor_C_SpawnedEffect_Params
{
};

// Function DuplicatePropActor.DuplicatePropActor_C.ExecuteUbergraph_DuplicatePropActor
struct ADuplicatePropActor_C_ExecuteUbergraph_DuplicatePropActor_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
