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
//		Name   -> Function LootableMesh.LootableMesh_C.OnRep_IncreaseRare
//		Flags  -> ()
void ALootableMesh_C::OnRep_IncreaseRare()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.OnRep_IncreaseRare");

	ALootableMesh_C_OnRep_IncreaseRare_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.CoinAngle
//		Flags  -> ()
// Parameters:
//		float                                              X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Z                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootableMesh_C::CoinAngle(float* X, float* Y, float* Z)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.CoinAngle");

	ALootableMesh_C_CoinAngle_Params params {};

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
//		Name   -> Function LootableMesh.LootableMesh_C.T_OpenLootbox__FinishedFunc
//		Flags  -> ()
void ALootableMesh_C::T_OpenLootbox__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.T_OpenLootbox__FinishedFunc");

	ALootableMesh_C_T_OpenLootbox__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.T_OpenLootbox__UpdateFunc
//		Flags  -> ()
void ALootableMesh_C::T_OpenLootbox__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.T_OpenLootbox__UpdateFunc");

	ALootableMesh_C_T_OpenLootbox__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.T_CloseLootbox__FinishedFunc
//		Flags  -> ()
void ALootableMesh_C::T_CloseLootbox__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.T_CloseLootbox__FinishedFunc");

	ALootableMesh_C_T_CloseLootbox__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.T_CloseLootbox__UpdateFunc
//		Flags  -> ()
void ALootableMesh_C::T_CloseLootbox__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.T_CloseLootbox__UpdateFunc");

	ALootableMesh_C_T_CloseLootbox__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.T_InsideShine__FinishedFunc
//		Flags  -> ()
void ALootableMesh_C::T_InsideShine__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.T_InsideShine__FinishedFunc");

	ALootableMesh_C_T_InsideShine__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.T_InsideShine__UpdateFunc
//		Flags  -> ()
void ALootableMesh_C::T_InsideShine__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.T_InsideShine__UpdateFunc");

	ALootableMesh_C_T_InsideShine__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.ReceiveBeginPlay
