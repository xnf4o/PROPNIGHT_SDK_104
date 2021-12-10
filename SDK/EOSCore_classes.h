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

// Class EOSCore.EOSCoreSubsystem
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEOSCoreSubsystem : public UGameInstanceSubsystem
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreSubsystem");
		return ptr;
	}



};

// Class EOSCore.CoreAchievements
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UCoreAchievements : public UEOSCoreSubsystem
{
public:
	unsigned char                                      UnknownData_9YJ0[0x50];                                    // 0x0030(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.CoreAchievements");
		return ptr;
	}



	class UCoreAchievements* GetAchievements(class UObject* WorldContextObject);
	void EOSAchievementsUnlockAchievements(class UObject* WorldContextObject, const struct FEOSAchievementsUnlockAchievementsOptions& Options, const struct FScriptDelegate& Callback);
	void EOSAchievementsRemoveNotifyAchievementsUnlocked(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
	void EOSAchievementsQueryPlayerAchievements(class UObject* WorldContextObject, const struct FEOSAchievementsQueryPlayerAchievementsOptions& Options, const struct FScriptDelegate& Callback);
	void EOSAchievementsQueryDefinitions(class UObject* WorldContextObject, const struct FEOSAchievementsQueryDefinitionsOptions& Options, const struct FScriptDelegate& Callback);
	int EOSAchievementsGetPlayerAchievementCount(class UObject* WorldContextObject, const struct FEOSAchievementsGetPlayerAchievementCountOptions& Options);
	int EOSAchievementsGetAchievementDefinitionCount(class UObject* WorldContextObject, const struct FEOSAchievementsGetAchievementDefinitionCountOptions& Options);
	EOSCore_EOSResult EOSAchievementsCopyPlayerAchievementByIndex(class UObject* WorldContextObject, const struct FEOSAchievementsCopyPlayerAchievementByIndexOptions& Options, struct FEOSAchievementsPlayerAchievement* OutAchievement);
	EOSCore_EOSResult EOSAchievementsCopyAchievementDefinitionV2ByIndex(class UObject* WorldContextObject, const struct FEOSAchievementsCopyAchievementDefinitionV2ByIndexOptions& Options, struct FEOSAchievementsDefinitionV2* OutDefinition);
	EOSCore_EOSResult EOSAchievementsCopyAchievementDefinitionV2ByAchievementId(class UObject* WorldContextObject, const struct FEOSAchievementsCopyAchievementDefinitionV2ByAchievementIdOptions& Options, struct FEOSAchievementsDefinitionV2* OutDefinition);
	struct FEOSNotificationId EOSAchievementsAddNotifyAchievementsUnlockedV2(class UObject* WorldContextObject, const struct FScriptDelegate& Callback);
};

// Class EOSCore.EOSCoreAsyncAction
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class UEOSCoreAsyncAction : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData_D39R[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreAsyncAction");
		return ptr;
	}



};

// Class EOSCore.EOSCoreAchievementsQueryDefinitions
// 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
class UEOSCoreAchievementsQueryDefinitions : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0OCR[0x38];                                    // 0x0048(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreAchievementsQueryDefinitions");
		return ptr;
	}



	void HandleCallback(const struct FEOSAchievementsOnQueryDefinitionsCompleteCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreAchievementsQueryDefinitions* EOSAchievementsQueryDefinitionsAsync(class UObject* WorldContextObject, const struct FEOSAchievementsQueryDefinitionsOptions& Options);
};

// Class EOSCore.EOSCoreAchievementsQueryPlayerAchievements
// 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
class UEOSCoreAchievementsQueryPlayerAchievements : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HGYP[0x58];                                    // 0x0048(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreAchievementsQueryPlayerAchievements");
		return ptr;
	}



	void HandleCallback(const struct FEOSAchievementsOnQueryPlayerAchievementsCompleteCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreAchievementsQueryPlayerAchievements* EOSAchievementsQueryPlayerAchievementsAsync(class UObject* WorldContextObject, const struct FEOSAchievementsQueryPlayerAchievementsOptions& Options);
};

// Class EOSCore.EOSCoreAchievementsUnlockAchievements
// 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
class UEOSCoreAchievementsUnlockAchievements : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GY72[0x48];                                    // 0x0048(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreAchievementsUnlockAchievements");
		return ptr;
	}



	void HandleCallback(const struct FEOSAchievementsOnUnlockAchievementsCompleteCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreAchievementsUnlockAchievements* EOSAchievementsUnlockAchievements(class UObject* WorldContextObject, const struct FEOSAchievementsUnlockAchievementsOptions& Options);
};

// Class EOSCore.CoreAntiCheatClient
// 0x0140 (FullSize[0x0170] - InheritedSize[0x0030])
class UCoreAntiCheatClient : public UEOSCoreSubsystem
{
public:
	unsigned char                                      UnknownData_JXGB[0x140];                                   // 0x0030(0x0140) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.CoreAntiCheatClient");
		return ptr;
	}



	class UCoreAntiCheatClient* GetAntiCheatClient(class UObject* WorldContextObject);
	EOSCore_EOSResult EOSAntiCheatClientUnregisterPeer(class UObject* WorldContextObject, const struct FEOSAntiCheatClientUnregisterPeerOptions& Options);
	EOSCore_EOSResult EOSAntiCheatClientUnprotectMessage(class UObject* WorldContextObject, const struct FEOSAntiCheatClientUnprotectMessageOptions& Options, TArray<unsigned char> OutBuffer);
	void EOSAntiCheatClientRemoveNotifyPeerAuthStatusChanged(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID);
	void EOSAntiCheatClientRemoveNotifyPeerActionRequired(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID);
	void EOSAntiCheatClientRemoveNotifyMessageToServer(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID);
	void EOSAntiCheatClientRemoveNotifyMessageToPeer(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID);
	EOSCore_EOSResult EOSAntiCheatClientRegisterPeer(class UObject* WorldContextObject, const struct FEOSAntiCheatClientRegisterPeerOptions& Options);
	EOSCore_EOSResult EOSAntiCheatClientReceiveMessageFromServer(class UObject* WorldContextObject, const struct FEOSAntiCheatClientReceiveMessageFromServerOptions& Options);
	EOSCore_EOSResult EOSAntiCheatClientReceiveMessageFromPeer(class UObject* WorldContextObject, const struct FEOSAntiCheatClientReceiveMessageFromPeerOptions& Options);
	EOSCore_EOSResult EOSAntiCheatClientProtectMessage(class UObject* WorldContextObject, const struct FEOSAntiCheatClientProtectMessageOptions& Options, TArray<unsigned char>* OutBuffer);
	EOSCore_EOSResult EOSAntiCheatClientPollStatus(class UObject* WorldContextObject, const struct FEOSAntiCheatClientPollStatusOptions& Options, EOSCore_EEOSEAntiCheatClientViolationType* ViolationType, struct FString* OutMessage);
	EOSCore_EOSResult EOSAntiCheatClientGetProtectMessageOutputLength(class UObject* WorldContextObject, const struct FEOSAntiCheatClientGetProtectMessageOutputLengthOptions& Options, int* OutBufferLengthBytes);
	EOSCore_EOSResult EOSAntiCheatClientEndSession(class UObject* WorldContextObject, const struct FEOSAntiCheatClientEndSessionOptions& Options);
	EOSCore_EOSResult EOSAntiCheatClientBeginSession(class UObject* WorldContextObject, const struct FEOSAntiCheatClientBeginSessionOptions& Options);
	struct FEOSNotificationId EOSAntiCheatClientAddNotifyPeerAuthStatusChanged(class UObject* WorldContextObject, const struct FEOSAntiCheatClientAddNotifyPeerAuthStatusChangedOptions& Options, const struct FScriptDelegate& Callback);
	struct FEOSNotificationId EOSAntiCheatClientAddNotifyPeerActionRequired(class UObject* WorldContextObject, const struct FEOSAntiCheatClientAddNotifyPeerActionRequiredOptions& Options, const struct FScriptDelegate& Callback);
	struct FEOSNotificationId EOSAntiCheatClientAddNotifyMessageToServer(class UObject* WorldContextObject, const struct FEOSAntiCheatClientAddNotifyMessageToServerOptions& Options, const struct FScriptDelegate& Callback);
	struct FEOSNotificationId EOSAntiCheatClientAddNotifyMessageToPeer(class UObject* WorldContextObject, const struct FEOSAntiCheatClientAddNotifyMessageToPeerOptions& Options, const struct FScriptDelegate& Callback);
	EOSCore_EOSResult EOSAntiCheatClientAddExternalIntegrityCatalog(class UObject* WorldContextObject, const struct FEOSAntiCheatClientAddExternalIntegrityCatalogOptions& Options);
};

// Class EOSCore.CoreAntiCheatServer
// 0x00F0 (FullSize[0x0120] - InheritedSize[0x0030])
class UCoreAntiCheatServer : public UEOSCoreSubsystem
{
public:
	unsigned char                                      UnknownData_D4PD[0xF0];                                    // 0x0030(0x00F0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.CoreAntiCheatServer");
		return ptr;
	}



	class UCoreAntiCheatServer* GetAntiCheatServer(class UObject* WorldContextObject);
	EOSCore_EOSResult EOSAntiCheatServerUnregisterClient(class UObject* WorldContextObject, const struct FEOSAntiCheatServerUnregisterClientOptions& Options);
	EOSCore_EOSResult EOSAntiCheatServerUnprotectMessage(class UObject* WorldContextObject, const struct FEOSAntiCheatServerUnprotectMessageOptions& Options, TArray<unsigned char>* OutBuffer, int* OutBufferLengthBytes);
	EOSCore_EOSResult EOSAntiCheatServerSetGameSessionId(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonSetGameSessionIdOptions& Options);
	EOSCore_EOSResult EOSAntiCheatServerSetClientNetworkState(class UObject* WorldContextObject, const struct FEOSAntiCheatServerSetClientNetworkStateOptions& Options);
	EOSCore_EOSResult EOSAntiCheatServerSetClientDetails(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonSetClientDetailsOptions& Options);
	void EOSAntiCheatServerRemoveNotifyMessageToClient(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID);
	void EOSAntiCheatServerRemoveNotifyClientAuthStatusChanged(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID);
	void EOSAntiCheatServerRemoveNotifyClientActionRequired(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID);
	EOSCore_EOSResult EOSAntiCheatServerRegisterEvent(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonRegisterEventOptions& Options);
	EOSCore_EOSResult EOSAntiCheatServerRegisterClient(class UObject* WorldContextObject, const struct FEOSAntiCheatServerRegisterClientOptions& Options);
	EOSCore_EOSResult EOSAntiCheatServerReceiveMessageFromClient(class UObject* WorldContextObject, const struct FEOSAntiCheatServerReceiveMessageFromClientOptions& Options);
	EOSCore_EOSResult EOSAntiCheatServerProtectMessage(class UObject* WorldContextObject, const struct FEOSAntiCheatServerProtectMessageOptions& Options, TArray<unsigned char>* OutBuffer, int* OutBufferLengthBytes);
	EOSCore_EOSResult EOSAntiCheatServerLogPlayerUseWeapon(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonLogPlayerUseWeaponOptions& Options);
	EOSCore_EOSResult EOSAntiCheatServerLogPlayerUseAbility(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonLogPlayerUseAbilityOptions& Options);
	EOSCore_EOSResult EOSAntiCheatServerLogPlayerTick(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonLogPlayerTickOptions& Options);
	EOSCore_EOSResult EOSAntiCheatServerLogPlayerTakeDamage(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonLogPlayerTakeDamageOptions& Options);
	EOSCore_EOSResult EOSAntiCheatServerLogPlayerSpawn(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonLogPlayerSpawnOptions& Options);
	EOSCore_EOSResult EOSAntiCheatServerLogPlayerRevive(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonLogPlayerReviveOptions& Options);
	EOSCore_EOSResult EOSAntiCheatServerLogPlayerDespawn(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonLogPlayerDespawnOptions& Options);
	EOSCore_EOSResult EOSAntiCheatServerLogGameRoundStart(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonLogGameRoundStartOptions& Options);
	EOSCore_EOSResult EOSAntiCheatServerLogGameRoundEnd(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonLogGameRoundEndOptions& Options);
	EOSCore_EOSResult EOSAntiCheatServerLogEvent(class UObject* WorldContextObject, const struct FEOSAntiCheatCommonLogEventOptions& Options);
	EOSCore_EOSResult EOSAntiCheatServerGetProtectMessageOutputLength(class UObject* WorldContextObject, const struct FEOSAntiCheatServerGetProtectMessageOutputLengthOptions& Options, int* OutBufferLengthBytes);
	EOSCore_EOSResult EOSAntiCheatServerEndSession(class UObject* WorldContextObject, const struct FEOSAntiCheatServerEndSessionOptions& Options);
	EOSCore_EOSResult EOSAntiCheatServerBeginSession(class UObject* WorldContextObject, const struct FEOSAntiCheatServerBeginSessionOptions& Options);
	struct FEOSNotificationId EOSAntiCheatServerAddNotifyMessageToClient(class UObject* WorldContextObject, const struct FEOSAntiCheatServerAddNotifyMessageToClientOptions& Options, const struct FScriptDelegate& Callback);
	struct FEOSNotificationId EOSAntiCheatServerAddNotifyClientAuthStatusChanged(class UObject* WorldContextObject, const struct FEOSAntiCheatServerAddNotifyClientAuthStatusChangedOptions& Options, const struct FScriptDelegate& Callback);
	struct FEOSNotificationId EOSAntiCheatServerAddNotifyClientActionRequired(class UObject* WorldContextObject, const struct FEOSAntiCheatServerAddNotifyClientActionRequiredOptions& Options, const struct FScriptDelegate& Callback);
};

// Class EOSCore.EOSCoreAuthLogin
// 0x0060 (FullSize[0x0098] - InheritedSize[0x0038])
class UEOSCoreAuthLogin : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7IKX[0x50];                                    // 0x0048(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreAuthLogin");
		return ptr;
	}



	void HandleCallback(const struct FEOSAuthLoginCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreAuthLogin* EOSAuthLoginAsync(class UObject* WorldContextObject, const struct FEOSAuthLoginOptions& Options);
};

// Class EOSCore.EOSCoreAuthLogout
// 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
class UEOSCoreAuthLogout : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M2VH[0x38];                                    // 0x0048(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreAuthLogout");
		return ptr;
	}



	void HandleCallback(const struct FEOSAuthLogoutCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreAuthLogout* EOSAuthLogoutAsync(class UObject* WorldContextObject, const struct FEOSAuthLogoutOptions& Options);
};

// Class EOSCore.EOSCoreAuthLinkAccount
// 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
class UEOSCoreAuthLinkAccount : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_62GT[0x48];                                    // 0x0048(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreAuthLinkAccount");
		return ptr;
	}



	void HandleCallback(const struct FEOSAuthLinkAccountCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreAuthLinkAccount* EOSAuthLinkAccount(class UObject* WorldContextObject, const struct FEOSAuthLinkAccountOptions& Options);
};

// Class EOSCore.EOSCoreAuthDeletePersistentAuth
// 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
class UEOSCoreAuthDeletePersistentAuth : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NEJW[0x20];                                    // 0x0048(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreAuthDeletePersistentAuth");
		return ptr;
	}



	void HandleCallback(const struct FEOSAuthDeletePersistentAuthCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreAuthDeletePersistentAuth* EOSAuthDeletePersistentAuthAsync(class UObject* WorldContextObject, const struct FEOSAuthDeletePersistentAuthOptions& Options);
};

// Class EOSCore.EOSCoreAuthVerifyUserAuth
// 0x00D0 (FullSize[0x0108] - InheritedSize[0x0038])
class UEOSCoreAuthVerifyUserAuth : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ORV9[0xC0];                                    // 0x0048(0x00C0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreAuthVerifyUserAuth");
		return ptr;
	}



	void HandleCallback(const struct FEOSAuthVerifyUserAuthCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreAuthVerifyUserAuth* EOSAuthVerifyUserAuthAsync(class UObject* WorldContextObject, const struct FEOSAuthVerifyUserAuthOptions& Options);
};

