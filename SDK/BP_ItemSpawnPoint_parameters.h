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

// Function BP_ItemSpawnPoint.BP_ItemSpawnPoint_C.GetTypeV2
struct ABP_ItemSpawnPoint_C_GetTypeV2_Params
{
	class UClass*                                      Type;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ItemSpawnPoint.BP_ItemSpawnPoint_C.GetItems
struct ABP_ItemSpawnPoint_C_GetItems_Params
{
	TArray<struct FS_SpawnItemChanceRange>             Items;                                                     // 0x0000(0x0010)  (Parm, OutParm)
};

// Function BP_ItemSpawnPoint.BP_ItemSpawnPoint_C.GetType
struct ABP_ItemSpawnPoint_C_GetType_Params
{
	class UClass*                                      Type;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_ItemSpawnPoint.BP_ItemSpawnPoint_C.SpawnItem
struct ABP_ItemSpawnPoint_C_SpawnItem_Params
{
};

// Function BP_ItemSpawnPoint.BP_ItemSpawnPoint_C.ExecuteUbergraph_BP_ItemSpawnPoint
struct ABP_ItemSpawnPoint_C_ExecuteUbergraph_BP_ItemSpawnPoint_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
