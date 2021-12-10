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

// Class Propnight.AGM_Propnight
// 0x0000 (FullSize[0x01A8] - InheritedSize[0x01A8])
class UAGM_Propnight : public UGameInstance
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Propnight.AGM_Propnight");
		return ptr;
	}



};

// Class Propnight.BlueprintCopyTextMethod
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBlueprintCopyTextMethod : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Propnight.BlueprintCopyTextMethod");
		return ptr;
	}



	struct FString PasteMessageFromClipboard();
	struct FIntPoint GetImportedTextureSize(class UTexture2D* Texture);
	void CopyMessageToClipboard(const struct FString& Text);
};

// Class Propnight.GSN_Prophunt
// 0x0000 (FullSize[0x0238] - InheritedSize[0x0238])
class AGSN_Prophunt : public AGameSession
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Propnight.GSN_Prophunt");
		return ptr;
	}



	void SetMaxPlayers(int maxPlayerClients);
};

// Class Propnight.HTTP_Wrapper
// 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
class UHTTP_Wrapper : public UActorComponent
{
public:
	unsigned char                                      UnknownData_HCNP[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Propnight.HTTP_Wrapper");
		return ptr;
	}



	void ShutdownGame();
	struct FString ServerInfoToJSON(const struct FServerInfo& ServerInfo);
	void SendRequest(const struct FString& Address);
	void SendPOSTRequestWithHeader(const struct FString& Address, const struct FString& Content, bool IsServer, const struct FString& Header, const struct FString& HeaderValue);
	void SendPOSTRequest(const struct FString& Address, const struct FString& Content, bool IsServer);
	void OnResponse(const struct FString& Content);
	void OnError();
	TArray<struct FServerInfo> JSONToArray(const struct FString& Json);
	struct FString GetURL();
};

// Class Propnight.NewATPCCameraFOVObject
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UNewATPCCameraFOVObject : public UATPCCameraFOVObject
{
public:
	bool                                               IsOverride;                                                // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H0HZ[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Propnight.NewATPCCameraFOVObject");
		return ptr;
	}



	void CameraReset();
};

// Class Propnight.PC_PropnightMainMenu
// 0x0050 (FullSize[0x05C0] - InheritedSize[0x0570])
class APC_PropnightMainMenu : public APlayerController
{
public:
	unsigned char                                      UnknownData_2U1A[0x40];                                    // 0x0570(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CBuildID;                                                  // 0x05B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Propnight.PC_PropnightMainMenu");
		return ptr;
	}



	void LabFunction();
	bool CheckIsSteamModuleAvailable();
	bool CheckIsSteamInitialized();
};

// Class Propnight.PhysicsCharacter
// 0x0028 (FullSize[0x04E0] - InheritedSize[0x04B8])
class APhysicsCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData_QU9M[0x8];                                     // 0x04B8(0x0008) Fix Super Size
	unsigned char                                      UnknownData_FNCI[0x8];                                     // 0x04C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             realComponentToSync;                                       // 0x04C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         PrimitiveComponent;                                        // 0x04D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OVHV[0x8];                                     // 0x04D8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Propnight.PhysicsCharacter");
		return ptr;
	}



	void setPhysicsComponent(class USceneComponent* theComponent);
	void PhysicsTick(float SubstepDeltaTime);
};

