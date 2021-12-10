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
//		Name   -> Function LootboxShop.LootboxShop_C.ReceiveBeginPlay
//		Flags  -> ()
void ALootboxShop_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootboxShop.LootboxShop_C.ReceiveBeginPlay");

	ALootboxShop_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootboxShop.LootboxShop_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootboxShop_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootboxShop.LootboxShop_C.ReceiveTick");

	ALootboxShop_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootboxShop.LootboxShop_C.SpawnRandomItem
//		Flags  -> ()
// Parameters:
//		class UClass*                                      Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTransform                                  SpawnTransform                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
void ALootboxShop_C::SpawnRandomItem(class UClass* Class, const struct FTransform& SpawnTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootboxShop.LootboxShop_C.SpawnRandomItem");

	ALootboxShop_C_SpawnRandomItem_Params params {};
	params.Class = Class;
	params.SpawnTransform = SpawnTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootboxShop.LootboxShop_C.StartRollItem
//		Flags  -> ()
void ALootboxShop_C::StartRollItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootboxShop.LootboxShop_C.StartRollItem");

	ALootboxShop_C_StartRollItem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootboxShop.LootboxShop_C.BlockLootboxShopServer
//		Flags  -> ()
// Parameters:
//		bool                                               Block_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALootboxShop_C::BlockLootboxShopServer(bool Block_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootboxShop.LootboxShop_C.BlockLootboxShopServer");

	ALootboxShop_C_BlockLootboxShopServer_Params params {};
	params.Block_ = Block_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootboxShop.LootboxShop_C.BlockLootboxShopMulticast
//		Flags  -> ()
// Parameters:
//		bool                                               Block_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALootboxShop_C::BlockLootboxShopMulticast(bool Block_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootboxShop.LootboxShop_C.BlockLootboxShopMulticast");

	ALootboxShop_C_BlockLootboxShopMulticast_Params params {};
	params.Block_ = Block_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootboxShop.LootboxShop_C.CheckPointsSurvivor
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootboxShop_C::CheckPointsSurvivor(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootboxShop.LootboxShop_C.CheckPointsSurvivor");

	ALootboxShop_C_CheckPointsSurvivor_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootboxShop.LootboxShop_C.SpawnedItemDestroy
//		Flags  -> ()
void ALootboxShop_C::SpawnedItemDestroy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootboxShop.LootboxShop_C.SpawnedItemDestroy");

	ALootboxShop_C_SpawnedItemDestroy_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootboxShop.LootboxShop_C.ArmAnim
//		Flags  -> ()
// Parameters:
//		bool                                               Down_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALootboxShop_C::ArmAnim(bool Down_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootboxShop.LootboxShop_C.ArmAnim");

	ALootboxShop_C_ArmAnim_Params params {};
	params.Down_ = Down_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootboxShop.LootboxShop_C.DoorAnim
//		Flags  -> ()
// Parameters:
//		bool                                               Open_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALootboxShop_C::DoorAnim(bool Open_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootboxShop.LootboxShop_C.DoorAnim");

	ALootboxShop_C_DoorAnim_Params params {};
	params.Open_ = Open_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootboxShop.LootboxShop_C.AnimChanger
//		Flags  -> ()
// Parameters:
//		bool                                               ArmDown_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               DoorOpen_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALootboxShop_C::AnimChanger(bool ArmDown_, bool DoorOpen_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootboxShop.LootboxShop_C.AnimChanger");

	ALootboxShop_C_AnimChanger_Params params {};
	params.ArmDown_ = ArmDown_;
	params.DoorOpen_ = DoorOpen_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootboxShop.LootboxShop_C.UpLamps
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALootboxShop_C::UpLamps(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootboxShop.LootboxShop_C.UpLamps");

	ALootboxShop_C_UpLamps_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootboxShop.LootboxShop_C.CreateDynamicMaterial
//		Flags  -> ()
void ALootboxShop_C::CreateDynamicMaterial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootboxShop.LootboxShop_C.CreateDynamicMaterial");

	ALootboxShop_C_CreateDynamicMaterial_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootboxShop.LootboxShop_C.MoonLamps
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALootboxShop_C::MoonLamps(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootboxShop.LootboxShop_C.MoonLamps");

	ALootboxShop_C_MoonLamps_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootboxShop.LootboxShop_C.MulticastAnimChanger
//		Flags  -> ()
// Parameters:
//		bool                                               ArmDown_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               DoorOpen_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALootboxShop_C::MulticastAnimChanger(bool ArmDown_, bool DoorOpen_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootboxShop.LootboxShop_C.MulticastAnimChanger");

	ALootboxShop_C_MulticastAnimChanger_Params params {};
	params.ArmDown_ = ArmDown_;
	params.DoorOpen_ = DoorOpen_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootboxShop.LootboxShop_C.ServerAnimChanger
//		Flags  -> ()
// Parameters:
//		bool                                               ArmDown_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               DoorOpen_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ALootboxShop_C::ServerAnimChanger(bool ArmDown_, bool DoorOpen_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootboxShop.LootboxShop_C.ServerAnimChanger");

	ALootboxShop_C_ServerAnimChanger_Params params {};
	params.ArmDown_ = ArmDown_;
	params.DoorOpen_ = DoorOpen_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LootboxShop.LootboxShop_C.ExecuteUbergraph_LootboxShop
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootboxShop_C::ExecuteUbergraph_LootboxShop(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LootboxShop.LootboxShop_C.ExecuteUbergraph_LootboxShop");

	ALootboxShop_C_ExecuteUbergraph_LootboxShop_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
