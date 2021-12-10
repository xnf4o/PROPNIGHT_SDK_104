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
//		Name   -> Function PerkManager.PerkManager_C.ReceiveBeginPlay
//		Flags  -> ()
void UPerkManager_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkManager.PerkManager_C.ReceiveBeginPlay");

	UPerkManager_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkManager.PerkManager_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkManager_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkManager.PerkManager_C.ReceiveTick");

	UPerkManager_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkManager.PerkManager_C.AddPerk1
//		Flags  -> ()
// Parameters:
//		bool                                               Surv_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UClass*                                      Perk                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkManager_C::AddPerk1(bool Surv_, class UClass* Perk)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkManager.PerkManager_C.AddPerk1");

	UPerkManager_C_AddPerk1_Params params {};
	params.Surv_ = Surv_;
	params.Perk = Perk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkManager.PerkManager_C.AddPerk2
//		Flags  -> ()
// Parameters:
//		bool                                               Surv_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UClass*                                      Perk                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkManager_C::AddPerk2(bool Surv_, class UClass* Perk)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkManager.PerkManager_C.AddPerk2");

	UPerkManager_C_AddPerk2_Params params {};
	params.Surv_ = Surv_;
	params.Perk = Perk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkManager.PerkManager_C.AddPerk3
//		Flags  -> ()
// Parameters:
//		bool                                               Surv_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UClass*                                      Perk                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkManager_C::AddPerk3(bool Surv_, class UClass* Perk)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkManager.PerkManager_C.AddPerk3");

	UPerkManager_C_AddPerk3_Params params {};
	params.Surv_ = Surv_;
	params.Perk = Perk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkManager.PerkManager_C.PerksNames
//		Flags  -> ()
// Parameters:
//		bool                                               Surv_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UClass*                                      Perk                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkManager_C::PerksNames(bool Surv_, class UClass* Perk)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkManager.PerkManager_C.PerksNames");

	UPerkManager_C_PerksNames_Params params {};
	params.Surv_ = Surv_;
	params.Perk = Perk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkManager.PerkManager_C.CheckPerk1
//		Flags  -> ()
void UPerkManager_C::CheckPerk1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkManager.PerkManager_C.CheckPerk1");

	UPerkManager_C_CheckPerk1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkManager.PerkManager_C.CheckPerk2
//		Flags  -> ()
void UPerkManager_C::CheckPerk2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkManager.PerkManager_C.CheckPerk2");

	UPerkManager_C_CheckPerk2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkManager.PerkManager_C.CheckPerk3
//		Flags  -> ()
void UPerkManager_C::CheckPerk3()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkManager.PerkManager_C.CheckPerk3");

	UPerkManager_C_CheckPerk3_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkManager.PerkManager_C.ExecuteUbergraph_PerkManager
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkManager_C::ExecuteUbergraph_PerkManager(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkManager.PerkManager_C.ExecuteUbergraph_PerkManager");

	UPerkManager_C_ExecuteUbergraph_PerkManager_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
