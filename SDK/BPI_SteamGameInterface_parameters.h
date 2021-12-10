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

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetLobbyDataBP
struct UBPI_SteamGameInterface_C_GetLobbyDataBP_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Value;                                                     // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetLobbyDataBP
struct UBPI_SteamGameInterface_C_SetLobbyDataBP_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Value;                                                     // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetCustomGameData
struct UBPI_SteamGameInterface_C_SetCustomGameData_Params
{
	struct FString                                     Address;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetLobbyMembersCount
struct UBPI_SteamGameInterface_C_GetLobbyMembersCount_Params
{
	int                                                Members;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetIsInMainMenuBP
struct UBPI_SteamGameInterface_C_SetIsInMainMenuBP_Params
{
	bool                                               Val;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.NotifyConnetCustomGame
struct UBPI_SteamGameInterface_C_NotifyConnetCustomGame_Params
{
	struct FString                                     Address;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetShouldCreateLobby
struct UBPI_SteamGameInterface_C_SetShouldCreateLobby_Params
{
	bool                                               Val;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetShouldCreateLobby
struct UBPI_SteamGameInterface_C_GetShouldCreateLobby_Params
{
	bool                                               Val;                                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.Get_GC_Data
struct UBPI_SteamGameInterface_C_Get_GC_Data_Params
{
	struct FString                                     Region;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     session;                                                   // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.Set_CS_Data
struct UBPI_SteamGameInterface_C_Set_CS_Data_Params
{
	struct FString                                     SessionId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Region;                                                    // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetCachedBuildId
struct UBPI_SteamGameInterface_C_SetCachedBuildId_Params
{
	struct FString                                     BuildId;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetCachedBuildId
struct UBPI_SteamGameInterface_C_GetCachedBuildId_Params
{
	struct FString                                     BuildId;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.ConnectCustomGame
struct UBPI_SteamGameInterface_C_ConnectCustomGame_Params
{
	struct FString                                     Address;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetRandomMap3
struct UBPI_SteamGameInterface_C_GetRandomMap3_Params
{
	struct FString                                     MapName;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetRandomMap2
struct UBPI_SteamGameInterface_C_GetRandomMap2_Params
{
	struct FString                                     Map;                                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetLobbyOwner
struct UBPI_SteamGameInterface_C_GetLobbyOwner_Params
{
	struct FString                                     OwnerID;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.IsAnyoneOnLobby
struct UBPI_SteamGameInterface_C_IsAnyoneOnLobby_Params
{
	bool                                               Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.RestoreLobby
struct UBPI_SteamGameInterface_C_RestoreLobby_Params
{
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.HandleStartupSteamInvite
struct UBPI_SteamGameInterface_C_HandleStartupSteamInvite_Params
{
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetMenuLoaded
struct UBPI_SteamGameInterface_C_SetMenuLoaded_Params
{
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.ConnectMatchmakingGame
struct UBPI_SteamGameInterface_C_ConnectMatchmakingGame_Params
{
	struct FString                                     Address;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetAmILobbyMember
struct UBPI_SteamGameInterface_C_GetAmILobbyMember_Params
{
	bool                                               Member;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetPings
struct UBPI_SteamGameInterface_C_GetPings_Params
{
	TArray<struct FPingQoSInfo>                        Pings;                                                     // 0x0000(0x0010)  (Parm, OutParm)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetPings
struct UBPI_SteamGameInterface_C_SetPings_Params
{
	TArray<struct FPingQoSInfo>                        Pings;                                                     // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetPlayfabMatchPlayers
struct UBPI_SteamGameInterface_C_SetPlayfabMatchPlayers_Params
{
	TArray<class UPlayFabJsonObject*>                  Players;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.NotifySteamLobbyStopSearch
struct UBPI_SteamGameInterface_C_NotifySteamLobbyStopSearch_Params
{
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.InviteFriendToLobby
struct UBPI_SteamGameInterface_C_InviteFriendToLobby_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.LeaveLobby
struct UBPI_SteamGameInterface_C_LeaveLobby_Params
{
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetSteamFriendList
struct UBPI_SteamGameInterface_C_GetSteamFriendList_Params
{
	TArray<struct FSteamFriend>                        Friends;                                                   // 0x0000(0x0010)  (Parm, OutParm)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.IsLobbyOwner
struct UBPI_SteamGameInterface_C_IsLobbyOwner_Params
{
	bool                                               Owner;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetLobbyPlayfabPlayers
struct UBPI_SteamGameInterface_C_GetLobbyPlayfabPlayers_Params
{
	TArray<struct FString>                             Players;                                                   // 0x0000(0x0010)  (Parm, OutParm)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.NotifySteamLobbyConnect
struct UBPI_SteamGameInterface_C_NotifySteamLobbyConnect_Params
{
	struct FString                                     Address;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.NotifySteamLobbyStartSearch
struct UBPI_SteamGameInterface_C_NotifySteamLobbyStartSearch_Params
{
	struct FString                                     Ticket;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.CreateSteamLobby
struct UBPI_SteamGameInterface_C_CreateSteamLobby_Params
{
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.RunSteamCallback
struct UBPI_SteamGameInterface_C_RunSteamCallback_Params
{
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetIsMatchmaking
struct UBPI_SteamGameInterface_C_GetIsMatchmaking_Params
{
	bool                                               Is;                                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetIsMatchMaking
struct UBPI_SteamGameInterface_C_SetIsMatchMaking_Params
{
	bool                                               Is;                                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetKillerID
struct UBPI_SteamGameInterface_C_GetKillerID_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetKillerID
struct UBPI_SteamGameInterface_C_SetKillerID_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetIsWithEditor
struct UBPI_SteamGameInterface_C_GetIsWithEditor_Params
{
	bool                                               IsEditor;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.IsPlayfabServerV2
struct UBPI_SteamGameInterface_C_IsPlayfabServerV2_Params
{
	bool                                               Is;                                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetServerId
struct UBPI_SteamGameInterface_C_GetServerId_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetServerId
struct UBPI_SteamGameInterface_C_SetServerId_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetServerName
struct UBPI_SteamGameInterface_C_GetServerName_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetServerName
struct UBPI_SteamGameInterface_C_SetServerName_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetBuildNumber
struct UBPI_SteamGameInterface_C_GetBuildNumber_Params
{
	int                                                BuildNumber;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetActualServer
struct UBPI_SteamGameInterface_C_SetActualServer_Params
{
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetIsActualServer
struct UBPI_SteamGameInterface_C_GetIsActualServer_Params
{
	bool                                               IsActual;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetServerRegion
struct UBPI_SteamGameInterface_C_GetServerRegion_Params
{
	struct FString                                     Region;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetServerRegion
struct UBPI_SteamGameInterface_C_SetServerRegion_Params
{
	struct FString                                     Region;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetGameServerSettings
struct UBPI_SteamGameInterface_C_SetGameServerSettings_Params
{
	struct FS_GameSettings                             GameSettings;                                              // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_ServerSettings                           ServerSettings;                                            // 0x0020(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetServiceAddress
struct UBPI_SteamGameInterface_C_SetServiceAddress_Params
{
	struct FString                                     Address;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetServiceAddress
struct UBPI_SteamGameInterface_C_GetServiceAddress_Params
{
	struct FString                                     Address;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetServerSettings
struct UBPI_SteamGameInterface_C_GetServerSettings_Params
{
	struct FS_ServerSettings                           ServerSettings;                                            // 0x0000(0x0028)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetPlayerName
struct UBPI_SteamGameInterface_C_GetPlayerName_Params
{
	struct FString                                     Nickname;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetGameSettings
struct UBPI_SteamGameInterface_C_GetGameSettings_Params
{
	struct FS_GameSettings                             GameSettings;                                              // 0x0000(0x0020)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.CreateServerWithSettings
struct UBPI_SteamGameInterface_C_CreateServerWithSettings_Params
{
	struct FS_GameSettings                             Settings;                                                  // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FS_ServerSettings                           ServerSettings;                                            // 0x0020(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetLoggedIn
struct UBPI_SteamGameInterface_C_SetLoggedIn_Params
{
	bool                                               IsLogged;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.IsLoggedIn
struct UBPI_SteamGameInterface_C_IsLoggedIn_Params
{
	bool                                               IsLoggedIn;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.CancelSearch
struct UBPI_SteamGameInterface_C_CancelSearch_Params
{
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.LeaveAndSearch
struct UBPI_SteamGameInterface_C_LeaveAndSearch_Params
{
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetAudioHandles
struct UBPI_SteamGameInterface_C_GetAudioHandles_Params
{
	struct FS_AudioHandles                             AudioHandles;                                              // 0x0000(0x0020)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.Search
struct UBPI_SteamGameInterface_C_Search_Params
{
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.MainMenu
struct UBPI_SteamGameInterface_C_MainMenu_Params
{
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.IsPublic
struct UBPI_SteamGameInterface_C_IsPublic_Params
{
	bool                                               Public;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.Join
struct UBPI_SteamGameInterface_C_Join_Params
{
	struct FBlueprintSessionResult                     session;                                                   // 0x0000(0x0108)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.Starter
struct UBPI_SteamGameInterface_C_Starter_Params
{
	bool                                               Private;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Map;                                                       // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