// Class Propnight.ProphuntGameInstance
// 0x0110 (FullSize[0x02B8] - InheritedSize[0x01A8])
class UProphuntGameInstance : public UGameInstance
{
public:
	bool                                               IsInMainMenu;                                              // 0x01A8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LILG[0x10F];                                   // 0x01A9(0x010F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Propnight.ProphuntGameInstance");
		return ptr;
	}



	void WriteSteamAppidFile();
	bool WithEditor();
	void UninitializeVivox();
	void ToggleMuteParticipant(const struct FString& Name, bool bMuted);
	void SetVoiceChatOutputVolume(int Value);
	void SetVoiceChatMuted(bool bMuted);
	void SetVoiceChatInputVolume(int Value);
	void SetSteamLobbyUserData(const struct FString& Key, const struct FString& Value);
	void SetLobbyData(const struct FString& Key, const struct FString& Value);
	void SendSteamLobbyMessage(const struct FString& Message);
	void RestoreSteamLobbyMembers();
	void ReleaseSteam();
	void PushToTalk(bool bPressed);
	void OnUserLeaveLobby(const struct FString& Name, const struct FString& ID);
	void OnUserEnterLobby(const struct FString& Name, const struct FString& ID);
	void OnSteamMessage(const struct FString& Ticket);
	void OnLobbyUserDataUpdated(const struct FString& ID, const struct FString& Entity);
	void OnLobbyCreatedExt();
	void OnJoinLobby(const struct FString& LobbyId);
	void OnGetSessionTicketResponse(bool Success, const struct FString& Ticket);
	void OnFriendGoneOffline(const struct FString& ID);
	void OnFriendComeOnline(const struct FString& ID);
	void Logout();
	void LeaveVoiceChat();
	void LeaveSteamLobby();
	void JoinVoiceChatImpl(const struct FString& ChannelName, int TeamNum);
	void JoinSteamLobby(const struct FString& LobbyId);
	bool IsAnyoneOnMySteamLobby();
	void InviteSteamFriend(const struct FString& FriendID);
	void InitializeVivox_Impl();
	bool InitializeSteam();
	void GetSteamSessionTicket();
	struct FString GetSteamNickname();
	struct FString GetSteamLobbyOwnerID();
	TArray<struct FString> GetSteamLobbyMembersData(const struct FString& Key);
	int GetSteamLobbyMembersCount();
	struct FString GetSteamLobbyData(const struct FString& Key);
	struct FString GetSteamID();
	TArray<struct FSteamFriend> GetSteamFriends();
	void CreateLobby();
	void CallSteamCallback();
	bool AmILobbyOwner();
};

// Class Propnight.PropnightBeaconHost
// 0x0008 (FullSize[0x0310] - InheritedSize[0x0308])
class APropnightBeaconHost : public AOnlineBeaconHost
{
public:
	unsigned char                                      UnknownData_O3O7[0x8];                                     // 0x0308(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Propnight.PropnightBeaconHost");
		return ptr;
	}



	bool Start();
	void AddHost(class AOnlineBeaconHostObject* HostObject);
};

// Class Propnight.PropnightBeaconHostObject
// 0x0008 (FullSize[0x0250] - InheritedSize[0x0248])
class APropnightBeaconHostObject : public AOnlineBeaconHostObject
{
public:
	class UClass*                                      PNClientBeaconType;                                        // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Propnight.PropnightBeaconHostObject");
		return ptr;
	}



	void UpdatePNClientBeaconType();
};

// Class Propnight.PropnightGameMode
// 0x0000 (FullSize[0x02C0] - InheritedSize[0x02C0])
class APropnightGameMode : public AGameModeBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Propnight.PropnightGameMode");
		return ptr;
	}



};

// Class Propnight.PropnightOnlineBeaconClient
// 0x0000 (FullSize[0x02B0] - InheritedSize[0x02B0])
class APropnightOnlineBeaconClient : public AOnlineBeaconClient
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Propnight.PropnightOnlineBeaconClient");
		return ptr;
	}



	bool Start(const struct FString& Address, int Port, bool portOverride);
	void Ready();
	void OnReady();
	void OnBeaconFailure();
	void Disconnect();
};

// Class Propnight.PropnightPlayerController
// 0x0000 (FullSize[0x0570] - InheritedSize[0x0570])
class APropnightPlayerController : public APlayerController
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Propnight.PropnightPlayerController");
		return ptr;
	}



	void ClientJoinVoice(const struct FString& ChannelName, int TeamNum);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
