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

// Function LootBox_Totems.LootBox_Totems_C.OnRep_IncreaseRare
struct ALootBox_Totems_C_OnRep_IncreaseRare_Params
{
};

// Function LootBox_Totems.LootBox_Totems_C.CoinAngle
struct ALootBox_Totems_C_CoinAngle_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Y;                                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Z;                                                         // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootBox_Totems.LootBox_Totems_C.T_OpenLootbox__FinishedFunc
struct ALootBox_Totems_C_T_OpenLootbox__FinishedFunc_Params
{
};

// Function LootBox_Totems.LootBox_Totems_C.T_OpenLootbox__UpdateFunc
struct ALootBox_Totems_C_T_OpenLootbox__UpdateFunc_Params
{
};

// Function LootBox_Totems.LootBox_Totems_C.T_CloseLootbox__FinishedFunc
struct ALootBox_Totems_C_T_CloseLootbox__FinishedFunc_Params
{
};

// Function LootBox_Totems.LootBox_Totems_C.T_CloseLootbox__UpdateFunc
struct ALootBox_Totems_C_T_CloseLootbox__UpdateFunc_Params
{
};

// Function LootBox_Totems.LootBox_Totems_C.T_NotEnoughMoney__FinishedFunc
struct ALootBox_Totems_C_T_NotEnoughMoney__FinishedFunc_Params
{
};

// Function LootBox_Totems.LootBox_Totems_C.T_NotEnoughMoney__UpdateFunc
struct ALootBox_Totems_C_T_NotEnoughMoney__UpdateFunc_Params
{
};

// Function LootBox_Totems.LootBox_Totems_C.T_InsideShine__FinishedFunc
struct ALootBox_Totems_C_T_InsideShine__FinishedFunc_Params
{
};

// Function LootBox_Totems.LootBox_Totems_C.T_InsideShine__UpdateFunc
struct ALootBox_Totems_C_T_InsideShine__UpdateFunc_Params
{
};

// Function LootBox_Totems.LootBox_Totems_C.T_LightPulse__FinishedFunc
struct ALootBox_Totems_C_T_LightPulse__FinishedFunc_Params
{
};

// Function LootBox_Totems.LootBox_Totems_C.T_LightPulse__UpdateFunc
struct ALootBox_Totems_C_T_LightPulse__UpdateFunc_Params
{
};

// Function LootBox_Totems.LootBox_Totems_C.RollItem
struct ALootBox_Totems_C_RollItem_Params
{
	TEnumAsByte<LootBoxRollType_ELootBoxRollType>      RollType;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootBox_Totems.LootBox_Totems_C.OpenLootBox
struct ALootBox_Totems_C_OpenLootBox_Params
{
	TEnumAsByte<LootBoxRollType_ELootBoxRollType>      RollType;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Nickname;                                                  // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LootBox_Totems.LootBox_Totems_C.CloseLootBox
struct ALootBox_Totems_C_CloseLootBox_Params
{
};

// Function LootBox_Totems.LootBox_Totems_C.OpenLootboxMulti
struct ALootBox_Totems_C_OpenLootboxMulti_Params
{
	struct FString                                     Nickname;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LootBox_Totems.LootBox_Totems_C.Spawner
struct ALootBox_Totems_C_Spawner_Params
{
	class UClass*                                      NewParam;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  NewParam2;                                                 // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FString                                     NewParam3;                                                 // 0x0040(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LootBox_Totems.LootBox_Totems_C.DestroyItemLootbox
struct ALootBox_Totems_C_DestroyItemLootbox_Params
{
};

// Function LootBox_Totems.LootBox_Totems_C.SpawnerMulti
struct ALootBox_Totems_C_SpawnerMulti_Params
{
	class AActor*                                      NewParam;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootBox_Totems.LootBox_Totems_C.LootboxNotEnough
struct ALootBox_Totems_C_LootboxNotEnough_Params
{
};

// Function LootBox_Totems.LootBox_Totems_C.LootboxNotEnoughMulti
struct ALootBox_Totems_C_LootboxNotEnoughMulti_Params
{
};

// Function LootBox_Totems.LootBox_Totems_C.SpawnItem
struct ALootBox_Totems_C_SpawnItem_Params
{
	struct FString                                     Nickname;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LootBox_Totems.LootBox_Totems_C.ColorInside
struct ALootBox_Totems_C_ColorInside_Params
{
	struct FString                                     Rarity;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               NotFound_;                                                 // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LootBox_Totems.LootBox_Totems_C.InsideShine
struct ALootBox_Totems_C_InsideShine_Params
{
};

// Function LootBox_Totems.LootBox_Totems_C.Rendering
struct ALootBox_Totems_C_Rendering_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LootBox_Totems.LootBox_Totems_C.InteractLootbox
struct ALootBox_Totems_C_InteractLootbox_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OnlyMedkit_;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LootBox_Totems.LootBox_Totems_C.CurseLightON
struct ALootBox_Totems_C_CurseLightON_Params
{
	bool                                               On;                                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Delay;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootBox_Totems.LootBox_Totems_C.ReceiveBeginPlay
struct ALootBox_Totems_C_ReceiveBeginPlay_Params
{
};

// Function LootBox_Totems.LootBox_Totems_C.DelayDropItem
struct ALootBox_Totems_C_DelayDropItem_Params
{
};

// Function LootBox_Totems.LootBox_Totems_C.LegendaryItem
struct ALootBox_Totems_C_LegendaryItem_Params
{
	struct FString                                     Object;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function LootBox_Totems.LootBox_Totems_C.MableSkill
struct ALootBox_Totems_C_MableSkill_Params
{
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootBox_Totems.LootBox_Totems_C.SpawnCoins
struct ALootBox_Totems_C_SpawnCoins_Params
{
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootBox_Totems.LootBox_Totems_C.ReceiveTick
struct ALootBox_Totems_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootBox_Totems.LootBox_Totems_C.SurvOverlap
struct ALootBox_Totems_C_SurvOverlap_Params
{
};

// Function LootBox_Totems.LootBox_Totems_C.BndEvt__LootBox_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ALootBox_Totems_C_BndEvt__LootBox_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function LootBox_Totems.LootBox_Totems_C.BndEvt__LootBox_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ALootBox_Totems_C_BndEvt__LootBox_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LootBox_Totems.LootBox_Totems_C.StartGameOverlap
struct ALootBox_Totems_C_StartGameOverlap_Params
{
};

// Function LootBox_Totems.LootBox_Totems_C.SphereRadiusStartGame
struct ALootBox_Totems_C_SphereRadiusStartGame_Params
{
};

// Function LootBox_Totems.LootBox_Totems_C.SetIncreaseRare
struct ALootBox_Totems_C_SetIncreaseRare_Params
{
	bool                                               IncreaseRare;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LootBox_Totems.LootBox_Totems_C.SetIncreaseRare_MULTI
struct ALootBox_Totems_C_SetIncreaseRare_MULTI_Params
{
	bool                                               IncreaseRare;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LootBox_Totems.LootBox_Totems_C.BlockLootboxPerk
struct ALootBox_Totems_C_BlockLootboxPerk_Params
{
};

// Function LootBox_Totems.LootBox_Totems_C.BlockLootboxPerk_SERV
struct ALootBox_Totems_C_BlockLootboxPerk_SERV_Params
{
};

// Function LootBox_Totems.LootBox_Totems_C.blockLP
struct ALootBox_Totems_C_blockLP_Params
{
};

// Function LootBox_Totems.LootBox_Totems_C.ExecuteUbergraph_LootBox_Totems
struct ALootBox_Totems_C_ExecuteUbergraph_LootBox_Totems_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
