// Name: P, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.GetPerkName
//		Flags  -> ()
// Parameters:
//		struct FName                                       Name                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                PerkIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::GetPerkName(struct FName* Name, int* PerkIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.GetPerkName");

	UItemWorker_C_GetPerkName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
	if (PerkIndex != nullptr)
		*PerkIndex = params.PerkIndex;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.SeeKillerSilhouetteNearHC
//		Flags  -> ()
// Parameters:
//		bool                                               wannasee                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemWorker_C::SeeKillerSilhouetteNearHC(bool* wannasee)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.SeeKillerSilhouetteNearHC");

	UItemWorker_C_SeeKillerSilhouetteNearHC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (wannasee != nullptr)
		*wannasee = params.wannasee;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.GetPointsForPerks
//		Flags  -> ()
// Parameters:
//		int                                                PerkPoints                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::GetPointsForPerks(int* PerkPoints)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.GetPointsForPerks");

	UItemWorker_C_GetPointsForPerks_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PerkPoints != nullptr)
		*PerkPoints = params.PerkPoints;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.GetCurrentEXP
//		Flags  -> ()
// Parameters:
//		int                                                CurEXP                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::GetCurrentEXP(int* CurEXP)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.GetCurrentEXP");

	UItemWorker_C_GetCurrentEXP_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurEXP != nullptr)
		*CurEXP = params.CurEXP;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.IsTotem
//		Flags  -> ()
// Parameters:
//		bool                                               IsTotem                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TEnumAsByte<ItemType_EItemType>                    ItemType                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Output_Get                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AItemsBP_C*                                  AsItems_BP                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		class ACrystalRune_C*                              AsCrystal_Rune                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void UItemWorker_C::IsTotem(bool* IsTotem, TEnumAsByte<ItemType_EItemType>* ItemType, class AActor** Output_Get, class AItemsBP_C** AsItems_BP, class ACrystalRune_C** AsCrystal_Rune)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.IsTotem");

	UItemWorker_C_IsTotem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsTotem != nullptr)
		*IsTotem = params.IsTotem;
	if (ItemType != nullptr)
		*ItemType = params.ItemType;
	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;
	if (AsItems_BP != nullptr)
		*AsItems_BP = params.AsItems_BP;
	if (AsCrystal_Rune != nullptr)
		*AsCrystal_Rune = params.AsCrystal_Rune;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.SetHealpack
//		Flags  -> ()
void UItemWorker_C::SetHealpack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.SetHealpack");

	UItemWorker_C_SetHealpack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.SetItem
//		Flags  -> ()
// Parameters:
void UItemWorker_C::SetItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.SetItem");

	UItemWorker_C_SetItem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.SpawnItem
//		Flags  -> ()
// Parameters:
//		class UClass*                                      ItemClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               OnlySpawnInventory_                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemWorker_C::SpawnItem(class UClass* ItemClass, class APawn* Pawn, int Index, bool OnlySpawnInventory_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.SpawnItem");

	UItemWorker_C_SpawnItem_Params params {};
	params.ItemClass = ItemClass;
	params.Pawn = Pawn;
	params.Index = Index;
	params.OnlySpawnInventory_ = OnlySpawnInventory_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.SetItemToLastIndex
//		Flags  -> ()
// Parameters:
void UItemWorker_C::SetItemToLastIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.SetItemToLastIndex");

	UItemWorker_C_SetItemToLastIndex_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.AddEXP
//		Flags  -> ()
// Parameters:
//		int                                                Exp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AHUD*                                        HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::AddEXP(int Exp, class AActor* Player, class AHUD* HUD)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.AddEXP");

	UItemWorker_C_AddEXP_Params params {};
	params.Exp = Exp;
	params.Player = Player;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.IncreaseOnceHP
//		Flags  -> ()
// Parameters:
//		int                                                HP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::IncreaseOnceHP(int HP)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.IncreaseOnceHP");

	UItemWorker_C_IncreaseOnceHP_Params params {};
	params.HP = HP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.SetTimingToAllChairs
//		Flags  -> ()
void UItemWorker_C::SetTimingToAllChairs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.SetTimingToAllChairs");

	UItemWorker_C_SetTimingToAllChairs_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.SetDepth
//		Flags  -> ()
void UItemWorker_C::SetDepth()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.SetDepth");

	UItemWorker_C_SetDepth_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.LevelUpped
//		Flags  -> ()
// Parameters:
//		class AActor*                                      PlayerRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::LevelUpped(class AActor* PlayerRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.LevelUpped");

	UItemWorker_C_LevelUpped_Params params {};
	params.PlayerRef = PlayerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.DecreasePerkPoints
//		Flags  -> ()
// Parameters:
//		int                                                PerkPoints                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::DecreasePerkPoints(int PerkPoints)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.DecreasePerkPoints");

	UItemWorker_C_DecreasePerkPoints_Params params {};
	params.PerkPoints = PerkPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.SurvDropItem
//		Flags  -> ()
// Parameters:
//		bool                                               lastLVL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemWorker_C::SurvDropItem(bool lastLVL)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.SurvDropItem");

	UItemWorker_C_SurvDropItem_Params params {};
	params.lastLVL = lastLVL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ReceiveBeginPlay
