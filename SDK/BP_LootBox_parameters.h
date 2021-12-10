#pragma once

// Name: P, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_LootBox.BP_LootBox_C.GetGambledItems
struct ABP_LootBox_C_GetGambledItems_Params
{
};

// Function BP_LootBox.BP_LootBox_C.LoadAndSetDataTable
struct ABP_LootBox_C_LoadAndSetDataTable_Params
{
	class UObject*                                     Object;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function BP_LootBox.BP_LootBox_C.AddLegendaryItem
struct ABP_LootBox_C_AddLegendaryItem_Params
{
};

// Function BP_LootBox.BP_LootBox_C.AddEpicItem
struct ABP_LootBox_C_AddEpicItem_Params
{
};

// Function BP_LootBox.BP_LootBox_C.AddRareItem
struct ABP_LootBox_C_AddRareItem_Params
{
};

// Function BP_LootBox.BP_LootBox_C.Add Common Item
struct ABP_LootBox_C_Add_Common_Item_Params
{
};

// Function BP_LootBox.BP_LootBox_C.CheckEpic
struct ABP_LootBox_C_CheckEpic_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_LootBox.BP_LootBox_C.CheckRare
struct ABP_LootBox_C_CheckRare_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_LootBox.BP_LootBox_C.CheckCommon
struct ABP_LootBox_C_CheckCommon_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_LootBox.BP_LootBox_C.SetRandomNumber
struct ABP_LootBox_C_SetRandomNumber_Params
{
};

// Function BP_LootBox.BP_LootBox_C.AnotherChanceIfDuplicate
struct ABP_LootBox_C_AnotherChanceIfDuplicate_Params
{
	int                                                Duplicate;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              A;                                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LootBox.BP_LootBox_C.SetDefault
struct ABP_LootBox_C_SetDefault_Params
{
};

// Function BP_LootBox.BP_LootBox_C.SetLowered
struct ABP_LootBox_C_SetLowered_Params
{
};

// Function BP_LootBox.BP_LootBox_C.SetHeightened
struct ABP_LootBox_C_SetHeightened_Params
{
};

// Function BP_LootBox.BP_LootBox_C.Timeline_0__FinishedFunc
struct ABP_LootBox_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_LootBox.BP_LootBox_C.Timeline_0__UpdateFunc
struct ABP_LootBox_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_LootBox.BP_LootBox_C.Timeline_0__CamShakeStop__EventFunc
struct ABP_LootBox_C_Timeline_0__CamShakeStop__EventFunc_Params
{
};

// Function BP_LootBox.BP_LootBox_C.Timeline_0__CamShakeStart__EventFunc
struct ABP_LootBox_C_Timeline_0__CamShakeStart__EventFunc_Params
{
};

// Function BP_LootBox.BP_LootBox_C.Timeline_1__FinishedFunc
struct ABP_LootBox_C_Timeline_1__FinishedFunc_Params
{
};

// Function BP_LootBox.BP_LootBox_C.Timeline_1__UpdateFunc
struct ABP_LootBox_C_Timeline_1__UpdateFunc_Params
{
};

// Function BP_LootBox.BP_LootBox_C.Timeline_1__OpenBurst__EventFunc
struct ABP_LootBox_C_Timeline_1__OpenBurst__EventFunc_Params
{
};

// Function BP_LootBox.BP_LootBox_C.Timeline_1__VisibleItem__EventFunc
struct ABP_LootBox_C_Timeline_1__VisibleItem__EventFunc_Params
{
};

// Function BP_LootBox.BP_LootBox_C.Timeline_1__ChangeCameraPosition__EventFunc
struct ABP_LootBox_C_Timeline_1__ChangeCameraPosition__EventFunc_Params
{
};

// Function BP_LootBox.BP_LootBox_C.Timeline_1__CamShake2Stop__EventFunc
struct ABP_LootBox_C_Timeline_1__CamShake2Stop__EventFunc_Params
{
};

// Function BP_LootBox.BP_LootBox_C.Timeline_1__CamShake2Start__EventFunc
struct ABP_LootBox_C_Timeline_1__CamShake2Start__EventFunc_Params
{
};

// Function BP_LootBox.BP_LootBox_C.Timeline_1__CamShakeStop__EventFunc
struct ABP_LootBox_C_Timeline_1__CamShakeStop__EventFunc_Params
{
};

// Function BP_LootBox.BP_LootBox_C.Timeline_1__CamShakeStart__EventFunc
struct ABP_LootBox_C_Timeline_1__CamShakeStart__EventFunc_Params
{
};

// Function BP_LootBox.BP_LootBox_C.Timeline_1__LootBoxVisibility__EventFunc
struct ABP_LootBox_C_Timeline_1__LootBoxVisibility__EventFunc_Params
{
};

// Function BP_LootBox.BP_LootBox_C.Timeline_2__FinishedFunc
struct ABP_LootBox_C_Timeline_2__FinishedFunc_Params
{
};

// Function BP_LootBox.BP_LootBox_C.Timeline_2__UpdateFunc
struct ABP_LootBox_C_Timeline_2__UpdateFunc_Params
{
};

// Function BP_LootBox.BP_LootBox_C.Timeline_2__VisibleItem__EventFunc
struct ABP_LootBox_C_Timeline_2__VisibleItem__EventFunc_Params
{
};

// Function BP_LootBox.BP_LootBox_C.Timeline_2__SpawnItem__EventFunc
struct ABP_LootBox_C_Timeline_2__SpawnItem__EventFunc_Params
{
};

// Function BP_LootBox.BP_LootBox_C.Timeline_2__CamShake2Stop__EventFunc
struct ABP_LootBox_C_Timeline_2__CamShake2Stop__EventFunc_Params
{
};

// Function BP_LootBox.BP_LootBox_C.Timeline_2__CamShake2Start__EventFunc
struct ABP_LootBox_C_Timeline_2__CamShake2Start__EventFunc_Params
{
};

// Function BP_LootBox.BP_LootBox_C.Timeline_2__CamShakeStop__EventFunc
struct ABP_LootBox_C_Timeline_2__CamShakeStop__EventFunc_Params
{
};

// Function BP_LootBox.BP_LootBox_C.Timeline_2__CamShakeStart__EventFunc
struct ABP_LootBox_C_Timeline_2__CamShakeStart__EventFunc_Params
{
};

// Function BP_LootBox.BP_LootBox_C.Timeline_2__LootBoxVisibility__EventFunc
struct ABP_LootBox_C_Timeline_2__LootBoxVisibility__EventFunc_Params
{
};

// Function BP_LootBox.BP_LootBox_C.OnLoaded_51CD756143950F2DBDAB19AFE78169D9
struct ABP_LootBox_C_OnLoaded_51CD756143950F2DBDAB19AFE78169D9_Params
{
	class UObject*                                     Loaded;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LootBox.BP_LootBox_C.AnotherChance
struct ABP_LootBox_C_AnotherChance_Params
{
};

// Function BP_LootBox.BP_LootBox_C.SpawnLootbox
struct ABP_LootBox_C_SpawnLootbox_Params
{
};

// Function BP_LootBox.BP_LootBox_C.OpenLootBox
struct ABP_LootBox_C_OpenLootBox_Params
{
};

// Function BP_LootBox.BP_LootBox_C.GetItems
struct ABP_LootBox_C_GetItems_Params
{
};

// Function BP_LootBox.BP_LootBox_C.AddItemsFromDT
struct ABP_LootBox_C_AddItemsFromDT_Params
{
};

// Function BP_LootBox.BP_LootBox_C.ReceiveTick
struct ABP_LootBox_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LootBox.BP_LootBox_C.ReceiveBeginPlay
struct ABP_LootBox_C_ReceiveBeginPlay_Params
{
};

// Function BP_LootBox.BP_LootBox_C.ExecuteUbergraph_BP_LootBox
struct ABP_LootBox_C_ExecuteUbergraph_BP_LootBox_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
