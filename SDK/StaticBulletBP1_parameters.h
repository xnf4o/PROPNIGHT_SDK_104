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

// Function StaticBulletBP1.StaticBulletBP1_C.ReceiveBeginPlay
struct AStaticBulletBP1_C_ReceiveBeginPlay_Params
{
};

// Function StaticBulletBP1.StaticBulletBP1_C.Boom
struct AStaticBulletBP1_C_Boom_Params
{
	float                                              Time;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKillerMasterBP_C*                           Killer;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StaticBulletBP1.StaticBulletBP1_C.ReceiveTick
struct AStaticBulletBP1_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StaticBulletBP1.StaticBulletBP1_C.SphereDrawServ
struct AStaticBulletBP1_C_SphereDrawServ_Params
{
};

// Function StaticBulletBP1.StaticBulletBP1_C.SphereDrawMulti
struct AStaticBulletBP1_C_SphereDrawMulti_Params
{
};

// Function StaticBulletBP1.StaticBulletBP1_C.ExecuteUbergraph_StaticBulletBP1
struct AStaticBulletBP1_C_ExecuteUbergraph_StaticBulletBP1_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