//		Flags  -> ()
void UItemWorker_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ReceiveBeginPlay");

	UItemWorker_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ReceiveTick");

	UItemWorker_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ServerHealSelf
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Survivor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Legendary_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemWorker_C::ServerHealSelf(class ASurvivorMasterBP_C* Survivor, bool Legendary_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ServerHealSelf");

	UItemWorker_C_ServerHealSelf_Params params {};
	params.Survivor = Survivor;
	params.Legendary_ = Legendary_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.InvokeWithE
//		Flags  -> ()
void UItemWorker_C::InvokeWithE()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.InvokeWithE");

	UItemWorker_C_InvokeWithE_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.Release
//		Flags  -> ()
void UItemWorker_C::Release()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.Release");

	UItemWorker_C_Release_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.InvokeWithQ
//		Flags  -> ()
void UItemWorker_C::InvokeWithQ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.InvokeWithQ");

	UItemWorker_C_InvokeWithQ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.HealSelf
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Survivor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::HealSelf(class ASurvivorMasterBP_C* Survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.HealSelf");

	UItemWorker_C_HealSelf_Params params {};
	params.Survivor = Survivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.OwningClientHealSelf
//		Flags  -> ()
void UItemWorker_C::OwningClientHealSelf()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.OwningClientHealSelf");

	UItemWorker_C_OwningClientHealSelf_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ServerAddHealthToPlayer
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Health                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ScoreOff_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemWorker_C::ServerAddHealthToPlayer(class ASurvivorMasterBP_C* Player, int Health, bool ScoreOff_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ServerAddHealthToPlayer");

	UItemWorker_C_ServerAddHealthToPlayer_Params params {};
	params.Player = Player;
	params.Health = Health;
	params.ScoreOff_ = ScoreOff_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.StopHealSelf
//		Flags  -> ()
void UItemWorker_C::StopHealSelf()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.StopHealSelf");

	UItemWorker_C_StopHealSelf_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ServerStopHealSelf
//		Flags  -> ()
// Parameters:
//		bool                                               DestroyHealpack                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                IndexToRemove                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::ServerStopHealSelf(bool DestroyHealpack, int IndexToRemove)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ServerStopHealSelf");

	UItemWorker_C_ServerStopHealSelf_Params params {};
	params.DestroyHealpack = DestroyHealpack;
	params.IndexToRemove = IndexToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.OwningClientStopHealSelf
//		Flags  -> ()
void UItemWorker_C::OwningClientStopHealSelf()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.OwningClientStopHealSelf");

	UItemWorker_C_OwningClientStopHealSelf_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.DestroyItem
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                IndexToRemove                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::DestroyItem(class ASurvivorMasterBP_C* Player, int IndexToRemove)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.DestroyItem");

	UItemWorker_C_DestroyItem_Params params {};
	params.Player = Player;
	params.IndexToRemove = IndexToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.HealScore
//		Flags  -> ()
// Parameters:
//		bool                                               Other_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::HealScore(bool Other_, class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.HealScore");

	UItemWorker_C_HealScore_Params params {};
	params.Other_ = Other_;
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.MulticastHealSelfStart
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Survivor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ASurvivorMasterBP_C*                         SurvivorSelf                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               SelfHealing_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemWorker_C::MulticastHealSelfStart(class ASurvivorMasterBP_C* Survivor, class ASurvivorMasterBP_C* SurvivorSelf, bool SelfHealing_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.MulticastHealSelfStart");

	UItemWorker_C_MulticastHealSelfStart_Params params {};
	params.Survivor = Survivor;
	params.SurvivorSelf = SurvivorSelf;
	params.SelfHealing_ = SelfHealing_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.MulticastHealSelfStop
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Survivor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ASurvivorMasterBP_C*                         SurvivorSelf                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::MulticastHealSelfStop(class ASurvivorMasterBP_C* Survivor, class ASurvivorMasterBP_C* SurvivorSelf)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.MulticastHealSelfStop");

	UItemWorker_C_MulticastHealSelfStop_Params params {};
	params.Survivor = Survivor;
	params.SurvivorSelf = SurvivorSelf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.Flashlight
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::Flashlight(class ASurvivorMasterBP_C* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.Flashlight");

	UItemWorker_C_Flashlight_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.MulticastFlashlight
//		Flags  -> ()
// Parameters:
//		class AKillerMasterBP_C*                           Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ASurvivorMasterBP_C*                         Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              StunTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                IndexToRemove                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               KillerFlashed_                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemWorker_C::MulticastFlashlight(class AKillerMasterBP_C* Target, class ASurvivorMasterBP_C* Player, float StunTime, bool Condition, int IndexToRemove, bool KillerFlashed_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.MulticastFlashlight");

	UItemWorker_C_MulticastFlashlight_Params params {};
	params.Target = Target;
	params.Player = Player;
	params.StunTime = StunTime;
	params.Condition = Condition;
	params.IndexToRemove = IndexToRemove;
	params.KillerFlashed_ = KillerFlashed_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ServerFlashlight
//		Flags  -> ()
// Parameters:
//		class AKillerMasterBP_C*                           Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ASurvivorMasterBP_C*                         Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              StunTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                IndexToRemove                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               KillerFlashed_                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemWorker_C::ServerFlashlight(class AKillerMasterBP_C* Target, class ASurvivorMasterBP_C* Player, float StunTime, bool Condition, int IndexToRemove, bool KillerFlashed_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ServerFlashlight");

	UItemWorker_C_ServerFlashlight_Params params {};
	params.Target = Target;
	params.Player = Player;
	params.StunTime = StunTime;
	params.Condition = Condition;
	params.IndexToRemove = IndexToRemove;
	params.KillerFlashed_ = KillerFlashed_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.FlashlightSpotLight
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::FlashlightSpotLight(class ASurvivorMasterBP_C* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.FlashlightSpotLight");

	UItemWorker_C_FlashlightSpotLight_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.EnergyDrink
//		Flags  -> ()
void UItemWorker_C::EnergyDrink()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.EnergyDrink");

	UItemWorker_C_EnergyDrink_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.DropAllItems
//		Flags  -> ()
// Parameters:
//		struct FTransform                                  SpawnLocation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
void UItemWorker_C::DropAllItems(const struct FTransform& SpawnLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.DropAllItems");

	UItemWorker_C_DropAllItems_Params params {};
	params.SpawnLocation = SpawnLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.SpawnPickUpItem
//		Flags  -> ()
// Parameters:
//		struct FItemStructure                              Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTransform                                  SpawnTransform                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		bool                                               Death_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemWorker_C::SpawnPickUpItem(const struct FItemStructure& Item, const struct FTransform& SpawnTransform, bool Death_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.SpawnPickUpItem");

	UItemWorker_C_SpawnPickUpItem_Params params {};
	params.Item = Item;
	params.SpawnTransform = SpawnTransform;
	params.Death_ = Death_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ServerSpawnPickUpItem
//		Flags  -> ()
// Parameters:
//		struct FItemStructure                              Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTransform                                  SpawnLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
void UItemWorker_C::ServerSpawnPickUpItem(const struct FItemStructure& Item, const struct FTransform& SpawnLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ServerSpawnPickUpItem");

	UItemWorker_C_ServerSpawnPickUpItem_Params params {};
	params.Item = Item;
	params.SpawnLocation = SpawnLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.DestroyPickup
//		Flags  -> ()
// Parameters:
//		class AActor*                                      DestroyItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::DestroyPickup(class AActor* DestroyItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.DestroyPickup");

	UItemWorker_C_DestroyPickup_Params params {};
	params.DestroyItem = DestroyItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.DestroyPickupMulticast
//		Flags  -> ()
// Parameters:
//		class AActor*                                      DestroyItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::DestroyPickupMulticast(class AActor* DestroyItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.DestroyPickupMulticast");

	UItemWorker_C_DestroyPickupMulticast_Params params {};
	params.DestroyItem = DestroyItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ToSpawnItem
//		Flags  -> ()
void UItemWorker_C::ToSpawnItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ToSpawnItem");

	UItemWorker_C_ToSpawnItem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.SpawnItemServer
//		Flags  -> ()
// Parameters:
//		class UClass*                                      ItemToBeSpawned                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Index                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               TakeAnim_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FItemStructure                              Slot1                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FItemStructure                              Slot2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FItemStructure                              Slot3                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               OnlySpawnInventory_                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemWorker_C::SpawnItemServer(class UClass* ItemToBeSpawned, class APawn* Pawn, int Index, bool TakeAnim_, const struct FItemStructure& Slot1, const struct FItemStructure& Slot2, const struct FItemStructure& Slot3, bool OnlySpawnInventory_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.SpawnItemServer");

	UItemWorker_C_SpawnItemServer_Params params {};
	params.ItemToBeSpawned = ItemToBeSpawned;
	params.Pawn = Pawn;
	params.Index = Index;
	params.TakeAnim_ = TakeAnim_;
	params.Slot1 = Slot1;
	params.Slot2 = Slot2;
	params.Slot3 = Slot3;
	params.OnlySpawnInventory_ = OnlySpawnInventory_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.SpawnItemMulticast
//		Flags  -> ()
// Parameters:
//		class UClass*                                      Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               TakeAnim_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FItemStructure                              Slot1                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FItemStructure                              Slot2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FItemStructure                              Slot3                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               OnlySpawnInventory_                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemWorker_C::SpawnItemMulticast(class UClass* Item, class APawn* Pawn, int Index, bool TakeAnim_, const struct FItemStructure& Slot1, const struct FItemStructure& Slot2, const struct FItemStructure& Slot3, bool OnlySpawnInventory_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.SpawnItemMulticast");

	UItemWorker_C_SpawnItemMulticast_Params params {};
	params.Item = Item;
	params.Pawn = Pawn;
	params.Index = Index;
	params.TakeAnim_ = TakeAnim_;
	params.Slot1 = Slot1;
	params.Slot2 = Slot2;
	params.Slot3 = Slot3;
	params.OnlySpawnInventory_ = OnlySpawnInventory_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.InvokePickUpItem
//		Flags  -> ()
void UItemWorker_C::InvokePickUpItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.InvokePickUpItem");

	UItemWorker_C_InvokePickUpItem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ItemUsed
//		Flags  -> ()
// Parameters:
//		int                                                IndexToRemove                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::ItemUsed(int IndexToRemove)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ItemUsed");

	UItemWorker_C_ItemUsed_Params params {};
	params.IndexToRemove = IndexToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.HideItem
//		Flags  -> ()
void UItemWorker_C::HideItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.HideItem");

	UItemWorker_C_HideItem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ShowItem
//		Flags  -> ()
void UItemWorker_C::ShowItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ShowItem");

	UItemWorker_C_ShowItem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.InvokeFirstSlot
//		Flags  -> ()
void UItemWorker_C::InvokeFirstSlot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.InvokeFirstSlot");

	UItemWorker_C_InvokeFirstSlot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.InvokeSecondSlot
//		Flags  -> ()
void UItemWorker_C::InvokeSecondSlot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.InvokeSecondSlot");

	UItemWorker_C_InvokeSecondSlot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.InvokeThirdSlot
//		Flags  -> ()
void UItemWorker_C::InvokeThirdSlot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.InvokeThirdSlot");

	UItemWorker_C_InvokeThirdSlot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ItemHide
//		Flags  -> ()
void UItemWorker_C::ItemHide()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ItemHide");

	UItemWorker_C_ItemHide_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ItemHideServer
//		Flags  -> ()
void UItemWorker_C::ItemHideServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ItemHideServer");

	UItemWorker_C_ItemHideServer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ItemHideMulticast
//		Flags  -> ()
void UItemWorker_C::ItemHideMulticast()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ItemHideMulticast");

	UItemWorker_C_ItemHideMulticast_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ItemsImpulse
//		Flags  -> ()
void UItemWorker_C::ItemsImpulse()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ItemsImpulse");

	UItemWorker_C_ItemsImpulse_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.DropItem
//		Flags  -> ()
// Parameters:
//		int                                                ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTransform                                  DropPosition                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FItemStructure                              Inventory                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::DropItem(int ItemIndex, const struct FTransform& DropPosition, const struct FItemStructure& Inventory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.DropItem");

	UItemWorker_C_DropItem_Params params {};
	params.ItemIndex = ItemIndex;
	params.DropPosition = DropPosition;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.LocalDropItem
//		Flags  -> ()
// Parameters:
//		bool                                               FullInventoryAndDrop                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemWorker_C::LocalDropItem(bool FullInventoryAndDrop)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.LocalDropItem");

	UItemWorker_C_LocalDropItem_Params params {};
	params.FullInventoryAndDrop = FullInventoryAndDrop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.HideItemHand
//		Flags  -> ()
void UItemWorker_C::HideItemHand()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.HideItemHand");

	UItemWorker_C_HideItemHand_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ServerEnergyDrink
//		Flags  -> ()
// Parameters:
//		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               CD_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                IndexToRemove                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::ServerEnergyDrink(float Time, bool CD_, int IndexToRemove)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ServerEnergyDrink");

	UItemWorker_C_ServerEnergyDrink_Params params {};
	params.Time = Time;
	params.CD_ = CD_;
	params.IndexToRemove = IndexToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.MulticastEnergyDrink
//		Flags  -> ()
// Parameters:
//		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               CD_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                IndexToRemove                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::MulticastEnergyDrink(float Time, bool CD_, int IndexToRemove)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.MulticastEnergyDrink");

	UItemWorker_C_MulticastEnergyDrink_Params params {};
	params.Time = Time;
	params.CD_ = CD_;
	params.IndexToRemove = IndexToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.InvulnerabilityPotion
//		Flags  -> ()
void UItemWorker_C::InvulnerabilityPotion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.InvulnerabilityPotion");

	UItemWorker_C_InvulnerabilityPotion_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ServerInvulnerabilityPotion
//		Flags  -> ()
// Parameters:
//		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               CD_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                IndexToRemove                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::ServerInvulnerabilityPotion(float Time, bool CD_, int IndexToRemove)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ServerInvulnerabilityPotion");

	UItemWorker_C_ServerInvulnerabilityPotion_Params params {};
	params.Time = Time;
	params.CD_ = CD_;
	params.IndexToRemove = IndexToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.MulticastInvulnerabilityPotion
//		Flags  -> ()
// Parameters:
//		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               CD_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                IndexToRemove                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::MulticastInvulnerabilityPotion(float Time, bool CD_, int IndexToRemove)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.MulticastInvulnerabilityPotion");

	UItemWorker_C_MulticastInvulnerabilityPotion_Params params {};
	params.Time = Time;
	params.CD_ = CD_;
	params.IndexToRemove = IndexToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.GetMaterialsAndCreateDynMaterials
//		Flags  -> ()
void UItemWorker_C::GetMaterialsAndCreateDynMaterials()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.GetMaterialsAndCreateDynMaterials");

	UItemWorker_C_GetMaterialsAndCreateDynMaterials_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.InvisUpdate
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::InvisUpdate(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.InvisUpdate");

	UItemWorker_C_InvisUpdate_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.AstralOffServ
//		Flags  -> ()
void UItemWorker_C::AstralOffServ()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.AstralOffServ");

	UItemWorker_C_AstralOffServ_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.AstralOffMulti
//		Flags  -> ()
void UItemWorker_C::AstralOffMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.AstralOffMulti");

	UItemWorker_C_AstralOffMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.AstralOffLocal
//		Flags  -> ()
void UItemWorker_C::AstralOffLocal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.AstralOffLocal");

	UItemWorker_C_AstralOffLocal_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.AstralOnLocal
//		Flags  -> ()
// Parameters:
//		float                                              TimerInvis                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               CD_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemWorker_C::AstralOnLocal(float TimerInvis, bool CD_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.AstralOnLocal");

	UItemWorker_C_AstralOnLocal_Params params {};
	params.TimerInvis = TimerInvis;
	params.CD_ = CD_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.AstralOnServer
//		Flags  -> ()
// Parameters:
//		float                                              TimerInvis                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               CD_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                IndexToRemove                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::AstralOnServer(float TimerInvis, bool CD_, int IndexToRemove)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.AstralOnServer");

	UItemWorker_C_AstralOnServer_Params params {};
	params.TimerInvis = TimerInvis;
	params.CD_ = CD_;
	params.IndexToRemove = IndexToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.AstralOnMulti
//		Flags  -> ()
// Parameters:
//		float                                              TimerInvis                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               CD_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                IndexToRemove                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::AstralOnMulti(float TimerInvis, bool CD_, int IndexToRemove)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.AstralOnMulti");

	UItemWorker_C_AstralOnMulti_Params params {};
	params.TimerInvis = TimerInvis;
	params.CD_ = CD_;
	params.IndexToRemove = IndexToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.KeymasterBook
//		Flags  -> ()
void UItemWorker_C::KeymasterBook()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.KeymasterBook");

	UItemWorker_C_KeymasterBook_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ItemDestroyedLootboxShopServer
//		Flags  -> ()
// Parameters:
//		class ALootboxShop_C*                              Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::ItemDestroyedLootboxShopServer(class ALootboxShop_C* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ItemDestroyedLootboxShopServer");

	UItemWorker_C_ItemDestroyedLootboxShopServer_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ItemDestroyedLootboxShopMulticast
//		Flags  -> ()
// Parameters:
//		class ALootboxShop_C*                              Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::ItemDestroyedLootboxShopMulticast(class ALootboxShop_C* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ItemDestroyedLootboxShopMulticast");

	UItemWorker_C_ItemDestroyedLootboxShopMulticast_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.Picklock
//		Flags  -> ()
void UItemWorker_C::Picklock()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.Picklock");

	UItemWorker_C_Picklock_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.PicklockSoundServer
//		Flags  -> ()
// Parameters:
//		bool                                               Loop_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Success_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemWorker_C::PicklockSoundServer(bool Loop_, bool Success_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.PicklockSoundServer");

	UItemWorker_C_PicklockSoundServer_Params params {};
	params.Loop_ = Loop_;
	params.Success_ = Success_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.PicklockSoundMulticast
//		Flags  -> ()
// Parameters:
//		bool                                               Loop_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Success_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemWorker_C::PicklockSoundMulticast(bool Loop_, bool Success_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.PicklockSoundMulticast");

	UItemWorker_C_PicklockSoundMulticast_Params params {};
	params.Loop_ = Loop_;
	params.Success_ = Success_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.CheckPicklock
//		Flags  -> ()
void UItemWorker_C::CheckPicklock()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.CheckPicklock");

	UItemWorker_C_CheckPicklock_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.PicklockSound
//		Flags  -> ()
// Parameters:
//		bool                                               Loop_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Success_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemWorker_C::PicklockSound(bool Loop_, bool Success_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.PicklockSound");

	UItemWorker_C_PicklockSound_Params params {};
	params.Loop_ = Loop_;
	params.Success_ = Success_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.SkillCheckMain
//		Flags  -> ()
void UItemWorker_C::SkillCheckMain()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.SkillCheckMain");

	UItemWorker_C_SkillCheckMain_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.CheckActiveSkillCheck
//		Flags  -> ()
void UItemWorker_C::CheckActiveSkillCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.CheckActiveSkillCheck");

	UItemWorker_C_CheckActiveSkillCheck_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.CheckPressed
//		Flags  -> ()
void UItemWorker_C::CheckPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.CheckPressed");

	UItemWorker_C_CheckPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.FailedServer
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::FailedServer(class AActor* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.FailedServer");

	UItemWorker_C_FailedServer_Params params {};
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.Level1Server
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::Level1Server(class AActor* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.Level1Server");

	UItemWorker_C_Level1Server_Params params {};
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.Level2Server
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::Level2Server(class AActor* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.Level2Server");

	UItemWorker_C_Level2Server_Params params {};
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.Level3Server
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::Level3Server(class AActor* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.Level3Server");

	UItemWorker_C_Level3Server_Params params {};
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.Level4Server
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::Level4Server(class AActor* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.Level4Server");

	UItemWorker_C_Level4Server_Params params {};
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.FailedMulticast
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::FailedMulticast(class AActor* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.FailedMulticast");

	UItemWorker_C_FailedMulticast_Params params {};
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.Level1Multicast
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::Level1Multicast(class AActor* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.Level1Multicast");

	UItemWorker_C_Level1Multicast_Params params {};
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.Level2Multicast
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::Level2Multicast(class AActor* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.Level2Multicast");

	UItemWorker_C_Level2Multicast_Params params {};
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.Level3Multicast
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::Level3Multicast(class AActor* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.Level3Multicast");

	UItemWorker_C_Level3Multicast_Params params {};
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.Level4Multicast
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::Level4Multicast(class AActor* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.Level4Multicast");

	UItemWorker_C_Level4Multicast_Params params {};
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.PicklockUsed
//		Flags  -> ()
void UItemWorker_C::PicklockUsed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.PicklockUsed");

	UItemWorker_C_PicklockUsed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.PicklockEnd
//		Flags  -> ()
void UItemWorker_C::PicklockEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.PicklockEnd");

	UItemWorker_C_PicklockEnd_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.PicklockShowText
//		Flags  -> ()
void UItemWorker_C::PicklockShowText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.PicklockShowText");

	UItemWorker_C_PicklockShowText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.PicklockEndServer
//		Flags  -> ()
void UItemWorker_C::PicklockEndServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.PicklockEndServer");

	UItemWorker_C_PicklockEndServer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.PicklockEndMulticast
//		Flags  -> ()
void UItemWorker_C::PicklockEndMulticast()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.PicklockEndMulticast");

	UItemWorker_C_PicklockEndMulticast_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.AstralSoundLocal
//		Flags  -> ()
// Parameters:
//		bool                                               Loop_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               In_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemWorker_C::AstralSoundLocal(bool Loop_, bool In_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.AstralSoundLocal");

	UItemWorker_C_AstralSoundLocal_Params params {};
	params.Loop_ = Loop_;
	params.In_ = In_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.AstralSoundServer
//		Flags  -> ()
// Parameters:
//		bool                                               Loop_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               In_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemWorker_C::AstralSoundServer(bool Loop_, bool In_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.AstralSoundServer");

	UItemWorker_C_AstralSoundServer_Params params {};
	params.Loop_ = Loop_;
	params.In_ = In_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.AstralSoundMulticast
//		Flags  -> ()
// Parameters:
//		bool                                               Loop_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               In_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemWorker_C::AstralSoundMulticast(bool Loop_, bool In_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.AstralSoundMulticast");

	UItemWorker_C_AstralSoundMulticast_Params params {};
	params.Loop_ = Loop_;
	params.In_ = In_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.SurvAstralSkill
//		Flags  -> ()
// Parameters:
//		float                                              TimerInvis                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::SurvAstralSkill(float TimerInvis)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.SurvAstralSkill");

	UItemWorker_C_SurvAstralSkill_Params params {};
	params.TimerInvis = TimerInvis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.SurvClassAddItem
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SurvClass_ESurvClass>                  SurvClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::SurvClassAddItem(TEnumAsByte<SurvClass_ESurvClass> SurvClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.SurvClassAddItem");

	UItemWorker_C_SurvClassAddItem_Params params {};
	params.SurvClass = SurvClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.SpawnClassItem
//		Flags  -> ()
// Parameters:
//		bool                                               OnlySpawnInventory_                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemWorker_C::SpawnClassItem(bool OnlySpawnInventory_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.SpawnClassItem");

	UItemWorker_C_SpawnClassItem_Params params {};
	params.OnlySpawnInventory_ = OnlySpawnInventory_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.HideTexts
//		Flags  -> ()
void UItemWorker_C::HideTexts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.HideTexts");

	UItemWorker_C_HideTexts_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.DestroyItemMulticast
//		Flags  -> ()
// Parameters:
//		int                                                IndexToRemove                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::DestroyItemMulticast(int IndexToRemove)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.DestroyItemMulticast");

	UItemWorker_C_DestroyItemMulticast_Params params {};
	params.IndexToRemove = IndexToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ItemDropped
//		Flags  -> ()
void UItemWorker_C::ItemDropped()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ItemDropped");

	UItemWorker_C_ItemDropped_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ItemDestroyLootboxServ
//		Flags  -> ()
// Parameters:
//		class AActor*                                      NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::ItemDestroyLootboxServ(class AActor* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ItemDestroyLootboxServ");

	UItemWorker_C_ItemDestroyLootboxServ_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ItemDestroyLootboxMulti
//		Flags  -> ()
// Parameters:
//		class AActor*                                      NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::ItemDestroyLootboxMulti(class AActor* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ItemDestroyLootboxMulti");

	UItemWorker_C_ItemDestroyLootboxMulti_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.HideItemText
//		Flags  -> ()
void UItemWorker_C::HideItemText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.HideItemText");

	UItemWorker_C_HideItemText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ChangeItemPosition
//		Flags  -> ()
// Parameters:
//		bool                                               FPP_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemWorker_C::ChangeItemPosition(bool FPP_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ChangeItemPosition");

	UItemWorker_C_ChangeItemPosition_Params params {};
	params.FPP_ = FPP_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.HealpackChargesAdd
//		Flags  -> ()
// Parameters:
//		int                                                Charges                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::HealpackChargesAdd(int Charges)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.HealpackChargesAdd");

	UItemWorker_C_HealpackChargesAdd_Params params {};
	params.Charges = Charges;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.PicklockChargesAdd
//		Flags  -> ()
// Parameters:
//		int                                                Charges                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::PicklockChargesAdd(int Charges)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.PicklockChargesAdd");

	UItemWorker_C_PicklockChargesAdd_Params params {};
	params.Charges = Charges;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.StopProgressChairServ
//		Flags  -> ()
// Parameters:
//		bool                                               Pause_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class AHypnoChairBP_C*                             Chair                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::StopProgressChairServ(bool Pause_, class AHypnoChairBP_C* Chair)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.StopProgressChairServ");

	UItemWorker_C_StopProgressChairServ_Params params {};
	params.Pause_ = Pause_;
	params.Chair = Chair;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.StopProgressChairMulti
//		Flags  -> ()
// Parameters:
//		bool                                               Pause_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class AHypnoChairBP_C*                             Chair                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::StopProgressChairMulti(bool Pause_, class AHypnoChairBP_C* Chair)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.StopProgressChairMulti");

	UItemWorker_C_StopProgressChairMulti_Params params {};
	params.Pause_ = Pause_;
	params.Chair = Chair;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.CheckKillingTimeChair
//		Flags  -> ()
void UItemWorker_C::CheckKillingTimeChair()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.CheckKillingTimeChair");

	UItemWorker_C_CheckKillingTimeChair_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.PicklockHideText
//		Flags  -> ()
void UItemWorker_C::PicklockHideText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.PicklockHideText");

	UItemWorker_C_PicklockHideText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.OtherSurvHealLerp
//		Flags  -> ()
void UItemWorker_C::OtherSurvHealLerp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.OtherSurvHealLerp");

	UItemWorker_C_OtherSurvHealLerp_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.FlashlightCheck
//		Flags  -> ()
void UItemWorker_C::FlashlightCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.FlashlightCheck");

	UItemWorker_C_FlashlightCheck_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ChrisBoost
//		Flags  -> ()
// Parameters:
//		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::ChrisBoost(float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ChrisBoost");

	UItemWorker_C_ChrisBoost_Params params {};
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.InvokeNextItem
//		Flags  -> ()
void UItemWorker_C::InvokeNextItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.InvokeNextItem");

	UItemWorker_C_InvokeNextItem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.InvokePrevItem
//		Flags  -> ()
void UItemWorker_C::InvokePrevItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.InvokePrevItem");

	UItemWorker_C_InvokePrevItem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ActivateSlot
//		Flags  -> ()
// Parameters:
//		int                                                SlotIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::ActivateSlot(int SlotIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ActivateSlot");

	UItemWorker_C_ActivateSlot_Params params {};
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.DeactivateSlot
//		Flags  -> ()
void UItemWorker_C::DeactivateSlot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.DeactivateSlot");

	UItemWorker_C_DeactivateSlot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.CreateItemMesh
//		Flags  -> ()
// Parameters:
//		class UClass*                                      Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Destroy_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Delay_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemWorker_C::CreateItemMesh(class UClass* Class, bool Destroy_, bool Delay_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.CreateItemMesh");

	UItemWorker_C_CreateItemMesh_Params params {};
	params.Class = Class;
	params.Destroy_ = Destroy_;
	params.Delay_ = Delay_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.DropItemSlot
//		Flags  -> ()
// Parameters:
//		int                                                ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::DropItemSlot(int ItemId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.DropItemSlot");

	UItemWorker_C_DropItemSlot_Params params {};
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ServerSound
//		Flags  -> ()
// Parameters:
//		bool                                               Play_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemWorker_C::ServerSound(bool Play_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ServerSound");

	UItemWorker_C_ServerSound_Params params {};
	params.Play_ = Play_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.MulticastSound
//		Flags  -> ()
// Parameters:
//		bool                                               Play_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemWorker_C::MulticastSound(bool Play_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.MulticastSound");

	UItemWorker_C_MulticastSound_Params params {};
	params.Play_ = Play_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.MulticastSoundOnce
//		Flags  -> ()
void UItemWorker_C::MulticastSoundOnce()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.MulticastSoundOnce");

	UItemWorker_C_MulticastSoundOnce_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ServerSoundOnce
//		Flags  -> ()
void UItemWorker_C::ServerSoundOnce()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ServerSoundOnce");

	UItemWorker_C_ServerSoundOnce_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.KillerDropItem
//		Flags  -> ()
// Parameters:
//		bool                                               LastLvl_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemWorker_C::KillerDropItem(bool LastLvl_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.KillerDropItem");

	UItemWorker_C_KillerDropItem_Params params {};
	params.LastLvl_ = LastLvl_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.AddShield
//		Flags  -> ()
void UItemWorker_C::AddShield()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.AddShield");

	UItemWorker_C_AddShield_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.brokeShield
//		Flags  -> ()
void UItemWorker_C::brokeShield()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.brokeShield");

	UItemWorker_C_brokeShield_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.AddShield_MULTI
//		Flags  -> ()
void UItemWorker_C::AddShield_MULTI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.AddShield_MULTI");

	UItemWorker_C_AddShield_MULTI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.brokeShield_MULTI
//		Flags  -> ()
void UItemWorker_C::brokeShield_MULTI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.brokeShield_MULTI");

	UItemWorker_C_brokeShield_MULTI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.AddTotemOfEndurace
//		Flags  -> ()
void UItemWorker_C::AddTotemOfEndurace()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.AddTotemOfEndurace");

	UItemWorker_C_AddTotemOfEndurace_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.AddTottemOfEndurance_MULTI
//		Flags  -> ()
void UItemWorker_C::AddTottemOfEndurance_MULTI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.AddTottemOfEndurance_MULTI");

	UItemWorker_C_AddTottemOfEndurance_MULTI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.BrokeTotemOfEndurance_S
//		Flags  -> ()
void UItemWorker_C::BrokeTotemOfEndurance_S()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.BrokeTotemOfEndurance_S");

	UItemWorker_C_BrokeTotemOfEndurance_S_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.BrokeTotemOfEndurance
//		Flags  -> ()
void UItemWorker_C::BrokeTotemOfEndurance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.BrokeTotemOfEndurance");

	UItemWorker_C_BrokeTotemOfEndurance_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.SetTotemOfBraveryS
//		Flags  -> ()
void UItemWorker_C::SetTotemOfBraveryS()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.SetTotemOfBraveryS");

	UItemWorker_C_SetTotemOfBraveryS_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.SetTotemOfBravery
//		Flags  -> ()
void UItemWorker_C::SetTotemOfBravery()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.SetTotemOfBravery");

	UItemWorker_C_SetTotemOfBravery_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.UseTotemOfBravery
//		Flags  -> ()
void UItemWorker_C::UseTotemOfBravery()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.UseTotemOfBravery");

	UItemWorker_C_UseTotemOfBravery_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.UseTotemOfBravery_MULTI
//		Flags  -> ()
void UItemWorker_C::UseTotemOfBravery_MULTI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.UseTotemOfBravery_MULTI");

	UItemWorker_C_UseTotemOfBravery_MULTI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.UseTotemOfConcentration
//		Flags  -> ()
void UItemWorker_C::UseTotemOfConcentration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.UseTotemOfConcentration");

	UItemWorker_C_UseTotemOfConcentration_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.SetTotemOfConcentration
//		Flags  -> ()
void UItemWorker_C::SetTotemOfConcentration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.SetTotemOfConcentration");

	UItemWorker_C_SetTotemOfConcentration_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.SetTotemOfConcentration_MULTI
//		Flags  -> ()
void UItemWorker_C::SetTotemOfConcentration_MULTI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.SetTotemOfConcentration_MULTI");

	UItemWorker_C_SetTotemOfConcentration_MULTI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.UseTotemOfConcentrationS
//		Flags  -> ()
void UItemWorker_C::UseTotemOfConcentrationS()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.UseTotemOfConcentrationS");

	UItemWorker_C_UseTotemOfConcentrationS_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.UseTotemOfFriendship_M
//		Flags  -> ()
// Parameters:
//		class AActor*                                      SurvOnChair                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::UseTotemOfFriendship_M(class AActor* SurvOnChair)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.UseTotemOfFriendship_M");

	UItemWorker_C_UseTotemOfFriendship_M_Params params {};
	params.SurvOnChair = SurvOnChair;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.UseTotemOfFriendship
//		Flags  -> ()
// Parameters:
//		class AActor*                                      SurvOnChair                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::UseTotemOfFriendship(class AActor* SurvOnChair)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.UseTotemOfFriendship");

	UItemWorker_C_UseTotemOfFriendship_Params params {};
	params.SurvOnChair = SurvOnChair;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.SetTotemOfFriendship
//		Flags  -> ()
void UItemWorker_C::SetTotemOfFriendship()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.SetTotemOfFriendship");

	UItemWorker_C_SetTotemOfFriendship_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.SetTotemOfFriendship_M
//		Flags  -> ()
// Parameters:
//		bool                                               IsTotemOfFriemdship                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UItemWorker_C::SetTotemOfFriendship_M(bool IsTotemOfFriemdship)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.SetTotemOfFriendship_M");

	UItemWorker_C_SetTotemOfFriendship_M_Params params {};
	params.IsTotemOfFriemdship = IsTotemOfFriemdship;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.UsePainkiller
//		Flags  -> ()
void UItemWorker_C::UsePainkiller()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.UsePainkiller");

	UItemWorker_C_UsePainkiller_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.PainkillerAddHealth
//		Flags  -> ()
void UItemWorker_C::PainkillerAddHealth()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.PainkillerAddHealth");

	UItemWorker_C_PainkillerAddHealth_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.RemovePainkiller
//		Flags  -> ()
void UItemWorker_C::RemovePainkiller()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.RemovePainkiller");

	UItemWorker_C_RemovePainkiller_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.SetTotemOfGravity
//		Flags  -> ()
void UItemWorker_C::SetTotemOfGravity()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.SetTotemOfGravity");

	UItemWorker_C_SetTotemOfGravity_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.TotemOfGrabityM
//		Flags  -> ()
void UItemWorker_C::TotemOfGrabityM()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.TotemOfGrabityM");

	UItemWorker_C_TotemOfGrabityM_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.UseTotemOfGravity
//		Flags  -> ()
void UItemWorker_C::UseTotemOfGravity()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.UseTotemOfGravity");

	UItemWorker_C_UseTotemOfGravity_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.UseTotemOfGravity_M
//		Flags  -> ()
void UItemWorker_C::UseTotemOfGravity_M()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.UseTotemOfGravity_M");

	UItemWorker_C_UseTotemOfGravity_M_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.FindHealthPack
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Survivor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::FindHealthPack(class ASurvivorMasterBP_C* Survivor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.FindHealthPack");

	UItemWorker_C_FindHealthPack_Params params {};
	params.Survivor = Survivor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.BrokeTotemsBravery
//		Flags  -> ()
void UItemWorker_C::BrokeTotemsBravery()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.BrokeTotemsBravery");

	UItemWorker_C_BrokeTotemsBravery_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.BrokeTotemOfCon
//		Flags  -> ()
void UItemWorker_C::BrokeTotemOfCon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.BrokeTotemOfCon");

	UItemWorker_C_BrokeTotemOfCon_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.BrokeTotemOfFreind
//		Flags  -> ()
void UItemWorker_C::BrokeTotemOfFreind()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.BrokeTotemOfFreind");

	UItemWorker_C_BrokeTotemOfFreind_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.BrokeTotemOfGravity
//		Flags  -> ()
void UItemWorker_C::BrokeTotemOfGravity()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.BrokeTotemOfGravity");

	UItemWorker_C_BrokeTotemOfGravity_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ThrowGlueGrenade
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<Rarity_ERarity>                        Rarity                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTransform                                  SpawnTransform                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, UObjectWrapper)
//		struct FVector                                     NewVel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::ThrowGlueGrenade(TEnumAsByte<Rarity_ERarity> Rarity, const struct FTransform& SpawnTransform, const struct FVector& NewVel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ThrowGlueGrenade");

	UItemWorker_C_ThrowGlueGrenade_Params params {};
	params.Rarity = Rarity;
	params.SpawnTransform = SpawnTransform;
	params.NewVel = NewVel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ThrowGlueSERV
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<Rarity_ERarity>                        Rarity                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTransform                                  SpawnTransform                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, UObjectWrapper)
//		struct FVector                                     NewVel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::ThrowGlueSERV(TEnumAsByte<Rarity_ERarity> Rarity, const struct FTransform& SpawnTransform, const struct FVector& NewVel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ThrowGlueSERV");

	UItemWorker_C_ThrowGlueSERV_Params params {};
	params.Rarity = Rarity;
	params.SpawnTransform = SpawnTransform;
	params.NewVel = NewVel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ThrowYellowGrenade
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<Rarity_ERarity>                        Rarity                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTransform                                  SpawnTransform                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, UObjectWrapper)
//		struct FVector                                     NewVel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::ThrowYellowGrenade(TEnumAsByte<Rarity_ERarity> Rarity, const struct FTransform& SpawnTransform, const struct FVector& NewVel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ThrowYellowGrenade");

	UItemWorker_C_ThrowYellowGrenade_Params params {};
	params.Rarity = Rarity;
	params.SpawnTransform = SpawnTransform;
	params.NewVel = NewVel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ThrowYellowGrenadeSERV
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<Rarity_ERarity>                        Rarity                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTransform                                  SpawnTransform                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, UObjectWrapper)
//		struct FVector                                     NewVel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::ThrowYellowGrenadeSERV(TEnumAsByte<Rarity_ERarity> Rarity, const struct FTransform& SpawnTransform, const struct FVector& NewVel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ThrowYellowGrenadeSERV");

	UItemWorker_C_ThrowYellowGrenadeSERV_Params params {};
	params.Rarity = Rarity;
	params.SpawnTransform = SpawnTransform;
	params.NewVel = NewVel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.Takeanim
//		Flags  -> ()
void UItemWorker_C::Takeanim()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.Takeanim");

	UItemWorker_C_Takeanim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.TakeAnim_SERV
//		Flags  -> ()
void UItemWorker_C::TakeAnim_SERV()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.TakeAnim_SERV");

	UItemWorker_C_TakeAnim_SERV_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.GravityTime
//		Flags  -> ()
void UItemWorker_C::GravityTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.GravityTime");

	UItemWorker_C_GravityTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.TimerTotemOfConcentration
//		Flags  -> ()
void UItemWorker_C::TimerTotemOfConcentration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.TimerTotemOfConcentration");

	UItemWorker_C_TimerTotemOfConcentration_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.FriendShipTimer
//		Flags  -> ()
void UItemWorker_C::FriendShipTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.FriendShipTimer");

	UItemWorker_C_FriendShipTimer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.BraveryTimer
//		Flags  -> ()
void UItemWorker_C::BraveryTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.BraveryTimer");

	UItemWorker_C_BraveryTimer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.enduranceTimer
//		Flags  -> ()
void UItemWorker_C::enduranceTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.enduranceTimer");

	UItemWorker_C_enduranceTimer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.DeleteWidget
//		Flags  -> ()
// Parameters:
//		struct FName                                       InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::DeleteWidget(const struct FName& InName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.DeleteWidget");

	UItemWorker_C_DeleteWidget_Params params {};
	params.InName = InName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ThrowGrenade
//		Flags  -> ()
// Parameters:
//		bool                                               IsGlue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TEnumAsByte<Rarity_ERarity>                        Rarity                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::ThrowGrenade(bool IsGlue, TEnumAsByte<Rarity_ERarity> Rarity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ThrowGrenade");

	UItemWorker_C_ThrowGrenade_Params params {};
	params.IsGlue = IsGlue;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ActivateTotems
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<ItemType_EItemType>                    Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      DestroyItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::ActivateTotems(TEnumAsByte<ItemType_EItemType> Selection, class AActor* DestroyItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ActivateTotems");

	UItemWorker_C_ActivateTotems_Params params {};
	params.Selection = Selection;
	params.DestroyItem = DestroyItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ActivateTools
//		Flags  -> ()
// Parameters:
//		int                                                Charges                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::ActivateTools(int Charges)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ActivateTools");

	UItemWorker_C_ActivateTools_Params params {};
	params.Charges = Charges;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ActivateToolsM
//		Flags  -> ()
// Parameters:
//		int                                                Charges                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::ActivateToolsM(int Charges)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ActivateToolsM");

	UItemWorker_C_ActivateToolsM_Params params {};
	params.Charges = Charges;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ActivatedToolTimer
//		Flags  -> ()
void UItemWorker_C::ActivatedToolTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ActivatedToolTimer");

	UItemWorker_C_ActivatedToolTimer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.PainkillerAnim
//		Flags  -> ()
void UItemWorker_C::PainkillerAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.PainkillerAnim");

	UItemWorker_C_PainkillerAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.DropShield
//		Flags  -> ()
void UItemWorker_C::DropShield()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.DropShield");

	UItemWorker_C_DropShield_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.totemvoice
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::totemvoice(class ASurvivorMasterBP_C* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.totemvoice");

	UItemWorker_C_totemvoice_Params params {};
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.3sec
//		Flags  -> ()
void UItemWorker_C::_3sec()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.3sec");

	UItemWorker_C__3sec_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.BrokeTotemEndurance
//		Flags  -> ()
void UItemWorker_C::BrokeTotemEndurance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.BrokeTotemEndurance");

	UItemWorker_C_BrokeTotemEndurance_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemWorker.ItemWorker_C.ExecuteUbergraph_ItemWorker
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UItemWorker_C::ExecuteUbergraph_ItemWorker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemWorker.ItemWorker_C.ExecuteUbergraph_ItemWorker");

	UItemWorker_C_ExecuteUbergraph_ItemWorker_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
