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

// Function PC_MainMenu.PC_MainMenu_C.GetIsPlayfabBackend
struct APC_MainMenu_C_GetIsPlayfabBackend_Params
{
	bool                                               Is;                                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_MainMenu.PC_MainMenu_C.GetIsExit
struct APC_MainMenu_C_GetIsExit_Params
{
	bool                                               Is;                                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_MainMenu.PC_MainMenu_C.GetServerId
struct APC_MainMenu_C_GetServerId_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function PC_MainMenu.PC_MainMenu_C.HandleAndSortPings
struct APC_MainMenu_C_HandleAndSortPings_Params
{
	TArray<struct FPingQoSInfo>                        Pings;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FPingQoSInfo>                        SortedRes;                                                 // 0x0010(0x0010)  (Parm, OutParm)
};

// Function PC_MainMenu.PC_MainMenu_C.CheatNumbers
struct APC_MainMenu_C_CheatNumbers_Params
{
	struct FString                                     S;                                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function PC_MainMenu.PC_MainMenu_C.MakeSearchData
struct APC_MainMenu_C_MakeSearchData_Params
{
	int                                                Role;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                          Data;                                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_MainMenu.PC_MainMenu_C.LoadToPS
struct APC_MainMenu_C_LoadToPS_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.LoadUserData
struct APC_MainMenu_C_LoadUserData_Params
{
	bool                                               NewParam;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_MainMenu.PC_MainMenu_C.AddSession
struct APC_MainMenu_C_AddSession_Params
{
	struct FBlueprintSessionResult                     session;                                                   // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PC_MainMenu.PC_MainMenu_C.IsValidSession
struct APC_MainMenu_C_IsValidSession_Params
{
	struct FBlueprintSessionResult                     session;                                                   // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsValid;                                                   // 0x0108(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_MainMenu.PC_MainMenu_C.SetListServersV2
struct APC_MainMenu_C_SetListServersV2_Params
{
	TArray<struct FBlueprintSessionResult>             Sessions;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PC_MainMenu.PC_MainMenu_C.ClearServers
struct APC_MainMenu_C_ClearServers_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.CanJoin
struct APC_MainMenu_C_CanJoin_Params
{
	bool                                               Can;                                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_MainMenu.PC_MainMenu_C.GetServersDev
struct APC_MainMenu_C_GetServersDev_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.SetListServers
struct APC_MainMenu_C_SetListServers_Params
{
	TArray<class UObject*>                             Servers;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PC_MainMenu.PC_MainMenu_C.UnmarkBusy
struct APC_MainMenu_C_UnmarkBusy_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.MarkBusy
struct APC_MainMenu_C_MarkBusy_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.SetPlayFabId
struct APC_MainMenu_C_SetPlayFabId_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function PC_MainMenu.PC_MainMenu_C.SaveLoginData
struct APC_MainMenu_C_SaveLoginData_Params
{
	struct FString                                     Login;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function PC_MainMenu.PC_MainMenu_C.GetID
struct APC_MainMenu_C_GetID_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function PC_MainMenu.PC_MainMenu_C.GetLoginData
struct APC_MainMenu_C_GetLoginData_Params
{
	bool                                               HasData;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USG_EOSDeviceLogin_C*                        Data;                                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_MainMenu.PC_MainMenu_C.InpActEvt_Escape_K2Node_InputKeyEvent_8
struct APC_MainMenu_C_InpActEvt_Escape_K2Node_InputKeyEvent_8_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_MainMenu.PC_MainMenu_C.InpActEvt_F5_K2Node_InputKeyEvent_7
struct APC_MainMenu_C_InpActEvt_F5_K2Node_InputKeyEvent_7_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_MainMenu.PC_MainMenu_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_6
struct APC_MainMenu_C_InpActEvt_NumPadOne_K2Node_InputKeyEvent_6_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_MainMenu.PC_MainMenu_C.OnFailure_B03CFE9141A130F504FC5BB140CBD9F7
struct APC_MainMenu_C_OnFailure_B03CFE9141A130F504FC5BB140CBD9F7_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.OnSuccess_B03CFE9141A130F504FC5BB140CBD9F7
struct APC_MainMenu_C_OnSuccess_B03CFE9141A130F504FC5BB140CBD9F7_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.InpActEvt_F4_K2Node_InputKeyEvent_5
struct APC_MainMenu_C_InpActEvt_F4_K2Node_InputKeyEvent_5_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_MainMenu.PC_MainMenu_C.InpActEvt_Zero_K2Node_InputKeyEvent_4
struct APC_MainMenu_C_InpActEvt_Zero_K2Node_InputKeyEvent_4_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_MainMenu.PC_MainMenu_C.InpActEvt_Three_K2Node_InputKeyEvent_3
struct APC_MainMenu_C_InpActEvt_Three_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_MainMenu.PC_MainMenu_C.InpActEvt_One_K2Node_InputKeyEvent_2
struct APC_MainMenu_C_InpActEvt_One_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_MainMenu.PC_MainMenu_C.InpActEvt_Two_K2Node_InputKeyEvent_1
struct APC_MainMenu_C_InpActEvt_Two_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_MainMenu.PC_MainMenu_C.OnSearchFail
struct APC_MainMenu_C_OnSearchFail_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.OnCancelTicket
struct APC_MainMenu_C_OnCancelTicket_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.OnMatch
struct APC_MainMenu_C_OnMatch_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.OnMatchFail
struct APC_MainMenu_C_OnMatchFail_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.OnLoginOK
struct APC_MainMenu_C_OnLoginOK_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.OnPreConnect
struct APC_MainMenu_C_OnPreConnect_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.FailSessionList
struct APC_MainMenu_C_FailSessionList_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.ResetAutoConnect
struct APC_MainMenu_C_ResetAutoConnect_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.FailJoin
struct APC_MainMenu_C_FailJoin_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.FailCreateSession
struct APC_MainMenu_C_FailCreateSession_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.ResetButtonVisibility
struct APC_MainMenu_C_ResetButtonVisibility_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.CancelSearch
struct APC_MainMenu_C_CancelSearch_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.OnSessionCreated
struct APC_MainMenu_C_OnSessionCreated_Params
{
	struct FString                                     Map;                                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function PC_MainMenu.PC_MainMenu_C.FindGame
struct APC_MainMenu_C_FindGame_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.GetServersV2
struct APC_MainMenu_C_GetServersV2_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.CreateServerV2
struct APC_MainMenu_C_CreateServerV2_Params
{
	bool                                               Private;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     MapName;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function PC_MainMenu.PC_MainMenu_C.ReceiveBeginPlay
struct APC_MainMenu_C_ReceiveBeginPlay_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.OnTravelError
struct APC_MainMenu_C_OnTravelError_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.OnNetworkError
struct APC_MainMenu_C_OnNetworkError_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.OnError
struct APC_MainMenu_C_OnError_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.OnLoginFail
struct APC_MainMenu_C_OnLoginFail_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.OnResponse
struct APC_MainMenu_C_OnResponse_Params
{
	struct FString                                     response;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function PC_MainMenu.PC_MainMenu_C.ListServers
struct APC_MainMenu_C_ListServers_Params
{
	int                                                Tab;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_MainMenu.PC_MainMenu_C.CreateServerV4
struct APC_MainMenu_C_CreateServerV4_Params
{
	struct FString                                     Map;                                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Mode;                                                      // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Region;                                                    // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function PC_MainMenu.PC_MainMenu_C.JoinToTicket
struct APC_MainMenu_C_JoinToTicket_Params
{
	struct FString                                     Ticket;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function PC_MainMenu.PC_MainMenu_C.CreateLobby
struct APC_MainMenu_C_CreateLobby_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.OnPingCompleted
struct APC_MainMenu_C_OnPingCompleted_Params
{
	TArray<struct FPingQoSInfo>                        Result;                                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PC_MainMenu.PC_MainMenu_C.OnSearchOK
struct APC_MainMenu_C_OnSearchOK_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.OnMatchFound
struct APC_MainMenu_C_OnMatchFound_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.QWE
struct APC_MainMenu_C_QWE_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.OnFoundSessions
struct APC_MainMenu_C_OnFoundSessions_Params
{
	TArray<struct FBlueprintSessionResult>             Sessions;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PC_MainMenu.PC_MainMenu_C.CreateServerV3
struct APC_MainMenu_C_CreateServerV3_Params
{
	struct FS_GameSettings                             Settings;                                                  // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_ServerSettings                           ServerSettings;                                            // 0x0020(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_MainMenu.PC_MainMenu_C.ReceiveTick
struct APC_MainMenu_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_MainMenu.PC_MainMenu_C.AfterServerError
struct APC_MainMenu_C_AfterServerError_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.CloseTicket
struct APC_MainMenu_C_CloseTicket_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.ManualSearch
struct APC_MainMenu_C_ManualSearch_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.SettingsExecute
struct APC_MainMenu_C_SettingsExecute_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.loginedEos
struct APC_MainMenu_C_loginedEos_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.StartSearch
struct APC_MainMenu_C_StartSearch_Params
{
	int                                                Role;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_MainMenu.PC_MainMenu_C.EnablePlayfabBackend
struct APC_MainMenu_C_EnablePlayfabBackend_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.Upload
struct APC_MainMenu_C_Upload_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.StartPollPlayfabServers
struct APC_MainMenu_C_StartPollPlayfabServers_Params
{
	struct FString                                     Region;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function PC_MainMenu.PC_MainMenu_C.ConfigureRegions
struct APC_MainMenu_C_ConfigureRegions_Params
{
	TArray<struct FPingQoSInfo>                        Regions;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PC_MainMenu.PC_MainMenu_C.ContinuePollPlayfabServers
struct APC_MainMenu_C_ContinuePollPlayfabServers_Params
{
	struct FString                                     SkipToken;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function PC_MainMenu.PC_MainMenu_C.SetServerPageSize
struct APC_MainMenu_C_SetServerPageSize_Params
{
	int                                                Size;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_MainMenu.PC_MainMenu_C.StopPoll
struct APC_MainMenu_C_StopPoll_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.DisablePlayfabBackend
struct APC_MainMenu_C_DisablePlayfabBackend_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.LoginWithEOSDevice
struct APC_MainMenu_C_LoginWithEOSDevice_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.ExecuteUbergraph_PC_MainMenu
struct APC_MainMenu_C_ExecuteUbergraph_PC_MainMenu_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_MainMenu.PC_MainMenu_C.OnSteamCheckError__DelegateSignature
struct APC_MainMenu_C_OnSteamCheckError__DelegateSignature_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.OnBeginLoginPlayfab__DelegateSignature
struct APC_MainMenu_C_OnBeginLoginPlayfab__DelegateSignature_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.OnBeginSteamCheck__DelegateSignature
struct APC_MainMenu_C_OnBeginSteamCheck__DelegateSignature_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.OnMatchFoundEvent__DelegateSignature
struct APC_MainMenu_C_OnMatchFoundEvent__DelegateSignature_Params
{
};

// Function PC_MainMenu.PC_MainMenu_C.OnPlayfabReady__DelegateSignature
struct APC_MainMenu_C_OnPlayfabReady__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
