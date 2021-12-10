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
//		Name   -> Function BP_ItemsManager.BP_ItemsManager_C.ReceiveBeginPlay
//		Flags  -> ()
void UBP_ItemsManager_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemsManager.BP_ItemsManager_C.ReceiveBeginPlay");

	UBP_ItemsManager_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_ItemsManager.BP_ItemsManager_C.OnStartGame
//		Flags  -> ()
void UBP_ItemsManager_C::OnStartGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemsManager.BP_ItemsManager_C.OnStartGame");

	UBP_ItemsManager_C_OnStartGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_ItemsManager.BP_ItemsManager_C.ExecuteUbergraph_BP_ItemsManager
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_ItemsManager_C::ExecuteUbergraph_BP_ItemsManager(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemsManager.BP_ItemsManager_C.ExecuteUbergraph_BP_ItemsManager");

	UBP_ItemsManager_C_ExecuteUbergraph_BP_ItemsManager_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
