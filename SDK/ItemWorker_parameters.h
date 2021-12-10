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

// Function ItemWorker.ItemWorker_C.GetPerkName
struct UItemWorker_C_GetPerkName_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PerkIndex;                                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.SeeKillerSilhouetteNearHC
struct UItemWorker_C_SeeKillerSilhouetteNearHC_Params
{
	bool                                               wannasee;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemWorker.ItemWorker_C.GetPointsForPerks
struct UItemWorker_C_GetPointsForPerks_Params
{
	int                                                PerkPoints;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.GetCurrentEXP
struct UItemWorker_C_GetCurrentEXP_Params
{
	int                                                CurEXP;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.IsTotem
struct UItemWorker_C_IsTotem_Params
{
	bool                                               IsTotem;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<ItemType_EItemType>                    ItemType;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Output_Get;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AItemsBP_C*                                  AsItems_BP;                                                // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ACrystalRune_C*                              AsCrystal_Rune;                                            // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.SetHealpack
struct UItemWorker_C_SetHealpack_Params
{
};

// Function ItemWorker.ItemWorker_C.SetItem
struct UItemWorker_C_SetItem_Params
{
};

// Function ItemWorker.ItemWorker_C.SpawnItem
struct UItemWorker_C_SpawnItem_Params
{
	class UClass*                                      ItemClass;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       Pawn;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OnlySpawnInventory_;                                       // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemWorker.ItemWorker_C.SetItemToLastIndex
struct UItemWorker_C_SetItemToLastIndex_Params
{
};

// Function ItemWorker.ItemWorker_C.AddEXP
struct UItemWorker_C_AddEXP_Params
{
	int                                                Exp;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Player;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                        HUD;                                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.IncreaseOnceHP
struct UItemWorker_C_IncreaseOnceHP_Params
{
	int                                                HP;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.SetTimingToAllChairs
struct UItemWorker_C_SetTimingToAllChairs_Params
{
};

// Function ItemWorker.ItemWorker_C.SetDepth
struct UItemWorker_C_SetDepth_Params
{
};

// Function ItemWorker.ItemWorker_C.LevelUpped
struct UItemWorker_C_LevelUpped_Params
{
	class AActor*                                      PlayerRef;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.DecreasePerkPoints
struct UItemWorker_C_DecreasePerkPoints_Params
{
	int                                                PerkPoints;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.SurvDropItem
struct UItemWorker_C_SurvDropItem_Params
{
	bool                                               lastLVL;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemWorker.ItemWorker_C.ReceiveBeginPlay
struct UItemWorker_C_ReceiveBeginPlay_Params
{
};

// Function ItemWorker.ItemWorker_C.ReceiveTick
struct UItemWorker_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.ServerHealSelf
struct UItemWorker_C_ServerHealSelf_Params
{
	class ASurvivorMasterBP_C*                         Survivor;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Legendary_;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemWorker.ItemWorker_C.InvokeWithE
struct UItemWorker_C_InvokeWithE_Params
{
};

// Function ItemWorker.ItemWorker_C.Release
struct UItemWorker_C_Release_Params
{
};

// Function ItemWorker.ItemWorker_C.InvokeWithQ
struct UItemWorker_C_InvokeWithQ_Params
{
};

// Function ItemWorker.ItemWorker_C.HealSelf
struct UItemWorker_C_HealSelf_Params
{
	class ASurvivorMasterBP_C*                         Survivor;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.OwningClientHealSelf
struct UItemWorker_C_OwningClientHealSelf_Params
{
};

// Function ItemWorker.ItemWorker_C.ServerAddHealthToPlayer
struct UItemWorker_C_ServerAddHealthToPlayer_Params
{
	class ASurvivorMasterBP_C*                         Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Health;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ScoreOff_;                                                 // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemWorker.ItemWorker_C.StopHealSelf
struct UItemWorker_C_StopHealSelf_Params
{
};

// Function ItemWorker.ItemWorker_C.ServerStopHealSelf
struct UItemWorker_C_ServerStopHealSelf_Params
{
	bool                                               DestroyHealpack;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                IndexToRemove;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.OwningClientStopHealSelf
struct UItemWorker_C_OwningClientStopHealSelf_Params
{
};

// Function ItemWorker.ItemWorker_C.DestroyItem
struct UItemWorker_C_DestroyItem_Params
{
	class ASurvivorMasterBP_C*                         Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                IndexToRemove;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.HealScore
struct UItemWorker_C_HealScore_Params
{
	bool                                               Other_;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      Surv;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.MulticastHealSelfStart
struct UItemWorker_C_MulticastHealSelfStart_Params
{
	class ASurvivorMasterBP_C*                         Survivor;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASurvivorMasterBP_C*                         SurvivorSelf;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SelfHealing_;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemWorker.ItemWorker_C.MulticastHealSelfStop
struct UItemWorker_C_MulticastHealSelfStop_Params
{
	class ASurvivorMasterBP_C*                         Survivor;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASurvivorMasterBP_C*                         SurvivorSelf;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.Flashlight
struct UItemWorker_C_Flashlight_Params
{
	class ASurvivorMasterBP_C*                         Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.MulticastFlashlight
struct UItemWorker_C_MulticastFlashlight_Params
{
	class AKillerMasterBP_C*                           Target;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASurvivorMasterBP_C*                         Player;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StunTime;                                                  // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Condition;                                                 // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                IndexToRemove;                                             // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               KillerFlashed_;                                            // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemWorker.ItemWorker_C.ServerFlashlight
struct UItemWorker_C_ServerFlashlight_Params
{
	class AKillerMasterBP_C*                           Target;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASurvivorMasterBP_C*                         Player;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StunTime;                                                  // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Condition;                                                 // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                IndexToRemove;                                             // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               KillerFlashed_;                                            // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemWorker.ItemWorker_C.FlashlightSpotLight
struct UItemWorker_C_FlashlightSpotLight_Params
{
	class ASurvivorMasterBP_C*                         Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.EnergyDrink
struct UItemWorker_C_EnergyDrink_Params
{
};

// Function ItemWorker.ItemWorker_C.DropAllItems
struct UItemWorker_C_DropAllItems_Params
{
	struct FTransform                                  SpawnLocation;                                             // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// Function ItemWorker.ItemWorker_C.SpawnPickUpItem
struct UItemWorker_C_SpawnPickUpItem_Params
{
	struct FItemStructure                              Item;                                                      // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  SpawnTransform;                                            // 0x0030(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	bool                                               Death_;                                                    // 0x0060(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemWorker.ItemWorker_C.ServerSpawnPickUpItem
struct UItemWorker_C_ServerSpawnPickUpItem_Params
{
	struct FItemStructure                              Item;                                                      // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  SpawnLocation;                                             // 0x0030(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
};

// Function ItemWorker.ItemWorker_C.DestroyPickup
struct UItemWorker_C_DestroyPickup_Params
{
	class AActor*                                      DestroyItem;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.DestroyPickupMulticast
struct UItemWorker_C_DestroyPickupMulticast_Params
{
	class AActor*                                      DestroyItem;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.ToSpawnItem
struct UItemWorker_C_ToSpawnItem_Params
{
};

// Function ItemWorker.ItemWorker_C.SpawnItemServer
struct UItemWorker_C_SpawnItemServer_Params
{
	class UClass*                                      ItemToBeSpawned;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       Pawn;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TakeAnim_;                                                 // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FItemStructure                              Slot1;                                                     // 0x0018(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemStructure                              Slot2;                                                     // 0x0040(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemStructure                              Slot3;                                                     // 0x0068(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OnlySpawnInventory_;                                       // 0x0090(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemWorker.ItemWorker_C.SpawnItemMulticast
struct UItemWorker_C_SpawnItemMulticast_Params
{
	class UClass*                                      Item;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       Pawn;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TakeAnim_;                                                 // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FItemStructure                              Slot1;                                                     // 0x0018(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemStructure                              Slot2;                                                     // 0x0040(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemStructure                              Slot3;                                                     // 0x0068(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OnlySpawnInventory_;                                       // 0x0090(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemWorker.ItemWorker_C.InvokePickUpItem
struct UItemWorker_C_InvokePickUpItem_Params
{
};

// Function ItemWorker.ItemWorker_C.ItemUsed
struct UItemWorker_C_ItemUsed_Params
{
	int                                                IndexToRemove;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.HideItem
struct UItemWorker_C_HideItem_Params
{
};

// Function ItemWorker.ItemWorker_C.ShowItem
struct UItemWorker_C_ShowItem_Params
{
};

// Function ItemWorker.ItemWorker_C.InvokeFirstSlot
struct UItemWorker_C_InvokeFirstSlot_Params
{
};

// Function ItemWorker.ItemWorker_C.InvokeSecondSlot
struct UItemWorker_C_InvokeSecondSlot_Params
{
};

// Function ItemWorker.ItemWorker_C.InvokeThirdSlot
struct UItemWorker_C_InvokeThirdSlot_Params
{
};

// Function ItemWorker.ItemWorker_C.ItemHide
struct UItemWorker_C_ItemHide_Params
{
};

// Function ItemWorker.ItemWorker_C.ItemHideServer
struct UItemWorker_C_ItemHideServer_Params
{
};

// Function ItemWorker.ItemWorker_C.ItemHideMulticast
struct UItemWorker_C_ItemHideMulticast_Params
{
};

// Function ItemWorker.ItemWorker_C.ItemsImpulse
struct UItemWorker_C_ItemsImpulse_Params
{
};

// Function ItemWorker.ItemWorker_C.DropItem
struct UItemWorker_C_DropItem_Params
{
	int                                                ItemIndex;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  DropPosition;                                              // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FItemStructure                              Inventory;                                                 // 0x0040(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.LocalDropItem
struct UItemWorker_C_LocalDropItem_Params
{
	bool                                               FullInventoryAndDrop;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemWorker.ItemWorker_C.HideItemHand
struct UItemWorker_C_HideItemHand_Params
{
};

// Function ItemWorker.ItemWorker_C.ServerEnergyDrink
struct UItemWorker_C_ServerEnergyDrink_Params
{
	float                                              Time;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CD_;                                                       // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                IndexToRemove;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.MulticastEnergyDrink
struct UItemWorker_C_MulticastEnergyDrink_Params
{
	float                                              Time;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CD_;                                                       // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                IndexToRemove;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.InvulnerabilityPotion
struct UItemWorker_C_InvulnerabilityPotion_Params
{
};

// Function ItemWorker.ItemWorker_C.ServerInvulnerabilityPotion
struct UItemWorker_C_ServerInvulnerabilityPotion_Params
{
	float                                              Time;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CD_;                                                       // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                IndexToRemove;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.MulticastInvulnerabilityPotion
struct UItemWorker_C_MulticastInvulnerabilityPotion_Params
{
	float                                              Time;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CD_;                                                       // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                IndexToRemove;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.GetMaterialsAndCreateDynMaterials
struct UItemWorker_C_GetMaterialsAndCreateDynMaterials_Params
{
};

// Function ItemWorker.ItemWorker_C.InvisUpdate
struct UItemWorker_C_InvisUpdate_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.AstralOffServ
struct UItemWorker_C_AstralOffServ_Params
{
};

// Function ItemWorker.ItemWorker_C.AstralOffMulti
struct UItemWorker_C_AstralOffMulti_Params
{
};

// Function ItemWorker.ItemWorker_C.AstralOffLocal
struct UItemWorker_C_AstralOffLocal_Params
{
};

// Function ItemWorker.ItemWorker_C.AstralOnLocal
struct UItemWorker_C_AstralOnLocal_Params
{
	float                                              TimerInvis;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CD_;                                                       // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemWorker.ItemWorker_C.AstralOnServer
struct UItemWorker_C_AstralOnServer_Params
{
	float                                              TimerInvis;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CD_;                                                       // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                IndexToRemove;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.AstralOnMulti
struct UItemWorker_C_AstralOnMulti_Params
{
	float                                              TimerInvis;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CD_;                                                       // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                IndexToRemove;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.KeymasterBook
struct UItemWorker_C_KeymasterBook_Params
{
};

// Function ItemWorker.ItemWorker_C.ItemDestroyedLootboxShopServer
struct UItemWorker_C_ItemDestroyedLootboxShopServer_Params
{
	class ALootboxShop_C*                              Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.ItemDestroyedLootboxShopMulticast
struct UItemWorker_C_ItemDestroyedLootboxShopMulticast_Params
{
	class ALootboxShop_C*                              Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.Picklock
struct UItemWorker_C_Picklock_Params
{
};

// Function ItemWorker.ItemWorker_C.PicklockSoundServer
struct UItemWorker_C_PicklockSoundServer_Params
{
	bool                                               Loop_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success_;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemWorker.ItemWorker_C.PicklockSoundMulticast
struct UItemWorker_C_PicklockSoundMulticast_Params
{
	bool                                               Loop_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success_;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemWorker.ItemWorker_C.CheckPicklock
struct UItemWorker_C_CheckPicklock_Params
{
};

// Function ItemWorker.ItemWorker_C.PicklockSound
struct UItemWorker_C_PicklockSound_Params
{
	bool                                               Loop_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success_;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemWorker.ItemWorker_C.SkillCheckMain
struct UItemWorker_C_SkillCheckMain_Params
{
};

// Function ItemWorker.ItemWorker_C.CheckActiveSkillCheck
struct UItemWorker_C_CheckActiveSkillCheck_Params
{
};

// Function ItemWorker.ItemWorker_C.CheckPressed
struct UItemWorker_C_CheckPressed_Params
{
};

// Function ItemWorker.ItemWorker_C.FailedServer
struct UItemWorker_C_FailedServer_Params
{
	class AActor*                                      Target;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.Level1Server
struct UItemWorker_C_Level1Server_Params
{
	class AActor*                                      Target;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.Level2Server
struct UItemWorker_C_Level2Server_Params
{
	class AActor*                                      Target;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.Level3Server
struct UItemWorker_C_Level3Server_Params
{
	class AActor*                                      Target;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.Level4Server
struct UItemWorker_C_Level4Server_Params
{
	class AActor*                                      Target;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.FailedMulticast
struct UItemWorker_C_FailedMulticast_Params
{
	class AActor*                                      Target;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.Level1Multicast
struct UItemWorker_C_Level1Multicast_Params
{
	class AActor*                                      Target;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.Level2Multicast
struct UItemWorker_C_Level2Multicast_Params
{
	class AActor*                                      Target;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.Level3Multicast
struct UItemWorker_C_Level3Multicast_Params
{
	class AActor*                                      Target;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.Level4Multicast
struct UItemWorker_C_Level4Multicast_Params
{
	class AActor*                                      Target;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.PicklockUsed
struct UItemWorker_C_PicklockUsed_Params
{
};

// Function ItemWorker.ItemWorker_C.PicklockEnd
struct UItemWorker_C_PicklockEnd_Params
{
};

// Function ItemWorker.ItemWorker_C.PicklockShowText
struct UItemWorker_C_PicklockShowText_Params
{
};

// Function ItemWorker.ItemWorker_C.PicklockEndServer
struct UItemWorker_C_PicklockEndServer_Params
{
};

// Function ItemWorker.ItemWorker_C.PicklockEndMulticast
struct UItemWorker_C_PicklockEndMulticast_Params
{
};

// Function ItemWorker.ItemWorker_C.AstralSoundLocal
struct UItemWorker_C_AstralSoundLocal_Params
{
	bool                                               Loop_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               In_;                                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemWorker.ItemWorker_C.AstralSoundServer
struct UItemWorker_C_AstralSoundServer_Params
{
	bool                                               Loop_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               In_;                                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemWorker.ItemWorker_C.AstralSoundMulticast
struct UItemWorker_C_AstralSoundMulticast_Params
{
	bool                                               Loop_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               In_;                                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemWorker.ItemWorker_C.SurvAstralSkill
struct UItemWorker_C_SurvAstralSkill_Params
{
	float                                              TimerInvis;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.SurvClassAddItem
struct UItemWorker_C_SurvClassAddItem_Params
{
	TEnumAsByte<SurvClass_ESurvClass>                  SurvClass;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.SpawnClassItem
struct UItemWorker_C_SpawnClassItem_Params
{
	bool                                               OnlySpawnInventory_;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemWorker.ItemWorker_C.HideTexts
struct UItemWorker_C_HideTexts_Params
{
};

// Function ItemWorker.ItemWorker_C.DestroyItemMulticast
struct UItemWorker_C_DestroyItemMulticast_Params
{
	int                                                IndexToRemove;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.ItemDropped
struct UItemWorker_C_ItemDropped_Params
{
};

// Function ItemWorker.ItemWorker_C.ItemDestroyLootboxServ
struct UItemWorker_C_ItemDestroyLootboxServ_Params
{
	class AActor*                                      NewParam;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.ItemDestroyLootboxMulti
struct UItemWorker_C_ItemDestroyLootboxMulti_Params
{
	class AActor*                                      NewParam;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.HideItemText
struct UItemWorker_C_HideItemText_Params
{
};

// Function ItemWorker.ItemWorker_C.ChangeItemPosition
struct UItemWorker_C_ChangeItemPosition_Params
{
	bool                                               FPP_;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemWorker.ItemWorker_C.HealpackChargesAdd
struct UItemWorker_C_HealpackChargesAdd_Params
{
	int                                                Charges;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.PicklockChargesAdd
struct UItemWorker_C_PicklockChargesAdd_Params
{
	int                                                Charges;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.StopProgressChairServ
struct UItemWorker_C_StopProgressChairServ_Params
{
	bool                                               Pause_;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AHypnoChairBP_C*                             Chair;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.StopProgressChairMulti
struct UItemWorker_C_StopProgressChairMulti_Params
{
	bool                                               Pause_;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AHypnoChairBP_C*                             Chair;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.CheckKillingTimeChair
struct UItemWorker_C_CheckKillingTimeChair_Params
{
};

// Function ItemWorker.ItemWorker_C.PicklockHideText
struct UItemWorker_C_PicklockHideText_Params
{
};

// Function ItemWorker.ItemWorker_C.OtherSurvHealLerp
struct UItemWorker_C_OtherSurvHealLerp_Params
{
};

// Function ItemWorker.ItemWorker_C.FlashlightCheck
struct UItemWorker_C_FlashlightCheck_Params
{
};

// Function ItemWorker.ItemWorker_C.ChrisBoost
struct UItemWorker_C_ChrisBoost_Params
{
	float                                              Time;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.InvokeNextItem
struct UItemWorker_C_InvokeNextItem_Params
{
};

// Function ItemWorker.ItemWorker_C.InvokePrevItem
struct UItemWorker_C_InvokePrevItem_Params
{
};

// Function ItemWorker.ItemWorker_C.ActivateSlot
struct UItemWorker_C_ActivateSlot_Params
{
	int                                                SlotIndex;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.DeactivateSlot
struct UItemWorker_C_DeactivateSlot_Params
{
};

// Function ItemWorker.ItemWorker_C.CreateItemMesh
struct UItemWorker_C_CreateItemMesh_Params
{
	class UClass*                                      Class;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Destroy_;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Delay_;                                                    // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemWorker.ItemWorker_C.DropItemSlot
struct UItemWorker_C_DropItemSlot_Params
{
	int                                                ItemId;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.ServerSound
struct UItemWorker_C_ServerSound_Params
{
	bool                                               Play_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemWorker.ItemWorker_C.MulticastSound
struct UItemWorker_C_MulticastSound_Params
{
	bool                                               Play_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemWorker.ItemWorker_C.MulticastSoundOnce
struct UItemWorker_C_MulticastSoundOnce_Params
{
};

// Function ItemWorker.ItemWorker_C.ServerSoundOnce
struct UItemWorker_C_ServerSoundOnce_Params
{
};

// Function ItemWorker.ItemWorker_C.KillerDropItem
struct UItemWorker_C_KillerDropItem_Params
{
	bool                                               LastLvl_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemWorker.ItemWorker_C.AddShield
struct UItemWorker_C_AddShield_Params
{
};

// Function ItemWorker.ItemWorker_C.brokeShield
struct UItemWorker_C_brokeShield_Params
{
};

// Function ItemWorker.ItemWorker_C.AddShield_MULTI
struct UItemWorker_C_AddShield_MULTI_Params
{
};

// Function ItemWorker.ItemWorker_C.brokeShield_MULTI
struct UItemWorker_C_brokeShield_MULTI_Params
{
};

// Function ItemWorker.ItemWorker_C.AddTotemOfEndurace
struct UItemWorker_C_AddTotemOfEndurace_Params
{
};

// Function ItemWorker.ItemWorker_C.AddTottemOfEndurance_MULTI
struct UItemWorker_C_AddTottemOfEndurance_MULTI_Params
{
};

// Function ItemWorker.ItemWorker_C.BrokeTotemOfEndurance_S
struct UItemWorker_C_BrokeTotemOfEndurance_S_Params
{
};

// Function ItemWorker.ItemWorker_C.BrokeTotemOfEndurance
struct UItemWorker_C_BrokeTotemOfEndurance_Params
{
};

// Function ItemWorker.ItemWorker_C.SetTotemOfBraveryS
struct UItemWorker_C_SetTotemOfBraveryS_Params
{
};

// Function ItemWorker.ItemWorker_C.SetTotemOfBravery
struct UItemWorker_C_SetTotemOfBravery_Params
{
};

// Function ItemWorker.ItemWorker_C.UseTotemOfBravery
struct UItemWorker_C_UseTotemOfBravery_Params
{
};

// Function ItemWorker.ItemWorker_C.UseTotemOfBravery_MULTI
struct UItemWorker_C_UseTotemOfBravery_MULTI_Params
{
};

// Function ItemWorker.ItemWorker_C.UseTotemOfConcentration
struct UItemWorker_C_UseTotemOfConcentration_Params
{
};

// Function ItemWorker.ItemWorker_C.SetTotemOfConcentration
struct UItemWorker_C_SetTotemOfConcentration_Params
{
};

// Function ItemWorker.ItemWorker_C.SetTotemOfConcentration_MULTI
struct UItemWorker_C_SetTotemOfConcentration_MULTI_Params
{
};

// Function ItemWorker.ItemWorker_C.UseTotemOfConcentrationS
struct UItemWorker_C_UseTotemOfConcentrationS_Params
{
};

// Function ItemWorker.ItemWorker_C.UseTotemOfFriendship_M
struct UItemWorker_C_UseTotemOfFriendship_M_Params
{
	class AActor*                                      SurvOnChair;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.UseTotemOfFriendship
struct UItemWorker_C_UseTotemOfFriendship_Params
{
	class AActor*                                      SurvOnChair;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.SetTotemOfFriendship
struct UItemWorker_C_SetTotemOfFriendship_Params
{
};

// Function ItemWorker.ItemWorker_C.SetTotemOfFriendship_M
struct UItemWorker_C_SetTotemOfFriendship_M_Params
{
	bool                                               IsTotemOfFriemdship;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ItemWorker.ItemWorker_C.UsePainkiller
struct UItemWorker_C_UsePainkiller_Params
{
};

// Function ItemWorker.ItemWorker_C.PainkillerAddHealth
struct UItemWorker_C_PainkillerAddHealth_Params
{
};

// Function ItemWorker.ItemWorker_C.RemovePainkiller
struct UItemWorker_C_RemovePainkiller_Params
{
};

// Function ItemWorker.ItemWorker_C.SetTotemOfGravity
struct UItemWorker_C_SetTotemOfGravity_Params
{
};

// Function ItemWorker.ItemWorker_C.TotemOfGrabityM
struct UItemWorker_C_TotemOfGrabityM_Params
{
};

// Function ItemWorker.ItemWorker_C.UseTotemOfGravity
struct UItemWorker_C_UseTotemOfGravity_Params
{
};

// Function ItemWorker.ItemWorker_C.UseTotemOfGravity_M
struct UItemWorker_C_UseTotemOfGravity_M_Params
{
};

// Function ItemWorker.ItemWorker_C.FindHealthPack
struct UItemWorker_C_FindHealthPack_Params
{
	class ASurvivorMasterBP_C*                         Survivor;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.BrokeTotemsBravery
struct UItemWorker_C_BrokeTotemsBravery_Params
{
};

// Function ItemWorker.ItemWorker_C.BrokeTotemOfCon
struct UItemWorker_C_BrokeTotemOfCon_Params
{
};

// Function ItemWorker.ItemWorker_C.BrokeTotemOfFreind
struct UItemWorker_C_BrokeTotemOfFreind_Params
{
};

// Function ItemWorker.ItemWorker_C.BrokeTotemOfGravity
struct UItemWorker_C_BrokeTotemOfGravity_Params
{
};

// Function ItemWorker.ItemWorker_C.ThrowGlueGrenade
struct UItemWorker_C_ThrowGlueGrenade_Params
{
	TEnumAsByte<Rarity_ERarity>                        Rarity;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  SpawnTransform;                                            // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, UObjectWrapper)
	struct FVector                                     NewVel;                                                    // 0x0040(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.ThrowGlueSERV
struct UItemWorker_C_ThrowGlueSERV_Params
{
	TEnumAsByte<Rarity_ERarity>                        Rarity;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  SpawnTransform;                                            // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, UObjectWrapper)
	struct FVector                                     NewVel;                                                    // 0x0040(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.ThrowYellowGrenade
struct UItemWorker_C_ThrowYellowGrenade_Params
{
	TEnumAsByte<Rarity_ERarity>                        Rarity;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  SpawnTransform;                                            // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, UObjectWrapper)
	struct FVector                                     NewVel;                                                    // 0x0040(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.ThrowYellowGrenadeSERV
struct UItemWorker_C_ThrowYellowGrenadeSERV_Params
{
	TEnumAsByte<Rarity_ERarity>                        Rarity;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  SpawnTransform;                                            // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, UObjectWrapper)
	struct FVector                                     NewVel;                                                    // 0x0040(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.Takeanim
struct UItemWorker_C_Takeanim_Params
{
};

// Function ItemWorker.ItemWorker_C.TakeAnim_SERV
struct UItemWorker_C_TakeAnim_SERV_Params
{
};

// Function ItemWorker.ItemWorker_C.GravityTime
struct UItemWorker_C_GravityTime_Params
{
};

// Function ItemWorker.ItemWorker_C.TimerTotemOfConcentration
struct UItemWorker_C_TimerTotemOfConcentration_Params
{
};

// Function ItemWorker.ItemWorker_C.FriendShipTimer
struct UItemWorker_C_FriendShipTimer_Params
{
};

// Function ItemWorker.ItemWorker_C.BraveryTimer
struct UItemWorker_C_BraveryTimer_Params
{
};

// Function ItemWorker.ItemWorker_C.enduranceTimer
struct UItemWorker_C_enduranceTimer_Params
{
};

// Function ItemWorker.ItemWorker_C.DeleteWidget
struct UItemWorker_C_DeleteWidget_Params
{
	struct FName                                       InName;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.ThrowGrenade
struct UItemWorker_C_ThrowGrenade_Params
{
	bool                                               IsGlue;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<Rarity_ERarity>                        Rarity;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.ActivateTotems
struct UItemWorker_C_ActivateTotems_Params
{
	TEnumAsByte<ItemType_EItemType>                    Selection;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DestroyItem;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.ActivateTools
struct UItemWorker_C_ActivateTools_Params
{
	int                                                Charges;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.ActivateToolsM
struct UItemWorker_C_ActivateToolsM_Params
{
	int                                                Charges;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.ActivatedToolTimer
struct UItemWorker_C_ActivatedToolTimer_Params
{
};

// Function ItemWorker.ItemWorker_C.PainkillerAnim
struct UItemWorker_C_PainkillerAnim_Params
{
};

// Function ItemWorker.ItemWorker_C.DropShield
struct UItemWorker_C_DropShield_Params
{
};

// Function ItemWorker.ItemWorker_C.totemvoice
struct UItemWorker_C_totemvoice_Params
{
	class ASurvivorMasterBP_C*                         Target;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ItemWorker.ItemWorker_C.3sec
struct UItemWorker_C__3sec_Params
{
};

// Function ItemWorker.ItemWorker_C.BrokeTotemEndurance
struct UItemWorker_C_BrokeTotemEndurance_Params
{
};

// Function ItemWorker.ItemWorker_C.ExecuteUbergraph_ItemWorker
struct UItemWorker_C_ExecuteUbergraph_ItemWorker_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
