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
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.OnRep_IncreaseRare
//		Flags  -> ()
void ALootBox_Totems_C::OnRep_IncreaseRare()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.OnRep_IncreaseRare");

	ALootBox_Totems_C_OnRep_IncreaseRare_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.CoinAngle
//		Flags  -> ()
// Parameters:
//		float                                              X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Z                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootBox_Totems_C::CoinAngle(float* X, float* Y, float* Z)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.CoinAngle");

	ALootBox_Totems_C_CoinAngle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
	if (Z != nullptr)
		*Z = params.Z;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.T_OpenLootbox__FinishedFunc
//		Flags  -> ()
void ALootBox_Totems_C::T_OpenLootbox__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.T_OpenLootbox__FinishedFunc");

	ALootBox_Totems_C_T_OpenLootbox__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.T_OpenLootbox__UpdateFunc
//		Flags  -> ()
void ALootBox_Totems_C::T_OpenLootbox__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.T_OpenLootbox__UpdateFunc");

	ALootBox_Totems_C_T_OpenLootbox__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.T_CloseLootbox__FinishedFunc
//		Flags  -> ()
void ALootBox_Totems_C::T_CloseLootbox__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.T_CloseLootbox__FinishedFunc");

	ALootBox_Totems_C_T_CloseLootbox__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.T_CloseLootbox__UpdateFunc
//		Flags  -> ()
void ALootBox_Totems_C::T_CloseLootbox__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.T_CloseLootbox__UpdateFunc");

	ALootBox_Totems_C_T_CloseLootbox__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.T_NotEnoughMoney__FinishedFunc
//		Flags  -> ()
void ALootBox_Totems_C::T_NotEnoughMoney__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.T_NotEnoughMoney__FinishedFunc");

	ALootBox_Totems_C_T_NotEnoughMoney__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.T_NotEnoughMoney__UpdateFunc
//		Flags  -> ()
void ALootBox_Totems_C::T_NotEnoughMoney__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.T_NotEnoughMoney__UpdateFunc");

	ALootBox_Totems_C_T_NotEnoughMoney__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.T_InsideShine__FinishedFunc
//		Flags  -> ()
void ALootBox_Totems_C::T_InsideShine__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.T_InsideShine__FinishedFunc");

	ALootBox_Totems_C_T_InsideShine__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.T_InsideShine__UpdateFunc
//		Flags  -> ()
void ALootBox_Totems_C::T_InsideShine__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.T_InsideShine__UpdateFunc");

	ALootBox_Totems_C_T_InsideShine__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.T_LightPulse__FinishedFunc
//		Flags  -> ()
void ALootBox_Totems_C::T_LightPulse__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.T_LightPulse__FinishedFunc");

	ALootBox_Totems_C_T_LightPulse__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.T_LightPulse__UpdateFunc