// Class EOSCore.CoreAuthentication
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UCoreAuthentication : public UEOSCoreSubsystem
{
public:
	unsigned char                                      UnknownData_H42K[0x50];                                    // 0x0030(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.CoreAuthentication");
		return ptr;
	}



	class UCoreAuthentication* GetAuthentication(class UObject* WorldContextObject);
	void EOSAuthVerifyUserAuth(class UObject* WorldContextObject, const struct FEOSAuthVerifyUserAuthOptions& Options, const struct FScriptDelegate& Callback);
	void EOSAuthVerifyIdToken(class UObject* WorldContextObject, const struct FEOSAuthVerifyIdTokenOptions& Options, const struct FScriptDelegate& Callback);
	void EOSAuthRemoveNotifyLoginStatusChanged(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
	void EOSAuthQueryIdToken(class UObject* WorldContextObject, const struct FEOSAuthQueryIdTokenOptions& Options, const struct FScriptDelegate& Callback);
	void EOSAuthLogout(class UObject* WorldContextObject, const struct FEOSAuthLogoutOptions& Options, const struct FScriptDelegate& Callback);
	void EOSAuthLogin(class UObject* WorldContextObject, const struct FEOSAuthLoginOptions& Options, const struct FScriptDelegate& Callback);
	void EOSAuthLinkAccount(class UObject* WorldContextObject, const struct FEOSAuthLinkAccountOptions& Options, const struct FScriptDelegate& Callback);
	EOSCore_EOSResult EOSAuthGetSelectedAccountId(class UObject* WorldContextObject, const struct FEOSEpicAccountId& LocalUserId, struct FEOSEpicAccountId* OutSelectedAccountId);
	int EOSAuthGetMergedAccountsCount(class UObject* WorldContextObject, const struct FEOSEpicAccountId& LocalUserId);
	struct FEOSEpicAccountId EOSAuthGetMergedAccountByIndex(class UObject* WorldContextObject, const struct FEOSEpicAccountId& LocalUserId, int Index);
	EOSCore_EOSELoginStatus EOSAuthGetLoginStatusPure(class UObject* WorldContextObject, const struct FEOSEpicAccountId& LocalUserId);
	EOSCore_EOSELoginStatus EOSAuthGetLoginStatus(class UObject* WorldContextObject, const struct FEOSEpicAccountId& LocalUserId);
	int EOSAuthGetLoggedInAccountsCount(class UObject* WorldContextObject);
	struct FEOSEpicAccountId EOSAuthGetLoggedInAccountByIndex(class UObject* WorldContextObject, int Index);
	void EOSAuthDeletePersistentAuth(class UObject* WorldContextObject, const struct FEOSAuthDeletePersistentAuthOptions& Options, const struct FScriptDelegate& Callback);
	EOSCore_EOSResult EOSAuthCopyUserAuthToken(class UObject* WorldContextObject, const struct FEOSAuthCopyUserAuthTokenOptions& Options, const struct FEOSEpicAccountId& LocalUserId, struct FEOSAuthToken* OutUserAuthToken);
	EOSCore_EOSResult EOSAuthCopyIdToken(class UObject* WorldContextObject, const struct FEOSAuthCopyIdTokenOptions& Options, struct FEOSAuthIdToken* OutIdToken);
	struct FEOSNotificationId EOSAuthAddNotifyLoginStatusChanged(class UObject* WorldContextObject, const struct FScriptDelegate& Callback);
};

// Class EOSCore.CoreChat
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UCoreChat : public UEOSCoreSubsystem
{
public:
	unsigned char                                      UnknownData_YPD7[0x18];                                    // 0x0030(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnChatMessageReceived;                                     // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.CoreChat");
		return ptr;
	}



	void SendChatMessage(class UObject* WorldContextObject, const struct FEOSProductUserId& LocalUserId, const struct FEOSProductUserId& Target, const struct FString& Message, EOSCore_EEOSEPacketReliability Reliability);
	void ListenForChatMessages(class UObject* WorldContextObject, const struct FEOSProductUserId& LocalUserId, const struct FScriptDelegate& Callback);
	class UCoreChat* GetChat();
	void ClearAllChatListeners();
};

// Class EOSCore.CoreConnect
// 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])
class UCoreConnect : public UEOSCoreSubsystem
{
public:
	unsigned char                                      UnknownData_QKEX[0xA0];                                    // 0x0030(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.CoreConnect");
		return ptr;
	}



	class UCoreConnect* GetConnect(class UObject* WorldContextObject);
	void EOSConnectVerifyIdToken(class UObject* WorldContextObject, const struct FEOSConnectVerifyIdTokenOptions& Options, const struct FScriptDelegate& Callback);
	void EOSConnectUnlinkAccount(class UObject* WorldContextObject, const struct FEOSConnectUnlinkAccountOptions& Options, const struct FScriptDelegate& Callback);
	void EOSConnectTransferDeviceIdAccount(class UObject* WorldContextObject, const struct FEOSConnectTransferDeviceIdAccountOptions& Options, const struct FScriptDelegate& Callback);
	void EOSConnectRemoveNotifyLoginStatusChanged(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
	void EOSConnectRemoveNotifyAuthExpiration(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
	void EOSConnectQueryProductUserIdMappings(class UObject* WorldContextObject, const struct FEOSConnectQueryProductUserIdMappingsOptions& Options, const struct FScriptDelegate& Callback);
	void EOSConnectQueryExternalAccountMappings(class UObject* WorldContextObject, const struct FEOSConnectQueryExternalAccountMappingsOptions& Options, const struct FScriptDelegate& Callback);
	void EOSConnectLogin(class UObject* WorldContextObject, const struct FEOSConnectLoginOptions& Options, const struct FScriptDelegate& Callback);
	void EOSConnectLinkAccount(class UObject* WorldContextObject, const struct FEOSConnectLinkAccountOptions& Options, const struct FScriptDelegate& Callback);
	EOSCore_EOSResult EOSConnectGetProductUserIdMapping(class UObject* WorldContextObject, const struct FEOSConnectGetProductUserIdMappingOptions& Options, struct FString* OutString);
	int EOSConnectGetProductUserExternalAccountCount(class UObject* WorldContextObject, const struct FEOSConnectGetProductUserExternalAccountCountOptions& Options);
	EOSCore_EEOSELoginStatus EOSConnectGetLoginStatusPure(class UObject* WorldContextObject, const struct FEOSProductUserId& LocalUserId);
	EOSCore_EEOSELoginStatus EOSConnectGetLoginStatus(class UObject* WorldContextObject, const struct FEOSProductUserId& LocalUserId);
	int EOSConnectGetLoggedInUsersCount(class UObject* WorldContextObject);
	struct FEOSProductUserId EOSConnectGetLoggedInUserByIndex(class UObject* WorldContextObject, int Index);
	struct FEOSProductUserId EOSConnectGetExternalAccountMapping(class UObject* WorldContextObject, const struct FEOSConnectGetExternalAccountMappingsOptions& Options);
	void EOSConnectDeleteDeviceId(class UObject* WorldContextObject, const struct FEOSConnectDeleteDeviceIdOptions& Options, const struct FScriptDelegate& Callback);
	void EOSConnectCreateUser(class UObject* WorldContextObject, const struct FEOSConnectCreateUserOptions& Options, const struct FScriptDelegate& Callback);
	void EOSConnectCreateDeviceId(class UObject* WorldContextObject, const struct FEOSConnectCreateDeviceIdOptions& Options, const struct FScriptDelegate& Callback);
	EOSCore_EOSResult EOSConnectCopyProductUserInfo(class UObject* WorldContextObject, const struct FEOSConnectCopyProductUserInfoOptions& Options, struct FEOSConnectExternalAccountInfo* OutExternalAccountInfo);
	EOSCore_EOSResult EOSConnectCopyProductUserExternalAccountByIndex(class UObject* WorldContextObject, const struct FEOSConnectCopyProductUserExternalAccountByIndexOptions& Options, struct FEOSConnectExternalAccountInfo* OutExternalAccountInfo);
	EOSCore_EOSResult EOSConnectCopyProductUserExternalAccountByAccountType(class UObject* WorldContextObject, const struct FEOSConnectCopyProductUserExternalAccountByAccountTypeOptions& Options, struct FEOSConnectExternalAccountInfo* OutExternalAccountInfo);
	EOSCore_EOSResult EOSConnectCopyProductUserExternalAccountByAccountId(class UObject* WorldContextObject, const struct FEOSConnectCopyProductUserExternalAccountByAccountIdOptions& Options, struct FEOSConnectExternalAccountInfo* OutExternalAccountInfo);
	EOSCore_EOSResult EOSConnectCopyIdToken(class UObject* WorldContextObject, const struct FEOSConnectCopyIdTokenOptions& Options, struct FEOSConnectIdToken* OutIdToken);
	struct FEOSNotificationId EOSConnectAddNotifyLoginStatusChanged(class UObject* WorldContextObject, const struct FScriptDelegate& Callback);
	struct FEOSNotificationId EOSConnectAddNotifyAuthExpiration(class UObject* WorldContextObject, const struct FScriptDelegate& Callback);
};

// Class EOSCore.EOSCoreConnectLogin
// 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
class UEOSCoreConnectLogin : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9OKV[0x40];                                    // 0x0048(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreConnectLogin");
		return ptr;
	}



	void HandleCallback(const struct FEOSConnectLoginCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreConnectLogin* EOSConnectLoginAsync(class UObject* WorldContextObject, const struct FEOSConnectLoginOptions& Options);
};

// Class EOSCore.EOSCoreConnectCreateUser
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UEOSCoreConnectCreateUser : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y7AM[0x18];                                    // 0x0048(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreConnectCreateUser");
		return ptr;
	}



	void HandleCallback(const struct FEOSConnectCreateUserCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreConnectCreateUser* EOSConnectCreateUserAsync(class UObject* WorldContextObject, const struct FEOSConnectCreateUserOptions& Options);
};

// Class EOSCore.EOSCoreConnectLinkAccount
// 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
class UEOSCoreConnectLinkAccount : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IG1M[0x40];                                    // 0x0048(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreConnectLinkAccount");
		return ptr;
	}



	void HandleCallback(const struct FEOSConnectLinkAccountCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreConnectLinkAccount* EOSConnectLinkAccountAsync(class UObject* WorldContextObject, const struct FEOSConnectLinkAccountOptions& Options);
};

// Class EOSCore.EOSCoreConnectUnlinkAccount
// 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
class UEOSCoreConnectUnlinkAccount : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IY7F[0x38];                                    // 0x0048(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreConnectUnlinkAccount");
		return ptr;
	}



	void HandleCallback(const struct FEOSConnectUnlinkAccountCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreConnectUnlinkAccount* EOSConnectUnlinkAccountAsync(class UObject* WorldContextObject, const struct FEOSConnectUnlinkAccountOptions& Options);
};

// Class EOSCore.EOSCoreConnectCreateDeviceId
// 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
class UEOSCoreConnectCreateDeviceId : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4113[0x20];                                    // 0x0048(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreConnectCreateDeviceId");
		return ptr;
	}



	void HandleCallback(const struct FEOSConnectCreateDeviceIdCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreConnectCreateDeviceId* EOSConnectCreateDeviceIdAsync(class UObject* WorldContextObject, const struct FEOSConnectCreateDeviceIdOptions& Options);
};

// Class EOSCore.EOSCoreConnectDeleteDeviceId
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UEOSCoreConnectDeleteDeviceId : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L14B[0x18];                                    // 0x0048(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreConnectDeleteDeviceId");
		return ptr;
	}



	void HandleCallback(const struct FEOSConnectDeleteDeviceIdCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreConnectDeleteDeviceId* EOSConnectDeleteDeviceIdAsync(class UObject* WorldContextObject, const struct FEOSConnectDeleteDeviceIdOptions& Options);
};

// Class EOSCore.EOSCoreConnectTransferDeviceIdAccount
// 0x0088 (FullSize[0x00C0] - InheritedSize[0x0038])
class UEOSCoreConnectTransferDeviceIdAccount : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7Z7E[0x78];                                    // 0x0048(0x0078) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreConnectTransferDeviceIdAccount");
		return ptr;
	}



	void HandleCallback(const struct FEOSConnectTransferDeviceIdAccountCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreConnectTransferDeviceIdAccount* EOSConnectTransferDeviceIdAccountAsync(class UObject* WorldContextObject, const struct FEOSConnectTransferDeviceIdAccountOptions& Options);
};

// Class EOSCore.EOSCoreConnectQueryExternalAccountMappings
// 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
class UEOSCoreConnectQueryExternalAccountMappings : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DVYI[0x48];                                    // 0x0048(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreConnectQueryExternalAccountMappings");
		return ptr;
	}



	void HandleCallback(const struct FEOSConnectQueryExternalAccountMappingsCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreConnectQueryExternalAccountMappings* EOSConnectQueryExternalAccountMappingsAsync(class UObject* WorldContextObject, const struct FEOSConnectQueryExternalAccountMappingsOptions& Options);
};

// Class EOSCore.EOSCoreConnectQueryProductUserIdMappings
// 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
class UEOSCoreConnectQueryProductUserIdMappings : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_517L[0x48];                                    // 0x0048(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreConnectQueryProductUserIdMappings");
		return ptr;
	}



	void HandleCallback(const struct FEOSConnectQueryProductUserIdMappingsCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreConnectQueryProductUserIdMappings* EOSConnectQueryProductUserIdMappingsAsync(class UObject* WorldContextObject, const struct FEOSConnectQueryProductUserIdMappingsOptions& Options);
};

// Class EOSCore.EOSCoreLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UEOSCoreLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreLibrary");
		return ptr;
	}



	bool UpdateUniqueNetIdFromOSS(class APlayerController* PlayerController);
	void RemoveListenForEOSMessages(class UObject* WorldContextObject);
	struct FEOSSessionSetting MakeString(const struct FString& Value);
	struct FEOSSessionSearchSetting MakeSearchString(const struct FString& Value);
	struct FEOSSessionSearchSetting MakeSearchInteger(int Value);
	struct FEOSSessionSearchSetting MakeSearchBool(bool Value);
	struct FEOSAntiCheatCommonLogEventParamPair MakeParamString(const struct FString& String);
	struct FEOSAntiCheatCommonLogEventParamPair MakeParamInt64(int64_t Value);
	struct FEOSAntiCheatCommonLogEventParamPair MakeParamInt32(int Value);
	struct FEOSSessionSetting MakeInteger(int Value);
	struct FEOSSessionSetting MakeBool(bool Value);
	void Login(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FString& LoginId, const struct FString& Password, EOSCore_EEOSLoginCredentialType AuthType, EOSCore_EEOSEExternalCredentialType CredentialsType, const struct FString& AdditionalData, const struct FScriptDelegate& Callback);
	void ListenForEOSMessages(class UObject* WorldContextObject, const struct FScriptDelegate& Callback);
	bool IsProductUserIdIdenticalWith(const struct FEOSProductUserId& A, const struct FEOSProductUserId& B);
	bool IsEpicAccountIdIdenticalWith(const struct FEOSEpicAccountId& A, const struct FEOSEpicAccountId& B);
	struct FString GetString(const struct FEOSSessionSetting& Settings, struct FString* Key);
	struct FString GetSessionAttributeString(const struct FEOSSessionsAttributeData& Data);
	struct FString GetSessionAttributeInt64(const struct FEOSSessionsAttributeData& Data);
	struct FString GetSessionAttributeDouble(const struct FEOSSessionsAttributeData& Data);
	bool GetSessionAttributeBool(const struct FEOSSessionsAttributeData& Data);
	struct FString GetLobbyAttributeString(const struct FEOSLobbyAttributeData& Data);
	struct FString GetLobbyAttributeInt64(const struct FEOSLobbyAttributeData& Data);
	struct FString GetLobbyAttributeDouble(const struct FEOSLobbyAttributeData& Data);
	bool GetLobbyAttributeBool(const struct FEOSLobbyAttributeData& Data);
	int GetInteger(const struct FEOSSessionSetting& Settings, struct FString* Key);
	struct FEOSProductUserId GetCurrentProductId(class UObject* WorldContextObject, int UserIndex);
	struct FEOSEpicAccountId GetCurrentAccountId(class UObject* WorldContextObject, int UserIndex);
	bool GetBool(const struct FEOSSessionSetting& Settings, struct FString* Key);
	struct FDateTime FromUnixTimestamp(const struct FString& Timestamp);
	EOSCore_EOSResult EOSProductUserIdToString(const struct FEOSProductUserId& ID, struct FString* String);
	bool EOSProductUserIdIsValidPure(const struct FEOSProductUserId& ID);
	bool EOSProductUserIdIsValid(const struct FEOSProductUserId& ID);
	struct FEOSProductUserId EOSProductUserIdFromString(const struct FString& String);
	struct FString EOSEResultToString(EOSCore_EOSResult Result);
	bool EOSEResultIsOperationComplete(EOSCore_EOSResult Result);
	EOSCore_EOSResult EOSEpicAccountIdToString(const struct FEOSEpicAccountId& ID, struct FString* String);
	bool EOSEpicAccountIdIsValidPure(const struct FEOSEpicAccountId& ID);
	bool EOSEpicAccountIdIsValid(const struct FEOSEpicAccountId& ID);
	struct FEOSEpicAccountId EOSEpicAccountIdFromString(const struct FString& String);
	EOSCore_EOSResult EOSContinuanceTokenToString(const struct FContinuanceToken& ID, struct FString* String);
	EOSCore_EOSResult EOSByteArrayToString(TArray<unsigned char> Array, int Length, struct FString* String);
	void EOS_Success(EOSCore_EOSResult Status, EOSCore_ESuccessFail* Result);
	bool EOS_Initialized(class UObject* WorldContextObject);
	TArray<unsigned char> CoreStringToByte(const struct FString& String);
	struct FString CoreBytesToString(TArray<unsigned char> Data);
	void BreakUIEventIdStruct(const struct FEOSUIEventId& EventId, struct FString* outEventId);
};

