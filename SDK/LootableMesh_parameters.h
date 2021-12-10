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

// Function LootableMesh.LootableMesh_C.OnRep_IncreaseRare
struct ALootableMesh_C_OnRep_IncreaseRare_Params
{
};

// Function LootableMesh.LootableMesh_C.CoinAngle
struct ALootableMesh_C_CoinAngle_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Y;                                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Z;                                                         // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootableMesh.LootableMesh_C.T_OpenLootbox__FinishedFunc
struct ALootableMesh_C_T_OpenLootbox__FinishedFunc_Params
{
};

// Function LootableMesh.LootableMesh_C.T_OpenLootbox__UpdateFunc
struct ALootableMesh_C_T_OpenLootbox__UpdateFunc_Params
{
};

// Function LootableMesh.LootableMesh_C.T_CloseLootbox__FinishedFunc
struct ALootableMesh_C_T_CloseLootbox__FinishedFunc_Params
{
};

// Function LootableMesh.LootableMesh_C.T_CloseLootbox__UpdateFunc
struct ALootableMesh_C_T_CloseLootbox__UpdateFunc_Params
{
};

// Function LootableMesh.LootableMesh_C.T_InsideShine__FinishedFunc
struct ALootableMesh_C_T_InsideShine__FinishedFunc_Params
{
};

// Function LootableMesh.LootableMesh_C.T_InsideShine__UpdateFunc
struct ALootableMesh_C_T_InsideShine__UpdateFunc_Params
{
};

// Function LootableMesh.LootableMesh_C.ReceiveBeginPlay
struct ALootableMesh_C_ReceiveBeginPlay_Params
{
};

// Function LootableMesh.LootableMesh_C.InteractLootableMesh
struct ALootableMesh_C_InteractLootableMesh_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootableMesh.LootableMesh_C.RollItem
struct ALootableMesh_C_RollItem_Params
{
	TEnumAsByte<LootBoxRollType_ELootBoxRollType>      RollType;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootableMesh.LootableMesh_C.OpenLootBox
struct ALootableMesh_C_OpenLootBox_Params
{
	TEnumAsByte<LootBoxRollType_ELootBoxRollType>      RollType;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Nickname;                                                  // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LootableMesh.LootableMesh_C.CloseLootBox
struct ALootableMesh_C_CloseLootBox_Params
{
};

// Function LootableMesh.LootableMesh_C.OpenLootboxMulti
struct ALootableMesh_C_OpenLootboxMulti_Params
{
	struct FString                                     Nickname;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Spawn_;                                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LootableMesh.LootableMesh_C.Spawner
struct ALootableMesh_C_Spawner_Params
{
	class UClass*                                      NewParam;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  NewParam2;                                                 // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FString                                     NewParam3;                                                 // 0x0040(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LootableMesh.LootableMesh_C.DestroyItemLootbox
struct ALootableMesh_C_DestroyItemLootbox_Params
{
};

// Function LootableMesh.LootableMesh_C.SpawnerMulti
struct ALootableMesh_C_SpawnerMulti_Params
{
	class AActor*                                      NewParam;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootableMesh.LootableMesh_C.LootboxNotEnough
struct ALootableMesh_C_LootboxNotEnough_Params
{
};

// Function LootableMesh.LootableMesh_C.SpawnItem
struct ALootableMesh_C_SpawnItem_Params
{
	struct FString                                     Nickname;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LootableMesh.LootableMesh_C.ColorInside
struct ALootableMesh_C_ColorInside_Params
{
	struct FString                                     Rarity;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LootableMesh.LootableMesh_C.InsideShine
struct ALootableMesh_C_InsideShine_Params
{
};

// Function LootableMesh.LootableMesh_C.Rendering
struct ALootableMesh_C_Rendering_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LootableMesh.LootableMesh_C.CurseLightON
struct ALootableMesh_C_CurseLightON_Params
{
	bool                                               On;                                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Delay;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootableMesh.LootableMesh_C.DelayDropItem
struct ALootableMesh_C_DelayDropItem_Params
{
};

// Function LootableMesh.LootableMesh_C.LegendaryItem
struct ALootableMesh_C_LegendaryItem_Params
{
	struct FString                                     Object;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LootableMesh.LootableMesh_C.MableSkill
struct ALootableMesh_C_MableSkill_Params
{
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootableMesh.LootableMesh_C.SpawnCoins
struct ALootableMesh_C_SpawnCoins_Params
{
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootableMesh.LootableMesh_C.ReceiveTick
struct ALootableMesh_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootableMesh.LootableMesh_C.SurvOverlap
struct ALootableMesh_C_SurvOverlap_Params
{
};

// Function LootableMesh.LootableMesh_C.BndEvt__LootBox_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ALootableMesh_C_BndEvt__LootBox_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function LootableMesh.LootableMesh_C.BndEvt__LootBox_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ALootableMesh_C_BndEvt__LootBox_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootableMesh.LootableMesh_C.StartGameOverlap
struct ALootableMesh_C_StartGameOverlap_Params
{
};

// Function LootableMesh.LootableMesh_C.SphereRadiusStartGame
struct ALootableMesh_C_SphereRadiusStartGame_Params
{
};

// Function LootableMesh.LootableMesh_C.SetIncreaseRare
struct ALootableMesh_C_SetIncreaseRare_Params
{
	bool                                               IncreaseRare;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LootableMesh.LootableMesh_C.SetIncreaseRare_MULTI
struct ALootableMesh_C_SetIncreaseRare_MULTI_Params
{
	bool                                               IncreaseRare;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LootableMesh.LootableMesh_C.BlockLootboxPerk
struct ALootableMesh_C_BlockLootboxPerk_Params
{
};

// Function LootableMesh.LootableMesh_C.BlockLootboxPerk_SERV
struct ALootableMesh_C_BlockLootboxPerk_SERV_Params
{
};

// Function LootableMesh.LootableMesh_C.blockLP
struct ALootableMesh_C_blockLP_Params
{
};

// Function LootableMesh.LootableMesh_C.DoorAnim
struct ALootableMesh_C_DoorAnim_Params
{
	float                                              Alpha;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Open_;                                                     // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LootableMesh.LootableMesh_C.ExecuteUbergraph_LootableMesh
struct ALootableMesh_C_ExecuteUbergraph_LootableMesh_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
