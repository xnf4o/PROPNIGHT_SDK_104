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

// Function Bomb.Bomb_C.OnRep_KRef
struct ABomb_C_OnRep_KRef_Params
{
};

// Function Bomb.Bomb_C.ReceiveBeginPlay
struct ABomb_C_ReceiveBeginPlay_Params
{
};

// Function Bomb.Bomb_C.Detonate
struct ABomb_C_Detonate_Params
{
};

// Function Bomb.Bomb_C.InitKiller
struct ABomb_C_InitKiller_Params
{
	class AKillerMasterBP_C*                           ref;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Bomb.Bomb_C.ExecuteUbergraph_Bomb
struct ABomb_C_ExecuteUbergraph_Bomb_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
