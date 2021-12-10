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

// Function Shoot.Shoot_C.OnRep_Ammo
struct UShoot_C_OnRep_Ammo_Params
{
};

// Function Shoot.Shoot_C.AmmoCheck
struct UShoot_C_AmmoCheck_Params
{
};

// Function Shoot.Shoot_C.RotateServ
struct UShoot_C_RotateServ_Params
{
	struct FRotator                                    NewParam;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               NewParam2;                                                 // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Shoot.Shoot_C.CreateBulletServ
struct UShoot_C_CreateBulletServ_Params
{
	struct FVector                                     NewParam;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Shoot.Shoot_C.On Invoke
struct UShoot_C_On_Invoke_Params
{
};

// Function Shoot.Shoot_C.CreateBulletMulti
struct UShoot_C_CreateBulletMulti_Params
{
	struct FVector                                     NewParam;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Shoot.Shoot_C.ReceiveTick
struct UShoot_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Shoot.Shoot_C.ReceiveBeginPlay
struct UShoot_C_ReceiveBeginPlay_Params
{
};

// Function Shoot.Shoot_C.CameraShake
struct UShoot_C_CameraShake_Params
{
};

// Function Shoot.Shoot_C.ExecuteUbergraph_Shoot
struct UShoot_C_ExecuteUbergraph_Shoot_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