// Class EOSCore.CoreCustomInvites
// 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])
class UCoreCustomInvites : public UEOSCoreSubsystem
{
public:
	unsigned char                                      UnknownData_81Z4[0xA0];                                    // 0x0030(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.CoreCustomInvites");
		return ptr;
	}



	class UCoreCustomInvites* GetCustomInvites(class UObject* WorldContextObject);
	EOSCore_EOSResult EOSCustomInvitesSetCustomInvite(class UObject* WorldContextObject, const struct FEOSCustomInvitesSetCustomInviteOptions& Options);
	void EOSCustomInvitesSendCustomInvite(class UObject* WorldContextObject, const struct FEOSCustomInvitesSendCustomInviteOptions& Options, const struct FScriptDelegate& Callback);
	void EOSCustomInvitesRemoveNotifyCustomInviteReceived(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
	void EOSCustomInvitesRemoveNotifyCustomInviteAccepted(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
	EOSCore_EOSResult EOSCustomInvitesFinalizeInvite(class UObject* WorldContextObject, const struct FEOSCustomInvitesFinalizeInviteOptions& Options);
	struct FEOSNotificationId EOSCustomInvitesAddNotifyCustomInviteReceived(class UObject* WorldContextObject, const struct FEOSCustomInvitesAddNotifyCustomInviteReceivedOptions& Options, const struct FScriptDelegate& Callback);
	struct FEOSNotificationId EOSCustomInvitesAddNotifyCustomInviteAccepted(class UObject* WorldContextObject, const struct FScriptDelegate& Callback);
};

// Class EOSCore.CoreEcom
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UCoreEcom : public UEOSCoreSubsystem
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.CoreEcom");
		return ptr;
	}



	class UCoreEcom* GetEcom(class UObject* WorldContextObject);
	EOSCore_EOSResult EOSEcomTransaction_GetTransactionId(class UObject* WorldContextObject, const struct FEOSEcomHTransaction& Handle, struct FString* OutTransactionId);
	int EOSEcomTransaction_GetEntitlementsCount(class UObject* WorldContextObject, const struct FEOSEcomHTransaction& Handle, const struct FEOSEcomTransactionGetEntitlementsCountOptions& Options);
	EOSCore_EOSResult EOSEcomTransaction_CopyEntitlementByIndex(class UObject* WorldContextObject, const struct FEOSEcomHTransaction& Handle, const struct FEOSEcomTransactionCopyEntitlementByIndexOptions& Options, struct FEOSEcomEntitlement* OutEntitlement);
	void EOSEcomRedeemEntitlements(class UObject* WorldContextObject, const struct FEOSEcomRedeemEntitlementsOptions& Options, const struct FScriptDelegate& Callback);
	void EOSEcomQueryOwnershipToken(class UObject* WorldContextObject, const struct FEOSEcomQueryOwnershipTokenOptions& Options, const struct FScriptDelegate& Callback);
	void EOSEcomQueryOwnership(class UObject* WorldContextObject, const struct FEOSEcomQueryOwnershipOptions& Options, const struct FScriptDelegate& Callback);
	void EOSEcomQueryOffers(class UObject* WorldContextObject, const struct FEOSEcomQueryOffersOptions& Options, const struct FScriptDelegate& Callback);
	void EOSEcomQueryEntitlements(class UObject* WorldContextObject, const struct FEOSEcomQueryEntitlementsOptions& Options, const struct FScriptDelegate& Callback);
	int EOSEcomGetTransactionCount(class UObject* WorldContextObject, const struct FEOSEcomGetTransactionCountOptions& Options);
	int EOSEcomGetOfferItemCount(class UObject* WorldContextObject, const struct FEOSEcomGetOfferItemCountOptions& Options);
	int EOSEcomGetOfferImageInfoCount(class UObject* WorldContextObject, const struct FEOSEcomGetOfferImageInfoCountOptions& Options);
	int EOSEcomGetOfferCount(class UObject* WorldContextObject, const struct FEOSEcomGetOfferCountOptions& Options);
	int EOSEcomGetItemReleaseCount(class UObject* WorldContextObject, const struct FEOSEcomGetItemReleaseCountOptions& Options);
	int EOSEcomGetItemImageInfoCount(class UObject* WorldContextObject, const struct FEOSEcomGetItemImageInfoCountOptions& Options);
	int EOSEcomGetEntitlementsCount(class UObject* WorldContextObject, const struct FEOSEcomGetEntitlementsCountOptions& Options);
	int EOSEcomGetEntitlementsByNameCount(class UObject* WorldContextObject, const struct FEOSEcomGetEntitlementsByNameCountOptions& Options);
	EOSCore_EOSResult EOSEcomCopyTransactionByIndex(class UObject* WorldContextObject, const struct FEOSEcomCopyTransactionByIndexOptions& Options, struct FEOSEcomHTransaction* OutTransaction);
	EOSCore_EOSResult EOSEcomCopyTransactionById(class UObject* WorldContextObject, const struct FEOSEcomCopyTransactionByIdOptions& Options, struct FEOSEcomHTransaction* OutTransaction);
	EOSCore_EOSResult EOSEcomCopyOfferItemByIndex(class UObject* WorldContextObject, const struct FEOSEcomCopyOfferItemByIndexOptions& Options, struct FEOSEcomCatalogItem* OutItem);
	EOSCore_EOSResult EOSEcomCopyOfferImageInfoByIndex(class UObject* WorldContextObject, const struct FEOSEcomCopyOfferImageInfoByIndexOptions& Options, struct FEOSEcomKeyImageInfo* OutImageInfo);
	EOSCore_EOSResult EOSEcomCopyOfferByIndex(class UObject* WorldContextObject, const struct FEOSEcomCopyOfferByIndexOptions& Options, struct FEOSEcomCatalogOffer* OutOffer);
	EOSCore_EOSResult EOSEcomCopyOfferById(class UObject* WorldContextObject, const struct FEOSEcomCopyOfferByIdOptions& Options, struct FEOSEcomCatalogOffer* OutOffer);
	EOSCore_EOSResult EOSEcomCopyItemReleaseByIndex(class UObject* WorldContextObject, const struct FEOSEcomCopyItemReleaseByIndexOptions& Options, struct FEOSEcomCatalogRelease* OutRelease);
	EOSCore_EOSResult EOSEcomCopyItemImageInfoByIndex(class UObject* WorldContextObject, const struct FEOSEcomCopyItemImageInfoByIndexOptions& Options, struct FEOSEcomKeyImageInfo* OutImageInfo);
	EOSCore_EOSResult EOSEcomCopyItemById(class UObject* WorldContextObject, const struct FEOSEcomCopyItemByIdOptions& Options, struct FEOSEcomCatalogItem* OutItem);
	EOSCore_EOSResult EOSEcomCopyEntitlementByNameAndIndex(class UObject* WorldContextObject, const struct FEOSEcomCopyEntitlementByNameAndIndexOptions& Options, struct FEOSEcomEntitlement* OutEntitlement);
	EOSCore_EOSResult EOSEcomCopyEntitlementByIndex(class UObject* WorldContextObject, const struct FEOSEcomCopyEntitlementByIndexOptions& Options, struct FEOSEcomEntitlement* OutEntitlement);
	EOSCore_EOSResult EOSEcomCopyEntitlementById(class UObject* WorldContextObject, const struct FEOSEcomCopyEntitlementByIdOptions& Options, struct FEOSEcomEntitlement* OutEntitlement);
	void EOSEcomCheckout(class UObject* WorldContextObject, const struct FEOSEcomCheckoutOptions& Options, const struct FScriptDelegate& Callback);
};

// Class EOSCore.EOSCoreEcomQueryOwnership
// 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
class UEOSCoreEcomQueryOwnership : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O7DZ[0x58];                                    // 0x0048(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreEcomQueryOwnership");
		return ptr;
	}



	void HandleCallback(const struct FEOSEcomQueryOwnershipCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreEcomQueryOwnership* EOSEcomQueryOwnershipAsync(class UObject* WorldContextObject, const struct FEOSEcomQueryOwnershipOptions& Options);
};

// Class EOSCore.EOSCoreEcomQueryOwnershipToken
// 0x0070 (FullSize[0x00A8] - InheritedSize[0x0038])
class UEOSCoreEcomQueryOwnershipToken : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HKMR[0x60];                                    // 0x0048(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreEcomQueryOwnershipToken");
		return ptr;
	}



	void HandleCallback(const struct FEOSEcomQueryOwnershipTokenCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreEcomQueryOwnershipToken* EOSEcomQueryOwnershipTokenAsync(class UObject* WorldContextObject, const struct FEOSEcomQueryOwnershipTokenOptions& Options);
};

// Class EOSCore.EOSCoreEcomQueryEntitlements
// 0x0060 (FullSize[0x0098] - InheritedSize[0x0038])
class UEOSCoreEcomQueryEntitlements : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CB6X[0x50];                                    // 0x0048(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreEcomQueryEntitlements");
		return ptr;
	}



	void HandleCallback(const struct FEOSEcomQueryEntitlementsCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreEcomQueryEntitlements* EOSEcomQueryEntitlementsAsync(class UObject* WorldContextObject, const struct FEOSEcomQueryEntitlementsOptions& Options);
};

// Class EOSCore.EOSCoreEcomQueryOffers
// 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
class UEOSCoreEcomQueryOffers : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MD8Q[0x48];                                    // 0x0048(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreEcomQueryOffers");
		return ptr;
	}



	void HandleCallback(const struct FEOSEcomQueryOffersCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreEcomQueryOffers* EOSEcomQueryOffersAsync(class UObject* WorldContextObject, const struct FEOSEcomQueryOffersOptions& Options);
};

// Class EOSCore.EOSCoreEcomCheckout
// 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
class UEOSCoreEcomCheckout : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8OQ7[0x58];                                    // 0x0048(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreEcomCheckout");
		return ptr;
	}



	void HandleCallback(const struct FEOSEcomCheckoutCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreEcomCheckout* EOSEcomCheckoutAsync(class UObject* WorldContextObject, const struct FEOSEcomCheckoutOptions& Options);
};

// Class EOSCore.EOSCoreEcomRedeemEntitlements
// 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
class UEOSCoreEcomRedeemEntitlements : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_40R9[0x48];                                    // 0x0048(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreEcomRedeemEntitlements");
		return ptr;
	}



	void HandleCallback(const struct FEOSEcomRedeemEntitlementsCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreEcomRedeemEntitlements* EOSEcomRedeemEntitlementsAsync(class UObject* WorldContextObject, const struct FEOSEcomRedeemEntitlementsOptions& Options);
};

// Class EOSCore.CoreFriends
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UCoreFriends : public UEOSCoreSubsystem
{
public:
	unsigned char                                      UnknownData_V3RL[0x50];                                    // 0x0030(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.CoreFriends");
		return ptr;
	}



	class UCoreFriends* GetFriends(class UObject* WorldContextObject);
	void EOSFriendsSendInvite(class UObject* WorldContextObject, const struct FEOSFriendsSendInviteOptions& Options, const struct FScriptDelegate& Callback);
	void EOSFriendsRemoveNotifyFriendsUpdate(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
	void EOSFriendsRejectInvite(class UObject* WorldContextObject, const struct FEOSFriendsRejectInviteOptions& Options, const struct FScriptDelegate& Callback);
	void EOSFriendsQueryFriends(class UObject* WorldContextObject, const struct FEOSFriendsQueryFriendsOptions& Options, const struct FScriptDelegate& Callback);
	EOSCore_EEOSEFriendsStatus EOSFriendsGetStatus(class UObject* WorldContextObject, const struct FEOSFriendsGetStatusOptions& Options);
	int EOSFriendsGetFriendsCount(class UObject* WorldContextObject, const struct FEOSFriendsGetFriendsCountOptions& Options);
	struct FEOSEpicAccountId EOSFriendsGetFriendAtIndex(class UObject* WorldContextObject, const struct FEOSFriendsGetFriendAtIndexOptions& Options);
	struct FEOSNotificationId EOSFriendsAddNotifyFriendsUpdate(class UObject* WorldContextObject, const struct FScriptDelegate& Callback);
	void EOSFriendsAcceptInvite(class UObject* WorldContextObject, const struct FEOSFriendsAcceptInviteOptions& Options, const struct FScriptDelegate& Callback);
};

// Class EOSCore.EOSCoreFriendsQueryFriends
// 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
class UEOSCoreFriendsQueryFriends : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RQZA[0x38];                                    // 0x0048(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreFriendsQueryFriends");
		return ptr;
	}



	void HandleCallback(const struct FEOSFriendsQueryFriendsCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreFriendsQueryFriends* EOSFriendsQueryFriendsAsync(class UObject* WorldContextObject, const struct FEOSFriendsQueryFriendsOptions& Options);
};

// Class EOSCore.EOSCoreFriendsSendInvite
// 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
class UEOSCoreFriendsSendInvite : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_988N[0x58];                                    // 0x0048(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreFriendsSendInvite");
		return ptr;
	}



	void HandleCallback(const struct FEOSFriendsSendInviteCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreFriendsSendInvite* EOSFriendsSendInviteAsync(class UObject* WorldContextObject, const struct FEOSFriendsSendInviteOptions& Options);
};

// Class EOSCore.EOSCoreFriendsAcceptInvite
// 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
class UEOSCoreFriendsAcceptInvite : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YJ9Y[0x58];                                    // 0x0048(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreFriendsAcceptInvite");
		return ptr;
	}



	void HandleCallback(const struct FEOSFriendsAcceptInviteCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreFriendsAcceptInvite* EOSFriendsAcceptInviteAsync(class UObject* WorldContextObject, const struct FEOSFriendsAcceptInviteOptions& Options);
};

// Class EOSCore.EOSCoreFriendsRejectInvite
// 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
class UEOSCoreFriendsRejectInvite : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_40WI[0x58];                                    // 0x0048(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreFriendsRejectInvite");
		return ptr;
	}



	void HandleCallback(const struct FEOSFriendsRejectInviteCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreFriendsRejectInvite* EOSFriendsRejectInviteAsync(class UObject* WorldContextObject, const struct FEOSFriendsRejectInviteOptions& Options);
};

