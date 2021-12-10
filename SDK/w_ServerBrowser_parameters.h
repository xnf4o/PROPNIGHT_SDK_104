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

// Function w_ServerBrowser.w_ServerBrowser_C.SetRegions
struct Uw_ServerBrowser_C_SetRegions_Params
{
	TArray<struct FPingQoSInfo>                        Regions;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function w_ServerBrowser.w_ServerBrowser_C.GetMaps
struct Uw_ServerBrowser_C_GetMaps_Params
{
	struct FString                                     LevelList;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function w_ServerBrowser.w_ServerBrowser_C.TestSessions
struct Uw_ServerBrowser_C_TestSessions_Params
{
	TArray<class UBP_SessionData_C*>                   Sessions;                                                  // 0x0000(0x0010)  (Parm, OutParm)
};

// Function w_ServerBrowser.w_ServerBrowser_C.PrintError
struct Uw_ServerBrowser_C_PrintError_Params
{
	struct FString                                     Text;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function w_ServerBrowser.w_ServerBrowser_C.Construct
struct Uw_ServerBrowser_C_Construct_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.Tick
struct Uw_ServerBrowser_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function w_ServerBrowser.w_ServerBrowser_C.Show
struct Uw_ServerBrowser_C_Show_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.Hide
struct Uw_ServerBrowser_C_Hide_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.UpdatePublicList
struct Uw_ServerBrowser_C_UpdatePublicList_Params
{
	TArray<class UBP_SessionData_C*>                   SessionList;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                Tab;                                                       // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AutoJoin;                                                  // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_PublicGames_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__Button_PublicGames_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.RefreshPublicGames
struct Uw_ServerBrowser_C_RefreshPublicGames_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.SetSession
struct Uw_ServerBrowser_C_SetSession_Params
{
	class UObject*                                     session;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function w_ServerBrowser.w_ServerBrowser_C.SearchGames
struct Uw_ServerBrowser_C_SearchGames_Params
{
	struct FString                                     Maps;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Modes;                                                     // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Status;                                                    // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                TabIndex;                                                  // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsPrivate;                                                 // 0x0034(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Key;                                                       // 0x0038(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function w_ServerBrowser.w_ServerBrowser_C.OnRequest
struct Uw_ServerBrowser_C_OnRequest_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.OnResponse
struct Uw_ServerBrowser_C_OnResponse_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.PublicGames_Clicked
struct Uw_ServerBrowser_C_PublicGames_Clicked_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.FreeModeServers_Clicked
struct Uw_ServerBrowser_C_FreeModeServers_Clicked_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.CreateServer_Clicked
struct Uw_ServerBrowser_C_CreateServer_Clicked_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_GM_Propnight_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__Button_GM_Propnight_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_GM_Prophunt_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__Button_GM_Prophunt_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.UpdateServerList
struct Uw_ServerBrowser_C_UpdateServerList_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.SelectPropnightGM
struct Uw_ServerBrowser_C_SelectPropnightGM_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.SelectProphunt_GM
struct Uw_ServerBrowser_C_SelectProphunt_GM_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_JoinServer_Left_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__Button_JoinServer_Left_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_JoinServer_Right_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__Button_JoinServer_Right_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.DoubleClickJoinServer
struct Uw_ServerBrowser_C_DoubleClickJoinServer_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_JoinPrivate_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__w_ServerBrowser_Button_JoinPrivate_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_JoinPrivate_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__w_ServerBrowser_Button_JoinPrivate_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_CreateGame_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__w_ServerBrowser_Button_CreateGame_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_CreateGame_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__w_ServerBrowser_Button_CreateGame_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_GM_Propnight_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__Button_GM_Propnight_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_GM_Prophunt_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__Button_GM_Prophunt_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_Update_night_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__Button_Update_night_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_Update_night_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__Button_Update_night_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_GM_Propnight_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__Button_GM_Propnight_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_GM_Prophunt_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__Button_GM_Prophunt_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_JoinServer_Left_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__Button_JoinServer_Left_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_JoinServer_Left_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__Button_JoinServer_Left_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_JoinServer_Right_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__Button_JoinServer_Right_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_JoinServer_Right_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__Button_JoinServer_Right_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.PressBackManually
struct Uw_ServerBrowser_C_PressBackManually_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.ListenForEscape
struct Uw_ServerBrowser_C_ListenForEscape_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.FakeEntryAnim
struct Uw_ServerBrowser_C_FakeEntryAnim_Params
{
	class UObject*                                     Item;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                                 Widget;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function w_ServerBrowser.w_ServerBrowser_C.PlayWaitingAnimation
struct Uw_ServerBrowser_C_PlayWaitingAnimation_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.StopWaitingAnimation
struct Uw_ServerBrowser_C_StopWaitingAnimation_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_JoinServer_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__Button_JoinServer_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.SearchIsOver
struct Uw_ServerBrowser_C_SearchIsOver_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_CreateGame_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__w_ServerBrowser_Button_CreateGame_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_JoinServer_K2Node_ComponentBoundEvent_31_OnButtonPressedEvent__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__w_ServerBrowser_Button_JoinServer_K2Node_ComponentBoundEvent_31_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_JoinPrivate_K2Node_ComponentBoundEvent_33_OnButtonPressedEvent__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__w_ServerBrowser_Button_JoinPrivate_K2Node_ComponentBoundEvent_33_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.OnServerListResponse
struct Uw_ServerBrowser_C_OnServerListResponse_Params
{
	TArray<struct FServerInfo>                         Servers;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                Tab;                                                       // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AutoJoin;                                                  // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function w_ServerBrowser.w_ServerBrowser_C.ResetPrivateDialog_Escape
struct Uw_ServerBrowser_C_ResetPrivateDialog_Escape_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__w_ServerBrowser_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_Update_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__w_ServerBrowser_Button_Update_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_Update_K2Node_ComponentBoundEvent_32_OnButtonReleasedEvent__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__w_ServerBrowser_Button_Update_K2Node_ComponentBoundEvent_32_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.SearchAfterCreate
struct Uw_ServerBrowser_C_SearchAfterCreate_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.StopSearchingAfterCreation
struct Uw_ServerBrowser_C_StopSearchingAfterCreation_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.SearchingTick
struct Uw_ServerBrowser_C_SearchingTick_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_WBP_CustomComboBox_Region_K2Node_ComponentBoundEvent_1_OnExpanded__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__w_ServerBrowser_WBP_CustomComboBox_Region_K2Node_ComponentBoundEvent_1_OnExpanded__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_WBP_CustomComboBox_Maps_K2Node_ComponentBoundEvent_4_OnExpanded__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__w_ServerBrowser_WBP_CustomComboBox_Maps_K2Node_ComponentBoundEvent_4_OnExpanded__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.InitPath
struct Uw_ServerBrowser_C_InitPath_Params
{
	struct FText                                       PageText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       PageName;                                                  // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ToCreateGame;                                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function w_ServerBrowser.w_ServerBrowser_C.MoveToBrowser
struct Uw_ServerBrowser_C_MoveToBrowser_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.MoveToPlayScreen
struct Uw_ServerBrowser_C_MoveToPlayScreen_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.Move
struct Uw_ServerBrowser_C_Move_Params
{
	struct FName                                       EntryName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_JoinServer_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__Button_JoinServer_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.AutoJoin
struct Uw_ServerBrowser_C_AutoJoin_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.SwitchToBrowser
struct Uw_ServerBrowser_C_SwitchToBrowser_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.OpenCreateGame
struct Uw_ServerBrowser_C_OpenCreateGame_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.ConnectVisuals
struct Uw_ServerBrowser_C_ConnectVisuals_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.OnServerListResponseV2
struct Uw_ServerBrowser_C_OnServerListResponseV2_Params
{
	TArray<class UVaRestJsonObject*>                   Servers;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ClearServerList;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     SkipToken;                                                 // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function w_ServerBrowser.w_ServerBrowser_C.AddPlayfabSessions
struct Uw_ServerBrowser_C_AddPlayfabSessions_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.ClearQueueAndPool
struct Uw_ServerBrowser_C_ClearQueueAndPool_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.ProcessSessions
struct Uw_ServerBrowser_C_ProcessSessions_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.ShowRealList
struct Uw_ServerBrowser_C_ShowRealList_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.OnItemAdded
struct Uw_ServerBrowser_C_OnItemAdded_Params
{
	class UBP_SessionData_C*                           session;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function w_ServerBrowser.w_ServerBrowser_C.CheckQueue
struct Uw_ServerBrowser_C_CheckQueue_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__WBP_CustomComboBox_Region_K2Node_ComponentBoundEvent_34_OnEntryClicked__DelegateSignature
struct Uw_ServerBrowser_C_BndEvt__WBP_CustomComboBox_Region_K2Node_ComponentBoundEvent_34_OnEntryClicked__DelegateSignature_Params
{
	struct FText                                       EntryName;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                EntryIndex;                                                // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function w_ServerBrowser.w_ServerBrowser_C.SpawnFakeElement
struct Uw_ServerBrowser_C_SpawnFakeElement_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.TestFakeListItem
struct Uw_ServerBrowser_C_TestFakeListItem_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.ExecuteUbergraph_w_ServerBrowser
struct Uw_ServerBrowser_C_ExecuteUbergraph_w_ServerBrowser_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function w_ServerBrowser.w_ServerBrowser_C.DoneLoadServers__DelegateSignature
struct Uw_ServerBrowser_C_DoneLoadServers__DelegateSignature_Params
{
};

// Function w_ServerBrowser.w_ServerBrowser_C.SearchingIsOver__DelegateSignature
struct Uw_ServerBrowser_C_SearchingIsOver__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
