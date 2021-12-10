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

// Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.GetRarityStyleTarget
struct USurvivalInventorySlotWidget_C_GetRarityStyleTarget_Params
{
	int                                                GetaCopy;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                                 SlateBrush;                                                // 0x0008(0x0088)  (Parm, OutParm, UObjectWrapper)
};

// Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.PreConstruct
struct USurvivalInventorySlotWidget_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.Construct
struct USurvivalInventorySlotWidget_C_Construct_Params
{
};

// Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.ChangeImage
struct USurvivalInventorySlotWidget_C_ChangeImage_Params
{
	int                                                Owner;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemStructure                              Selection;                                                 // 0x0008(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.HideItem
struct USurvivalInventorySlotWidget_C_HideItem_Params
{
};

// Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.SelectItem
struct USurvivalInventorySlotWidget_C_SelectItem_Params
{
};

// Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.DeselectItem
struct USurvivalInventorySlotWidget_C_DeselectItem_Params
{
};

// Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.Tick
struct USurvivalInventorySlotWidget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.IconCD
struct USurvivalInventorySlotWidget_C_IconCD_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.MainVisibility
struct USurvivalInventorySlotWidget_C_MainVisibility_Params
{
	bool                                               Hide_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.StartCD
struct USurvivalInventorySlotWidget_C_StartCD_Params
{
	struct FItemStructure                              Item;                                                      // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.StopCD
struct USurvivalInventorySlotWidget_C_StopCD_Params
{
};

// Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.ResetStopCD
struct USurvivalInventorySlotWidget_C_ResetStopCD_Params
{
};

// Function SurvivalInventorySlotWidget.SurvivalInventorySlotWidget_C.ExecuteUbergraph_SurvivalInventorySlotWidget
struct USurvivalInventorySlotWidget_C_ExecuteUbergraph_SurvivalInventorySlotWidget_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
