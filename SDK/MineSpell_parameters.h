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

// Function MineSpell.MineSpell_C.OnRep_Mines
struct UMineSpell_C_OnRep_Mines_Params
{
};

// Function MineSpell.MineSpell_C.ReceiveBeginPlay
struct UMineSpell_C_ReceiveBeginPlay_Params
{
};

// Function MineSpell.MineSpell_C.ReceiveTick
struct UMineSpell_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MineSpell.MineSpell_C.Cast
struct UMineSpell_C_Cast_Params
{
};

// Function MineSpell.MineSpell_C.SpawnMineServer
struct UMineSpell_C_SpawnMineServer_Params
{
};

// Function MineSpell.MineSpell_C.ActorDestroyed
struct UMineSpell_C_ActorDestroyed_Params
{
	class AMine_C*                                     Mine;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MineSpell.MineSpell_C.ClientCount
struct UMineSpell_C_ClientCount_Params
{
	int                                                Count;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MineSpell.MineSpell_C.PlantServer
struct UMineSpell_C_PlantServer_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MineSpell.MineSpell_C.PlantMulticast
struct UMineSpell_C_PlantMulticast_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MineSpell.MineSpell_C.ExecuteUbergraph_MineSpell
struct UMineSpell_C_ExecuteUbergraph_MineSpell_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
