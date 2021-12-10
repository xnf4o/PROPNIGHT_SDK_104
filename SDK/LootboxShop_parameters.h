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

// Function LootboxShop.LootboxShop_C.ReceiveBeginPlay
struct ALootboxShop_C_ReceiveBeginPlay_Params
{
};

// Function LootboxShop.LootboxShop_C.ReceiveTick
struct ALootboxShop_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootboxShop.LootboxShop_C.SpawnRandomItem
struct ALootboxShop_C_SpawnRandomItem_Params
{
	class UClass*                                      Class;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  SpawnTransform;                                            // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// Function LootboxShop.LootboxShop_C.StartRollItem
struct ALootboxShop_C_StartRollItem_Params
{
};

// Function LootboxShop.LootboxShop_C.BlockLootboxShopServer
struct ALootboxShop_C_BlockLootboxShopServer_Params
{
	bool                                               Block_;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LootboxShop.LootboxShop_C.BlockLootboxShopMulticast
struct ALootboxShop_C_BlockLootboxShopMulticast_Params
{
	bool                                               Block_;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LootboxShop.LootboxShop_C.CheckPointsSurvivor
struct ALootboxShop_C_CheckPointsSurvivor_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootboxShop.LootboxShop_C.SpawnedItemDestroy
struct ALootboxShop_C_SpawnedItemDestroy_Params
{
};

// Function LootboxShop.LootboxShop_C.ArmAnim
struct ALootboxShop_C_ArmAnim_Params
{
	bool                                               Down_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LootboxShop.LootboxShop_C.DoorAnim
struct ALootboxShop_C_DoorAnim_Params
{
	bool                                               Open_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LootboxShop.LootboxShop_C.AnimChanger
struct ALootboxShop_C_AnimChanger_Params
{
	bool                                               ArmDown_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DoorOpen_;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LootboxShop.LootboxShop_C.UpLamps
struct ALootboxShop_C_UpLamps_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LootboxShop.LootboxShop_C.CreateDynamicMaterial
struct ALootboxShop_C_CreateDynamicMaterial_Params
{
};

// Function LootboxShop.LootboxShop_C.MoonLamps
struct ALootboxShop_C_MoonLamps_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LootboxShop.LootboxShop_C.MulticastAnimChanger
struct ALootboxShop_C_MulticastAnimChanger_Params
{
	bool                                               ArmDown_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DoorOpen_;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LootboxShop.LootboxShop_C.ServerAnimChanger
struct ALootboxShop_C_ServerAnimChanger_Params
{
	bool                                               ArmDown_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DoorOpen_;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LootboxShop.LootboxShop_C.ExecuteUbergraph_LootboxShop
struct ALootboxShop_C_ExecuteUbergraph_LootboxShop_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
