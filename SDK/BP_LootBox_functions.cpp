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
//		Name   -> Function BP_LootBox.BP_LootBox_C.GetGambledItems
//		Flags  -> ()
void ABP_LootBox_C::GetGambledItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.GetGambledItems");

	ABP_LootBox_C_GetGambledItems_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.LoadAndSetDataTable
//		Flags  -> ()
// Parameters:
//		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void ABP_LootBox_C::LoadAndSetDataTable(class UObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.LoadAndSetDataTable");

	ABP_LootBox_C_LoadAndSetDataTable_Params params {};
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.AddLegendaryItem
//		Flags  -> ()
// Parameters:
void ABP_LootBox_C::AddLegendaryItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.AddLegendaryItem");

	ABP_LootBox_C_AddLegendaryItem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.AddEpicItem
//		Flags  -> ()
// Parameters:
void ABP_LootBox_C::AddEpicItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.AddEpicItem");

	ABP_LootBox_C_AddEpicItem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.AddRareItem
//		Flags  -> ()
// Parameters:
void ABP_LootBox_C::AddRareItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.AddRareItem");

	ABP_LootBox_C_AddRareItem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.Add Common Item
//		Flags  -> ()
// Parameters:
void ABP_LootBox_C::Add_Common_Item()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.Add Common Item");

	ABP_LootBox_C_Add_Common_Item_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.CheckEpic
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_LootBox_C::CheckEpic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.CheckEpic");

	ABP_LootBox_C_CheckEpic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.CheckRare
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_LootBox_C::CheckRare()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.CheckRare");

	ABP_LootBox_C_CheckRare_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.CheckCommon
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_LootBox_C::CheckCommon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.CheckCommon");

	ABP_LootBox_C_CheckCommon_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.SetRandomNumber
//		Flags  -> ()
// Parameters:
void ABP_LootBox_C::SetRandomNumber()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.SetRandomNumber");

	ABP_LootBox_C_SetRandomNumber_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.AnotherChanceIfDuplicate
//		Flags  -> ()
// Parameters:
//		int                                                Duplicate                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LootBox_C::AnotherChanceIfDuplicate(int Duplicate, float A)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.AnotherChanceIfDuplicate");

	ABP_LootBox_C_AnotherChanceIfDuplicate_Params params {};
	params.Duplicate = Duplicate;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.SetDefault
//		Flags  -> ()
void ABP_LootBox_C::SetDefault()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.SetDefault");

	ABP_LootBox_C_SetDefault_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.SetLowered
//		Flags  -> ()
void ABP_LootBox_C::SetLowered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.SetLowered");

	ABP_LootBox_C_SetLowered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.SetHeightened
//		Flags  -> ()
void ABP_LootBox_C::SetHeightened()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.SetHeightened");

	ABP_LootBox_C_SetHeightened_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.Timeline_0__FinishedFunc
//		Flags  -> ()
void ABP_LootBox_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.Timeline_0__FinishedFunc");

	ABP_LootBox_C_Timeline_0__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.Timeline_0__UpdateFunc
//		Flags  -> ()
void ABP_LootBox_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.Timeline_0__UpdateFunc");

	ABP_LootBox_C_Timeline_0__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.Timeline_0__CamShakeStop__EventFunc
//		Flags  -> ()
void ABP_LootBox_C::Timeline_0__CamShakeStop__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.Timeline_0__CamShakeStop__EventFunc");

	ABP_LootBox_C_Timeline_0__CamShakeStop__EventFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.Timeline_0__CamShakeStart__EventFunc
//		Flags  -> ()
void ABP_LootBox_C::Timeline_0__CamShakeStart__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.Timeline_0__CamShakeStart__EventFunc");

	ABP_LootBox_C_Timeline_0__CamShakeStart__EventFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.Timeline_1__FinishedFunc
//		Flags  -> ()
void ABP_LootBox_C::Timeline_1__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.Timeline_1__FinishedFunc");

	ABP_LootBox_C_Timeline_1__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.Timeline_1__UpdateFunc
//		Flags  -> ()
void ABP_LootBox_C::Timeline_1__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.Timeline_1__UpdateFunc");

	ABP_LootBox_C_Timeline_1__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.Timeline_1__OpenBurst__EventFunc
//		Flags  -> ()
void ABP_LootBox_C::Timeline_1__OpenBurst__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.Timeline_1__OpenBurst__EventFunc");

	ABP_LootBox_C_Timeline_1__OpenBurst__EventFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.Timeline_1__VisibleItem__EventFunc
//		Flags  -> ()
void ABP_LootBox_C::Timeline_1__VisibleItem__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.Timeline_1__VisibleItem__EventFunc");

	ABP_LootBox_C_Timeline_1__VisibleItem__EventFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.Timeline_1__ChangeCameraPosition__EventFunc
//		Flags  -> ()
void ABP_LootBox_C::Timeline_1__ChangeCameraPosition__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.Timeline_1__ChangeCameraPosition__EventFunc");

	ABP_LootBox_C_Timeline_1__ChangeCameraPosition__EventFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.Timeline_1__CamShake2Stop__EventFunc
//		Flags  -> ()
void ABP_LootBox_C::Timeline_1__CamShake2Stop__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.Timeline_1__CamShake2Stop__EventFunc");

	ABP_LootBox_C_Timeline_1__CamShake2Stop__EventFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.Timeline_1__CamShake2Start__EventFunc