// Class EOSCore.CoreLeaderboards
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UCoreLeaderboards : public UEOSCoreSubsystem
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.CoreLeaderboards");
		return ptr;
	}



	class UCoreLeaderboards* GetLeaderboards(class UObject* WorldContextObject);
	void EOSLeaderboardsQueryLeaderboardUserScores(class UObject* WorldContextObject, const struct FEOSLeaderboardsQueryLeaderboardUserScoresOptions& Options, const struct FScriptDelegate& Callback);
	void EOSLeaderboardsQueryLeaderboardRanks(class UObject* WorldContextObject, const struct FEOSLeaderboardsQueryLeaderboardRanksOptions& Options, const struct FScriptDelegate& Callback);
	void EOSLeaderboardsQueryLeaderboardDefinitions(class UObject* WorldContextObject, const struct FEOSLeaderboardsQueryLeaderboardDefinitionsOptions& Options, const struct FScriptDelegate& Callback);
	int EOSLeaderboardsGetLeaderboardUserScoreCount(class UObject* WorldContextObject, const struct FEOSLeaderboardsGetLeaderboardUserScoreCountOptions& Options);
	int EOSLeaderboardsGetLeaderboardRecordCount(class UObject* WorldContextObject, const struct FEOSLeaderboardsGetLeaderboardRecordCountOptions& Options);
	int EOSLeaderboardsGetLeaderboardDefinitionCount(class UObject* WorldContextObject, const struct FEOSLeaderboardsGetLeaderboardDefinitionCountOptions& Options);
	EOSCore_EOSResult EOSLeaderboardsCopyLeaderboardUserScoreByUserId(class UObject* WorldContextObject, const struct FEOSLeaderboardsCopyLeaderboardUserScoreByUserIdOptions& Options, struct FEOSLeaderboardsLeaderboardUserScore* OutLeaderboardUserScore);
	EOSCore_EOSResult EOSLeaderboardsCopyLeaderboardUserScoreByIndex(class UObject* WorldContextObject, const struct FEOSLeaderboardsCopyLeaderboardUserScoreByIndexOptions& Options, struct FEOSLeaderboardsLeaderboardUserScore* OutLeaderboardUserScore);
	EOSCore_EOSResult EOSLeaderboardsCopyLeaderboardRecordByUserId(class UObject* WorldContextObject, const struct FEOSLeaderboardsCopyLeaderboardRecordByUserIdOptions& Options, struct FEOSLeaderboardsLeaderboardRecord* OutLeaderboardRecord);
	EOSCore_EOSResult EOSLeaderboardsCopyLeaderboardRecordByIndex(class UObject* WorldContextObject, const struct FEOSLeaderboardsCopyLeaderboardRecordByIndexOptions& Options, struct FEOSLeaderboardsLeaderboardRecord* OutLeaderboardRecord);
	EOSCore_EOSResult EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId(class UObject* WorldContextObject, const struct FEOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardIdOptions& Options, struct FEOSLeaderboardsDefinition* OutLeaderboardDefinition);
	EOSCore_EOSResult EOSLeaderboardsCopyLeaderboardDefinitionByIndex(class UObject* WorldContextObject, const struct FEOSLeaderboardsCopyLeaderboardDefinitionByIndexOptions& Options, struct FEOSLeaderboardsDefinition* OutLeaderboardDefinition);
};

// Class EOSCore.EOSCoreLeaderboardsQueryLeaderboardDefinitions
// 0x0070 (FullSize[0x00A8] - InheritedSize[0x0038])
class UEOSCoreLeaderboardsQueryLeaderboardDefinitions : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D3VJ[0x60];                                    // 0x0048(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreLeaderboardsQueryLeaderboardDefinitions");
		return ptr;
	}



	void HandleCallback(const struct FEOSLeaderboardsOnQueryLeaderboardDefinitionsCompleteCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreLeaderboardsQueryLeaderboardDefinitions* EOSLeaderboardsQueryLeaderboardDefinitionsAsync(class UObject* WorldContextObject, const struct FEOSLeaderboardsQueryLeaderboardDefinitionsOptions& Options);
};

// Class EOSCore.EOSCoreLeaderboardsQueryLeaderboardRanks
// 0x0060 (FullSize[0x0098] - InheritedSize[0x0038])
class UEOSCoreLeaderboardsQueryLeaderboardRanks : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MMZ6[0x50];                                    // 0x0048(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreLeaderboardsQueryLeaderboardRanks");
		return ptr;
	}



	void HandleCallback(const struct FEOSLeaderboardsOnQueryLeaderboardRanksCompleteCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreLeaderboardsQueryLeaderboardRanks* EOSLeaderboardsQueryLeaderboardRanksAsync(class UObject* WorldContextObject, const struct FEOSLeaderboardsQueryLeaderboardRanksOptions& Options);
};

// Class EOSCore.EOSCoreLeaderboardsQueryLeaderboardUserScores
// 0x0090 (FullSize[0x00C8] - InheritedSize[0x0038])
class UEOSCoreLeaderboardsQueryLeaderboardUserScores : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QERM[0x80];                                    // 0x0048(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreLeaderboardsQueryLeaderboardUserScores");
		return ptr;
	}



	void HandleCallback(const struct FEOSLeaderboardsOnQueryLeaderboardUserScoresCompleteCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreLeaderboardsQueryLeaderboardUserScores* EOSLeaderboardsQueryLeaderboardUserScoresAsync(class UObject* WorldContextObject, const struct FEOSLeaderboardsQueryLeaderboardUserScoresOptions& Options);
};

// Class EOSCore.CoreLobby
// 0x0230 (FullSize[0x0260] - InheritedSize[0x0030])
class UCoreLobby : public UEOSCoreSubsystem
{
public:
	unsigned char                                      UnknownData_OCD1[0x230];                                   // 0x0030(0x0230) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.CoreLobby");
		return ptr;
	}



	class UCoreLobby* GetLobby(class UObject* WorldContextObject);
	EOSCore_EOSResult EOSLobbyUpdateLobbyModification(class UObject* WorldContextObject, const struct FEOSLobbyUpdateLobbyModificationOptions& Options, struct FEOSHLobbyModification* OutLobbyModificationHandle);
	void EOSLobbyUpdateLobby(class UObject* WorldContextObject, const struct FEOSLobbyUpdateLobbyOptions& Options, const struct FScriptDelegate& Callback);
	void EOSLobbySendInvite(class UObject* WorldContextObject, const struct FEOSLobbySendInviteOptions& Options, const struct FScriptDelegate& Callback);
	EOSCore_EOSResult EOSLobbySearchSetTargetUserId(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const struct FEOSLobbySearchSetTargetUserIdOptions& Options);
	EOSCore_EOSResult EOSLobbySearchSetParameterString(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const struct FString& Key, const struct FString& Value, EOSCore_EEOSEComparisonOp ComparisonOp);
	EOSCore_EOSResult EOSLobbySearchSetParameterInt64(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const struct FString& Key, const struct FString& Value, EOSCore_EEOSEComparisonOp ComparisonOp);
	EOSCore_EOSResult EOSLobbySearchSetParameterDouble(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const struct FString& Key, const struct FString& Value, EOSCore_EEOSEComparisonOp ComparisonOp);
	EOSCore_EOSResult EOSLobbySearchSetParameterBool(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const struct FString& Key, bool bValue, EOSCore_EEOSEComparisonOp ComparisonOp);
	EOSCore_EOSResult EOSLobbySearchSetMaxResults(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const struct FEOSLobbySearchSetMaxResultsOptions& Options);
	EOSCore_EOSResult EOSLobbySearchSetLobbyId(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const struct FEOSLobbySearchSetLobbyIdOptions& Options);
	EOSCore_EOSResult EOSLobbySearchRemoveParameter(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const struct FEOSLobbySearchRemoveParameterOptions& Options);
	void EOSLobbySearchRelease(const struct FEOSHLobbySearch& LobbySearchHandle);
	int EOSLobbySearchGetSearchResultCount(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const struct FEOSLobbySearchGetSearchResultCountOptions& Options);
	void EOSLobbySearchFind(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const struct FEOSLobbySearchFindOptions& Options, const struct FScriptDelegate& Callback);
	EOSCore_EOSResult EOSLobbySearchCopySearchResultByIndex(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const struct FEOSLobbySearchCopySearchResultByIndexOptions& Options, struct FEOSHLobbyDetails* OutLobbyDetailsHandle);
	void EOSLobbyRemoveNotifyRTCRoomConnectionChanged(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
	void EOSLobbyRemoveNotifyLobbyUpdateReceived(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
	void EOSLobbyRemoveNotifyLobbyMemberUpdateReceived(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
	void EOSLobbyRemoveNotifyLobbyMemberStatusReceived(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
	void EOSLobbyRemoveNotifyLobbyInviteReceived(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
	void EOSLobbyRemoveNotifyLobbyInviteAccepted(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
	void EOSLobbyRemoveNotifyJoinLobbyAccepted(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
	void EOSLobbyRejectInvite(class UObject* WorldContextObject, const struct FEOSLobbyRejectInviteOptions& Options, const struct FScriptDelegate& Callback);
	void EOSLobbyQueryInvites(class UObject* WorldContextObject, const struct FEOSLobbyQueryInvitesOptions& Options, const struct FScriptDelegate& Callback);
	void EOSLobbyPromoteMember(class UObject* WorldContextObject, const struct FEOSLobbyPromoteMemberOptions& Options, const struct FScriptDelegate& Callback);
	EOSCore_EOSResult EOSLobbyModificationSetPermissionLevel(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const struct FEOSLobbyModificationSetPermissionLevelOptions& Options);
	EOSCore_EOSResult EOSLobbyModificationSetMaxMembers(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const struct FEOSLobbyModificationSetMaxMembersOptions& Options);
	EOSCore_EOSResult EOSLobbyModificationSetInvitesAllowed(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const struct FEOSLobbyModificationSetInvitesAllowedOptions& Options);
	EOSCore_EOSResult EOSLobbyModificationSetBucketId(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const struct FEOSLobbyModificationSetBucketIdOptions& Options);
	EOSCore_EOSResult EOSLobbyModificationRemoveMemberAttribute(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const struct FEOSLobbyModificationRemoveMemberAttributeOptions& Options);
	EOSCore_EOSResult EOSLobbyModificationRemoveAttribute(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const struct FEOSLobbyModificationRemoveAttributeOptions& Options);
	void EOSLobbyModificationRelease(const struct FEOSHLobbyModification& LobbyModificationHandle);
	EOSCore_EOSResult EOSLobbyModificationAddMemberAttributeString(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const struct FString& Key, const struct FString& Value, EOSCore_EEOSELobbyAttributeVisibility Visibility);
	EOSCore_EOSResult EOSLobbyModificationAddMemberAttributeInt64(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const struct FString& Key, const struct FString& Value, EOSCore_EEOSELobbyAttributeVisibility Visibility);
	EOSCore_EOSResult EOSLobbyModificationAddMemberAttributeDouble(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const struct FString& Key, const struct FString& Value, EOSCore_EEOSELobbyAttributeVisibility Visibility);
	EOSCore_EOSResult EOSLobbyModificationAddMemberAttributeBool(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const struct FString& Key, bool bValue, EOSCore_EEOSELobbyAttributeVisibility Visibility);
	EOSCore_EOSResult EOSLobbyModificationAddAttributeString(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const struct FString& Key, const struct FString& Value, EOSCore_EEOSELobbyAttributeVisibility Visibility);
	EOSCore_EOSResult EOSLobbyModificationAddAttributeInt64(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const struct FString& Key, const struct FString& Value, EOSCore_EEOSELobbyAttributeVisibility Visibility);
	EOSCore_EOSResult EOSLobbyModificationAddAttributeDouble(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const struct FString& Key, const struct FString& Value, EOSCore_EEOSELobbyAttributeVisibility Visibility);
	EOSCore_EOSResult EOSLobbyModificationAddAttributeBool(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const struct FString& Key, bool bValue, EOSCore_EEOSELobbyAttributeVisibility Visibility);
	EOSCore_EOSResult EOSLobbyModificationAddAttribute(class UObject* WorldContextObject, const struct FEOSHLobbyModification& Handle, const struct FEOSLobbyModificationAddAttributeOptions& Options);
	void EOSLobbyLeaveLobby(class UObject* WorldContextObject, const struct FEOSLobbyLeaveLobbyOptions& Options, const struct FScriptDelegate& Callback);
	void EOSLobbyKickMember(class UObject* WorldContextObject, const struct FEOSLobbyKickMemberOptions& Options, const struct FScriptDelegate& Callback);
	void EOSLobbyJoinLobby(class UObject* WorldContextObject, const struct FEOSLobbyJoinLobbyOptions& Options, const struct FScriptDelegate& Callback);
	EOSCore_EOSResult EOSLobbyIsRTCRoomConnected(class UObject* WorldContextObject, const struct FEOSLobbyIsRTCRoomConnectedOptions& Options, bool* bOutIsConnected);
	EOSCore_EOSResult EOSLobbyGetRTCRoomName(class UObject* WorldContextObject, const struct FEOSLobbyGetRTCRoomNameOptions& Options, struct FString* OutBuffer, int InOutBufferLength);
	EOSCore_EOSResult EOSLobbyGetInviteIdByIndex(class UObject* WorldContextObject, const struct FEOSLobbyGetInviteIdByIndexOptions& Options, struct FString* OutInviteId);
	int EOSLobbyGetInviteCount(class UObject* WorldContextObject, const struct FEOSLobbyGetInviteCountOptions& Options);
	void EOSLobbyDetailsRelease(const struct FEOSHLobbyDetails& LobbyHandle);
	int EOSLobbyDetailsGetMemberCount(class UObject* WorldContextObject, const struct FEOSHLobbyDetails& Handle, const struct FEOSLobbyDetailsGetMemberCountOptions& Options);
	struct FEOSProductUserId EOSLobbyDetailsGetMemberByIndex(class UObject* WorldContextObject, const struct FEOSHLobbyDetails& Handle, const struct FEOSLobbyDetailsGetMemberByIndexOptions& Options);
	int EOSLobbyDetailsGetMemberAttributeCount(class UObject* WorldContextObject, const struct FEOSHLobbyDetails& Handle, const struct FEOSLobbyDetailsGetMemberAttributeCountOptions& Options);
	struct FEOSProductUserId EOSLobbyDetailsGetLobbyOwner(class UObject* WorldContextObject, const struct FEOSHLobbyDetails& Handle, const struct FEOSLobbyDetailsGetLobbyOwnerOptions& Options);
	int EOSLobbyDetailsGetAttributeCount(class UObject* WorldContextObject, const struct FEOSHLobbyDetails& Handle, const struct FEOSLobbyDetailsGetAttributeCountOptions& Options);
	EOSCore_EOSResult EOSLobbyDetailsCopyMemberAttributeByKey(class UObject* WorldContextObject, const struct FEOSHLobbyDetails& Handle, const struct FEOSLobbyDetailsCopyMemberAttributeByKeyOptions& Options, struct FEOSLobbyAttribute* OutAttribute);
	EOSCore_EOSResult EOSLobbyDetailsCopyMemberAttributeByIndex(class UObject* WorldContextObject, const struct FEOSHLobbyDetails& Handle, const struct FEOSLobbyDetailsCopyMemberAttributeByIndexOptions& Options, struct FEOSLobbyAttribute* OutAttribute);
	EOSCore_EOSResult EOSLobbyDetailsCopyInfo(class UObject* WorldContextObject, const struct FEOSHLobbyDetails& Handle, const struct FEOSLobbyDetailsCopyInfoOptions& Options, struct FEOSLobbyDetailsInfo* OutLobbyDetailsInfo);
	EOSCore_EOSResult EOSLobbyDetailsCopyAttributeByKey(class UObject* WorldContextObject, const struct FEOSHLobbyDetails& Handle, const struct FEOSLobbyDetailsCopyAttributeByKeyOptions& Options, struct FEOSLobbyAttribute* OutAttribute);
	EOSCore_EOSResult EOSLobbyDetailsCopyAttributeByIndex(class UObject* WorldContextObject, const struct FEOSHLobbyDetails& Handle, const struct FEOSLobbyDetailsCopyAttributeByIndexOptions& Options, struct FEOSLobbyAttribute* OutAttribute);
	void EOSLobbyDestroyLobby(class UObject* WorldContextObject, const struct FEOSLobbyDestroyLobbyOptions& Options, const struct FScriptDelegate& Callback);
	EOSCore_EOSResult EOSLobbyCreateLobbySearch(class UObject* WorldContextObject, const struct FEOSLobbyCreateLobbySearchOptions& Options, struct FEOSHLobbySearch* OutLobbySearchHandle);
	void EOSLobbyCreateLobby(class UObject* WorldContextObject, const struct FEOSLobbyCreateLobbyOptions& Options, const struct FScriptDelegate& Callback);
	EOSCore_EOSResult EOSLobbyCopyLobbyDetailsHandleByUiEventId(class UObject* WorldContextObject, const struct FEOSLobbyCopyLobbyDetailsHandleByUiEventIdOptions& Options, struct FEOSHLobbyDetails* OutLobbyDetailsHandle);
	EOSCore_EOSResult EOSLobbyCopyLobbyDetailsHandleByInviteId(class UObject* WorldContextObject, const struct FEOSLobbyCopyLobbyDetailsHandleByInviteIdOptions& Options, struct FEOSHLobbyDetails* OutLobbyDetailsHandle);
	EOSCore_EOSResult EOSLobbyCopyLobbyDetailsHandle(class UObject* WorldContextObject, const struct FEOSLobbyCopyLobbyDetailsHandleOptions& Options, struct FEOSHLobbyDetails* OutLobbyDetailsHandle);
	struct FEOSNotificationId EOSLobbyAddNotifyRTCRoomConnectionChanged(class UObject* WorldContextObject, const struct FEOSLobbyAddNotifyRTCRoomConnectionChangedOptions& Options, const struct FScriptDelegate& Callback);
	struct FEOSNotificationId EOSLobbyAddNotifyLobbyUpdateReceived(class UObject* WorldContextObject, const struct FScriptDelegate& Callback);
	struct FEOSNotificationId EOSLobbyAddNotifyLobbyMemberUpdateReceived(class UObject* WorldContextObject, const struct FScriptDelegate& Callback);
	struct FEOSNotificationId EOSLobbyAddNotifyLobbyMemberStatusReceived(class UObject* WorldContextObject, const struct FScriptDelegate& Callback);
	struct FEOSNotificationId EOSLobbyAddNotifyLobbyInviteReceived(class UObject* WorldContextObject, const struct FScriptDelegate& Callback);
	struct FEOSNotificationId EOSLobbyAddNotifyLobbyInviteAccepted(class UObject* WorldContextObject, const struct FEOSLobbyAddNotifyLobbyInviteAcceptedOptions& Options, const struct FScriptDelegate& Callback);
	struct FEOSNotificationId EOSLobbyAddNotifyJoinLobbyAccepted(class UObject* WorldContextObject, const struct FEOSLobbyAddNotifyJoinLobbyAcceptedOptions& Options, const struct FScriptDelegate& Callback);
};

// Class EOSCore.EOSCoreLobbyCreateLobby
// 0x0080 (FullSize[0x00B8] - InheritedSize[0x0038])
class UEOSCoreLobbyCreateLobby : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XL3T[0x70];                                    // 0x0048(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreLobbyCreateLobby");
		return ptr;
	}



	void HandleCallback(const struct FEOSLobbyCreateLobbyCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreLobbyCreateLobby* EOSLobbyCreateLobbyAsync(class UObject* WorldContextObject, const struct FEOSLobbyCreateLobbyOptions& Options);
};

// Class EOSCore.EOSCoreLobbyDestroyLobby
// 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
class UEOSCoreLobbyDestroyLobby : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8BDM[0x48];                                    // 0x0048(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreLobbyDestroyLobby");
		return ptr;
	}



	void HandleCallback(const struct FEOSLobbyDestroyLobbyCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreLobbyDestroyLobby* EOSLobbyDestroyLobbyAsync(class UObject* WorldContextObject, const struct FEOSLobbyDestroyLobbyOptions& Options);
};

// Class EOSCore.EOSCoreLobbyJoinLobby
// 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
class UEOSCoreLobbyJoinLobby : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_41S2[0x48];                                    // 0x0048(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreLobbyJoinLobby");
		return ptr;
	}



	void HandleCallback(const struct FEOSLobbyJoinLobbyCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreLobbyJoinLobby* EOSLobbyJoinLobbyAsync(class UObject* WorldContextObject, const struct FEOSLobbyJoinLobbyOptions& Options);
};

// Class EOSCore.EOSCoreLobbyLeaveLobby
// 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
class UEOSCoreLobbyLeaveLobby : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2PQN[0x48];                                    // 0x0048(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreLobbyLeaveLobby");
		return ptr;
	}



	void HandleCallback(const struct FEOSLobbyLeaveLobbyCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreLobbyLeaveLobby* EOSLobbyLeaveLobbyAsync(class UObject* WorldContextObject, const struct FEOSLobbyLeaveLobbyOptions& Options);
};

// Class EOSCore.EOSCoreLobbyUpdateLobby
// 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
class UEOSCoreLobbyUpdateLobby : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CW8Q[0x20];                                    // 0x0048(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreLobbyUpdateLobby");
		return ptr;
	}



	void HandleCallback(const struct FEOSLobbyUpdateLobbyCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreLobbyUpdateLobby* EOSLobbyUpdateLobbyAsync(class UObject* WorldContextObject, const struct FEOSLobbyUpdateLobbyOptions& Options);
};

// Class EOSCore.EOSCoreLobbyPromoteMember
// 0x0078 (FullSize[0x00B0] - InheritedSize[0x0038])
class UEOSCoreLobbyPromoteMember : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2M0W[0x68];                                    // 0x0048(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreLobbyPromoteMember");
		return ptr;
	}



	void HandleCallback(const struct FEOSLobbyPromoteMemberCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreLobbyPromoteMember* EOSLobbyPromoteMemberAsync(class UObject* WorldContextObject, const struct FEOSLobbyPromoteMemberOptions& Options);
};

