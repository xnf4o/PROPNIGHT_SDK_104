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

// Function GlueJarThrow.GlueJarThrow_C.Explode_SERV
struct AGlueJarThrow_C_Explode_SERV_Params
{
};

// Function GlueJarThrow.GlueJarThrow_C.Explode_MULTI
struct AGlueJarThrow_C_Explode_MULTI_Params
{
};

// Function GlueJarThrow.GlueJarThrow_C.ReceiveActorBeginOverlap
struct AGlueJarThrow_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GlueJarThrow.GlueJarThrow_C.ReceiveTick
struct AGlueJarThrow_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GlueJarThrow.GlueJarThrow_C.ExecuteUbergraph_GlueJarThrow
struct AGlueJarThrow_C_ExecuteUbergraph_GlueJarThrow_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
