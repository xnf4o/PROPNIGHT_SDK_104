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
//		Name   -> Function BP_ItemSpawnPoint.BP_ItemSpawnPoint_C.GetTypeV2
//		Flags  -> ()
// Parameters:
//		class UClass*                                      Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ItemSpawnPoint_C::GetTypeV2(class UClass** Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemSpawnPoint.BP_ItemSpawnPoint_C.GetTypeV2");

	ABP_ItemSpawnPoint_C_GetTypeV2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_ItemSpawnPoint.BP_ItemSpawnPoint_C.GetItems
//		Flags  -> ()
// Parameters:
//		TArray<struct FS_SpawnItemChanceRange>             Items                                                      (Parm, OutParm)
void ABP_ItemSpawnPoint_C::GetItems(TArray<struct FS_SpawnItemChanceRange>* Items)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemSpawnPoint.BP_ItemSpawnPoint_C.GetItems");

	ABP_ItemSpawnPoint_C_GetItems_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_ItemSpawnPoint.BP_ItemSpawnPoint_C.GetType
//		Flags  -> ()
// Parameters:
//		class UClass*                                      Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ItemSpawnPoint_C::GetType(class UClass** Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemSpawnPoint.BP_ItemSpawnPoint_C.GetType");

	ABP_ItemSpawnPoint_C_GetType_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Type != nullptr)
		*Type = params.Type;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_ItemSpawnPoint.BP_ItemSpawnPoint_C.SpawnItem
//		Flags  -> ()
void ABP_ItemSpawnPoint_C::SpawnItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemSpawnPoint.BP_ItemSpawnPoint_C.SpawnItem");

	ABP_ItemSpawnPoint_C_SpawnItem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_ItemSpawnPoint.BP_ItemSpawnPoint_C.ExecuteUbergraph_BP_ItemSpawnPoint
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ItemSpawnPoint_C::ExecuteUbergraph_BP_ItemSpawnPoint(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemSpawnPoint.BP_ItemSpawnPoint_C.ExecuteUbergraph_BP_ItemSpawnPoint");

	ABP_ItemSpawnPoint_C_ExecuteUbergraph_BP_ItemSpawnPoint_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