// Class EOSCore.EOSCoreLobbyKickMember
// 0x0078 (FullSize[0x00B0] - InheritedSize[0x0038])
class UEOSCoreLobbyKickMember : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q3A7[0x68];                                    // 0x0048(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreLobbyKickMember");
		return ptr;
	}



	void HandleCallback(const struct FEOSLobbyKickMemberCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreLobbyKickMember* EOSLobbyKickMemberAsync(class UObject* WorldContextObject, const struct FEOSLobbyKickMemberOptions& Options);
};

// Class EOSCore.EOSCoreLobbySendInvite
// 0x0078 (FullSize[0x00B0] - InheritedSize[0x0038])
class UEOSCoreLobbySendInvite : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L5MG[0x68];                                    // 0x0048(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreLobbySendInvite");
		return ptr;
	}



	void HandleCallback(const struct FEOSLobbySendInviteCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreLobbySendInvite* EOSLobbySendInviteAsync(class UObject* WorldContextObject, const struct FEOSLobbySendInviteOptions& Options);
};

// Class EOSCore.EOSCoreLobbyRejectInvite
// 0x0060 (FullSize[0x0098] - InheritedSize[0x0038])
class UEOSCoreLobbyRejectInvite : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R9ZZ[0x50];                                    // 0x0048(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreLobbyRejectInvite");
		return ptr;
	}



	void HandleCallback(const struct FEOSLobbyRejectInviteCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreLobbyRejectInvite* EOSLobbyRejectInviteAsync(class UObject* WorldContextObject, const struct FEOSLobbyRejectInviteOptions& Options);
};

// Class EOSCore.EOSCoreLobbyQueryInvites
// 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
class UEOSCoreLobbyQueryInvites : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SEJ5[0x38];                                    // 0x0048(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreLobbyQueryInvites");
		return ptr;
	}



	void HandleCallback(const struct FEOSLobbyQueryInvitesCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreLobbyQueryInvites* EOSLobbyQueryInvitesAsync(class UObject* WorldContextObject, const struct FEOSLobbyQueryInvitesOptions& Options);
};

// Class EOSCore.EOSCoreLobbySearchFind
// 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
class UEOSCoreLobbySearchFind : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HS0O[0x40];                                    // 0x0048(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreLobbySearchFind");
		return ptr;
	}



	void HandleCallback(const struct FEOSLobbySearchFindCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreLobbySearchFind* EOSLobbySearchFindAsync(class UObject* WorldContextObject, const struct FEOSHLobbySearch& Handle, const struct FEOSLobbySearchFindOptions& Options);
};

// Class EOSCore.CoreMetrics
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UCoreMetrics : public UEOSCoreSubsystem
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.CoreMetrics");
		return ptr;
	}



	class UCoreMetrics* GetMetrics(class UObject* WorldContextObject);
	EOSCore_EOSResult EOSMetricsEndPlayerSession(class UObject* WorldContextObject, const struct FEOSMetricsEndPlayerSessionOptions& Options);
	EOSCore_EOSResult EOSMetricsBeginPlayerSession(class UObject* WorldContextObject, const struct FEOSMetricsBeginPlayerSessionOptions& Options);
};

// Class EOSCore.CoreMods
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UCoreMods : public UEOSCoreSubsystem
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.CoreMods");
		return ptr;
	}



	class UCoreMods* GetMods(class UObject* WorldContextObject);
	void EOSModsUpdateMod(class UObject* WorldContextObject, const struct FEOSModsUpdateModOptions& Options, const struct FScriptDelegate& Callback);
	void EOSModsUninstallMod(class UObject* WorldContextObject, const struct FEOSModsUninstallModOptions& Options, const struct FScriptDelegate& Callback);
	void EOSModsInstallMod(class UObject* WorldContextObject, const struct FEOSModsInstallModOptions& Options, const struct FScriptDelegate& Callback);
	void EOSModsEnumerateMods(class UObject* WorldContextObject, const struct FEOSModsEnumerateModsOptions& Options, const struct FScriptDelegate& Callback);
	EOSCore_EOSResult EOSModsCopyModInfo(class UObject* WorldContextObject, const struct FEOSModsCopyModInfoOptions& Options, struct FEOSModsModInfo* OutEnumeratedMods);
};

// Class EOSCore.CoreP2P
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UCoreP2P : public UEOSCoreSubsystem
{
public:
	unsigned char                                      UnknownData_WOE3[0x50];                                    // 0x0030(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.CoreP2P");
		return ptr;
	}



	class UCoreP2P* GetP2P(class UObject* WorldContextObject);
	EOSCore_EOSResult EOSP2PSetRelayControl(class UObject* WorldContextObject, const struct FEOSP2PSetRelayControlOptions& Options);
	EOSCore_EOSResult EOSP2PSetPortRange(class UObject* WorldContextObject, const struct FEOSP2PSetPortRangeOptions& Options);
	EOSCore_EOSResult EOSP2PSetPacketQueueSize(class UObject* WorldContextObject, const struct FEOSP2PSetPacketQueueSizeOptions& Options);
	EOSCore_EOSResult EOSP2PSendPacket(class UObject* WorldContextObject, const struct FEOSP2PSendPacketOptions& Options);
	void EOSP2PRemoveNotifyPeerConnectionRequest(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID);
	void EOSP2PRemoveNotifyPeerConnectionClosed(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID);
	void EOSP2PRemoveNotifyIncomingPacketQueueFull(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID);
	EOSCore_EOSResult EOSP2PReceivePacket(class UObject* WorldContextObject, const struct FEOSP2PReceivePacketOptions& Options, struct FEOSProductUserId* OutPeerId, struct FEOSP2PSocketId* OutSocketId, int* OutChannel, TArray<unsigned char>* OutData, int* OutBytesWritten);
	void EOSP2PQueryNATType(class UObject* WorldContextObject, const struct FScriptDelegate& Callback);
	EOSCore_EOSResult EOSP2PGetRelayControl(class UObject* WorldContextObject, const struct FEOSP2PGetRelayControlOptions& Options, EOSCore_EEOSERelayControl* OutRelayControl);
	EOSCore_EOSResult EOSP2PGetPortRange(class UObject* WorldContextObject, const struct FEOSP2PGetPortRangeOptions& Options, int* OutPort, int OutNumAdditionalPortsToTry);
	EOSCore_EOSResult EOSP2PGetPacketQueueInfo(class UObject* WorldContextObject, const struct FEOSP2PGetPacketQueueInfoOptions& Options, struct FEOSP2PPacketQueueInfo* OutPacketQueueInfo);
	EOSCore_EOSResult EOSP2PGetNextReceivedPacketSize(class UObject* WorldContextObject, const struct FEOSP2PGetNextReceivedPacketSizeOptions& Options, int* OutPacketSizeBytes);
	EOSCore_EOSResult EOSP2PGetNATType(class UObject* WorldContextObject, const struct FEOSP2PGetNATTypeOptions& Options, EOSCore_EEOSENATType* OutNatType);
	EOSCore_EOSResult EOSP2PCloseConnections(class UObject* WorldContextObject, const struct FEOSP2PCloseConnectionsOptions& Options);
	EOSCore_EOSResult EOSP2PCloseConnection(class UObject* WorldContextObject, const struct FEOSP2PCloseConnectionOptions& Options);
	struct FEOSNotificationId EOSP2PAddNotifyPeerConnectionRequest(class UObject* WorldContextObject, const struct FEOSP2PAddNotifyPeerConnectionRequestOptions& Options, const struct FScriptDelegate& Callback);
	struct FEOSNotificationId EOSP2PAddNotifyPeerConnectionClosed(class UObject* WorldContextObject, const struct FEOSP2PAddNotifyPeerConnectionClosedOptions& Options);
	struct FEOSNotificationId EOSP2PAddNotifyIncomingPacketQueueFull(class UObject* WorldContextObject, const struct FEOSP2PAddNotifyIncomingPacketQueueFullOptions& Options, const struct FScriptDelegate& Callback);
	EOSCore_EOSResult EOSP2PAcceptConnection(class UObject* WorldContextObject, const struct FEOSP2PAcceptConnectionOptions& Options);
};

// Class EOSCore.CorePlayerDataStorage
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UCorePlayerDataStorage : public UEOSCoreSubsystem
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.CorePlayerDataStorage");
		return ptr;
	}



	class UCorePlayerDataStorage* GetPlayerDataStorage(class UObject* WorldContextObject);
	void EOSPlayerDataStorageWriteFile(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageWriteFileOptions& WriteOptions, const struct FScriptDelegate& Callback);
	void EOSPlayerDataStorageReadFile(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageReadFileOptions& ReadOptions, const struct FScriptDelegate& Callback);
	void EOSPlayerDataStorageQueryFileList(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageQueryFileListOptions& QueryFileListOptions, const struct FScriptDelegate& Callback);
	void EOSPlayerDataStorageQueryFile(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageQueryFileOptions& QueryFileOptions, const struct FScriptDelegate& Callback);
	EOSCore_EOSResult EOSPlayerDataStorageGetFileMetadataCount(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageGetFileMetadataCountOptions& GetFileMetadataCountOptions, int* OutFileMetadataCount);
	void EOSPlayerDataStorageFileTransferRequestRelease(class UObject* WorldContextObject, const struct FEOSHPlayerDataStorageFileTransferRequest& Handle);
	EOSCore_EOSResult EOSPlayerDataStorageFileTransferRequestGetFileRequestState(class UObject* WorldContextObject, const struct FEOSHPlayerDataStorageFileTransferRequest& Handle);
	EOSCore_EOSResult EOSPlayerDataStorageFileTransferRequestGetFilename(class UObject* WorldContextObject, const struct FEOSHPlayerDataStorageFileTransferRequest& Handle, int FilenameStringBufferSizeBytes, struct FString* OutStringBuffer);
	EOSCore_EOSResult EOSPlayerDataStorageFileTransferRequestCancelRequest(class UObject* WorldContextObject, const struct FEOSHPlayerDataStorageFileTransferRequest& Handle);
	void EOSPlayerDataStorageDuplicateFile(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageDuplicateFileOptions& DuplicateOptions, const struct FScriptDelegate& Callback);
	void EOSPlayerDataStorageDeleteFile(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageDeleteFileOptions& DeleteOptions, const struct FScriptDelegate& Callback);
	EOSCore_EOSResult EOSPlayerDataStorageDeleteCache(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageDeleteCacheOptions& Options, const struct FScriptDelegate& Callback);
	EOSCore_EOSResult EOSPlayerDataStorageCopyFileMetadataByFilename(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageCopyFileMetadataByFilenameOptions& CopyFileMetadataOptions, struct FEOSPlayerDataStorageFileMetadata* OutMetadata);
	EOSCore_EOSResult EOSPlayerDataStorageCopyFileMetadataAtIndex(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageCopyFileMetadataAtIndexOptions& CopyFileMetadataOptions, struct FEOSPlayerDataStorageFileMetadata* OutMetadata);
};

// Class EOSCore.EOSCorePlayerDataStorageQueryFile
// 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
class UEOSCorePlayerDataStorageQueryFile : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K69J[0x48];                                    // 0x0048(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCorePlayerDataStorageQueryFile");
		return ptr;
	}



	void HandleCallback(const struct FEOSPlayerDataStorageQueryFileCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCorePlayerDataStorageQueryFile* EOSPlayerDataStorageQueryFileAsync(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageQueryFileOptions& QueryFileOptions);
};

// Class EOSCore.EOSCorePlayerDataStorageQueryFileList
// 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
class UEOSCorePlayerDataStorageQueryFileList : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JYNM[0x38];                                    // 0x0048(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCorePlayerDataStorageQueryFileList");
		return ptr;
	}



	void HandleCallback(const struct FEOSPlayerDataStorageQueryFileListCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCorePlayerDataStorageQueryFileList* EOSPlayerDataStorageQueryFileListAsync(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageQueryFileListOptions& QueryFileListOptions);
};

