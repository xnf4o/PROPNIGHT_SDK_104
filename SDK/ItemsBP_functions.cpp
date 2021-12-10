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
//		Name   -> Function ItemsBP.ItemsBP_C.Timeline_0__FinishedFunc
//		Flags  -> ()
void AItemsBP_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemsBP.ItemsBP_C.Timeline_0__FinishedFunc");

	AItemsBP_C_Timeline_0__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemsBP.ItemsBP_C.Timeline_0__UpdateFunc
//		Flags  -> ()
void AItemsBP_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemsBP.ItemsBP_C.Timeline_0__UpdateFunc");

	AItemsBP_C_Timeline_0__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemsBP.ItemsBP_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItemsBP_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemsBP.ItemsBP_C.ReceiveTick");

	AItemsBP_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemsBP.ItemsBP_C.ReceiveBeginPlay
//		Flags  -> ()
void AItemsBP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemsBP.ItemsBP_C.ReceiveBeginPlay");

	AItemsBP_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemsBP.ItemsBP_C.ImpulseItem
//		Flags  -> ()
void AItemsBP_C::ImpulseItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemsBP.ItemsBP_C.ImpulseItem");

	AItemsBP_C_ImpulseItem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemsBP.ItemsBP_C.DropImpulseItem
//		Flags  -> ()
// Parameters:
//		struct FVector                                     Impulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItemsBP_C::DropImpulseItem(const struct FVector& Impulse)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemsBP.ItemsBP_C.DropImpulseItem");

	AItemsBP_C_DropImpulseItem_Params params {};
	params.Impulse = Impulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemsBP.ItemsBP_C.RandomSkin
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItemsBP_C::RandomSkin(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemsBP.ItemsBP_C.RandomSkin");

	AItemsBP_C_RandomSkin_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemsBP.ItemsBP_C.lootbox
//		Flags  -> ()
// Parameters:
//		class ALootboxShop_C*                              Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItemsBP_C::lootbox(class ALootboxShop_C* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemsBP.ItemsBP_C.lootbox");

	AItemsBP_C_lootbox_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemsBP.ItemsBP_C.LootBoxTake
//		Flags  -> ()
// Parameters:
//		class AActor*                                      NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     NewParam2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     NewParam3                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItemsBP_C::LootBoxTake(class AActor* NewParam, const struct FVector& NewParam2, const struct FVector& NewParam3)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemsBP.ItemsBP_C.LootBoxTake");

	AItemsBP_C_LootBoxTake_Params params {};
	params.NewParam = NewParam;
	params.NewParam2 = NewParam2;
	params.NewParam3 = NewParam3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemsBP.ItemsBP_C.UberEvent
//		Flags  -> ()
// Parameters:
//		struct FVector                                     NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     NewParam2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItemsBP_C::UberEvent(const struct FVector& NewParam, const struct FVector& NewParam2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemsBP.ItemsBP_C.UberEvent");

	AItemsBP_C_UberEvent_Params params {};
	params.NewParam = NewParam;
	params.NewParam2 = NewParam2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ItemsBP.ItemsBP_C.ExecuteUbergraph_ItemsBP
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AItemsBP_C::ExecuteUbergraph_ItemsBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ItemsBP.ItemsBP_C.ExecuteUbergraph_ItemsBP");

	AItemsBP_C_ExecuteUbergraph_ItemsBP_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