//		Flags  -> ()
void ABP_LootBox_C::Timeline_1__CamShake2Start__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.Timeline_1__CamShake2Start__EventFunc");

	ABP_LootBox_C_Timeline_1__CamShake2Start__EventFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.Timeline_1__CamShakeStop__EventFunc
//		Flags  -> ()
void ABP_LootBox_C::Timeline_1__CamShakeStop__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.Timeline_1__CamShakeStop__EventFunc");

	ABP_LootBox_C_Timeline_1__CamShakeStop__EventFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.Timeline_1__CamShakeStart__EventFunc
//		Flags  -> ()
void ABP_LootBox_C::Timeline_1__CamShakeStart__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.Timeline_1__CamShakeStart__EventFunc");

	ABP_LootBox_C_Timeline_1__CamShakeStart__EventFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.Timeline_1__LootBoxVisibility__EventFunc
//		Flags  -> ()
void ABP_LootBox_C::Timeline_1__LootBoxVisibility__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.Timeline_1__LootBoxVisibility__EventFunc");

	ABP_LootBox_C_Timeline_1__LootBoxVisibility__EventFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.Timeline_2__FinishedFunc
//		Flags  -> ()
void ABP_LootBox_C::Timeline_2__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.Timeline_2__FinishedFunc");

	ABP_LootBox_C_Timeline_2__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.Timeline_2__UpdateFunc
//		Flags  -> ()
void ABP_LootBox_C::Timeline_2__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.Timeline_2__UpdateFunc");

	ABP_LootBox_C_Timeline_2__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.Timeline_2__VisibleItem__EventFunc
//		Flags  -> ()
void ABP_LootBox_C::Timeline_2__VisibleItem__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.Timeline_2__VisibleItem__EventFunc");

	ABP_LootBox_C_Timeline_2__VisibleItem__EventFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.Timeline_2__SpawnItem__EventFunc
//		Flags  -> ()
void ABP_LootBox_C::Timeline_2__SpawnItem__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.Timeline_2__SpawnItem__EventFunc");

	ABP_LootBox_C_Timeline_2__SpawnItem__EventFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.Timeline_2__CamShake2Stop__EventFunc
//		Flags  -> ()
void ABP_LootBox_C::Timeline_2__CamShake2Stop__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.Timeline_2__CamShake2Stop__EventFunc");

	ABP_LootBox_C_Timeline_2__CamShake2Stop__EventFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.Timeline_2__CamShake2Start__EventFunc
//		Flags  -> ()
void ABP_LootBox_C::Timeline_2__CamShake2Start__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.Timeline_2__CamShake2Start__EventFunc");

	ABP_LootBox_C_Timeline_2__CamShake2Start__EventFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.Timeline_2__CamShakeStop__EventFunc
//		Flags  -> ()
void ABP_LootBox_C::Timeline_2__CamShakeStop__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.Timeline_2__CamShakeStop__EventFunc");

	ABP_LootBox_C_Timeline_2__CamShakeStop__EventFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.Timeline_2__CamShakeStart__EventFunc
//		Flags  -> ()
void ABP_LootBox_C::Timeline_2__CamShakeStart__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.Timeline_2__CamShakeStart__EventFunc");

	ABP_LootBox_C_Timeline_2__CamShakeStart__EventFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.Timeline_2__LootBoxVisibility__EventFunc
//		Flags  -> ()
void ABP_LootBox_C::Timeline_2__LootBoxVisibility__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.Timeline_2__LootBoxVisibility__EventFunc");

	ABP_LootBox_C_Timeline_2__LootBoxVisibility__EventFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.OnLoaded_51CD756143950F2DBDAB19AFE78169D9
//		Flags  -> ()
// Parameters:
//		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LootBox_C::OnLoaded_51CD756143950F2DBDAB19AFE78169D9(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.OnLoaded_51CD756143950F2DBDAB19AFE78169D9");

	ABP_LootBox_C_OnLoaded_51CD756143950F2DBDAB19AFE78169D9_Params params {};
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.AnotherChance
//		Flags  -> ()
void ABP_LootBox_C::AnotherChance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.AnotherChance");

	ABP_LootBox_C_AnotherChance_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.SpawnLootbox
//		Flags  -> ()
void ABP_LootBox_C::SpawnLootbox()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.SpawnLootbox");

	ABP_LootBox_C_SpawnLootbox_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.OpenLootBox
//		Flags  -> ()
void ABP_LootBox_C::OpenLootBox()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.OpenLootBox");

	ABP_LootBox_C_OpenLootBox_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.GetItems
//		Flags  -> ()
void ABP_LootBox_C::GetItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.GetItems");

	ABP_LootBox_C_GetItems_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.AddItemsFromDT
//		Flags  -> ()
void ABP_LootBox_C::AddItemsFromDT()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.AddItemsFromDT");

	ABP_LootBox_C_AddItemsFromDT_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LootBox_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.ReceiveTick");

	ABP_LootBox_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.ReceiveBeginPlay
//		Flags  -> ()
void ABP_LootBox_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.ReceiveBeginPlay");

	ABP_LootBox_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_LootBox.BP_LootBox_C.ExecuteUbergraph_BP_LootBox
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LootBox_C::ExecuteUbergraph_BP_LootBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LootBox.BP_LootBox_C.ExecuteUbergraph_BP_LootBox");

	ABP_LootBox_C_ExecuteUbergraph_BP_LootBox_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