// Class EOSCore.EOSCorePlayerDataStorageDuplicateFile
// 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
class UEOSCorePlayerDataStorageDuplicateFile : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UP35[0x58];                                    // 0x0048(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCorePlayerDataStorageDuplicateFile");
		return ptr;
	}



	void HandleCallback(const struct FEOSPlayerDataStorageDuplicateFileCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCorePlayerDataStorageDuplicateFile* EOSPlayerDataStorageDuplicateFileAsync(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageDuplicateFileOptions& DuplicateOptions);
};

// Class EOSCore.EOSCorePlayerDataStorageDeleteFile
// 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
class UEOSCorePlayerDataStorageDeleteFile : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C10H[0x48];                                    // 0x0048(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCorePlayerDataStorageDeleteFile");
		return ptr;
	}



	void HandleCallback(const struct FEOSPlayerDataStorageDeleteFileCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCorePlayerDataStorageDeleteFile* EOSPlayerDataStorageDeleteFileAsync(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageDeleteFileOptions& DeleteOptions);
};

// Class EOSCore.EOSCorePlayerDataStorageReadFile
// 0x0090 (FullSize[0x00C8] - InheritedSize[0x0038])
class UEOSCorePlayerDataStorageReadFile : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y3AL[0x80];                                    // 0x0048(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCorePlayerDataStorageReadFile");
		return ptr;
	}



	void HandleCallback(const struct FEOSPlayerDataStorageReadFileCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCorePlayerDataStorageReadFile* EOSPlayerDataStorageReadFileAsync(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageReadFileOptions& ReadOptions);
};

// Class EOSCore.EOSCorePlayerDataStorageWriteFile
// 0x0090 (FullSize[0x00C8] - InheritedSize[0x0038])
class UEOSCorePlayerDataStorageWriteFile : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RIZ5[0x80];                                    // 0x0048(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCorePlayerDataStorageWriteFile");
		return ptr;
	}



	void HandleCallback(const struct FEOSPlayerDataStorageWriteFileCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCorePlayerDataStorageWriteFile* EOSPlayerDataStorageWriteFileAsync(class UObject* WorldContextObject, const struct FEOSPlayerDataStorageWriteFileOptions& WriteOptions);
};

// Class EOSCore.CorePresence
// 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])
class UCorePresence : public UEOSCoreSubsystem
{
public:
	unsigned char                                      UnknownData_K0RJ[0xA0];                                    // 0x0030(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.CorePresence");
		return ptr;
	}



	class UCorePresence* GetPresence(class UObject* WorldContextObject);
	void EOSPresenceSetPresence(class UObject* WorldContextObject, const struct FEOSPresenceSetPresenceOptions& Options, const struct FScriptDelegate& Callback);
	void EOSPresenceRemoveNotifyOnPresenceChanged(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID);
	void EOSPresenceRemoveNotifyJoinGameAccepted(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
	void EOSPresenceQueryPresence(class UObject* WorldContextObject, const struct FEOSPresenceQueryPresenceOptions& Options, const struct FScriptDelegate& Callback);
	EOSCore_EOSResult EOSPresenceModificationSetStatus(class UObject* WorldContextObject, const struct FEOSHPresenceModification& Handle, const struct FEOSPresenceModificationSetStatusOptions& Options);
	EOSCore_EOSResult EOSPresenceModificationSetRawRichText(class UObject* WorldContextObject, const struct FEOSHPresenceModification& Handle, const struct FEOSPresenceModificationSetRawRichTextOptions& Options);
	EOSCore_EOSResult EOSPresenceModificationSetJoinInfo(class UObject* WorldContextObject, const struct FEOSHPresenceModification& Handle, const struct FEOSPresenceModificationSetJoinInfoOptions& Options);
	EOSCore_EOSResult EOSPresenceModificationSetData(class UObject* WorldContextObject, const struct FEOSHPresenceModification& Handle, const struct FEOSPresenceModificationSetDataOptions& Options);
	void EOSPresenceModificationRelease(class UObject* WorldContextObject, const struct FEOSHPresenceModification& PresenceModificationHandle);
	EOSCore_EOSResult EOSPresenceModificationDeleteData(class UObject* WorldContextObject, const struct FEOSHPresenceModification& Handle, const struct FEOSPresenceModificationDeleteDataOptions& Options);
	bool EOSPresenceHasPresence(class UObject* WorldContextObject, const struct FEOSPresenceHasPresenceOptions& Options);
	EOSCore_EOSResult EOSPresenceGetJoinInfo(class UObject* WorldContextObject, const struct FEOSPresenceGetJoinInfoOptions& Options, struct FString* OutInfo);
	EOSCore_EOSResult EOSPresenceCreatePresenceModification(class UObject* WorldContextObject, const struct FEOSPresenceCreatePresenceModificationOptions& Options, struct FEOSHPresenceModification* OutPresenceModificationHandle);
	EOSCore_EOSResult EOSPresenceCopyPresence(class UObject* WorldContextObject, const struct FEOSPresenceCopyPresenceOptions& Options, struct FEOSPresenceInfo* OutPresence);
	struct FEOSNotificationId EOSPresenceAddNotifyOnPresenceChanged(class UObject* WorldContextObject, const struct FScriptDelegate& Callback);
	struct FEOSNotificationId EOSPresenceAddNotifyJoinGameAccepted(class UObject* WorldContextObject, const struct FScriptDelegate& Callback);
};

// Class EOSCore.EOSCorePresenceQueryPresence
// 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
class UEOSCorePresenceQueryPresence : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XSQF[0x58];                                    // 0x0048(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCorePresenceQueryPresence");
		return ptr;
	}



	void HandleCallback(const struct FEOSPresenceQueryPresenceCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCorePresenceQueryPresence* EOSPresenceQueryPresenceAsync(class UObject* WorldContextObject, const struct FEOSPresenceQueryPresenceOptions& Options);
};

// Class EOSCore.EOSCorePresenceSetPresence
// 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
class UEOSCorePresenceSetPresence : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IP2A[0x40];                                    // 0x0048(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCorePresenceSetPresence");
		return ptr;
	}



	void HandleCallback(const struct FEOSPresenceSetPresenceCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCorePresenceSetPresence* EOSPresenceSetPresenceAsync(class UObject* WorldContextObject, const struct FEOSPresenceSetPresenceOptions& Options);
};

// Class EOSCore.CoreProgressionSnapshot
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UCoreProgressionSnapshot : public UEOSCoreSubsystem
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.CoreProgressionSnapshot");
		return ptr;
	}



	class UCoreProgressionSnapshot* GetProgressionSnapshot(class UObject* WorldContextObject);
	void EOSProgressionSnapshotSubmitSnapshot(class UObject* WorldContextObject, const struct FEOSProgressionSnapshotSubmitSnapshotOptions& Options, const struct FScriptDelegate& Callback);
	EOSCore_EOSResult EOSProgressionSnapshotEndSnapshot(class UObject* WorldContextObject, const struct FEOSProgressionSnapshotEndSnapshotOptions& Options);
	void EOSProgressionSnapshotDeleteSnapshot(class UObject* WorldContextObject, const struct FEOSProgressionSnapshotDeleteSnapshotOptions& Options, const struct FScriptDelegate& Callback);
	EOSCore_EOSResult EOSProgressionSnapshotBeginSnapshot(class UObject* WorldContextObject, const struct FEOSProgressionSnapshotBeginSnapshotOptions& Options, int* OutSnapshotId);
	EOSCore_EOSResult EOSProgressionSnapshotAddProgression(class UObject* WorldContextObject, const struct FEOSProgressionSnapshotAddProgressionOptions& Options);
};

// Class EOSCore.CoreReports
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UCoreReports : public UEOSCoreSubsystem
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.CoreReports");
		return ptr;
	}



	class UCoreReports* GetReports(class UObject* WorldContextObject);
	void EOSReportsSendPlayerBehaviorReport(class UObject* WorldContextObject, const struct FEOSReportsSendPlayerBehaviorReportOptions& Options, const struct FScriptDelegate& Callback);
};

// Class EOSCore.EOSReportsSendPlayerBehaviorReport
// 0x0088 (FullSize[0x00C0] - InheritedSize[0x0038])
class UEOSReportsSendPlayerBehaviorReport : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CD68[0x78];                                    // 0x0048(0x0078) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSReportsSendPlayerBehaviorReport");
		return ptr;
	}



	void HandleCallback(const struct FEOSReportsSendPlayerBehaviorReportCompleteCallbackInfo& Data, bool bWasSuccessful);
	class UEOSReportsSendPlayerBehaviorReport* EOSReportsSendPlayerBehaviorReportAsync(class UObject* WorldContextObject, const struct FEOSReportsSendPlayerBehaviorReportOptions& Options);
};

// Class EOSCore.CoreRTC
// 0x00A0 (FullSize[0x00D0] - InheritedSize[0x0030])
class UCoreRTC : public UEOSCoreSubsystem
{
public:
	unsigned char                                      UnknownData_MOGJ[0xA0];                                    // 0x0030(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.CoreRTC");
		return ptr;
	}



	class UCoreRTC* GetRTC(class UObject* WorldContextObject);
	void EOSRTCRemoveNotifyParticipantStatusChanged(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID);
	void EOSRTCRemoveNotifyDisconnected(class UObject* WorldContextObject, const struct FEOSNotificationId& NotificationID);
	void EOSRTCLeaveRoom(class UObject* WorldContextObject, const struct FLeaveRoomOptions& Options, const struct FScriptDelegate& Callback);
	void EOSRTCJoinRoom(class UObject* WorldContextObject, const struct FJoinRoomOptions& Options, const struct FScriptDelegate& Callback);
	struct FEOSHRTCAudio EOSRTCGetAudioInterface(class UObject* WorldContextObject);
	void EOSRTCBlockParticipant(class UObject* WorldContextObject, const struct FBlockParticipantOptions& Options, const struct FScriptDelegate& Callback);
	struct FEOSNotificationId EOSRTCAddNotifyParticipantStatusChanged(class UObject* WorldContextObject, const struct FAddNotifyParticipantStatusChangedOptions& Options, const struct FScriptDelegate& Callback);
	struct FEOSNotificationId EOSRTCAddNotifyDisconnected(class UObject* WorldContextObject, const struct FAddNotifyDisconnectedOptions& Options, const struct FScriptDelegate& Callback);
};

// Class EOSCore.CoreRTCAdmin
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UCoreRTCAdmin : public UEOSCoreSubsystem
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.CoreRTCAdmin");
		return ptr;
	}



	class UCoreRTCAdmin* GetRTCAdmin(class UObject* WorldContextObject);
	void EOSRTCAdminSetParticipantHardMute(class UObject* WorldContextObject, const struct FEOSSetParticipantHardMuteOptions& Options, const struct FScriptDelegate& Callback);
	void EOSRTCAdminQueryJoinRoomToken(class UObject* WorldContextObject, const struct FEOSQueryJoinRoomTokenOptions& Options, const struct FScriptDelegate& Callback);
	void EOSRTCAdminKick(class UObject* WorldContextObject, const struct FEOSKickOptions& Options, const struct FScriptDelegate& Callback);
	EOSCore_EOSResult EOSRTCAdminCopyUserTokenByUserId(class UObject* WorldContextObject, const struct FEOSCopyUserTokenByUserIdOptions& Options, struct FEOSUserToken* OutUserToken);
	EOSCore_EOSResult EOSRTCAdminCopyUserTokenByIndex(class UObject* WorldContextObject, const struct FEOSCopyUserTokenByIndexOptions& Options, struct FEOSUserToken* OutUserToken);
};

// Class EOSCore.CoreRTCAudio
// 0x01E0 (FullSize[0x0210] - InheritedSize[0x0030])
class UCoreRTCAudio : public UEOSCoreSubsystem
{
public:
	unsigned char                                      UnknownData_VW05[0x1E0];                                   // 0x0030(0x01E0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.CoreRTCAudio");
		return ptr;
	}



	class UCoreRTCAudio* GetRTCAudio(class UObject* WorldContextObject);
	void EOSRTCAudioUpdateSending(const struct FEOSHRTCAudio& Handle, const struct FEOSUpdateSendingOptions& Options, const struct FScriptDelegate& Callback);
	void EOSRTCAudioUpdateReceiving(const struct FEOSHRTCAudio& Handle, const struct FEOSUpdateReceivingOptions& Options, const struct FScriptDelegate& Callback);
	EOSCore_EOSResult EOSRTCAudioUnregisterPlatformAudioUser(const struct FEOSHRTCAudio& Handle, const struct FEOSUnregisterPlatformAudioUserOptions& Options);
	EOSCore_EOSResult EOSRTCAudioSetAudioOutputSettings(const struct FEOSHRTCAudio& Handle, const struct FEOSSetAudioOutputSettingsOptions& Options);
	EOSCore_EOSResult EOSRTCAudioSetAudioInputSettings(const struct FEOSHRTCAudio& Handle, const struct FEOSSetAudioInputSettingsOptions& Options);
	EOSCore_EOSResult EOSRTCAudioSendAudio(const struct FEOSHRTCAudio& Handle, const struct FEOSSendAudioOptions& Options);
	void EOSRTCAudioRemoveNotifyParticipantUpdated(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSNotificationId& NotificationID);
	void EOSRTCAudioRemoveNotifyAudioOutputState(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSNotificationId& NotificationID);
	void EOSRTCAudioRemoveNotifyAudioInputState(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSNotificationId& NotificationID);
	void EOSRTCAudioRemoveNotifyAudioDevicesChanged(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSNotificationId& NotificationID);
	void EOSRTCAudioRemoveNotifyAudioBeforeSend(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSNotificationId& NotificationID);
	void EOSRTCAudioRemoveNotifyAudioBeforeRender(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSNotificationId& NotificationID);
	EOSCore_EOSResult EOSRTCAudioRegisterPlatformAudioUser(const struct FEOSHRTCAudio& Handle, const struct FEOSRegisterPlatformAudioUserOptions& Options);
	int EOSRTCAudioGetAudioOutputDevicesCount(const struct FEOSHRTCAudio& Handle, const struct FEOSGetAudioOutputDevicesCountOptions& Options);
	struct FEOSAudioOutputDeviceInfo EOSRTCAudioGetAudioOutputDeviceByIndex(const struct FEOSHRTCAudio& Handle, const struct FEOSGetAudioOutputDeviceByIndexOptions& Options);
	int EOSRTCAudioGetAudioInputDevicesCount(const struct FEOSHRTCAudio& Handle, const struct FEOSGetAudioInputDevicesCountOptions& Options);
	struct FEOSAudioInputDeviceInfo EOSRTCAudioGetAudioInputDeviceByIndex(const struct FEOSHRTCAudio& Handle, const struct FEOSGetAudioOutputDeviceByIndexOptions& Options);
	struct FEOSNotificationId EOSRTCAudioAddNotifyParticipantUpdated(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSAddNotifyParticipantUpdatedOptions& Options, const struct FScriptDelegate& Callback);
	struct FEOSNotificationId EOSRTCAudioAddNotifyAudioOutputState(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSAddNotifyAudioOutputStateOptions& Options, const struct FScriptDelegate& Callback);
	struct FEOSNotificationId EOSRTCAudioAddNotifyAudioInputState(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSAddNotifyAudioInputStateOptions& Options, const struct FScriptDelegate& Callback);
	struct FEOSNotificationId EOSRTCAudioAddNotifyAudioDevicesChanged(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSAddNotifyAudioDevicesChangedOptions& Options, const struct FScriptDelegate& Callback);
	struct FEOSNotificationId EOSRTCAudioAddNotifyAudioBeforeSend(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSAddNotifyAudioBeforeSendOptions& Options, const struct FScriptDelegate& Callback);
	struct FEOSNotificationId EOSRTCAudioAddNotifyAudioBeforeRender(class UObject* WorldContextObject, const struct FEOSHRTCAudio& Handle, const struct FEOSAddNotifyAudioBeforeRenderOptions& Options, const struct FScriptDelegate& Callback);
};

