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

// Function SurvivalInventoryWidget.SurvivalInventoryWidget_C.PreConstruct
struct USurvivalInventoryWidget_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivalInventoryWidget.SurvivalInventoryWidget_C.Construct
struct USurvivalInventoryWidget_C_Construct_Params
{
};

// Function SurvivalInventoryWidget.SurvivalInventoryWidget_C.AddItemUI
struct USurvivalInventoryWidget_C_AddItemUI_Params
{
	TEnumAsByte<ItemType_EItemType>                    Selection;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InventoryIndex;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DontShowName_;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivalInventoryWidget.SurvivalInventoryWidget_C.DeleteItemUI
struct USurvivalInventoryWidget_C_DeleteItemUI_Params
{
	int                                                InventoryIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivalInventoryWidget.SurvivalInventoryWidget_C.SelectItem
struct USurvivalInventoryWidget_C_SelectItem_Params
{
	int                                                InventoryIndex;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivalInventoryWidget.SurvivalInventoryWidget_C.UpdateSlots
struct USurvivalInventoryWidget_C_UpdateSlots_Params
{
};

// Function SurvivalInventoryWidget.SurvivalInventoryWidget_C.DeselectAllItems
struct USurvivalInventoryWidget_C_DeselectAllItems_Params
{
};

// Function SurvivalInventoryWidget.SurvivalInventoryWidget_C.Tick
struct USurvivalInventoryWidget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivalInventoryWidget.SurvivalInventoryWidget_C.ShowItemName
struct USurvivalInventoryWidget_C_ShowItemName_Params
{
};

// Function SurvivalInventoryWidget.SurvivalInventoryWidget_C.SelectDeselectItem
struct USurvivalInventoryWidget_C_SelectDeselectItem_Params
{
	bool                                               Select_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Index;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivalInventoryWidget.SurvivalInventoryWidget_C.ActiveSlot
struct USurvivalInventoryWidget_C_ActiveSlot_Params
{
	int                                                CurrentSlot;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivalInventoryWidget.SurvivalInventoryWidget_C.VisibilityUpdate
struct USurvivalInventoryWidget_C_VisibilityUpdate_Params
{
};

// Function SurvivalInventoryWidget.SurvivalInventoryWidget_C.DisplayName
struct USurvivalInventoryWidget_C_DisplayName_Params
{
	int                                                CurrentSlot;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivalInventoryWidget.SurvivalInventoryWidget_C.ExecuteUbergraph_SurvivalInventoryWidget
struct USurvivalInventoryWidget_C_ExecuteUbergraph_SurvivalInventoryWidget_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
