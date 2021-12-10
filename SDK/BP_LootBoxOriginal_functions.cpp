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
//		Name   -> Function BP_LootBoxOriginal.BP_LootBoxOriginal_C.ReceiveBeginPlay
//		Flags  -> ()
void ABP_LootBoxOriginal_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBoxOriginal.BP_LootBoxOriginal_C.ReceiveBeginPlay");

	ABP_LootBoxOriginal_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBoxOriginal.BP_LootBoxOriginal_C.ExecuteUbergraph_BP_LootBoxOriginal
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LootBoxOriginal_C::ExecuteUbergraph_BP_LootBoxOriginal(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBoxOriginal.BP_LootBoxOriginal_C.ExecuteUbergraph_BP_LootBoxOriginal");

	ABP_LootBoxOriginal_C_ExecuteUbergraph_BP_LootBoxOriginal_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