// Class EOSCore.CoreSanctions
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UCoreSanctions : public UEOSCoreSubsystem
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.CoreSanctions");
		return ptr;
	}



	class UCoreSanctions* GetSanctions(class UObject* WorldContextObject);
	void EOSSanctionsQueryActivePlayerSanctions(class UObject* WorldContextObject, const struct FEOSSanctionsQueryActivePlayerSanctionsOptions& Options, const struct FScriptDelegate& Callback);
	int EOSSanctionsGetPlayerSanctionCount(class UObject* WorldContextObject, const struct FEOSSanctionsGetPlayerSanctionCountOptions& Options);
	EOSCore_EOSResult EOSSanctionsCopyPlayerSanctionByIndex(class UObject* WorldContextObject, const struct FEOSSanctionsCopyPlayerSanctionByIndexOptions& Options, struct FEOSSanctionsPlayerSanction* OutSanction);
};

// Class EOSCore.EOSSanctionsQueryActivePlayerSanctions
// 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
class UEOSSanctionsQueryActivePlayerSanctions : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_38XH[0x58];                                    // 0x0048(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSSanctionsQueryActivePlayerSanctions");
		return ptr;
	}



	void HandleCallback(const struct FEOSSanctionsQueryActivePlayerSanctionsCallbackInfo& Data, bool bWasSuccessful);
	class UEOSSanctionsQueryActivePlayerSanctions* EOSSanctionsQueryActivePlayerSanctionsAsync(class UObject* WorldContextObject, const struct FEOSSanctionsQueryActivePlayerSanctionsOptions& Options);
};

// Class EOSCore.CoreSessions
// 0x00F0 (FullSize[0x0120] - InheritedSize[0x0030])
class UCoreSessions : public UEOSCoreSubsystem
{
public:
	unsigned char                                      UnknownData_9QAI[0xF0];                                    // 0x0030(0x00F0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.CoreSessions");
		return ptr;
	}



	class UCoreSessions* GetSessions(class UObject* WorldContextObject);
	EOSCore_EOSResult EOSSessionsUpdateSessionModification(class UObject* WorldContextObject, const struct FEOSSessionsUpdateSessionModificationOptions& Options, struct FEOSHSessionModification* OutSessionModificationHandle);
	void EOSSessionsUpdateSession(class UObject* WorldContextObject, const struct FEOSSessionsUpdateSessionOptions& Options, const struct FScriptDelegate& Callback);
	void EOSSessionsUnregisterPlayers(class UObject* WorldContextObject, const struct FEOSSessionsUnregisterPlayersOptions& Options, const struct FScriptDelegate& Callback);
	void EOSSessionsStartSession(class UObject* WorldContextObject, const struct FEOSSessionsStartSessionOptions& Options, const struct FScriptDelegate& Callback);
	void EOSSessionsSendInvite(class UObject* WorldContextObject, const struct FEOSSessionsSendInviteOptions& Options, const struct FScriptDelegate& Callback);
	void EOSSessionsRemoveNotifySessionInviteReceived(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
	void EOSSessionsRemoveNotifySessionInviteAccepted(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
	void EOSSessionsRemoveNotifyJoinSessionAccepted(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
	void EOSSessionsRejectInvite(class UObject* WorldContextObject, const struct FEOSSessionsRejectInviteOptions& Options, const struct FScriptDelegate& Callback);
	void EOSSessionsRegisterPlayers(class UObject* WorldContextObject, const struct FEOSSessionsRegisterPlayersOptions& Options, const struct FScriptDelegate& Callback);
	void EOSSessionsQueryInvites(class UObject* WorldContextObject, const struct FEOSSessionsQueryInvitesOptions& Options, const struct FScriptDelegate& Callback);
	void EOSSessionsJoinSession(class UObject* WorldContextObject, const struct FEOSSessionsJoinSessionOptions& Options, const struct FScriptDelegate& Callback);
	EOSCore_EOSResult EOSSessionsIsUserInSession(class UObject* WorldContextObject, const struct FEOSSessionsIsUserInSessionOptions& Options);
	EOSCore_EOSResult EOSSessionsGetInviteIdByIndex(class UObject* WorldContextObject, const struct FEOSSessionsGetInviteIdByIndexOptions& Options, struct FString* OutBuffer);
	int EOSSessionsGetInviteCount(class UObject* WorldContextObject, const struct FEOSSessionsGetInviteCountOptions& Options);
	void EOSSessionsEndSession(class UObject* WorldContextObject, const struct FEOSSessionsEndSessionOptions& Options, const struct FScriptDelegate& Callback);
	EOSCore_EOSResult EOSSessionSearchSetTargetUserId(class UObject* WorldContextObject, const struct FEOSHSessionSearch& Handle, const struct FEOSSessionSearchSetTargetUserIdOptions& Options);
	EOSCore_EOSResult EOSSessionSearchSetSessionId(class UObject* WorldContextObject, const struct FEOSHSessionSearch& Handle, const struct FEOSSessionSearchSetSessionIdOptions& Options);
	EOSCore_EOSResult EOSSessionSearchSetParameterString(class UObject* WorldContextObject, const struct FEOSHSessionSearch& Handle, const struct FString& Key, const struct FString& Value, EOSCore_EEOSEComparisonOp ComparisonOp);
	EOSCore_EOSResult EOSSessionSearchSetParameterInt64(class UObject* WorldContextObject, const struct FEOSHSessionSearch& Handle, const struct FString& Key, const struct FString& Value, EOSCore_EEOSEComparisonOp ComparisonOp);
	EOSCore_EOSResult EOSSessionSearchSetParameterDouble(class UObject* WorldContextObject, const struct FEOSHSessionSearch& Handle, const struct FString& Key, const struct FString& Value, EOSCore_EEOSEComparisonOp ComparisonOp);
	EOSCore_EOSResult EOSSessionSearchSetParameterBool(class UObject* WorldContextObject, const struct FEOSHSessionSearch& Handle, const struct FString& Key, bool bValue, EOSCore_EEOSEComparisonOp ComparisonOp);
	EOSCore_EOSResult EOSSessionSearchSetMaxResults(class UObject* WorldContextObject, const struct FEOSHSessionSearch& Handle, const struct FEOSSessionSearchSetMaxResultsOptions& Options);
	EOSCore_EOSResult EOSSessionSearchRemoveParameter(class UObject* WorldContextObject, const struct FEOSHSessionSearch& Handle, const struct FEOSSessionSearchRemoveParameterOptions& Options);
	void EOSSessionSearchRelease(class UObject* WorldContextObject, const struct FEOSHSessionSearch& SessionSearchHandle);
	int EOSSessionSearchGetSearchResultCount(class UObject* WorldContextObject, const struct FEOSHSessionSearch& Handle, const struct FEOSSessionSearchGetSearchResultCountOptions& Options);
	void EOSSessionSearchFind(class UObject* WorldContextObject, const struct FEOSHSessionSearch& Handle, const struct FEOSSessionSearchFindOptions& Options, const struct FScriptDelegate& Callback);
	EOSCore_EOSResult EOSSessionSearchCopySearchResultByIndex(class UObject* WorldContextObject, const struct FEOSHSessionSearch& Handle, const struct FEOSSessionSearchCopySearchResultByIndexOptions& Options, struct FEOSHSessionDetails* OutSessionHandle);
	EOSCore_EOSResult EOSSessionsDumpSessionState(class UObject* WorldContextObject, const struct FEOSSessionsDumpSessionStateOptions& Options);
	void EOSSessionsDestroySession(class UObject* WorldContextObject, const struct FEOSSessionsDestroySessionOptions& Options, const struct FScriptDelegate& Callback);
	EOSCore_EOSResult EOSSessionsCreateSessionSearch(class UObject* WorldContextObject, const struct FEOSSessionsCreateSessionSearchOptions& Options, struct FEOSHSessionSearch* OutSessionSearchHandle);
	EOSCore_EOSResult EOSSessionsCreateSessionModification(class UObject* WorldContextObject, const struct FEOSSessionsCreateSessionModificationOptions& Options, struct FEOSHSessionModification* OutSessionModificationHandle);
	EOSCore_EOSResult EOSSessionsCopySessionHandleForPresence(class UObject* WorldContextObject, const struct FEOSSessionsCopySessionHandleForPresenceOptions& Options, struct FEOSHSessionDetails* OutSessionHandle);
	EOSCore_EOSResult EOSSessionsCopySessionHandleByUiEventId(class UObject* WorldContextObject, const struct FEOSSessionsCopySessionHandleByUiEventIdOptions& Options, struct FEOSHSessionDetails* OutSessionHandle);
	EOSCore_EOSResult EOSSessionsCopySessionHandleByInviteId(class UObject* WorldContextObject, const struct FEOSSessionsCopySessionHandleByInviteIdOptions& Options, struct FEOSHSessionDetails* OutSessionHandle);
	EOSCore_EOSResult EOSSessionsCopyActiveSessionHandle(class UObject* WorldContextObject, const struct FEOSSessionsCopyActiveSessionHandleOptions& Options, struct FEOSHActiveSession* OutSessionHandle);
	struct FEOSNotificationId EOSSessionsAddNotifySessionInviteReceived(class UObject* WorldContextObject, const struct FScriptDelegate& Callback);
	struct FEOSNotificationId EOSSessionsAddNotifySessionInviteAccepted(class UObject* WorldContextObject, const struct FScriptDelegate& Callback);
	struct FEOSNotificationId EOSSessionsAddNotifyJoinSessionAccepted(class UObject* WorldContextObject, const struct FScriptDelegate& Callback);
	EOSCore_EOSResult EOSSessionModificationSetPermissionLevel(class UObject* WorldContextObject, const struct FEOSHSessionModification& Handle, const struct FEOSSessionModificationSetPermissionLevelOptions& Options);
	EOSCore_EOSResult EOSSessionModificationSetMaxPlayers(class UObject* WorldContextObject, const struct FEOSHSessionModification& Handle, const struct FEOSSessionModificationSetMaxPlayersOptions& Options);
	EOSCore_EOSResult EOSSessionModificationSetJoinInProgressAllowed(class UObject* WorldContextObject, const struct FEOSHSessionModification& Handle, const struct FEOSSessionModificationSetJoinInProgressAllowedOptions& Options);
	EOSCore_EOSResult EOSSessionModificationSetInvitesAllowed(class UObject* WorldContextObject, const struct FEOSHSessionModification& Handle, const struct FEOSSessionModificationSetInvitesAllowedOptions& Options);
	EOSCore_EOSResult EOSSessionModificationSetHostAddress(class UObject* WorldContextObject, const struct FEOSHSessionModification& Handle, const struct FEOSSessionModificationSetHostAddressOptions& Options);
	EOSCore_EOSResult EOSSessionModificationSetBucketId(class UObject* WorldContextObject, const struct FEOSHSessionModification& Handle, const struct FEOSSessionModificationSetBucketIdOptions& Options);
	EOSCore_EOSResult EOSSessionModificationRemoveAttribute(class UObject* WorldContextObject, const struct FEOSHSessionModification& Handle, const struct FEOSSessionModificationRemoveAttributeOptions& Options);
	void EOSSessionModificationRelease(class UObject* WorldContextObject, const struct FEOSHSessionModification& SessionModificationHandle);
	EOSCore_EOSResult EOSSessionModificationAddAttributeString(class UObject* WorldContextObject, const struct FEOSHSessionModification& Handle, EOSCore_EEOSESessionAttributeAdvertisementType AdvertisementType, const struct FString& Key, const struct FString& Value);
	EOSCore_EOSResult EOSSessionModificationAddAttributeInt64(class UObject* WorldContextObject, const struct FEOSHSessionModification& Handle, EOSCore_EEOSESessionAttributeAdvertisementType AdvertisementType, const struct FString& Key, const struct FString& Value);
	EOSCore_EOSResult EOSSessionModificationAddAttributeDouble(class UObject* WorldContextObject, const struct FEOSHSessionModification& Handle, EOSCore_EEOSESessionAttributeAdvertisementType AdvertisementType, const struct FString& Key, const struct FString& Value);
	EOSCore_EOSResult EOSSessionModificationAddAttributeBool(class UObject* WorldContextObject, const struct FEOSHSessionModification& Handle, EOSCore_EEOSESessionAttributeAdvertisementType AdvertisementType, const struct FString& Key, bool bValue);
	void EOSSessionDetailsRelease(class UObject* WorldContextObject, const struct FEOSHSessionDetails& SessionHandle);
	int EOSSessionDetailsGetSessionAttributeCount(class UObject* WorldContextObject, const struct FEOSHSessionDetails& Handle, const struct FEOSSessionDetailsGetSessionAttributeCountOptions& Options);
	EOSCore_EOSResult EOSSessionDetailsCopySessionAttributeByKey(class UObject* WorldContextObject, const struct FEOSHSessionDetails& Handle, const struct FEOSSessionDetailsCopySessionAttributeByKeyOptions& Options, struct FEOSSessionDetailsAttribute* OutSessionAttribute);
	EOSCore_EOSResult EOSSessionDetailsCopySessionAttributeByIndex(class UObject* WorldContextObject, const struct FEOSHSessionDetails& Handle, const struct FEOSSessionDetailsCopySessionAttributeByIndexOptions& Options, struct FEOSSessionDetailsAttribute* OutSessionAttribute);
	EOSCore_EOSResult EOSSessionDetailsCopyInfo(class UObject* WorldContextObject, const struct FEOSHSessionDetails& Handle, const struct FEOSSessionDetailsCopyInfoOptions& Options, struct FEOSSessionDetailsInfo* outSessionInfo);
	void EOSActiveSessionRelease(class UObject* WorldContextObject, const struct FEOSHActiveSession& ActiveSessionHandle);
	int EOSActiveSessionGetRegisteredPlayerCount(class UObject* WorldContextObject, const struct FEOSHActiveSession& Handle, const struct FEOSActiveSessionGetRegisteredPlayerCountOptions& Options);
	struct FEOSProductUserId EOSActiveSessionGetRegisteredPlayerByIndex(class UObject* WorldContextObject, const struct FEOSHActiveSession& Handle, const struct FEOSActiveSessionGetRegisteredPlayerByIndexOptions& Options);
	EOSCore_EOSResult EOSActiveSessionCopyInfo(class UObject* WorldContextObject, const struct FEOSHActiveSession& Handle, const struct FEOSActiveSessionCopyInfoOptions& Options, struct FEOSActiveSessionInfo* OutActiveSessionInfo);
};

// Class EOSCore.EOSCoreSessionsUpdateSession
// 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
class UEOSCoreSessionsUpdateSession : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_85QV[0x20];                                    // 0x0048(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreSessionsUpdateSession");
		return ptr;
	}



	void HandleCallback(const struct FEOSSessionsUpdateSessionCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreSessionsUpdateSession* EOSSessionsUpdateSessionAsync(class UObject* WorldContextObject, const struct FEOSSessionsUpdateSessionOptions& Options);
};

// Class EOSCore.EOSCoreSessionsDestroySession
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UEOSCoreSessionsDestroySession : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZZQL[0x28];                                    // 0x0048(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreSessionsDestroySession");
		return ptr;
	}



	void HandleCallback(const struct FEOSSessionsDestroySessionCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreSessionsDestroySession* EOSSessionsDestroySessionAsync(class UObject* WorldContextObject, const struct FEOSSessionsDestroySessionOptions& Options);
};

// Class EOSCore.EOSCoreSessionsJoinSession
// 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
class UEOSCoreSessionsJoinSession : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MVJB[0x58];                                    // 0x0048(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreSessionsJoinSession");
		return ptr;
	}



	void HandleCallback(const struct FEOSSessionsJoinSessionCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreSessionsJoinSession* EOSSessionsJoinSessionAsync(class UObject* WorldContextObject, const struct FEOSSessionsJoinSessionOptions& Options);
};

// Class EOSCore.EOSCoreSessionsStartSession
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UEOSCoreSessionsStartSession : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LXTA[0x28];                                    // 0x0048(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreSessionsStartSession");
		return ptr;
	}



	void HandleCallback(const struct FEOSSessionsStartSessionCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreSessionsStartSession* EOSSessionsStartSessionAsync(class UObject* WorldContextObject, const struct FEOSSessionsStartSessionOptions& Options);
};

// Class EOSCore.EOSCoreSessionsEndSession
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UEOSCoreSessionsEndSession : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZY3G[0x28];                                    // 0x0048(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreSessionsEndSession");
		return ptr;
	}



	void HandleCallback(const struct FEOSSessionsEndSessionCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreSessionsEndSession* EOSSessionsEndSessionAsync(class UObject* WorldContextObject, const struct FEOSSessionsEndSessionOptions& Options);
};

