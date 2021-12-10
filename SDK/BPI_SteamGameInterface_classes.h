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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_SteamGameInterface.BPI_SteamGameInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_SteamGameInterface_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_SteamGameInterface.BPI_SteamGameInterface_C");
		return ptr;
	}



	void GetLobbyDataBP(const struct FString& Key, struct FString* Value);
	void SetLobbyDataBP(const struct FString& Key, const struct FString& Value);
	void SetCustomGameData(const struct FString& Address);
	void GetLobbyMembersCount(int* Members);
	void SetIsInMainMenuBP(bool Val);
	void NotifyConnetCustomGame(const struct FString& Address);
	void SetShouldCreateLobby(bool Val);
	void GetShouldCreateLobby(bool* Val);
	void Get_GC_Data(struct FString* Region, struct FString* session);
	void Set_CS_Data(const struct FString& SessionId, const struct FString& Region);
	void SetCachedBuildId(const struct FString& BuildId);
	void GetCachedBuildId(struct FString* BuildId);
	void ConnectCustomGame(const struct FString& Address);
	void GetRandomMap3(struct FString* MapName);
	void GetRandomMap2(struct FString* Map);
	void GetLobbyOwner(struct FString* OwnerID);
	void IsAnyoneOnLobby(bool* Result);
	void RestoreLobby();
	void HandleStartupSteamInvite();
	void SetMenuLoaded();
	void ConnectMatchmakingGame(const struct FString& Address);
	void GetAmILobbyMember(bool* Member);
	void GetPings(TArray<struct FPingQoSInfo>* Pings);
	void SetPings(TArray<struct FPingQoSInfo> Pings);
	void SetPlayfabMatchPlayers(TArray<class UPlayFabJsonObject*> Players);
	void NotifySteamLobbyStopSearch();
	void InviteFriendToLobby(const struct FString& ID);
	void LeaveLobby();
	void GetSteamFriendList(TArray<struct FSteamFriend>* Friends);
	void IsLobbyOwner(bool* Owner);
	void GetLobbyPlayfabPlayers(TArray<struct FString>* Players);
	void NotifySteamLobbyConnect(const struct FString& Address);
	void NotifySteamLobbyStartSearch(const struct FString& Ticket);
	void CreateSteamLobby();
	void RunSteamCallback();
	void GetIsMatchmaking(bool* Is);
	void SetIsMatchMaking(bool Is);
	void GetKillerID(struct FString* ID);
	void SetKillerID(const struct FString& ID);
	void GetIsWithEditor(bool* IsEditor);
	void IsPlayfabServerV2(bool* Is);
	void GetServerId(struct FString* ID);
	void SetServerId(const struct FString& ID);
	void GetServerName(struct FString* Name);
	void SetServerName(const struct FString& Name);
	void GetBuildNumber(int* BuildNumber);
	void SetActualServer();
	void GetIsActualServer(bool* IsActual);
	void GetServerRegion(struct FString* Region);
	void SetServerRegion(const struct FString& Region);
	void SetGameServerSettings(const struct FS_GameSettings& GameSettings, const struct FS_ServerSettings& ServerSettings);
	void SetServiceAddress(const struct FString& Address);
	void GetServiceAddress(struct FString* Address);
	void GetServerSettings(struct FS_ServerSettings* ServerSettings);
	void GetPlayerName(struct FString* Nickname);
	void GetGameSettings(struct FS_GameSettings* GameSettings);
	void CreateServerWithSettings(const struct FS_GameSettings& Settings, const struct FS_ServerSettings& ServerSettings);
	void SetLoggedIn(bool IsLogged);
	void IsLoggedIn(bool* IsLoggedIn);
	void CancelSearch();
	void LeaveAndSearch();
	void GetAudioHandles(struct FS_AudioHandles* AudioHandles);
	void Search();
	void MainMenu();
	void IsPublic(bool* Public);
	void Join(const struct FBlueprintSessionResult& session);
	void Starter(bool Private, const struct FString& Map);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