//		Flags  -> ()
void ALootBox_Totems_C::T_LightPulse__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.T_LightPulse__UpdateFunc");

	ALootBox_Totems_C_T_LightPulse__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.RollItem
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<LootBoxRollType_ELootBoxRollType>      RollType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootBox_Totems_C::RollItem(TEnumAsByte<LootBoxRollType_ELootBoxRollType> RollType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.RollItem");

	ALootBox_Totems_C_RollItem_Params params {};
	params.RollType = RollType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.OpenLootBox
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<LootBoxRollType_ELootBoxRollType>      RollType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Nickname                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALootBox_Totems_C::OpenLootBox(TEnumAsByte<LootBoxRollType_ELootBoxRollType> RollType, const struct FString& Nickname)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.OpenLootBox");

	ALootBox_Totems_C_OpenLootBox_Params params {};
	params.RollType = RollType;
	params.Nickname = Nickname;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.CloseLootBox
//		Flags  -> ()
void ALootBox_Totems_C::CloseLootBox()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.CloseLootBox");

	ALootBox_Totems_C_CloseLootBox_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.OpenLootboxMulti
//		Flags  -> ()
// Parameters:
//		struct FString                                     Nickname                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALootBox_Totems_C::OpenLootboxMulti(const struct FString& Nickname)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.OpenLootboxMulti");

	ALootBox_Totems_C_OpenLootboxMulti_Params params {};
	params.Nickname = Nickname;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.Spawner
//		Flags  -> ()
// Parameters:
//		class UClass*                                      NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTransform                                  NewParam2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FString                                     NewParam3                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALootBox_Totems_C::Spawner(class UClass* NewParam, const struct FTransform& NewParam2, const struct FString& NewParam3)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.Spawner");

	ALootBox_Totems_C_Spawner_Params params {};
	params.NewParam = NewParam;
	params.NewParam2 = NewParam2;
	params.NewParam3 = NewParam3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.DestroyItemLootbox
//		Flags  -> ()
void ALootBox_Totems_C::DestroyItemLootbox()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.DestroyItemLootbox");

	ALootBox_Totems_C_DestroyItemLootbox_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.SpawnerMulti
//		Flags  -> ()
// Parameters:
//		class AActor*                                      NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootBox_Totems_C::SpawnerMulti(class AActor* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.SpawnerMulti");

	ALootBox_Totems_C_SpawnerMulti_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.LootboxNotEnough
//		Flags  -> ()
void ALootBox_Totems_C::LootboxNotEnough()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.LootboxNotEnough");

	ALootBox_Totems_C_LootboxNotEnough_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.LootboxNotEnoughMulti
//		Flags  -> ()
void ALootBox_Totems_C::LootboxNotEnoughMulti()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.LootboxNotEnoughMulti");

	ALootBox_Totems_C_LootboxNotEnoughMulti_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.SpawnItem
//		Flags  -> ()
// Parameters:
//		struct FString                                     Nickname                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALootBox_Totems_C::SpawnItem(const struct FString& Nickname)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.SpawnItem");

	ALootBox_Totems_C_SpawnItem_Params params {};
	params.Nickname = Nickname;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.ColorInside
//		Flags  -> ()
// Parameters:
//		struct FString                                     Rarity                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               NotFound_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALootBox_Totems_C::ColorInside(const struct FString& Rarity, bool NotFound_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.ColorInside");

	ALootBox_Totems_C_ColorInside_Params params {};
	params.Rarity = Rarity;
	params.NotFound_ = NotFound_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.InsideShine
//		Flags  -> ()
void ALootBox_Totems_C::InsideShine()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.InsideShine");

	ALootBox_Totems_C_InsideShine_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.Rendering
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALootBox_Totems_C::Rendering(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.Rendering");

	ALootBox_Totems_C_Rendering_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.InteractLootbox
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               OnlyMedkit_                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALootBox_Totems_C::InteractLootbox(class AActor* Actor, bool OnlyMedkit_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.InteractLootbox");

	ALootBox_Totems_C_InteractLootbox_Params params {};
	params.Actor = Actor;
	params.OnlyMedkit_ = OnlyMedkit_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.CurseLightON
//		Flags  -> ()
// Parameters:
//		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootBox_Totems_C::CurseLightON(bool On, float Delay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.CurseLightON");

	ALootBox_Totems_C_CurseLightON_Params params {};
	params.On = On;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.ReceiveBeginPlay
//		Flags  -> ()
void ALootBox_Totems_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.ReceiveBeginPlay");

	ALootBox_Totems_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.DelayDropItem
//		Flags  -> ()
void ALootBox_Totems_C::DelayDropItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.DelayDropItem");

	ALootBox_Totems_C_DelayDropItem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.LegendaryItem
//		Flags  -> ()
// Parameters:
//		struct FString                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALootBox_Totems_C::LegendaryItem(const struct FString& Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.LegendaryItem");

	ALootBox_Totems_C_LegendaryItem_Params params {};
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.MableSkill
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootBox_Totems_C::MableSkill(class ASurvivorMasterBP_C* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.MableSkill");

	ALootBox_Totems_C_MableSkill_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.SpawnCoins
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootBox_Totems_C::SpawnCoins(class ASurvivorMasterBP_C* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.SpawnCoins");

	ALootBox_Totems_C_SpawnCoins_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootBox_Totems_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.ReceiveTick");

	ALootBox_Totems_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.SurvOverlap
//		Flags  -> ()
void ALootBox_Totems_C::SurvOverlap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.SurvOverlap");

	ALootBox_Totems_C_SurvOverlap_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.BndEvt__LootBox_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ALootBox_Totems_C::BndEvt__LootBox_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.BndEvt__LootBox_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ALootBox_Totems_C_BndEvt__LootBox_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.BndEvt__LootBox_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootBox_Totems_C::BndEvt__LootBox_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.BndEvt__LootBox_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ALootBox_Totems_C_BndEvt__LootBox_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params {};
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.StartGameOverlap
//		Flags  -> ()
void ALootBox_Totems_C::StartGameOverlap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.StartGameOverlap");

	ALootBox_Totems_C_StartGameOverlap_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.SphereRadiusStartGame
//		Flags  -> ()
void ALootBox_Totems_C::SphereRadiusStartGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.SphereRadiusStartGame");

	ALootBox_Totems_C_SphereRadiusStartGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.SetIncreaseRare
//		Flags  -> ()
// Parameters:
//		bool                                               IncreaseRare                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALootBox_Totems_C::SetIncreaseRare(bool IncreaseRare)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.SetIncreaseRare");

	ALootBox_Totems_C_SetIncreaseRare_Params params {};
	params.IncreaseRare = IncreaseRare;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.SetIncreaseRare_MULTI
//		Flags  -> ()
// Parameters:
//		bool                                               IncreaseRare                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALootBox_Totems_C::SetIncreaseRare_MULTI(bool IncreaseRare)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.SetIncreaseRare_MULTI");

	ALootBox_Totems_C_SetIncreaseRare_MULTI_Params params {};
	params.IncreaseRare = IncreaseRare;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.BlockLootboxPerk
//		Flags  -> ()
void ALootBox_Totems_C::BlockLootboxPerk()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.BlockLootboxPerk");

	ALootBox_Totems_C_BlockLootboxPerk_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.BlockLootboxPerk_SERV
//		Flags  -> ()
void ALootBox_Totems_C::BlockLootboxPerk_SERV()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.BlockLootboxPerk_SERV");

	ALootBox_Totems_C_BlockLootboxPerk_SERV_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.blockLP
//		Flags  -> ()
void ALootBox_Totems_C::blockLP()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.blockLP");

	ALootBox_Totems_C_blockLP_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootBox_Totems.LootBox_Totems_C.ExecuteUbergraph_LootBox_Totems
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootBox_Totems_C::ExecuteUbergraph_LootBox_Totems(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootBox_Totems.LootBox_Totems_C.ExecuteUbergraph_LootBox_Totems");

	ALootBox_Totems_C_ExecuteUbergraph_LootBox_Totems_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
