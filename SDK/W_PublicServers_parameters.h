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

// Function W_PublicServers.W_PublicServers_C.UpdateFakeItems
struct UW_PublicServers_C_UpdateFakeItems_Params
{
	int                                                Count;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_PublicServers.W_PublicServers_C.CreateFakeListItems
struct UW_PublicServers_C_CreateFakeListItems_Params
{
	int                                                Number;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_PublicServers.W_PublicServers_C.SortByStatusUp
struct UW_PublicServers_C_SortByStatusUp_Params
{
};

// Function W_PublicServers.W_PublicServers_C.SortByStatusDown
struct UW_PublicServers_C_SortByStatusDown_Params
{
};

// Function W_PublicServers.W_PublicServers_C.SortByModeUp
struct UW_PublicServers_C_SortByModeUp_Params
{
};

// Function W_PublicServers.W_PublicServers_C.SortByModeDown
struct UW_PublicServers_C_SortByModeDown_Params
{
};

// Function W_PublicServers.W_PublicServers_C.SortByMapUp
struct UW_PublicServers_C_SortByMapUp_Params
{
};

// Function W_PublicServers.W_PublicServers_C.SortByMapDown
struct UW_PublicServers_C_SortByMapDown_Params
{
};

// Function W_PublicServers.W_PublicServers_C.SortByPlayersUp
struct UW_PublicServers_C_SortByPlayersUp_Params
{
};

// Function W_PublicServers.W_PublicServers_C.ClearSortedSessions
struct UW_PublicServers_C_ClearSortedSessions_Params
{
};

// Function W_PublicServers.W_PublicServers_C.Sort By Players Down
struct UW_PublicServers_C_Sort_By_Players_Down_Params
{
};

// Function W_PublicServers.W_PublicServers_C.Construct
struct UW_PublicServers_C_Construct_Params
{
};

// Function W_PublicServers.W_PublicServers_C.Tick
struct UW_PublicServers_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_PublicServers.W_PublicServers_C.UpdateList
struct UW_PublicServers_C_UpdateList_Params
{
	TArray<class UBP_SessionData_C*>                   List;                                                      // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function W_PublicServers.W_PublicServers_C.BndEvt__ListView_68_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature
struct UW_PublicServers_C_BndEvt__ListView_68_K2Node_ComponentBoundEvent_0_OnListEntryInitializedDynamic__DelegateSignature_Params
{
	class UObject*                                     Item;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                                 Widget;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_PublicServers.W_PublicServers_C.BndEvt__ListView_68_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature
struct UW_PublicServers_C_BndEvt__ListView_68_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature_Params
{
	class UObject*                                     Item;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_PublicServers.W_PublicServers_C.ClearList
struct UW_PublicServers_C_ClearList_Params
{
};

// Function W_PublicServers.W_PublicServers_C.OnSortByPlayers
struct UW_PublicServers_C_OnSortByPlayers_Params
{
};

// Function W_PublicServers.W_PublicServers_C.ApplyList
struct UW_PublicServers_C_ApplyList_Params
{
	TArray<class UBP_SessionData_C*>                   Sessions;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function W_PublicServers.W_PublicServers_C.BndEvt__Button_70_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UW_PublicServers_C_BndEvt__Button_70_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_PublicServers.W_PublicServers_C.BndEvt__MapButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UW_PublicServers_C_BndEvt__MapButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_PublicServers.W_PublicServers_C.OnSortByMap
struct UW_PublicServers_C_OnSortByMap_Params
{
};

// Function W_PublicServers.W_PublicServers_C.OnSortByMode
struct UW_PublicServers_C_OnSortByMode_Params
{
};

// Function W_PublicServers.W_PublicServers_C.BndEvt__StatusButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UW_PublicServers_C_BndEvt__StatusButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_PublicServers.W_PublicServers_C.OnSortByStatus
struct UW_PublicServers_C_OnSortByStatus_Params
{
};

// Function W_PublicServers.W_PublicServers_C.BndEvt__ServerNameButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
struct UW_PublicServers_C_BndEvt__ServerNameButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_PublicServers.W_PublicServers_C.BndEvt__ServerNameButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
struct UW_PublicServers_C_BndEvt__ServerNameButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_PublicServers.W_PublicServers_C.BndEvt__StatusButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
struct UW_PublicServers_C_BndEvt__StatusButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_PublicServers.W_PublicServers_C.BndEvt__StatusButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
struct UW_PublicServers_C_BndEvt__StatusButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_PublicServers.W_PublicServers_C.BndEvt__MapButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
struct UW_PublicServers_C_BndEvt__MapButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_PublicServers.W_PublicServers_C.BndEvt__MapButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
struct UW_PublicServers_C_BndEvt__MapButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_PublicServers.W_PublicServers_C.BndEvt__PlayersButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
struct UW_PublicServers_C_BndEvt__PlayersButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_PublicServers.W_PublicServers_C.BndEvt__PlayersButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
struct UW_PublicServers_C_BndEvt__PlayersButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_PublicServers.W_PublicServers_C.BndEvt__PingButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
struct UW_PublicServers_C_BndEvt__PingButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_PublicServers.W_PublicServers_C.BndEvt__PingButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
struct UW_PublicServers_C_BndEvt__PingButton_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_PublicServers.W_PublicServers_C.BndEvt__W_PublicServers_ServerNameButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
struct UW_PublicServers_C_BndEvt__W_PublicServers_ServerNameButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_PublicServers.W_PublicServers_C.BndEvt__W_PublicServers_PingButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
struct UW_PublicServers_C_BndEvt__W_PublicServers_PingButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_PublicServers.W_PublicServers_C.BndEvt__W_PublicServers_ListView_68_K2Node_ComponentBoundEvent_18_SimpleListItemEventDynamic__DelegateSignature
struct UW_PublicServers_C_BndEvt__W_PublicServers_ListView_68_K2Node_ComponentBoundEvent_18_SimpleListItemEventDynamic__DelegateSignature_Params
{
	class UObject*                                     Item;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_PublicServers.W_PublicServers_C.ClearSelectionOfSortingButtons
struct UW_PublicServers_C_ClearSelectionOfSortingButtons_Params
{
};

// Function W_PublicServers.W_PublicServers_C.BndEvt__W_PublicServers_ModeButton_1_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
struct UW_PublicServers_C_BndEvt__W_PublicServers_ModeButton_1_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_PublicServers.W_PublicServers_C.BndEvt__W_PublicServers_ModeButton_1_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
struct UW_PublicServers_C_BndEvt__W_PublicServers_ModeButton_1_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_PublicServers.W_PublicServers_C.BndEvt__W_PublicServers_ModeButton_1_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
struct UW_PublicServers_C_BndEvt__W_PublicServers_ModeButton_1_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_PublicServers.W_PublicServers_C.MakeScrollBarVisible
struct UW_PublicServers_C_MakeScrollBarVisible_Params
{
	bool                                               Visible;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_PublicServers.W_PublicServers_C.UpdateScrubberPos
struct UW_PublicServers_C_UpdateScrubberPos_Params
{
};

// Function W_PublicServers.W_PublicServers_C.UpdateScrubberSize
struct UW_PublicServers_C_UpdateScrubberSize_Params
{
};

// Function W_PublicServers.W_PublicServers_C.FillFakeElement
struct UW_PublicServers_C_FillFakeElement_Params
{
	TArray<class UBP_SessionData_C*>                   Sessions;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function W_PublicServers.W_PublicServers_C.Init items
struct UW_PublicServers_C_Init_items_Params
{
	class UObject*                                     Item;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                                 Widget;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_PublicServers.W_PublicServers_C.ExecuteUbergraph_W_PublicServers
struct UW_PublicServers_C_ExecuteUbergraph_W_PublicServers_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
