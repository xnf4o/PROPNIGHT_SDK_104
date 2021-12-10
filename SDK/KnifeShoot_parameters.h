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

// Function KnifeShoot.KnifeShoot_C.Local
struct UKnifeShoot_C_Local_Params
{
};

// Function KnifeShoot.KnifeShoot_C.serv
struct UKnifeShoot_C_serv_Params
{
};

// Function KnifeShoot.KnifeShoot_C.RotationServ
struct UKnifeShoot_C_RotationServ_Params
{
	struct FRotator                                    Rotator;                                                   // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function KnifeShoot.KnifeShoot_C.ServBOOL
struct UKnifeShoot_C_ServBOOL_Params
{
};

// Function KnifeShoot.KnifeShoot_C.MultiBool
struct UKnifeShoot_C_MultiBool_Params
{
};

// Function KnifeShoot.KnifeShoot_C.DestroyKnife
struct UKnifeShoot_C_DestroyKnife_Params
{
};

// Function KnifeShoot.KnifeShoot_C.OnKnife
struct UKnifeShoot_C_OnKnife_Params
{
};

// Function KnifeShoot.KnifeShoot_C.ThirdPersonCameraKnife
struct UKnifeShoot_C_ThirdPersonCameraKnife_Params
{
};

// Function KnifeShoot.KnifeShoot_C.FirstPersonCameraKnife
struct UKnifeShoot_C_FirstPersonCameraKnife_Params
{
};

// Function KnifeShoot.KnifeShoot_C.SpawnKnife
struct UKnifeShoot_C_SpawnKnife_Params
{
};

// Function KnifeShoot.KnifeShoot_C.KnifeDropSurv
struct UKnifeShoot_C_KnifeDropSurv_Params
{
};

// Function KnifeShoot.KnifeShoot_C.SpawnKnifeAfterDropSurv
struct UKnifeShoot_C_SpawnKnifeAfterDropSurv_Params
{
};

// Function KnifeShoot.KnifeShoot_C.KnifeSurvAway
struct UKnifeShoot_C_KnifeSurvAway_Params
{
};

// Function KnifeShoot.KnifeShoot_C.SpawnKnifeSurvRunAway
struct UKnifeShoot_C_SpawnKnifeSurvRunAway_Params
{
};

// Function KnifeShoot.KnifeShoot_C.CameraShake
struct UKnifeShoot_C_CameraShake_Params
{
};

// Function KnifeShoot.KnifeShoot_C.Shoot Noj
struct UKnifeShoot_C_Shoot_Noj_Params
{
	class AKillerMasterBP_C*                           NewParam;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKillerMasterBP_C*                           NewParam2;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ForwardVector;                                             // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KnifeShoot.KnifeShoot_C.ReceiveTick
struct UKnifeShoot_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function KnifeShoot.KnifeShoot_C.ReceiveBeginPlay
struct UKnifeShoot_C_ReceiveBeginPlay_Params
{
};

// Function KnifeShoot.KnifeShoot_C.AttackCheker
struct UKnifeShoot_C_AttackCheker_Params
{
};

// Function KnifeShoot.KnifeShoot_C.ExecuteUbergraph_KnifeShoot
struct UKnifeShoot_C_ExecuteUbergraph_KnifeShoot_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