//		Flags  -> ()
void ALootableMesh_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.ReceiveBeginPlay");

	ALootableMesh_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.InteractLootableMesh
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootableMesh_C::InteractLootableMesh(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.InteractLootableMesh");

	ALootableMesh_C_InteractLootableMesh_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.RollItem
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<LootBoxRollType_ELootBoxRollType>      RollType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootableMesh_C::RollItem(TEnumAsByte<LootBoxRollType_ELootBoxRollType> RollType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.RollItem");

	ALootableMesh_C_RollItem_Params params {};
	params.RollType = RollType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.OpenLootBox
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<LootBoxRollType_ELootBoxRollType>      RollType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Nickname                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALootableMesh_C::OpenLootBox(TEnumAsByte<LootBoxRollType_ELootBoxRollType> RollType, const struct FString& Nickname)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.OpenLootBox");

	ALootableMesh_C_OpenLootBox_Params params {};
	params.RollType = RollType;
	params.Nickname = Nickname;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.CloseLootBox
//		Flags  -> ()
void ALootableMesh_C::CloseLootBox()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.CloseLootBox");

	ALootableMesh_C_CloseLootBox_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.OpenLootboxMulti
//		Flags  -> ()
// Parameters:
//		struct FString                                     Nickname                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               Spawn_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALootableMesh_C::OpenLootboxMulti(const struct FString& Nickname, bool Spawn_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.OpenLootboxMulti");

	ALootableMesh_C_OpenLootboxMulti_Params params {};
	params.Nickname = Nickname;
	params.Spawn_ = Spawn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.Spawner
//		Flags  -> ()
// Parameters:
//		class UClass*                                      NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTransform                                  NewParam2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FString                                     NewParam3                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALootableMesh_C::Spawner(class UClass* NewParam, const struct FTransform& NewParam2, const struct FString& NewParam3)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.Spawner");

	ALootableMesh_C_Spawner_Params params {};
	params.NewParam = NewParam;
	params.NewParam2 = NewParam2;
	params.NewParam3 = NewParam3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.DestroyItemLootbox
//		Flags  -> ()
void ALootableMesh_C::DestroyItemLootbox()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.DestroyItemLootbox");

	ALootableMesh_C_DestroyItemLootbox_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.SpawnerMulti
//		Flags  -> ()
// Parameters:
//		class AActor*                                      NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootableMesh_C::SpawnerMulti(class AActor* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.SpawnerMulti");

	ALootableMesh_C_SpawnerMulti_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.LootboxNotEnough
//		Flags  -> ()
void ALootableMesh_C::LootboxNotEnough()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.LootboxNotEnough");

	ALootableMesh_C_LootboxNotEnough_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.SpawnItem
//		Flags  -> ()
// Parameters:
//		struct FString                                     Nickname                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALootableMesh_C::SpawnItem(const struct FString& Nickname)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.SpawnItem");

	ALootableMesh_C_SpawnItem_Params params {};
	params.Nickname = Nickname;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.ColorInside
//		Flags  -> ()
// Parameters:
//		struct FString                                     Rarity                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALootableMesh_C::ColorInside(const struct FString& Rarity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.ColorInside");

	ALootableMesh_C_ColorInside_Params params {};
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.InsideShine
//		Flags  -> ()
void ALootableMesh_C::InsideShine()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.InsideShine");

	ALootableMesh_C_InsideShine_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.Rendering
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALootableMesh_C::Rendering(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.Rendering");

	ALootableMesh_C_Rendering_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.CurseLightON
//		Flags  -> ()
// Parameters:
//		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootableMesh_C::CurseLightON(bool On, float Delay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.CurseLightON");

	ALootableMesh_C_CurseLightON_Params params {};
	params.On = On;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.DelayDropItem
//		Flags  -> ()
void ALootableMesh_C::DelayDropItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.DelayDropItem");

	ALootableMesh_C_DelayDropItem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.LegendaryItem
//		Flags  -> ()
// Parameters:
//		struct FString                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ALootableMesh_C::LegendaryItem(const struct FString& Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.LegendaryItem");

	ALootableMesh_C_LegendaryItem_Params params {};
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.MableSkill
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootableMesh_C::MableSkill(class ASurvivorMasterBP_C* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.MableSkill");

	ALootableMesh_C_MableSkill_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.SpawnCoins
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootableMesh_C::SpawnCoins(class ASurvivorMasterBP_C* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.SpawnCoins");

	ALootableMesh_C_SpawnCoins_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootableMesh_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.ReceiveTick");

	ALootableMesh_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.SurvOverlap
//		Flags  -> ()
void ALootableMesh_C::SurvOverlap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.SurvOverlap");

	ALootableMesh_C_SurvOverlap_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.BndEvt__LootBox_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ALootableMesh_C::BndEvt__LootBox_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.BndEvt__LootBox_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ALootableMesh_C_BndEvt__LootBox_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
//		Name   -> Function LootableMesh.LootableMesh_C.BndEvt__LootBox_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootableMesh_C::BndEvt__LootBox_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.BndEvt__LootBox_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ALootableMesh_C_BndEvt__LootBox_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params {};
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
//		Name   -> Function LootableMesh.LootableMesh_C.StartGameOverlap
//		Flags  -> ()
void ALootableMesh_C::StartGameOverlap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.StartGameOverlap");

	ALootableMesh_C_StartGameOverlap_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.SphereRadiusStartGame
//		Flags  -> ()
void ALootableMesh_C::SphereRadiusStartGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.SphereRadiusStartGame");

	ALootableMesh_C_SphereRadiusStartGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.SetIncreaseRare
//		Flags  -> ()
// Parameters:
//		bool                                               IncreaseRare                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALootableMesh_C::SetIncreaseRare(bool IncreaseRare)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.SetIncreaseRare");

	ALootableMesh_C_SetIncreaseRare_Params params {};
	params.IncreaseRare = IncreaseRare;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.SetIncreaseRare_MULTI
//		Flags  -> ()
// Parameters:
//		bool                                               IncreaseRare                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALootableMesh_C::SetIncreaseRare_MULTI(bool IncreaseRare)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.SetIncreaseRare_MULTI");

	ALootableMesh_C_SetIncreaseRare_MULTI_Params params {};
	params.IncreaseRare = IncreaseRare;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.BlockLootboxPerk
//		Flags  -> ()
void ALootableMesh_C::BlockLootboxPerk()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.BlockLootboxPerk");

	ALootableMesh_C_BlockLootboxPerk_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.BlockLootboxPerk_SERV
//		Flags  -> ()
void ALootableMesh_C::BlockLootboxPerk_SERV()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.BlockLootboxPerk_SERV");

	ALootableMesh_C_BlockLootboxPerk_SERV_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.blockLP
//		Flags  -> ()
void ALootableMesh_C::blockLP()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.blockLP");

	ALootableMesh_C_blockLP_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.DoorAnim
//		Flags  -> ()
// Parameters:
//		float                                              Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Open_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALootableMesh_C::DoorAnim(float Alpha, bool Open_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.DoorAnim");

	ALootableMesh_C_DoorAnim_Params params {};
	params.Alpha = Alpha;
	params.Open_ = Open_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootableMesh.LootableMesh_C.ExecuteUbergraph_LootableMesh
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootableMesh_C::ExecuteUbergraph_LootableMesh(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootableMesh.LootableMesh_C.ExecuteUbergraph_LootableMesh");

	ALootableMesh_C_ExecuteUbergraph_LootableMesh_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
