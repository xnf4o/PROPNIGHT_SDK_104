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
//		Name   -> Function BP_BanManager.BP_BanManager_C.GetBanExpiration
//		Flags  -> ()
// Parameters:
//		int                                                Minutes                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Seconds                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BanManager_C::GetBanExpiration(int* Minutes, int* Seconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BanManager.BP_BanManager_C.GetBanExpiration");

	UBP_BanManager_C_GetBanExpiration_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Minutes != nullptr)
		*Minutes = params.Minutes;
	if (Seconds != nullptr)
		*Seconds = params.Seconds;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_BanManager.BP_BanManager_C.IsBanned
//		Flags  -> ()
// Parameters:
//		bool                                               Banned                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_BanManager_C::IsBanned(bool* Banned)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BanManager.BP_BanManager_C.IsBanned");

	UBP_BanManager_C_IsBanned_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Banned != nullptr)
		*Banned = params.Banned;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_BanManager.BP_BanManager_C.Ban
//		Flags  -> ()
// Parameters:
//		int                                                Minutes                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BanManager_C::Ban(int Minutes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BanManager.BP_BanManager_C.Ban");

	UBP_BanManager_C_Ban_Params params {};
	params.Minutes = Minutes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_BanManager.BP_BanManager_C.LoadSavedSlot
//		Flags  -> ()
void UBP_BanManager_C::LoadSavedSlot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BanManager.BP_BanManager_C.LoadSavedSlot");

	UBP_BanManager_C_LoadSavedSlot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_BanManager.BP_BanManager_C.ExecuteUbergraph_BP_BanManager
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_BanManager_C::ExecuteUbergraph_BP_BanManager(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BanManager.BP_BanManager_C.ExecuteUbergraph_BP_BanManager");

	UBP_BanManager_C_ExecuteUbergraph_BP_BanManager_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
