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

// Function ShootProphunt.ShootProphunt_C.Invoke
struct UShootProphunt_C_Invoke_Params
{
};

// Function ShootProphunt.ShootProphunt_C.ReloadAmmo
struct UShootProphunt_C_ReloadAmmo_Params
{
	float                                              Time;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ShootProphunt.ShootProphunt_C.RotateServ
struct UShootProphunt_C_RotateServ_Params
{
	struct FRotator                                    NewParam;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ShootProphunt.ShootProphunt_C.CreateBulletServ
struct UShootProphunt_C_CreateBulletServ_Params
{
	struct FVector                                     NewParam;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ShootProphunt.ShootProphunt_C.CreateBulletMulti
struct UShootProphunt_C_CreateBulletMulti_Params
{
	struct FVector                                     NewParam;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ShootProphunt.ShootProphunt_C.ReceiveTick
struct UShootProphunt_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ShootProphunt.ShootProphunt_C.CDWBP
struct UShootProphunt_C_CDWBP_Params
{
};

// Function ShootProphunt.ShootProphunt_C.ReceiveBeginPlay
struct UShootProphunt_C_ReceiveBeginPlay_Params
{
};

// Function ShootProphunt.ShootProphunt_C.UnInvoke
struct UShootProphunt_C_UnInvoke_Params
{
};

// Function ShootProphunt.ShootProphunt_C.Shoot
struct UShootProphunt_C_Shoot_Params
{
};

// Function ShootProphunt.ShootProphunt_C.ExecuteUbergraph_ShootProphunt
struct UShootProphunt_C_ExecuteUbergraph_ShootProphunt_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