// Class EOSCore.EOSCoreSessionsRegisterPlayers
// 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
class UEOSCoreSessionsRegisterPlayers : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_68ZY[0x40];                                    // 0x0048(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreSessionsRegisterPlayers");
		return ptr;
	}



	void HandleCallback(const struct FEOSSessionsRegisterPlayersCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreSessionsRegisterPlayers* EOSSessionsRegisterPlayersAsync(class UObject* WorldContextObject, const struct FEOSSessionsRegisterPlayersOptions& Options);
};

// Class EOSCore.EOSCoreSessionsUnregisterPlayers
// 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
class UEOSCoreSessionsUnregisterPlayers : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SM1D[0x40];                                    // 0x0048(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreSessionsUnregisterPlayers");
		return ptr;
	}



	void HandleCallback(const struct FEOSSessionsUnregisterPlayersCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreSessionsUnregisterPlayers* EOSSessionsUnregisterPlayersAsync(class UObject* WorldContextObject, const struct FEOSSessionsUnregisterPlayersOptions& Options);
};

// Class EOSCore.EOSCoreSessionsSendInvite
// 0x0080 (FullSize[0x00B8] - InheritedSize[0x0038])
class UEOSCoreSessionsSendInvite : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GM09[0x70];                                    // 0x0048(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreSessionsSendInvite");
		return ptr;
	}



	void HandleCallback(const struct FEOSSessionsSendInviteCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreSessionsSendInvite* EOSSessionsSendInviteAsync(class UObject* WorldContextObject, const struct FEOSSessionsSendInviteOptions& Options);
};

// Class EOSCore.EOSCoreSessionsRejectInvite
// 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
class UEOSCoreSessionsRejectInvite : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZBUD[0x48];                                    // 0x0048(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreSessionsRejectInvite");
		return ptr;
	}



	void HandleCallback(const struct FEOSSessionsRejectInviteCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreSessionsRejectInvite* EOSSessionsRejectInviteAsync(class UObject* WorldContextObject, const struct FEOSSessionsRejectInviteOptions& Options);
};

// Class EOSCore.EOSCoreSessionsQueryInvites
// 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
class UEOSCoreSessionsQueryInvites : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BGL0[0x38];                                    // 0x0048(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreSessionsQueryInvites");
		return ptr;
	}



	void HandleCallback(const struct FEOSSessionsQueryInvitesCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreSessionsQueryInvites* EOSSessionsQueryInvitesAsync(class UObject* WorldContextObject, const struct FEOSSessionsQueryInvitesOptions& Options);
};

// Class EOSCore.EOSCoreSessionsSearchFind
// 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
class UEOSCoreSessionsSearchFind : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4FQX[0x40];                                    // 0x0048(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreSessionsSearchFind");
		return ptr;
	}



	void HandleCallback(const struct FEOSSessionSearchFindCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreSessionsSearchFind* EOSSessionSearchFindAsync(class UObject* WorldContextObject, const struct FEOSHSessionSearch& SearchHandle, const struct FEOSSessionSearchFindOptions& Options);
};

// Class EOSCore.CoreStats
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UCoreStats : public UEOSCoreSubsystem
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.CoreStats");
		return ptr;
	}



	class UCoreStats* GetStats(class UObject* WorldContextObject);
	void EOSStatsQueryStats(class UObject* WorldContextObject, const struct FEOSStatsQueryStatsOptions& Options, const struct FScriptDelegate& Callback);
	void EOSStatsIngestStat(class UObject* WorldContextObject, const struct FEOSStatsIngestStatOptions& Options, const struct FScriptDelegate& Callback);
	int EOSStatsGetStatsCount(class UObject* WorldContextObject, const struct FEOSStatsGetStatCountOptions& Options);
	EOSCore_EOSResult EOSStatsCopyStatByName(class UObject* WorldContextObject, const struct FEOSStatsCopyStatByNameOptions& Options, struct FEOSStatsStat* OutStat);
	EOSCore_EOSResult EOSStatsCopyStatByIndex(class UObject* WorldContextObject, const struct FEOSStatsCopyStatByIndexOptions& Options, struct FEOSStatsStat* OutStat);
};

// Class EOSCore.EOSCoreStatsIngestStat
// 0x0080 (FullSize[0x00B8] - InheritedSize[0x0038])
class UEOSCoreStatsIngestStat : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GWSL[0x70];                                    // 0x0048(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreStatsIngestStat");
		return ptr;
	}



	void HandleCallback(const struct FEOSStatsIngestStatCompleteCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreStatsIngestStat* EOSStatsIngestStatAsync(class UObject* WorldContextObject, const struct FEOSStatsIngestStatOptions& Options);
};

// Class EOSCore.EOSCoreStatsQueryStats
// 0x00A0 (FullSize[0x00D8] - InheritedSize[0x0038])
class UEOSCoreStatsQueryStats : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LNPO[0x90];                                    // 0x0048(0x0090) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreStatsQueryStats");
		return ptr;
	}



	void HandleCallback(const struct FEOSStatsOnQueryStatsCompleteCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreStatsQueryStats* EOSStatsQueryStatsAsync(class UObject* WorldContextObject, const struct FEOSStatsQueryStatsOptions& Options);
};

// Class EOSCore.CoreTitleStorage
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UCoreTitleStorage : public UEOSCoreSubsystem
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.CoreTitleStorage");
		return ptr;
	}



	class UCoreTitleStorage* GetTitleStorage(class UObject* WorldContextObject);
	struct FEOSTitleStorageFileTransferRequestHandle EOSTitleStorageReadFile(class UObject* WorldContextObject, const struct FEOSTitleStorageReadFileOptions& Options, const struct FScriptDelegate& Callback);
	void EOSTitleStorageQueryFileList(class UObject* WorldContextObject, const struct FEOSTitleStorageQueryFileListOptions& Options, const struct FScriptDelegate& Callback);
	void EOSTitleStorageQueryFile(class UObject* WorldContextObject, const struct FEOSTitleStorageQueryFileOptions& Options, const struct FScriptDelegate& Callback);
	int EOSTitleStorageGetFileMetadataCount(class UObject* WorldContextObject, const struct FEOSTitleStorageGetFileMetadataCountOptions& Options);
	EOSCore_EOSResult EOSTitleStorageFileTransferRequestGetFileRequestState(class UObject* WorldContextObject, const struct FEOSTitleStorageFileTransferRequestHandle& Handle);
	EOSCore_EOSResult EOSTitleStorageFileTransferRequestGetFilename(class UObject* WorldContextObject, const struct FEOSTitleStorageFileTransferRequestHandle& Handle, int FilenameStringBufferSizeBytes, struct FString* OutStringBuffer);
	EOSCore_EOSResult EOSTitleStorageFileTransferRequestCancelRequest(class UObject* WorldContextObject, const struct FEOSTitleStorageFileTransferRequestHandle& Handle);
	EOSCore_EOSResult EOSTitleStorageDeleteCache(class UObject* WorldContextObject, const struct FEOSTitleStorageDeleteCacheOptions& Options, const struct FScriptDelegate& Callback);
	EOSCore_EOSResult EOSTitleStorageCopyFileMetadataByFilename(class UObject* WorldContextObject, const struct FEOSTitleStorageCopyFileMetadataByFilenameOptions& Options, struct FEOSTitleStorageFileMetadata* OutMetadata);
	EOSCore_EOSResult EOSTitleStorageCopyFileMetadataAtIndex(class UObject* WorldContextObject, const struct FEOSTitleStorageCopyFileMetadataAtIndexOptions& Options, struct FEOSTitleStorageFileMetadata* OutMetadata);
};

// Class EOSCore.EOSCoreTitleStorageQueryFile
// 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
class UEOSCoreTitleStorageQueryFile : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D0NQ[0x48];                                    // 0x0048(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreTitleStorageQueryFile");
		return ptr;
	}



	void HandleCallback(const struct FEOSTitleStorageQueryFileCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreTitleStorageQueryFile* EOSTitleStorageQueryFileAsync(class UObject* WorldContextObject, const struct FEOSTitleStorageQueryFileOptions& Options);
};

// Class EOSCore.EOSCoreTitleStorageQueryFileList
// 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
class UEOSCoreTitleStorageQueryFileList : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J3M2[0x48];                                    // 0x0048(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreTitleStorageQueryFileList");
		return ptr;
	}



	void HandleCallback(const struct FEOSTitleStorageQueryFileListCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreTitleStorageQueryFileList* EOSTitleStorageQueryFileListAsync(class UObject* WorldContextObject, const struct FEOSTitleStorageQueryFileListOptions& Options);
};

// Class EOSCore.EOSCoreTitleStorageReadFile
// 0x0078 (FullSize[0x00B0] - InheritedSize[0x0038])
class UEOSCoreTitleStorageReadFile : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y7GT[0x68];                                    // 0x0048(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreTitleStorageReadFile");
		return ptr;
	}



	void HandleCallback(const struct FEOSTitleStorageReadFileCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreTitleStorageReadFile* EOSTitleStorageReadFileAsync(class UObject* WorldContextObject, const struct FEOSTitleStorageReadFileOptions& Options);
};

// Class EOSCore.EOSCoreTitleStorageDeleteCache
// 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
class UEOSCoreTitleStorageDeleteCache : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1R83[0x38];                                    // 0x0048(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreTitleStorageDeleteCache");
		return ptr;
	}



	void HandleCallback(const struct FEOSTitleStorageDeleteCacheCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreTitleStorageDeleteCache* EOSTitleStorageDeleteCacheAsync(class UObject* WorldContextObject, const struct FEOSTitleStorageDeleteCacheOptions& Options);
};

// Class EOSCore.CoreUI
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UCoreUI : public UEOSCoreSubsystem
{
public:
	unsigned char                                      UnknownData_P45T[0x50];                                    // 0x0030(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.CoreUI");
		return ptr;
	}



	class UCoreUI* GetUI(class UObject* WorldContextObject);
	void EOSUIShowFriends(class UObject* WorldContextObject, const struct FEOSUIShowFriendsOptions& Options, const struct FScriptDelegate& Callback);
	EOSCore_EOSResult EOSUISetToggleFriendsKey(class UObject* WorldContextObject, const struct FEOSUISetToggleFriendsKeyOptions& Options);
	EOSCore_EOSResult EOSUISetDisplayPreference(class UObject* WorldContextObject, const struct FEOSUISetDisplayPreferenceOptions& Options);
	void EOSUIRemoveNotifyDisplaySettingsUpdated(class UObject* WorldContextObject, const struct FEOSNotificationId& ID);
	bool EOSUIIsValidKeyCombination(class UObject* WorldContextObject, int keyCombination);
	void EOSUIHideFriends(class UObject* WorldContextObject, const struct FEOSUIHideFriendsOptions& Options, const struct FScriptDelegate& Callback);
	int EOSUIGetToggleFriendsKey(class UObject* WorldContextObject, const struct FEOSUIGetToggleFriendsKeyOptions& Options);
	EOSCore_EEOSUIENotificationLocation EOSUIGetNotificationLocationPreference(class UObject* WorldContextObject);
	bool EOSUIGetFriendsVisible(class UObject* WorldContextObject, const struct FEOSUIGetFriendsVisibleOptions& Options);
	struct FEOSNotificationId EOSUIAddNotifyDisplaySettingsUpdated(class UObject* WorldContextObject, const struct FEOSUIAddNotifyDisplaySettingsUpdatedOptions& Options, const struct FScriptDelegate& Callback);
	EOSCore_EOSResult EOSUIAcknowledgeEventId(class UObject* WorldContextObject, const struct FEOSUIAcknowledgeEventIdOptions& Options);
};

// Class EOSCore.EOSCoreUIShowFriends
// 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
class UEOSCoreUIShowFriends : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UTT2[0x38];                                    // 0x0048(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreUIShowFriends");
		return ptr;
	}



	void HandleCallback(const struct FEOSUIShowFriendsCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreUIShowFriends* EOSUIShowFriendsAsync(class UObject* WorldContextObject, const struct FEOSUIShowFriendsOptions& Options);
};

// Class EOSCore.EOSCoreUIHideFriends
// 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
class UEOSCoreUIHideFriends : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_80Q2[0x38];                                    // 0x0048(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreUIHideFriends");
		return ptr;
	}



	void HandleCallback(const struct FEOSUIHideFriendsCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreUIHideFriends* EOSUIHideFriendsAsync(class UObject* WorldContextObject, const struct FEOSUIHideFriendsOptions& Options);
};

// Class EOSCore.CoreUserInfo
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UCoreUserInfo : public UEOSCoreSubsystem
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.CoreUserInfo");
		return ptr;
	}



	class UCoreUserInfo* GetUserInfo(class UObject* WorldContextObject);
	void EOSUserInfoQueryUserInfoByExternalAccount(class UObject* WorldContextObject, const struct FEOSUserInfoQueryUserInfoByExternalAccountOptions& Options, const struct FScriptDelegate& Callback);
	void EOSUserInfoQueryUserInfoByDisplayName(class UObject* WorldContextObject, const struct FEOSUserInfoQueryUserInfoByDisplayNameOptions& Options, const struct FScriptDelegate& Callback);
	void EOSUserInfoQueryUserInfo(class UObject* WorldContextObject, const struct FEOSUserInfoQueryUserInfoOptions& Options, const struct FScriptDelegate& Callback);
	int EOSUserInfoGetExternalUserInfoCount(class UObject* WorldContextObject, const struct FEOSUserInfoGetExternalUserInfoCountOptions& Options);
	EOSCore_EOSResult EOSUserInfoCopyUserInfo(class UObject* WorldContextObject, const struct FEOSUserInfoCopyUserInfoOptions& Options, struct FEOSUserInfo* OutUserInfo);
	EOSCore_EOSResult EOSUserInfoCopyExternalUserInfoByIndex(class UObject* WorldContextObject, const struct FEOSUserInfoCopyExternalUserInfoByIndexOptions& Options, struct FEOSUserInfoExternalUserInfo* OutExternalUserInfo);
	EOSCore_EOSResult EOSUserInfoCopyExternalUserInfoByAccountType(class UObject* WorldContextObject, const struct FEOSUserInfoCopyExternalUserInfoByAccountTypeOptions& Options, struct FEOSUserInfoExternalUserInfo* OutExternalUserInfo);
	EOSCore_EOSResult EOSUserInfoCopyExternalUserInfoByAccountId(class UObject* WorldContextObject, const struct FEOSUserInfoCopyExternalUserInfoByAccountIdOptions& Options, struct FEOSUserInfoExternalUserInfo* OutExternalUserInfo);
};

// Class EOSCore.EOSCoreUserInfoQueryUserInfo
// 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
class UEOSCoreUserInfoQueryUserInfo : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZAKA[0x58];                                    // 0x0048(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreUserInfoQueryUserInfo");
		return ptr;
	}



	void HandleCallback(const struct FEOSUserInfoQueryUserInfoCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreUserInfoQueryUserInfo* EOSUserInfoQueryUserInfoAsync(class UObject* WorldContextObject, const struct FEOSUserInfoQueryUserInfoOptions& Options);
};

// Class EOSCore.EOSCoreUserInfoQueryUserInfoByDisplayName
// 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
class UEOSCoreUserInfoQueryUserInfoByDisplayName : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F6TN[0x48];                                    // 0x0048(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreUserInfoQueryUserInfoByDisplayName");
		return ptr;
	}



	void HandleCallback(const struct FEOSUserInfoQueryUserInfoByDisplayNameCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreUserInfoQueryUserInfoByDisplayName* EOSUserInfoQueryUserInfoByDisplayNameAsync(class UObject* WorldContextObject, const struct FEOSUserInfoQueryUserInfoByDisplayNameOptions& Options);
};

// Class EOSCore.EOSCoreUserInfoByExternalAccount
// 0x0060 (FullSize[0x0098] - InheritedSize[0x0038])
class UEOSCoreUserInfoByExternalAccount : public UEOSCoreAsyncAction
{
public:
	struct FScriptMulticastDelegate                    OnCallback;                                                // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M7SG[0x50];                                    // 0x0048(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EOSCore.EOSCoreUserInfoByExternalAccount");
		return ptr;
	}



	void HandleCallback(const struct FEOSUserInfoQueryUserInfoByExternalAccountCallbackInfo& Data, bool bWasSuccessful);
	class UEOSCoreUserInfoByExternalAccount* EOSUserInfoQueryUserInfoByExternalAccountAsync(class UObject* WorldContextObject, const struct FEOSUserInfoQueryUserInfoByExternalAccountOptions& Options);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
