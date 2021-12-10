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

// Function EOSCore.CoreAchievements.GetAchievements
struct UCoreAchievements_GetAchievements_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreAchievements*                           ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAchievements.EOSAchievementsUnlockAchievements
struct UCoreAchievements_EOSAchievementsUnlockAchievements_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAchievementsUnlockAchievementsOptions   Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAchievements.EOSAchievementsRemoveNotifyAchievementsUnlocked
struct UCoreAchievements_EOSAchievementsRemoveNotifyAchievementsUnlocked_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ID;                                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAchievements.EOSAchievementsQueryPlayerAchievements
struct UCoreAchievements_EOSAchievementsQueryPlayerAchievements_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAchievementsQueryPlayerAchievementsOptions Options;                                                   // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAchievements.EOSAchievementsQueryDefinitions
struct UCoreAchievements_EOSAchievementsQueryDefinitions_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAchievementsQueryDefinitionsOptions     Options;                                                   // 0x0008(0x0021)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x002C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAchievements.EOSAchievementsGetPlayerAchievementCount
struct UCoreAchievements_EOSAchievementsGetPlayerAchievementCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAchievementsGetPlayerAchievementCountOptions Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAchievements.EOSAchievementsGetAchievementDefinitionCount
struct UCoreAchievements_EOSAchievementsGetAchievementDefinitionCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAchievementsGetAchievementDefinitionCountOptions Options;                                                   // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAchievements.EOSAchievementsCopyPlayerAchievementByIndex
struct UCoreAchievements_EOSAchievementsCopyPlayerAchievementByIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAchievementsCopyPlayerAchievementByIndexOptions Options;                                                   // 0x0008(0x0050)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSAchievementsPlayerAchievement           OutAchievement;                                            // 0x0058(0x0088)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAchievements.EOSAchievementsCopyAchievementDefinitionV2ByIndex
struct UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAchievementsCopyAchievementDefinitionV2ByIndexOptions Options;                                                   // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSAchievementsDefinitionV2                OutDefinition;                                             // 0x0010(0x00A0)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x00B0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAchievements.EOSAchievementsCopyAchievementDefinitionV2ByAchievementId
struct UCoreAchievements_EOSAchievementsCopyAchievementDefinitionV2ByAchievementId_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAchievementsCopyAchievementDefinitionV2ByAchievementIdOptions Options;                                                   // 0x0008(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FEOSAchievementsDefinitionV2                OutDefinition;                                             // 0x0018(0x00A0)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAchievements.EOSAchievementsAddNotifyAchievementsUnlockedV2
struct UCoreAchievements_EOSAchievementsAddNotifyAchievementsUnlockedV2_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreAchievementsQueryDefinitions.HandleCallback
struct UEOSCoreAchievementsQueryDefinitions_HandleCallback_Params
{
	struct FEOSAchievementsOnQueryDefinitionsCompleteCallbackInfo Data;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreAchievementsQueryDefinitions.EOSAchievementsQueryDefinitionsAsync
struct UEOSCoreAchievementsQueryDefinitions_EOSAchievementsQueryDefinitionsAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAchievementsQueryDefinitionsOptions     Options;                                                   // 0x0008(0x0021)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UEOSCoreAchievementsQueryDefinitions*        ReturnValue;                                               // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreAchievementsQueryPlayerAchievements.HandleCallback
struct UEOSCoreAchievementsQueryPlayerAchievements_HandleCallback_Params
{
	struct FEOSAchievementsOnQueryPlayerAchievementsCompleteCallbackInfo Data;                                                      // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreAchievementsQueryPlayerAchievements.EOSAchievementsQueryPlayerAchievementsAsync
struct UEOSCoreAchievementsQueryPlayerAchievements_EOSAchievementsQueryPlayerAchievementsAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAchievementsQueryPlayerAchievementsOptions Options;                                                   // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UEOSCoreAchievementsQueryPlayerAchievements* ReturnValue;                                               // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreAchievementsUnlockAchievements.HandleCallback
struct UEOSCoreAchievementsUnlockAchievements_HandleCallback_Params
{
	struct FEOSAchievementsOnUnlockAchievementsCompleteCallbackInfo Data;                                                      // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreAchievementsUnlockAchievements.EOSAchievementsUnlockAchievements
struct UEOSCoreAchievementsUnlockAchievements_EOSAchievementsUnlockAchievements_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAchievementsUnlockAchievementsOptions   Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreAchievementsUnlockAchievements*      ReturnValue;                                               // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatClient.GetAntiCheatClient
struct UCoreAntiCheatClient_GetAntiCheatClient_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreAntiCheatClient*                        ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientUnregisterPeer
struct UCoreAntiCheatClient_EOSAntiCheatClientUnregisterPeer_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatClientUnregisterPeerOptions    Options;                                                   // 0x0008(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientUnprotectMessage
struct UCoreAntiCheatClient_EOSAntiCheatClientUnprotectMessage_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatClientUnprotectMessageOptions  Options;                                                   // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              OutBuffer;                                                 // 0x0028(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientRemoveNotifyPeerAuthStatusChanged
struct UCoreAntiCheatClient_EOSAntiCheatClientRemoveNotifyPeerAuthStatusChanged_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          NotificationID;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientRemoveNotifyPeerActionRequired
struct UCoreAntiCheatClient_EOSAntiCheatClientRemoveNotifyPeerActionRequired_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          NotificationID;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientRemoveNotifyMessageToServer
struct UCoreAntiCheatClient_EOSAntiCheatClientRemoveNotifyMessageToServer_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          NotificationID;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientRemoveNotifyMessageToPeer
struct UCoreAntiCheatClient_EOSAntiCheatClientRemoveNotifyMessageToPeer_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          NotificationID;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientRegisterPeer
struct UCoreAntiCheatClient_EOSAntiCheatClientRegisterPeer_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatClientRegisterPeerOptions      Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientReceiveMessageFromServer
struct UCoreAntiCheatClient_EOSAntiCheatClientReceiveMessageFromServer_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatClientReceiveMessageFromServerOptions Options;                                                   // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientReceiveMessageFromPeer
struct UCoreAntiCheatClient_EOSAntiCheatClientReceiveMessageFromPeer_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatClientReceiveMessageFromPeerOptions Options;                                                   // 0x0008(0x0028)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientProtectMessage
struct UCoreAntiCheatClient_EOSAntiCheatClientProtectMessage_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatClientProtectMessageOptions    Options;                                                   // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              OutBuffer;                                                 // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientPollStatus
struct UCoreAntiCheatClient_EOSAntiCheatClientPollStatus_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatClientPollStatusOptions        Options;                                                   // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EEOSEAntiCheatClientViolationType          ViolationType;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OutMessage;                                                // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientGetProtectMessageOutputLength
struct UCoreAntiCheatClient_EOSAntiCheatClientGetProtectMessageOutputLength_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatClientGetProtectMessageOutputLengthOptions Options;                                                   // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                OutBufferLengthBytes;                                      // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientEndSession
struct UCoreAntiCheatClient_EOSAntiCheatClientEndSession_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatClientEndSessionOptions        Options;                                                   // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientBeginSession
struct UCoreAntiCheatClient_EOSAntiCheatClientBeginSession_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatClientBeginSessionOptions      Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientAddNotifyPeerAuthStatusChanged
struct UCoreAntiCheatClient_EOSAntiCheatClientAddNotifyPeerAuthStatusChanged_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatClientAddNotifyPeerAuthStatusChangedOptions Options;                                                   // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientAddNotifyPeerActionRequired
struct UCoreAntiCheatClient_EOSAntiCheatClientAddNotifyPeerActionRequired_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatClientAddNotifyPeerActionRequiredOptions Options;                                                   // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientAddNotifyMessageToServer
struct UCoreAntiCheatClient_EOSAntiCheatClientAddNotifyMessageToServer_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatClientAddNotifyMessageToServerOptions Options;                                                   // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientAddNotifyMessageToPeer
struct UCoreAntiCheatClient_EOSAntiCheatClientAddNotifyMessageToPeer_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatClientAddNotifyMessageToPeerOptions Options;                                                   // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatClient.EOSAntiCheatClientAddExternalIntegrityCatalog
struct UCoreAntiCheatClient_EOSAntiCheatClientAddExternalIntegrityCatalog_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatClientAddExternalIntegrityCatalogOptions Options;                                                   // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatServer.GetAntiCheatServer
struct UCoreAntiCheatServer_GetAntiCheatServer_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreAntiCheatServer*                        ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerUnregisterClient
struct UCoreAntiCheatServer_EOSAntiCheatServerUnregisterClient_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatServerUnregisterClientOptions  Options;                                                   // 0x0008(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerUnprotectMessage
struct UCoreAntiCheatServer_EOSAntiCheatServerUnprotectMessage_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatServerUnprotectMessageOptions  Options;                                                   // 0x0008(0x0030)  (Parm, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              OutBuffer;                                                 // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                OutBufferLengthBytes;                                      // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x004C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerSetGameSessionId
struct UCoreAntiCheatServer_EOSAntiCheatServerSetGameSessionId_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatCommonSetGameSessionIdOptions  Options;                                                   // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerSetClientNetworkState
struct UCoreAntiCheatServer_EOSAntiCheatServerSetClientNetworkState_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatServerSetClientNetworkStateOptions Options;                                                   // 0x0008(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerSetClientDetails
struct UCoreAntiCheatServer_EOSAntiCheatServerSetClientDetails_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatCommonSetClientDetailsOptions  Options;                                                   // 0x0008(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerRemoveNotifyMessageToClient
struct UCoreAntiCheatServer_EOSAntiCheatServerRemoveNotifyMessageToClient_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          NotificationID;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerRemoveNotifyClientAuthStatusChanged
struct UCoreAntiCheatServer_EOSAntiCheatServerRemoveNotifyClientAuthStatusChanged_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          NotificationID;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerRemoveNotifyClientActionRequired
struct UCoreAntiCheatServer_EOSAntiCheatServerRemoveNotifyClientActionRequired_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          NotificationID;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerRegisterEvent
struct UCoreAntiCheatServer_EOSAntiCheatServerRegisterEvent_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatCommonRegisterEventOptions     Options;                                                   // 0x0008(0x0030)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerRegisterClient
struct UCoreAntiCheatServer_EOSAntiCheatServerRegisterClient_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatServerRegisterClientOptions    Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerReceiveMessageFromClient
struct UCoreAntiCheatServer_EOSAntiCheatServerReceiveMessageFromClient_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatServerReceiveMessageFromClientOptions Options;                                                   // 0x0008(0x0020)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerProtectMessage
struct UCoreAntiCheatServer_EOSAntiCheatServerProtectMessage_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatServerProtectMessageOptions    Options;                                                   // 0x0008(0x0030)  (Parm, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              OutBuffer;                                                 // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                OutBufferLengthBytes;                                      // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x004C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogPlayerUseWeapon
struct UCoreAntiCheatServer_EOSAntiCheatServerLogPlayerUseWeapon_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatCommonLogPlayerUseWeaponOptions Options;                                                   // 0x0008(0x0048)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogPlayerUseAbility
struct UCoreAntiCheatServer_EOSAntiCheatServerLogPlayerUseAbility_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatCommonLogPlayerUseAbilityOptions Options;                                                   // 0x0008(0x0020)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogPlayerTick
struct UCoreAntiCheatServer_EOSAntiCheatServerLogPlayerTick_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatCommonLogPlayerTickOptions     Options;                                                   // 0x0008(0x0038)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogPlayerTakeDamage
struct UCoreAntiCheatServer_EOSAntiCheatServerLogPlayerTakeDamage_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatCommonLogPlayerTakeDamageOptions Options;                                                   // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogPlayerSpawn
struct UCoreAntiCheatServer_EOSAntiCheatServerLogPlayerSpawn_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatCommonLogPlayerSpawnOptions    Options;                                                   // 0x0008(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogPlayerRevive
struct UCoreAntiCheatServer_EOSAntiCheatServerLogPlayerRevive_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatCommonLogPlayerReviveOptions   Options;                                                   // 0x0008(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogPlayerDespawn
struct UCoreAntiCheatServer_EOSAntiCheatServerLogPlayerDespawn_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatCommonLogPlayerDespawnOptions  Options;                                                   // 0x0008(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogGameRoundStart
struct UCoreAntiCheatServer_EOSAntiCheatServerLogGameRoundStart_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatCommonLogGameRoundStartOptions Options;                                                   // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogGameRoundEnd
struct UCoreAntiCheatServer_EOSAntiCheatServerLogGameRoundEnd_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatCommonLogGameRoundEndOptions   Options;                                                   // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerLogEvent
struct UCoreAntiCheatServer_EOSAntiCheatServerLogEvent_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatCommonLogEventOptions          Options;                                                   // 0x0008(0x0028)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerGetProtectMessageOutputLength
struct UCoreAntiCheatServer_EOSAntiCheatServerGetProtectMessageOutputLength_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatServerGetProtectMessageOutputLengthOptions Options;                                                   // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                OutBufferLengthBytes;                                      // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerEndSession
struct UCoreAntiCheatServer_EOSAntiCheatServerEndSession_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatServerEndSessionOptions        Options;                                                   // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerBeginSession
struct UCoreAntiCheatServer_EOSAntiCheatServerBeginSession_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatServerBeginSessionOptions      Options;                                                   // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerAddNotifyMessageToClient
struct UCoreAntiCheatServer_EOSAntiCheatServerAddNotifyMessageToClient_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatServerAddNotifyMessageToClientOptions Options;                                                   // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerAddNotifyClientAuthStatusChanged
struct UCoreAntiCheatServer_EOSAntiCheatServerAddNotifyClientAuthStatusChanged_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatServerAddNotifyClientAuthStatusChangedOptions Options;                                                   // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAntiCheatServer.EOSAntiCheatServerAddNotifyClientActionRequired
struct UCoreAntiCheatServer_EOSAntiCheatServerAddNotifyClientActionRequired_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatServerAddNotifyClientActionRequiredOptions Options;                                                   // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreAuthLogin.HandleCallback
struct UEOSCoreAuthLogin_HandleCallback_Params
{
	struct FEOSAuthLoginCallbackInfo                   Data;                                                      // 0x0000(0x0090)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0090(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreAuthLogin.EOSAuthLoginAsync
struct UEOSCoreAuthLogin_EOSAuthLoginAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAuthLoginOptions                        Options;                                                   // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreAuthLogin*                           ReturnValue;                                               // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreAuthLogout.HandleCallback
struct UEOSCoreAuthLogout_HandleCallback_Params
{
	struct FEOSAuthLogoutCallbackInfo                  Data;                                                      // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreAuthLogout.EOSAuthLogoutAsync
struct UEOSCoreAuthLogout_EOSAuthLogoutAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAuthLogoutOptions                       Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UEOSCoreAuthLogout*                          ReturnValue;                                               // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreAuthLinkAccount.HandleCallback
struct UEOSCoreAuthLinkAccount_HandleCallback_Params
{
	struct FEOSAuthLinkAccountCallbackInfo             Data;                                                      // 0x0000(0x00A0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x00A0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreAuthLinkAccount.EOSAuthLinkAccount
struct UEOSCoreAuthLinkAccount_EOSAuthLinkAccount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAuthLinkAccountOptions                  Options;                                                   // 0x0008(0x0038)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UEOSCoreAuthLinkAccount*                     ReturnValue;                                               // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreAuthDeletePersistentAuth.HandleCallback
struct UEOSCoreAuthDeletePersistentAuth_HandleCallback_Params
{
	struct FEOSAuthDeletePersistentAuthCallbackInfo    Data;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreAuthDeletePersistentAuth.EOSAuthDeletePersistentAuthAsync
struct UEOSCoreAuthDeletePersistentAuth_EOSAuthDeletePersistentAuthAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAuthDeletePersistentAuthOptions         Options;                                                   // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UEOSCoreAuthDeletePersistentAuth*            ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreAuthVerifyUserAuth.HandleCallback
struct UEOSCoreAuthVerifyUserAuth_HandleCallback_Params
{
	struct FEOSAuthVerifyUserAuthCallbackInfo          Data;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreAuthVerifyUserAuth.EOSAuthVerifyUserAuthAsync
struct UEOSCoreAuthVerifyUserAuth_EOSAuthVerifyUserAuthAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAuthVerifyUserAuthOptions               Options;                                                   // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreAuthVerifyUserAuth*                  ReturnValue;                                               // 0x00B8(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAuthentication.GetAuthentication
struct UCoreAuthentication_GetAuthentication_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreAuthentication*                         ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAuthentication.EOSAuthVerifyUserAuth
struct UCoreAuthentication_EOSAuthVerifyUserAuth_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAuthVerifyUserAuthOptions               Options;                                                   // 0x0008(0x00B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x00B8(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAuthentication.EOSAuthVerifyIdToken
struct UCoreAuthentication_EOSAuthVerifyIdToken_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAuthVerifyIdTokenOptions                Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAuthentication.EOSAuthRemoveNotifyLoginStatusChanged
struct UCoreAuthentication_EOSAuthRemoveNotifyLoginStatusChanged_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ID;                                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAuthentication.EOSAuthQueryIdToken
struct UCoreAuthentication_EOSAuthQueryIdToken_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAuthQueryIdTokenOptions                 Options;                                                   // 0x0008(0x0042)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x004C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAuthentication.EOSAuthLogout
struct UCoreAuthentication_EOSAuthLogout_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAuthLogoutOptions                       Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAuthentication.EOSAuthLogin
struct UCoreAuthentication_EOSAuthLogin_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAuthLoginOptions                        Options;                                                   // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAuthentication.EOSAuthLinkAccount
struct UCoreAuthentication_EOSAuthLinkAccount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAuthLinkAccountOptions                  Options;                                                   // 0x0008(0x0038)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAuthentication.EOSAuthGetSelectedAccountId
struct UCoreAuthentication_EOSAuthGetSelectedAccountId_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0008(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           OutSelectedAccountId;                                      // 0x0029(0x0021)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x004A(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAuthentication.EOSAuthGetMergedAccountsCount
struct UCoreAuthentication_EOSAuthGetMergedAccountsCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0008(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAuthentication.EOSAuthGetMergedAccountByIndex
struct UCoreAuthentication_EOSAuthGetMergedAccountByIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0008(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           ReturnValue;                                               // 0x0030(0x0021)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAuthentication.EOSAuthGetLoginStatusPure
struct UCoreAuthentication_EOSAuthGetLoginStatusPure_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0008(0x0021)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSELoginStatus                            ReturnValue;                                               // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAuthentication.EOSAuthGetLoginStatus
struct UCoreAuthentication_EOSAuthGetLoginStatus_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x0008(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSELoginStatus                            ReturnValue;                                               // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAuthentication.EOSAuthGetLoggedInAccountsCount
struct UCoreAuthentication_EOSAuthGetLoggedInAccountsCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAuthentication.EOSAuthGetLoggedInAccountByIndex
struct UCoreAuthentication_EOSAuthGetLoggedInAccountByIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           ReturnValue;                                               // 0x000C(0x0021)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAuthentication.EOSAuthDeletePersistentAuth
struct UCoreAuthentication_EOSAuthDeletePersistentAuth_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAuthDeletePersistentAuthOptions         Options;                                                   // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAuthentication.EOSAuthCopyUserAuthToken
struct UCoreAuthentication_EOSAuthCopyUserAuthToken_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAuthCopyUserAuthTokenOptions            Options;                                                   // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           LocalUserId;                                               // 0x000C(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAuthToken                               OutUserAuthToken;                                          // 0x0030(0x00B0)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAuthentication.EOSAuthCopyIdToken
struct UCoreAuthentication_EOSAuthCopyIdToken_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAuthCopyIdTokenOptions                  Options;                                                   // 0x0008(0x0021)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSAuthIdToken                             OutIdToken;                                                // 0x0030(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreAuthentication.EOSAuthAddNotifyLoginStatusChanged
struct UCoreAuthentication_EOSAuthAddNotifyLoginStatusChanged_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreChat.SendChatMessage
struct UCoreChat_SendChatMessage_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0008(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           Target;                                                    // 0x0029(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Message;                                                   // 0x0050(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEPacketReliability                     Reliability;                                               // 0x0060(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreChat.ListenForChatMessages
struct UCoreChat_ListenForChatMessages_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0008(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x002C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreChat.GetChat
struct UCoreChat_GetChat_Params
{
	class UCoreChat*                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreChat.ClearAllChatListeners
struct UCoreChat_ClearAllChatListeners_Params
{
};

// Function EOSCore.CoreConnect.GetConnect
struct UCoreConnect_GetConnect_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreConnect*                                ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreConnect.EOSConnectVerifyIdToken
struct UCoreConnect_EOSConnectVerifyIdToken_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSConnectVerifyIdTokenOptions             Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreConnect.EOSConnectUnlinkAccount
struct UCoreConnect_EOSConnectUnlinkAccount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSConnectUnlinkAccountOptions             Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreConnect.EOSConnectTransferDeviceIdAccount
struct UCoreConnect_EOSConnectTransferDeviceIdAccount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSConnectTransferDeviceIdAccountOptions   Options;                                                   // 0x0008(0x0063)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x006C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreConnect.EOSConnectRemoveNotifyLoginStatusChanged
struct UCoreConnect_EOSConnectRemoveNotifyLoginStatusChanged_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ID;                                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreConnect.EOSConnectRemoveNotifyAuthExpiration
struct UCoreConnect_EOSConnectRemoveNotifyAuthExpiration_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ID;                                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreConnect.EOSConnectQueryProductUserIdMappings
struct UCoreConnect_EOSConnectQueryProductUserIdMappings_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSConnectQueryProductUserIdMappingsOptions Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreConnect.EOSConnectQueryExternalAccountMappings
struct UCoreConnect_EOSConnectQueryExternalAccountMappings_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSConnectQueryExternalAccountMappingsOptions Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreConnect.EOSConnectLogin
struct UCoreConnect_EOSConnectLogin_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSConnectLoginOptions                     Options;                                                   // 0x0008(0x0030)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreConnect.EOSConnectLinkAccount
struct UCoreConnect_EOSConnectLinkAccount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSConnectLinkAccountOptions               Options;                                                   // 0x0008(0x0030)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreConnect.EOSConnectGetProductUserIdMapping
struct UCoreConnect_EOSConnectGetProductUserIdMapping_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSConnectGetProductUserIdMappingOptions   Options;                                                   // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     OutString;                                                 // 0x0050(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreConnect.EOSConnectGetProductUserExternalAccountCount
struct UCoreConnect_EOSConnectGetProductUserExternalAccountCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSConnectGetProductUserExternalAccountCountOptions Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreConnect.EOSConnectGetLoginStatusPure
struct UCoreConnect_EOSConnectGetLoginStatusPure_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0008(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSELoginStatus                           ReturnValue;                                               // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreConnect.EOSConnectGetLoginStatus
struct UCoreConnect_EOSConnectGetLoginStatus_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           LocalUserId;                                               // 0x0008(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSELoginStatus                           ReturnValue;                                               // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreConnect.EOSConnectGetLoggedInUsersCount
struct UCoreConnect_EOSConnectGetLoggedInUsersCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreConnect.EOSConnectGetLoggedInUserByIndex
struct UCoreConnect_EOSConnectGetLoggedInUserByIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           ReturnValue;                                               // 0x000C(0x0021)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreConnect.EOSConnectGetExternalAccountMapping
struct UCoreConnect_EOSConnectGetExternalAccountMapping_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSConnectGetExternalAccountMappingsOptions Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           ReturnValue;                                               // 0x0040(0x0021)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreConnect.EOSConnectDeleteDeviceId
struct UCoreConnect_EOSConnectDeleteDeviceId_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSConnectDeleteDeviceIdOptions            Options;                                                   // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreConnect.EOSConnectCreateUser
struct UCoreConnect_EOSConnectCreateUser_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSConnectCreateUserOptions                Options;                                                   // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreConnect.EOSConnectCreateDeviceId
struct UCoreConnect_EOSConnectCreateDeviceId_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSConnectCreateDeviceIdOptions            Options;                                                   // 0x0008(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreConnect.EOSConnectCopyProductUserInfo
struct UCoreConnect_EOSConnectCopyProductUserInfo_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSConnectCopyProductUserInfoOptions       Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSConnectExternalAccountInfo              OutExternalAccountInfo;                                    // 0x0030(0x0060)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreConnect.EOSConnectCopyProductUserExternalAccountByIndex
struct UCoreConnect_EOSConnectCopyProductUserExternalAccountByIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSConnectCopyProductUserExternalAccountByIndexOptions Options;                                                   // 0x0008(0x002C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSConnectExternalAccountInfo              OutExternalAccountInfo;                                    // 0x0038(0x0060)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0098(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreConnect.EOSConnectCopyProductUserExternalAccountByAccountType
struct UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountType_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSConnectCopyProductUserExternalAccountByAccountTypeOptions Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSConnectExternalAccountInfo              OutExternalAccountInfo;                                    // 0x0030(0x0060)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreConnect.EOSConnectCopyProductUserExternalAccountByAccountId
struct UCoreConnect_EOSConnectCopyProductUserExternalAccountByAccountId_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSConnectCopyProductUserExternalAccountByAccountIdOptions Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FEOSConnectExternalAccountInfo              OutExternalAccountInfo;                                    // 0x0040(0x0060)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x00A0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreConnect.EOSConnectCopyIdToken
struct UCoreConnect_EOSConnectCopyIdToken_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSConnectCopyIdTokenOptions               Options;                                                   // 0x0008(0x0021)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSConnectIdToken                          OutIdToken;                                                // 0x0030(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreConnect.EOSConnectAddNotifyLoginStatusChanged
struct UCoreConnect_EOSConnectAddNotifyLoginStatusChanged_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreConnect.EOSConnectAddNotifyAuthExpiration
struct UCoreConnect_EOSConnectAddNotifyAuthExpiration_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreConnectLogin.HandleCallback
struct UEOSCoreConnectLogin_HandleCallback_Params
{
	struct FEOSConnectLoginCallbackInfo                Data;                                                      // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreConnectLogin.EOSConnectLoginAsync
struct UEOSCoreConnectLogin_EOSConnectLoginAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSConnectLoginOptions                     Options;                                                   // 0x0008(0x0030)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreConnectLogin*                        ReturnValue;                                               // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreConnectCreateUser.HandleCallback
struct UEOSCoreConnectCreateUser_HandleCallback_Params
{
	struct FEOSConnectCreateUserCallbackInfo           Data;                                                      // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreConnectCreateUser.EOSConnectCreateUserAsync
struct UEOSCoreConnectCreateUser_EOSConnectCreateUserAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSConnectCreateUserOptions                Options;                                                   // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UEOSCoreConnectCreateUser*                   ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreConnectLinkAccount.HandleCallback
struct UEOSCoreConnectLinkAccount_HandleCallback_Params
{
	struct FEOSConnectLinkAccountCallbackInfo          Data;                                                      // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreConnectLinkAccount.EOSConnectLinkAccountAsync
struct UEOSCoreConnectLinkAccount_EOSConnectLinkAccountAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSConnectLinkAccountOptions               Options;                                                   // 0x0008(0x0030)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UEOSCoreConnectLinkAccount*                  ReturnValue;                                               // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreConnectUnlinkAccount.HandleCallback
struct UEOSCoreConnectUnlinkAccount_HandleCallback_Params
{
	struct FEOSConnectUnlinkAccountCallbackInfo        Data;                                                      // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreConnectUnlinkAccount.EOSConnectUnlinkAccountAsync
struct UEOSCoreConnectUnlinkAccount_EOSConnectUnlinkAccountAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSConnectUnlinkAccountOptions             Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UEOSCoreConnectUnlinkAccount*                ReturnValue;                                               // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreConnectCreateDeviceId.HandleCallback
struct UEOSCoreConnectCreateDeviceId_HandleCallback_Params
{
	struct FEOSConnectCreateDeviceIdCallbackInfo       Data;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreConnectCreateDeviceId.EOSConnectCreateDeviceIdAsync
struct UEOSCoreConnectCreateDeviceId_EOSConnectCreateDeviceIdAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSConnectCreateDeviceIdOptions            Options;                                                   // 0x0008(0x0010)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreConnectCreateDeviceId*               ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreConnectDeleteDeviceId.HandleCallback
struct UEOSCoreConnectDeleteDeviceId_HandleCallback_Params
{
	struct FEOSConnectDeleteDeviceIdCallbackInfo       Data;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreConnectDeleteDeviceId.EOSConnectDeleteDeviceIdAsync
struct UEOSCoreConnectDeleteDeviceId_EOSConnectDeleteDeviceIdAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSConnectDeleteDeviceIdOptions            Options;                                                   // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UEOSCoreConnectDeleteDeviceId*               ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreConnectTransferDeviceIdAccount.HandleCallback
struct UEOSCoreConnectTransferDeviceIdAccount_HandleCallback_Params
{
	struct FEOSConnectTransferDeviceIdAccountCallbackInfo Data;                                                      // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreConnectTransferDeviceIdAccount.EOSConnectTransferDeviceIdAccountAsync
struct UEOSCoreConnectTransferDeviceIdAccount_EOSConnectTransferDeviceIdAccountAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSConnectTransferDeviceIdAccountOptions   Options;                                                   // 0x0008(0x0063)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UEOSCoreConnectTransferDeviceIdAccount*      ReturnValue;                                               // 0x0070(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreConnectQueryExternalAccountMappings.HandleCallback
struct UEOSCoreConnectQueryExternalAccountMappings_HandleCallback_Params
{
	struct FEOSConnectQueryExternalAccountMappingsCallbackInfo Data;                                                      // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreConnectQueryExternalAccountMappings.EOSConnectQueryExternalAccountMappingsAsync
struct UEOSCoreConnectQueryExternalAccountMappings_EOSConnectQueryExternalAccountMappingsAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSConnectQueryExternalAccountMappingsOptions Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreConnectQueryExternalAccountMappings* ReturnValue;                                               // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreConnectQueryProductUserIdMappings.HandleCallback
struct UEOSCoreConnectQueryProductUserIdMappings_HandleCallback_Params
{
	struct FEOSConnectQueryProductUserIdMappingsCallbackInfo Data;                                                      // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreConnectQueryProductUserIdMappings.EOSConnectQueryProductUserIdMappingsAsync
struct UEOSCoreConnectQueryProductUserIdMappings_EOSConnectQueryProductUserIdMappingsAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSConnectQueryProductUserIdMappingsOptions Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreConnectQueryProductUserIdMappings*   ReturnValue;                                               // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.UpdateUniqueNetIdFromOSS
struct UEOSCoreLibrary_UpdateUniqueNetIdFromOSS_Params
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.RemoveListenForEOSMessages
struct UEOSCoreLibrary_RemoveListenForEOSMessages_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.MakeString
struct UEOSCoreLibrary_MakeString_Params
{
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionSetting                          ReturnValue;                                               // 0x0010(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.MakeSearchString
struct UEOSCoreLibrary_MakeSearchString_Params
{
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionSearchSetting                    ReturnValue;                                               // 0x0010(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.MakeSearchInteger
struct UEOSCoreLibrary_MakeSearchInteger_Params
{
	int                                                Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionSearchSetting                    ReturnValue;                                               // 0x0008(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.MakeSearchBool
struct UEOSCoreLibrary_MakeSearchBool_Params
{
	bool                                               Value;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionSearchSetting                    ReturnValue;                                               // 0x0008(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.MakeParamString
struct UEOSCoreLibrary_MakeParamString_Params
{
	struct FString                                     String;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatCommonLogEventParamPair        ReturnValue;                                               // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.MakeParamInt64
struct UEOSCoreLibrary_MakeParamInt64_Params
{
	int64_t                                            Value;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatCommonLogEventParamPair        ReturnValue;                                               // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.MakeParamInt32
struct UEOSCoreLibrary_MakeParamInt32_Params
{
	int                                                Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAntiCheatCommonLogEventParamPair        ReturnValue;                                               // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.MakeInteger
struct UEOSCoreLibrary_MakeInteger_Params
{
	int                                                Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionSetting                          ReturnValue;                                               // 0x0008(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.MakeBool
struct UEOSCoreLibrary_MakeBool_Params
{
	bool                                               Value;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionSetting                          ReturnValue;                                               // 0x0008(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.Login
struct UEOSCoreLibrary_Login_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                           PlayerController;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LoginId;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Password;                                                  // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSLoginCredentialType                    AuthType;                                                  // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEExternalCredentialType                CredentialsType;                                           // 0x0031(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AdditionalData;                                            // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.ListenForEOSMessages
struct UEOSCoreLibrary_ListenForEOSMessages_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.IsProductUserIdIdenticalWith
struct UEOSCoreLibrary_IsProductUserIdIdenticalWith_Params
{
	struct FEOSProductUserId                           A;                                                         // 0x0000(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           B;                                                         // 0x0021(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0042(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.IsEpicAccountIdIdenticalWith
struct UEOSCoreLibrary_IsEpicAccountIdIdenticalWith_Params
{
	struct FEOSEpicAccountId                           A;                                                         // 0x0000(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           B;                                                         // 0x0021(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0042(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.GetString
struct UEOSCoreLibrary_GetString_Params
{
	struct FEOSSessionSetting                          Settings;                                                  // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.GetSessionAttributeString
struct UEOSCoreLibrary_GetSessionAttributeString_Params
{
	struct FEOSSessionsAttributeData                   Data;                                                      // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.GetSessionAttributeInt64
struct UEOSCoreLibrary_GetSessionAttributeInt64_Params
{
	struct FEOSSessionsAttributeData                   Data;                                                      // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.GetSessionAttributeDouble
struct UEOSCoreLibrary_GetSessionAttributeDouble_Params
{
	struct FEOSSessionsAttributeData                   Data;                                                      // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.GetSessionAttributeBool
struct UEOSCoreLibrary_GetSessionAttributeBool_Params
{
	struct FEOSSessionsAttributeData                   Data;                                                      // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.GetLobbyAttributeString
struct UEOSCoreLibrary_GetLobbyAttributeString_Params
{
	struct FEOSLobbyAttributeData                      Data;                                                      // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.GetLobbyAttributeInt64
struct UEOSCoreLibrary_GetLobbyAttributeInt64_Params
{
	struct FEOSLobbyAttributeData                      Data;                                                      // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.GetLobbyAttributeDouble
struct UEOSCoreLibrary_GetLobbyAttributeDouble_Params
{
	struct FEOSLobbyAttributeData                      Data;                                                      // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.GetLobbyAttributeBool
struct UEOSCoreLibrary_GetLobbyAttributeBool_Params
{
	struct FEOSLobbyAttributeData                      Data;                                                      // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.GetInteger
struct UEOSCoreLibrary_GetInteger_Params
{
	struct FEOSSessionSetting                          Settings;                                                  // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0038(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.GetCurrentProductId
struct UEOSCoreLibrary_GetCurrentProductId_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UserIndex;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           ReturnValue;                                               // 0x000C(0x0021)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.GetCurrentAccountId
struct UEOSCoreLibrary_GetCurrentAccountId_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UserIndex;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           ReturnValue;                                               // 0x000C(0x0021)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.GetBool
struct UEOSCoreLibrary_GetBool_Params
{
	struct FEOSSessionSetting                          Settings;                                                  // 0x0000(0x0028)  (Parm, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.FromUnixTimestamp
struct UEOSCoreLibrary_FromUnixTimestamp_Params
{
	struct FString                                     Timestamp;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.EOSProductUserIdToString
struct UEOSCoreLibrary_EOSProductUserIdToString_Params
{
	struct FEOSProductUserId                           ID;                                                        // 0x0000(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     String;                                                    // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.EOSProductUserIdIsValidPure
struct UEOSCoreLibrary_EOSProductUserIdIsValidPure_Params
{
	struct FEOSProductUserId                           ID;                                                        // 0x0000(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.EOSProductUserIdIsValid
struct UEOSCoreLibrary_EOSProductUserIdIsValid_Params
{
	struct FEOSProductUserId                           ID;                                                        // 0x0000(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.EOSProductUserIdFromString
struct UEOSCoreLibrary_EOSProductUserIdFromString_Params
{
	struct FString                                     String;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           ReturnValue;                                               // 0x0010(0x0021)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.EOSEResultToString
struct UEOSCoreLibrary_EOSEResultToString_Params
{
	EOSCore_EOSResult                                  Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.EOSEResultIsOperationComplete
struct UEOSCoreLibrary_EOSEResultIsOperationComplete_Params
{
	EOSCore_EOSResult                                  Result;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.EOSEpicAccountIdToString
struct UEOSCoreLibrary_EOSEpicAccountIdToString_Params
{
	struct FEOSEpicAccountId                           ID;                                                        // 0x0000(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     String;                                                    // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.EOSEpicAccountIdIsValidPure
struct UEOSCoreLibrary_EOSEpicAccountIdIsValidPure_Params
{
	struct FEOSEpicAccountId                           ID;                                                        // 0x0000(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.EOSEpicAccountIdIsValid
struct UEOSCoreLibrary_EOSEpicAccountIdIsValid_Params
{
	struct FEOSEpicAccountId                           ID;                                                        // 0x0000(0x0021)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.EOSEpicAccountIdFromString
struct UEOSCoreLibrary_EOSEpicAccountIdFromString_Params
{
	struct FString                                     String;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           ReturnValue;                                               // 0x0010(0x0021)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.EOSContinuanceTokenToString
struct UEOSCoreLibrary_EOSContinuanceTokenToString_Params
{
	struct FContinuanceToken                           ID;                                                        // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     String;                                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.EOSByteArrayToString
struct UEOSCoreLibrary_EOSByteArrayToString_Params
{
	TArray<unsigned char>                              Array;                                                     // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                Length;                                                    // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     String;                                                    // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.EOS_Success
struct UEOSCoreLibrary_EOS_Success_Params
{
	EOSCore_EOSResult                                  Status;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_ESuccessFail                               Result;                                                    // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.EOS_Initialized
struct UEOSCoreLibrary_EOS_Initialized_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.CoreStringToByte
struct UEOSCoreLibrary_CoreStringToByte_Params
{
	struct FString                                     String;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.CoreBytesToString
struct UEOSCoreLibrary_CoreBytesToString_Params
{
	TArray<unsigned char>                              Data;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLibrary.BreakUIEventIdStruct
struct UEOSCoreLibrary_BreakUIEventIdStruct_Params
{
	struct FEOSUIEventId                               EventId;                                                   // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     outEventId;                                                // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreCustomInvites.GetCustomInvites
struct UCoreCustomInvites_GetCustomInvites_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreCustomInvites*                          ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreCustomInvites.EOSCustomInvitesSetCustomInvite
struct UCoreCustomInvites_EOSCustomInvitesSetCustomInvite_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSCustomInvitesSetCustomInviteOptions     Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreCustomInvites.EOSCustomInvitesSendCustomInvite
struct UCoreCustomInvites_EOSCustomInvitesSendCustomInvite_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSCustomInvitesSendCustomInviteOptions    Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreCustomInvites.EOSCustomInvitesRemoveNotifyCustomInviteReceived
struct UCoreCustomInvites_EOSCustomInvitesRemoveNotifyCustomInviteReceived_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ID;                                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreCustomInvites.EOSCustomInvitesRemoveNotifyCustomInviteAccepted
struct UCoreCustomInvites_EOSCustomInvitesRemoveNotifyCustomInviteAccepted_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ID;                                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreCustomInvites.EOSCustomInvitesFinalizeInvite
struct UCoreCustomInvites_EOSCustomInvitesFinalizeInvite_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSCustomInvitesFinalizeInviteOptions      Options;                                                   // 0x0008(0x0060)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreCustomInvites.EOSCustomInvitesAddNotifyCustomInviteReceived
struct UCoreCustomInvites_EOSCustomInvitesAddNotifyCustomInviteReceived_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSCustomInvitesAddNotifyCustomInviteReceivedOptions Options;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreCustomInvites.EOSCustomInvitesAddNotifyCustomInviteAccepted
struct UCoreCustomInvites_EOSCustomInvitesAddNotifyCustomInviteAccepted_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreEcom.GetEcom
struct UCoreEcom_GetEcom_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreEcom*                                   ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreEcom.EOSEcomTransaction_GetTransactionId
struct UCoreEcom_EOSEcomTransaction_GetTransactionId_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomHTransaction                        Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OutTransactionId;                                          // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreEcom.EOSEcomTransaction_GetEntitlementsCount
struct UCoreEcom_EOSEcomTransaction_GetEntitlementsCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomHTransaction                        Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomTransactionGetEntitlementsCountOptions Options;                                                   // 0x0010(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0038(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreEcom.EOSEcomTransaction_CopyEntitlementByIndex
struct UCoreEcom_EOSEcomTransaction_CopyEntitlementByIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomHTransaction                        Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomTransactionCopyEntitlementByIndexOptions Options;                                                   // 0x0010(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSEcomEntitlement                         OutEntitlement;                                            // 0x0018(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreEcom.EOSEcomRedeemEntitlements
struct UCoreEcom_EOSEcomRedeemEntitlements_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomRedeemEntitlementsOptions           Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreEcom.EOSEcomQueryOwnershipToken
struct UCoreEcom_EOSEcomQueryOwnershipToken_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomQueryOwnershipTokenOptions          Options;                                                   // 0x0008(0x0050)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreEcom.EOSEcomQueryOwnership
struct UCoreEcom_EOSEcomQueryOwnership_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomQueryOwnershipOptions               Options;                                                   // 0x0008(0x0048)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreEcom.EOSEcomQueryOffers
struct UCoreEcom_EOSEcomQueryOffers_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomQueryOffersOptions                  Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreEcom.EOSEcomQueryEntitlements
struct UCoreEcom_EOSEcomQueryEntitlements_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomQueryEntitlementsOptions            Options;                                                   // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreEcom.EOSEcomGetTransactionCount
struct UCoreEcom_EOSEcomGetTransactionCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomGetTransactionCountOptions          Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreEcom.EOSEcomGetOfferItemCount
struct UCoreEcom_EOSEcomGetOfferItemCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomGetOfferItemCountOptions            Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreEcom.EOSEcomGetOfferImageInfoCount
struct UCoreEcom_EOSEcomGetOfferImageInfoCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomGetOfferImageInfoCountOptions       Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreEcom.EOSEcomGetOfferCount
struct UCoreEcom_EOSEcomGetOfferCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomGetOfferCountOptions                Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreEcom.EOSEcomGetItemReleaseCount
struct UCoreEcom_EOSEcomGetItemReleaseCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomGetItemReleaseCountOptions          Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreEcom.EOSEcomGetItemImageInfoCount
struct UCoreEcom_EOSEcomGetItemImageInfoCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomGetItemImageInfoCountOptions        Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreEcom.EOSEcomGetEntitlementsCount
struct UCoreEcom_EOSEcomGetEntitlementsCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomGetEntitlementsCountOptions         Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreEcom.EOSEcomGetEntitlementsByNameCount
struct UCoreEcom_EOSEcomGetEntitlementsByNameCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomGetEntitlementsByNameCountOptions   Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreEcom.EOSEcomCopyTransactionByIndex
struct UCoreEcom_EOSEcomCopyTransactionByIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomCopyTransactionByIndexOptions       Options;                                                   // 0x0008(0x002C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSEcomHTransaction                        OutTransaction;                                            // 0x0038(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreEcom.EOSEcomCopyTransactionById
struct UCoreEcom_EOSEcomCopyTransactionById_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomCopyTransactionByIdOptions          Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FEOSEcomHTransaction                        OutTransaction;                                            // 0x0040(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreEcom.EOSEcomCopyOfferItemByIndex
struct UCoreEcom_EOSEcomCopyOfferItemByIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomCopyOfferItemByIndexOptions         Options;                                                   // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
	struct FEOSEcomCatalogItem                         OutItem;                                                   // 0x0048(0x00A0)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x00E8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreEcom.EOSEcomCopyOfferImageInfoByIndex
struct UCoreEcom_EOSEcomCopyOfferImageInfoByIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomCopyOfferImageInfoByIndexOptions    Options;                                                   // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
	struct FEOSEcomKeyImageInfo                        OutImageInfo;                                              // 0x0048(0x0030)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreEcom.EOSEcomCopyOfferByIndex
struct UCoreEcom_EOSEcomCopyOfferByIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomCopyOfferByIndexOptions             Options;                                                   // 0x0008(0x002C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSEcomCatalogOffer                        OutOffer;                                                  // 0x0038(0x00B8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x00F0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreEcom.EOSEcomCopyOfferById
struct UCoreEcom_EOSEcomCopyOfferById_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomCopyOfferByIdOptions                Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FEOSEcomCatalogOffer                        OutOffer;                                                  // 0x0040(0x00B8)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x00F8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreEcom.EOSEcomCopyItemReleaseByIndex
struct UCoreEcom_EOSEcomCopyItemReleaseByIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomCopyItemReleaseByIndexOptions       Options;                                                   // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
	struct FEOSEcomCatalogRelease                      OutRelease;                                                // 0x0048(0x0040)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreEcom.EOSEcomCopyItemImageInfoByIndex
struct UCoreEcom_EOSEcomCopyItemImageInfoByIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomCopyItemImageInfoByIndexOptions     Options;                                                   // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
	struct FEOSEcomKeyImageInfo                        OutImageInfo;                                              // 0x0048(0x0030)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreEcom.EOSEcomCopyItemById
struct UCoreEcom_EOSEcomCopyItemById_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomCopyItemByIdOptions                 Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FEOSEcomCatalogItem                         OutItem;                                                   // 0x0040(0x00A0)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreEcom.EOSEcomCopyEntitlementByNameAndIndex
struct UCoreEcom_EOSEcomCopyEntitlementByNameAndIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomCopyEntitlementByNameAndIndexOptions Options;                                                   // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
	struct FEOSEcomEntitlement                         OutEntitlement;                                            // 0x0048(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0098(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreEcom.EOSEcomCopyEntitlementByIndex
struct UCoreEcom_EOSEcomCopyEntitlementByIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomCopyEntitlementByIndexOptions       Options;                                                   // 0x0008(0x002C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSEcomEntitlement                         OutEntitlement;                                            // 0x0038(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreEcom.EOSEcomCopyEntitlementById
struct UCoreEcom_EOSEcomCopyEntitlementById_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomCopyEntitlementByIdOptions          Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FEOSEcomEntitlement                         OutEntitlement;                                            // 0x0040(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreEcom.EOSEcomCheckout
struct UCoreEcom_EOSEcomCheckout_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomCheckoutOptions                     Options;                                                   // 0x0008(0x0048)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreEcomQueryOwnership.HandleCallback
struct UEOSCoreEcomQueryOwnership_HandleCallback_Params
{
	struct FEOSEcomQueryOwnershipCallbackInfo          Data;                                                      // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreEcomQueryOwnership.EOSEcomQueryOwnershipAsync
struct UEOSCoreEcomQueryOwnership_EOSEcomQueryOwnershipAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomQueryOwnershipOptions               Options;                                                   // 0x0008(0x0048)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreEcomQueryOwnership*                  ReturnValue;                                               // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreEcomQueryOwnershipToken.HandleCallback
struct UEOSCoreEcomQueryOwnershipToken_HandleCallback_Params
{
	struct FEOSEcomQueryOwnershipTokenCallbackInfo     Data;                                                      // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreEcomQueryOwnershipToken.EOSEcomQueryOwnershipTokenAsync
struct UEOSCoreEcomQueryOwnershipToken_EOSEcomQueryOwnershipTokenAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomQueryOwnershipTokenOptions          Options;                                                   // 0x0008(0x0050)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreEcomQueryOwnershipToken*             ReturnValue;                                               // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreEcomQueryEntitlements.HandleCallback
struct UEOSCoreEcomQueryEntitlements_HandleCallback_Params
{
	struct FEOSEcomQueryEntitlementsCallbackInfo       Data;                                                      // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreEcomQueryEntitlements.EOSEcomQueryEntitlementsAsync
struct UEOSCoreEcomQueryEntitlements_EOSEcomQueryEntitlementsAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomQueryEntitlementsOptions            Options;                                                   // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreEcomQueryEntitlements*               ReturnValue;                                               // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreEcomQueryOffers.HandleCallback
struct UEOSCoreEcomQueryOffers_HandleCallback_Params
{
	struct FEOSEcomQueryOffersCallbackInfo             Data;                                                      // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreEcomQueryOffers.EOSEcomQueryOffersAsync
struct UEOSCoreEcomQueryOffers_EOSEcomQueryOffersAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomQueryOffersOptions                  Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreEcomQueryOffers*                     ReturnValue;                                               // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreEcomCheckout.HandleCallback
struct UEOSCoreEcomCheckout_HandleCallback_Params
{
	struct FEOSEcomCheckoutCallbackInfo                Data;                                                      // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreEcomCheckout.EOSEcomCheckoutAsync
struct UEOSCoreEcomCheckout_EOSEcomCheckoutAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomCheckoutOptions                     Options;                                                   // 0x0008(0x0048)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreEcomCheckout*                        ReturnValue;                                               // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreEcomRedeemEntitlements.HandleCallback
struct UEOSCoreEcomRedeemEntitlements_HandleCallback_Params
{
	struct FEOSEcomRedeemEntitlementsCallbackInfo      Data;                                                      // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreEcomRedeemEntitlements.EOSEcomRedeemEntitlementsAsync
struct UEOSCoreEcomRedeemEntitlements_EOSEcomRedeemEntitlementsAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSEcomRedeemEntitlementsOptions           Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreEcomRedeemEntitlements*              ReturnValue;                                               // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreFriends.GetFriends
struct UCoreFriends_GetFriends_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreFriends*                                ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreFriends.EOSFriendsSendInvite
struct UCoreFriends_EOSFriendsSendInvite_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSFriendsSendInviteOptions                Options;                                                   // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreFriends.EOSFriendsRemoveNotifyFriendsUpdate
struct UCoreFriends_EOSFriendsRemoveNotifyFriendsUpdate_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ID;                                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreFriends.EOSFriendsRejectInvite
struct UCoreFriends_EOSFriendsRejectInvite_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSFriendsRejectInviteOptions              Options;                                                   // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreFriends.EOSFriendsQueryFriends
struct UCoreFriends_EOSFriendsQueryFriends_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSFriendsQueryFriendsOptions              Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreFriends.EOSFriendsGetStatus
struct UCoreFriends_EOSFriendsGetStatus_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSFriendsGetStatusOptions                 Options;                                                   // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EEOSEFriendsStatus                         ReturnValue;                                               // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreFriends.EOSFriendsGetFriendsCount
struct UCoreFriends_EOSFriendsGetFriendsCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSFriendsGetFriendsCountOptions           Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreFriends.EOSFriendsGetFriendAtIndex
struct UCoreFriends_EOSFriendsGetFriendAtIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSFriendsGetFriendAtIndexOptions          Options;                                                   // 0x0008(0x002C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSEpicAccountId                           ReturnValue;                                               // 0x0034(0x0021)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreFriends.EOSFriendsAddNotifyFriendsUpdate
struct UCoreFriends_EOSFriendsAddNotifyFriendsUpdate_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreFriends.EOSFriendsAcceptInvite
struct UCoreFriends_EOSFriendsAcceptInvite_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSFriendsAcceptInviteOptions              Options;                                                   // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreFriendsQueryFriends.HandleCallback
struct UEOSCoreFriendsQueryFriends_HandleCallback_Params
{
	struct FEOSFriendsQueryFriendsCallbackInfo         Data;                                                      // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreFriendsQueryFriends.EOSFriendsQueryFriendsAsync
struct UEOSCoreFriendsQueryFriends_EOSFriendsQueryFriendsAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSFriendsQueryFriendsOptions              Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UEOSCoreFriendsQueryFriends*                 ReturnValue;                                               // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreFriendsSendInvite.HandleCallback
struct UEOSCoreFriendsSendInvite_HandleCallback_Params
{
	struct FEOSFriendsSendInviteCallbackInfo           Data;                                                      // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreFriendsSendInvite.EOSFriendsSendInviteAsync
struct UEOSCoreFriendsSendInvite_EOSFriendsSendInviteAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSFriendsSendInviteOptions                Options;                                                   // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UEOSCoreFriendsSendInvite*                   ReturnValue;                                               // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreFriendsAcceptInvite.HandleCallback
struct UEOSCoreFriendsAcceptInvite_HandleCallback_Params
{
	struct FEOSFriendsAcceptInviteCallbackInfo         Data;                                                      // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreFriendsAcceptInvite.EOSFriendsAcceptInviteAsync
struct UEOSCoreFriendsAcceptInvite_EOSFriendsAcceptInviteAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSFriendsAcceptInviteOptions              Options;                                                   // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UEOSCoreFriendsAcceptInvite*                 ReturnValue;                                               // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreFriendsRejectInvite.HandleCallback
struct UEOSCoreFriendsRejectInvite_HandleCallback_Params
{
	struct FEOSFriendsRejectInviteCallbackInfo         Data;                                                      // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreFriendsRejectInvite.EOSFriendsRejectInviteAsync
struct UEOSCoreFriendsRejectInvite_EOSFriendsRejectInviteAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSFriendsRejectInviteOptions              Options;                                                   // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UEOSCoreFriendsRejectInvite*                 ReturnValue;                                               // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLeaderboards.GetLeaderboards
struct UCoreLeaderboards_GetLeaderboards_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreLeaderboards*                           ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLeaderboards.EOSLeaderboardsQueryLeaderboardUserScores
struct UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardUserScores_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLeaderboardsQueryLeaderboardUserScoresOptions Options;                                                   // 0x0008(0x0070)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0078(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLeaderboards.EOSLeaderboardsQueryLeaderboardRanks
struct UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardRanks_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLeaderboardsQueryLeaderboardRanksOptions Options;                                                   // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLeaderboards.EOSLeaderboardsQueryLeaderboardDefinitions
struct UCoreLeaderboards_EOSLeaderboardsQueryLeaderboardDefinitions_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLeaderboardsQueryLeaderboardDefinitionsOptions Options;                                                   // 0x0008(0x0050)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLeaderboards.EOSLeaderboardsGetLeaderboardUserScoreCount
struct UCoreLeaderboards_EOSLeaderboardsGetLeaderboardUserScoreCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLeaderboardsGetLeaderboardUserScoreCountOptions Options;                                                   // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLeaderboards.EOSLeaderboardsGetLeaderboardRecordCount
struct UCoreLeaderboards_EOSLeaderboardsGetLeaderboardRecordCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLeaderboardsGetLeaderboardRecordCountOptions Options;                                                   // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLeaderboards.EOSLeaderboardsGetLeaderboardDefinitionCount
struct UCoreLeaderboards_EOSLeaderboardsGetLeaderboardDefinitionCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLeaderboardsGetLeaderboardDefinitionCountOptions Options;                                                   // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLeaderboards.EOSLeaderboardsCopyLeaderboardUserScoreByUserId
struct UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByUserId_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLeaderboardsCopyLeaderboardUserScoreByUserIdOptions Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FEOSLeaderboardsLeaderboardUserScore        OutLeaderboardUserScore;                                   // 0x0040(0x002C)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x006C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLeaderboards.EOSLeaderboardsCopyLeaderboardUserScoreByIndex
struct UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardUserScoreByIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLeaderboardsCopyLeaderboardUserScoreByIndexOptions Options;                                                   // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
	struct FEOSLeaderboardsLeaderboardUserScore        OutLeaderboardUserScore;                                   // 0x0020(0x002C)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x004C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLeaderboards.EOSLeaderboardsCopyLeaderboardRecordByUserId
struct UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByUserId_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLeaderboardsCopyLeaderboardRecordByUserIdOptions Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSLeaderboardsLeaderboardRecord           OutLeaderboardRecord;                                      // 0x0030(0x0040)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLeaderboards.EOSLeaderboardsCopyLeaderboardRecordByIndex
struct UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardRecordByIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLeaderboardsCopyLeaderboardRecordByIndexOptions Options;                                                   // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSLeaderboardsLeaderboardRecord           OutLeaderboardRecord;                                      // 0x0010(0x0040)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLeaderboards.EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId
struct UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardId_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardIdOptions Options;                                                   // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
	struct FEOSLeaderboardsDefinition                  OutLeaderboardDefinition;                                  // 0x0020(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLeaderboards.EOSLeaderboardsCopyLeaderboardDefinitionByIndex
struct UCoreLeaderboards_EOSLeaderboardsCopyLeaderboardDefinitionByIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLeaderboardsCopyLeaderboardDefinitionByIndexOptions Options;                                                   // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSLeaderboardsDefinition                  OutLeaderboardDefinition;                                  // 0x0010(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLeaderboardsQueryLeaderboardDefinitions.HandleCallback
struct UEOSCoreLeaderboardsQueryLeaderboardDefinitions_HandleCallback_Params
{
	struct FEOSLeaderboardsOnQueryLeaderboardDefinitionsCompleteCallbackInfo Data;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLeaderboardsQueryLeaderboardDefinitions.EOSLeaderboardsQueryLeaderboardDefinitionsAsync
struct UEOSCoreLeaderboardsQueryLeaderboardDefinitions_EOSLeaderboardsQueryLeaderboardDefinitionsAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLeaderboardsQueryLeaderboardDefinitionsOptions Options;                                                   // 0x0008(0x0050)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreLeaderboardsQueryLeaderboardDefinitions* ReturnValue;                                               // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLeaderboardsQueryLeaderboardRanks.HandleCallback
struct UEOSCoreLeaderboardsQueryLeaderboardRanks_HandleCallback_Params
{
	struct FEOSLeaderboardsOnQueryLeaderboardRanksCompleteCallbackInfo Data;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLeaderboardsQueryLeaderboardRanks.EOSLeaderboardsQueryLeaderboardRanksAsync
struct UEOSCoreLeaderboardsQueryLeaderboardRanks_EOSLeaderboardsQueryLeaderboardRanksAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLeaderboardsQueryLeaderboardRanksOptions Options;                                                   // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreLeaderboardsQueryLeaderboardRanks*   ReturnValue;                                               // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLeaderboardsQueryLeaderboardUserScores.HandleCallback
struct UEOSCoreLeaderboardsQueryLeaderboardUserScores_HandleCallback_Params
{
	struct FEOSLeaderboardsOnQueryLeaderboardUserScoresCompleteCallbackInfo Data;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLeaderboardsQueryLeaderboardUserScores.EOSLeaderboardsQueryLeaderboardUserScoresAsync
struct UEOSCoreLeaderboardsQueryLeaderboardUserScores_EOSLeaderboardsQueryLeaderboardUserScoresAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLeaderboardsQueryLeaderboardUserScoresOptions Options;                                                   // 0x0008(0x0070)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreLeaderboardsQueryLeaderboardUserScores* ReturnValue;                                               // 0x0078(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.GetLobby
struct UCoreLobby_GetLobby_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreLobby*                                  ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyUpdateLobbyModification
struct UCoreLobby_EOSLobbyUpdateLobbyModification_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyUpdateLobbyModificationOptions     Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FEOSHLobbyModification                      OutLobbyModificationHandle;                                // 0x0040(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyUpdateLobby
struct UCoreLobby_EOSLobbyUpdateLobby_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyUpdateLobbyOptions                 Options;                                                   // 0x0008(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbySendInvite
struct UCoreLobby_EOSLobbySendInvite_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbySendInviteOptions                  Options;                                                   // 0x0008(0x0058)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbySearchSetTargetUserId
struct UCoreLobby_EOSLobbySearchSetTargetUserId_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbySearch                            Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbySearchSetTargetUserIdOptions       Options;                                                   // 0x0010(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbySearchSetParameterString
struct UCoreLobby_EOSLobbySearchSetParameterString_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbySearch                            Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEComparisonOp                          ComparisonOp;                                              // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbySearchSetParameterInt64
struct UCoreLobby_EOSLobbySearchSetParameterInt64_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbySearch                            Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEComparisonOp                          ComparisonOp;                                              // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbySearchSetParameterDouble
struct UCoreLobby_EOSLobbySearchSetParameterDouble_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbySearch                            Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEComparisonOp                          ComparisonOp;                                              // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbySearchSetParameterBool
struct UCoreLobby_EOSLobbySearchSetParameterBool_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbySearch                            Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bValue;                                                    // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEComparisonOp                          ComparisonOp;                                              // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0022(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbySearchSetMaxResults
struct UCoreLobby_EOSLobbySearchSetMaxResults_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbySearch                            Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbySearchSetMaxResultsOptions         Options;                                                   // 0x0010(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbySearchSetLobbyId
struct UCoreLobby_EOSLobbySearchSetLobbyId_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbySearch                            Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbySearchSetLobbyIdOptions            Options;                                                   // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbySearchRemoveParameter
struct UCoreLobby_EOSLobbySearchRemoveParameter_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbySearch                            Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbySearchRemoveParameterOptions       Options;                                                   // 0x0010(0x0020)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbySearchRelease
struct UCoreLobby_EOSLobbySearchRelease_Params
{
	struct FEOSHLobbySearch                            LobbySearchHandle;                                         // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbySearchGetSearchResultCount
struct UCoreLobby_EOSLobbySearchGetSearchResultCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbySearch                            Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbySearchGetSearchResultCountOptions  Options;                                                   // 0x0010(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbySearchFind
struct UCoreLobby_EOSLobbySearchFind_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbySearch                            Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbySearchFindOptions                  Options;                                                   // 0x0010(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbySearchCopySearchResultByIndex
struct UCoreLobby_EOSLobbySearchCopySearchResultByIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbySearch                            Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbySearchCopySearchResultByIndexOptions Options;                                                   // 0x0010(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSHLobbyDetails                           OutLobbyDetailsHandle;                                     // 0x0018(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyRemoveNotifyRTCRoomConnectionChanged
struct UCoreLobby_EOSLobbyRemoveNotifyRTCRoomConnectionChanged_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ID;                                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyRemoveNotifyLobbyUpdateReceived
struct UCoreLobby_EOSLobbyRemoveNotifyLobbyUpdateReceived_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ID;                                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyRemoveNotifyLobbyMemberUpdateReceived
struct UCoreLobby_EOSLobbyRemoveNotifyLobbyMemberUpdateReceived_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ID;                                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyRemoveNotifyLobbyMemberStatusReceived
struct UCoreLobby_EOSLobbyRemoveNotifyLobbyMemberStatusReceived_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ID;                                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyRemoveNotifyLobbyInviteReceived
struct UCoreLobby_EOSLobbyRemoveNotifyLobbyInviteReceived_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ID;                                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyRemoveNotifyLobbyInviteAccepted
struct UCoreLobby_EOSLobbyRemoveNotifyLobbyInviteAccepted_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ID;                                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyRemoveNotifyJoinLobbyAccepted
struct UCoreLobby_EOSLobbyRemoveNotifyJoinLobbyAccepted_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ID;                                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyRejectInvite
struct UCoreLobby_EOSLobbyRejectInvite_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyRejectInviteOptions                Options;                                                   // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyQueryInvites
struct UCoreLobby_EOSLobbyQueryInvites_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyQueryInvitesOptions                Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyPromoteMember
struct UCoreLobby_EOSLobbyPromoteMember_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyPromoteMemberOptions               Options;                                                   // 0x0008(0x0058)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyModificationSetPermissionLevel
struct UCoreLobby_EOSLobbyModificationSetPermissionLevel_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbyModification                      Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyModificationSetPermissionLevelOptions Options;                                                   // 0x0010(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyModificationSetMaxMembers
struct UCoreLobby_EOSLobbyModificationSetMaxMembers_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbyModification                      Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyModificationSetMaxMembersOptions   Options;                                                   // 0x0010(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyModificationSetInvitesAllowed
struct UCoreLobby_EOSLobbyModificationSetInvitesAllowed_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbyModification                      Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyModificationSetInvitesAllowedOptions Options;                                                   // 0x0010(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyModificationSetBucketId
struct UCoreLobby_EOSLobbyModificationSetBucketId_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbyModification                      Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyModificationSetBucketIdOptions     Options;                                                   // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyModificationRemoveMemberAttribute
struct UCoreLobby_EOSLobbyModificationRemoveMemberAttribute_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbyModification                      Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyModificationRemoveMemberAttributeOptions Options;                                                   // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyModificationRemoveAttribute
struct UCoreLobby_EOSLobbyModificationRemoveAttribute_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbyModification                      Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyModificationRemoveAttributeOptions Options;                                                   // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyModificationRelease
struct UCoreLobby_EOSLobbyModificationRelease_Params
{
	struct FEOSHLobbyModification                      LobbyModificationHandle;                                   // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyModificationAddMemberAttributeString
struct UCoreLobby_EOSLobbyModificationAddMemberAttributeString_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbyModification                      Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSELobbyAttributeVisibility              Visibility;                                                // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyModificationAddMemberAttributeInt64
struct UCoreLobby_EOSLobbyModificationAddMemberAttributeInt64_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbyModification                      Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSELobbyAttributeVisibility              Visibility;                                                // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyModificationAddMemberAttributeDouble
struct UCoreLobby_EOSLobbyModificationAddMemberAttributeDouble_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbyModification                      Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSELobbyAttributeVisibility              Visibility;                                                // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyModificationAddMemberAttributeBool
struct UCoreLobby_EOSLobbyModificationAddMemberAttributeBool_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbyModification                      Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bValue;                                                    // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSELobbyAttributeVisibility              Visibility;                                                // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0022(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyModificationAddAttributeString
struct UCoreLobby_EOSLobbyModificationAddAttributeString_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbyModification                      Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSELobbyAttributeVisibility              Visibility;                                                // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyModificationAddAttributeInt64
struct UCoreLobby_EOSLobbyModificationAddAttributeInt64_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbyModification                      Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSELobbyAttributeVisibility              Visibility;                                                // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyModificationAddAttributeDouble
struct UCoreLobby_EOSLobbyModificationAddAttributeDouble_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbyModification                      Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSELobbyAttributeVisibility              Visibility;                                                // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyModificationAddAttributeBool
struct UCoreLobby_EOSLobbyModificationAddAttributeBool_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbyModification                      Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bValue;                                                    // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSELobbyAttributeVisibility              Visibility;                                                // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0022(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyModificationAddAttribute
struct UCoreLobby_EOSLobbyModificationAddAttribute_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbyModification                      Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyModificationAddAttributeOptions    Options;                                                   // 0x0010(0x0038)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyLeaveLobby
struct UCoreLobby_EOSLobbyLeaveLobby_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyLeaveLobbyOptions                  Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyKickMember
struct UCoreLobby_EOSLobbyKickMember_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyKickMemberOptions                  Options;                                                   // 0x0008(0x0058)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyJoinLobby
struct UCoreLobby_EOSLobbyJoinLobby_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyJoinLobbyOptions                   Options;                                                   // 0x0008(0x0038)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyIsRTCRoomConnected
struct UCoreLobby_EOSLobbyIsRTCRoomConnected_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyIsRTCRoomConnectedOptions          Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	bool                                               bOutIsConnected;                                           // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0041(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyGetRTCRoomName
struct UCoreLobby_EOSLobbyGetRTCRoomName_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyGetRTCRoomNameOptions              Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FString                                     OutBuffer;                                                 // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InOutBufferLength;                                         // 0x0050(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0054(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyGetInviteIdByIndex
struct UCoreLobby_EOSLobbyGetInviteIdByIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyGetInviteIdByIndexOptions          Options;                                                   // 0x0008(0x002C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     OutInviteId;                                               // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyGetInviteCount
struct UCoreLobby_EOSLobbyGetInviteCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyGetInviteCountOptions              Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyDetailsRelease
struct UCoreLobby_EOSLobbyDetailsRelease_Params
{
	struct FEOSHLobbyDetails                           LobbyHandle;                                               // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyDetailsGetMemberCount
struct UCoreLobby_EOSLobbyDetailsGetMemberCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbyDetails                           Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyDetailsGetMemberCountOptions       Options;                                                   // 0x0010(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyDetailsGetMemberByIndex
struct UCoreLobby_EOSLobbyDetailsGetMemberByIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbyDetails                           Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyDetailsGetMemberByIndexOptions     Options;                                                   // 0x0010(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           ReturnValue;                                               // 0x0018(0x0021)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyDetailsGetMemberAttributeCount
struct UCoreLobby_EOSLobbyDetailsGetMemberAttributeCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbyDetails                           Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyDetailsGetMemberAttributeCountOptions Options;                                                   // 0x0010(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0038(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyDetailsGetLobbyOwner
struct UCoreLobby_EOSLobbyDetailsGetLobbyOwner_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbyDetails                           Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyDetailsGetLobbyOwnerOptions        Options;                                                   // 0x0010(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           ReturnValue;                                               // 0x0014(0x0021)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyDetailsGetAttributeCount
struct UCoreLobby_EOSLobbyDetailsGetAttributeCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbyDetails                           Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyDetailsGetAttributeCountOptions    Options;                                                   // 0x0010(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyDetailsCopyMemberAttributeByKey
struct UCoreLobby_EOSLobbyDetailsCopyMemberAttributeByKey_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbyDetails                           Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyDetailsCopyMemberAttributeByKeyOptions Options;                                                   // 0x0010(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FEOSLobbyAttribute                          OutAttribute;                                              // 0x0048(0x0038)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0080(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyDetailsCopyMemberAttributeByIndex
struct UCoreLobby_EOSLobbyDetailsCopyMemberAttributeByIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbyDetails                           Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyDetailsCopyMemberAttributeByIndexOptions Options;                                                   // 0x0010(0x002C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSLobbyAttribute                          OutAttribute;                                              // 0x0040(0x0038)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyDetailsCopyInfo
struct UCoreLobby_EOSLobbyDetailsCopyInfo_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbyDetails                           Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyDetailsCopyInfoOptions             Options;                                                   // 0x0010(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSLobbyDetailsInfo                        OutLobbyDetailsInfo;                                       // 0x0018(0x0058)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyDetailsCopyAttributeByKey
struct UCoreLobby_EOSLobbyDetailsCopyAttributeByKey_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbyDetails                           Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyDetailsCopyAttributeByKeyOptions   Options;                                                   // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
	struct FEOSLobbyAttribute                          OutAttribute;                                              // 0x0028(0x0038)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyDetailsCopyAttributeByIndex
struct UCoreLobby_EOSLobbyDetailsCopyAttributeByIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbyDetails                           Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyDetailsCopyAttributeByIndexOptions Options;                                                   // 0x0010(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSLobbyAttribute                          OutAttribute;                                              // 0x0018(0x0038)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyDestroyLobby
struct UCoreLobby_EOSLobbyDestroyLobby_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyDestroyLobbyOptions                Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyCreateLobbySearch
struct UCoreLobby_EOSLobbyCreateLobbySearch_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyCreateLobbySearchOptions           Options;                                                   // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSHLobbySearch                            OutLobbySearchHandle;                                      // 0x0010(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyCreateLobby
struct UCoreLobby_EOSLobbyCreateLobby_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyCreateLobbyOptions                 Options;                                                   // 0x0008(0x0060)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyCopyLobbyDetailsHandleByUiEventId
struct UCoreLobby_EOSLobbyCopyLobbyDetailsHandleByUiEventId_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyCopyLobbyDetailsHandleByUiEventIdOptions Options;                                                   // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSHLobbyDetails                           OutLobbyDetailsHandle;                                     // 0x0010(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyCopyLobbyDetailsHandleByInviteId
struct UCoreLobby_EOSLobbyCopyLobbyDetailsHandleByInviteId_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyCopyLobbyDetailsHandleByInviteIdOptions Options;                                                   // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
	struct FEOSHLobbyDetails                           OutLobbyDetailsHandle;                                     // 0x0020(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyCopyLobbyDetailsHandle
struct UCoreLobby_EOSLobbyCopyLobbyDetailsHandle_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyCopyLobbyDetailsHandleOptions      Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FEOSHLobbyDetails                           OutLobbyDetailsHandle;                                     // 0x0040(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyAddNotifyRTCRoomConnectionChanged
struct UCoreLobby_EOSLobbyAddNotifyRTCRoomConnectionChanged_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyAddNotifyRTCRoomConnectionChangedOptions Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyAddNotifyLobbyUpdateReceived
struct UCoreLobby_EOSLobbyAddNotifyLobbyUpdateReceived_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyAddNotifyLobbyMemberUpdateReceived
struct UCoreLobby_EOSLobbyAddNotifyLobbyMemberUpdateReceived_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyAddNotifyLobbyMemberStatusReceived
struct UCoreLobby_EOSLobbyAddNotifyLobbyMemberStatusReceived_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyAddNotifyLobbyInviteReceived
struct UCoreLobby_EOSLobbyAddNotifyLobbyInviteReceived_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyAddNotifyLobbyInviteAccepted
struct UCoreLobby_EOSLobbyAddNotifyLobbyInviteAccepted_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyAddNotifyLobbyInviteAcceptedOptions Options;                                                   // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreLobby.EOSLobbyAddNotifyJoinLobbyAccepted
struct UCoreLobby_EOSLobbyAddNotifyJoinLobbyAccepted_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyAddNotifyJoinLobbyAcceptedOptions  Options;                                                   // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLobbyCreateLobby.HandleCallback
struct UEOSCoreLobbyCreateLobby_HandleCallback_Params
{
	struct FEOSLobbyCreateLobbyCallbackInfo            Data;                                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLobbyCreateLobby.EOSLobbyCreateLobbyAsync
struct UEOSCoreLobbyCreateLobby_EOSLobbyCreateLobbyAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyCreateLobbyOptions                 Options;                                                   // 0x0008(0x0060)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreLobbyCreateLobby*                    ReturnValue;                                               // 0x0068(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLobbyDestroyLobby.HandleCallback
struct UEOSCoreLobbyDestroyLobby_HandleCallback_Params
{
	struct FEOSLobbyDestroyLobbyCallbackInfo           Data;                                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLobbyDestroyLobby.EOSLobbyDestroyLobbyAsync
struct UEOSCoreLobbyDestroyLobby_EOSLobbyDestroyLobbyAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyDestroyLobbyOptions                Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreLobbyDestroyLobby*                   ReturnValue;                                               // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLobbyJoinLobby.HandleCallback
struct UEOSCoreLobbyJoinLobby_HandleCallback_Params
{
	struct FEOSLobbyJoinLobbyCallbackInfo              Data;                                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLobbyJoinLobby.EOSLobbyJoinLobbyAsync
struct UEOSCoreLobbyJoinLobby_EOSLobbyJoinLobbyAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyJoinLobbyOptions                   Options;                                                   // 0x0008(0x0038)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UEOSCoreLobbyJoinLobby*                      ReturnValue;                                               // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLobbyLeaveLobby.HandleCallback
struct UEOSCoreLobbyLeaveLobby_HandleCallback_Params
{
	struct FEOSLobbyLeaveLobbyCallbackInfo             Data;                                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLobbyLeaveLobby.EOSLobbyLeaveLobbyAsync
struct UEOSCoreLobbyLeaveLobby_EOSLobbyLeaveLobbyAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyLeaveLobbyOptions                  Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreLobbyLeaveLobby*                     ReturnValue;                                               // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLobbyUpdateLobby.HandleCallback
struct UEOSCoreLobbyUpdateLobby_HandleCallback_Params
{
	struct FEOSLobbyUpdateLobbyCallbackInfo            Data;                                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLobbyUpdateLobby.EOSLobbyUpdateLobbyAsync
struct UEOSCoreLobbyUpdateLobby_EOSLobbyUpdateLobbyAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyUpdateLobbyOptions                 Options;                                                   // 0x0008(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UEOSCoreLobbyUpdateLobby*                    ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLobbyPromoteMember.HandleCallback
struct UEOSCoreLobbyPromoteMember_HandleCallback_Params
{
	struct FEOSLobbyPromoteMemberCallbackInfo          Data;                                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLobbyPromoteMember.EOSLobbyPromoteMemberAsync
struct UEOSCoreLobbyPromoteMember_EOSLobbyPromoteMemberAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyPromoteMemberOptions               Options;                                                   // 0x0008(0x0058)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreLobbyPromoteMember*                  ReturnValue;                                               // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLobbyKickMember.HandleCallback
struct UEOSCoreLobbyKickMember_HandleCallback_Params
{
	struct FEOSLobbyKickMemberCallbackInfo             Data;                                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLobbyKickMember.EOSLobbyKickMemberAsync
struct UEOSCoreLobbyKickMember_EOSLobbyKickMemberAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyKickMemberOptions                  Options;                                                   // 0x0008(0x0058)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreLobbyKickMember*                     ReturnValue;                                               // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLobbySendInvite.HandleCallback
struct UEOSCoreLobbySendInvite_HandleCallback_Params
{
	struct FEOSLobbySendInviteCallbackInfo             Data;                                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLobbySendInvite.EOSLobbySendInviteAsync
struct UEOSCoreLobbySendInvite_EOSLobbySendInviteAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbySendInviteOptions                  Options;                                                   // 0x0008(0x0058)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreLobbySendInvite*                     ReturnValue;                                               // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLobbyRejectInvite.HandleCallback
struct UEOSCoreLobbyRejectInvite_HandleCallback_Params
{
	struct FEOSLobbyRejectInviteCallbackInfo           Data;                                                      // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLobbyRejectInvite.EOSLobbyRejectInviteAsync
struct UEOSCoreLobbyRejectInvite_EOSLobbyRejectInviteAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyRejectInviteOptions                Options;                                                   // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreLobbyRejectInvite*                   ReturnValue;                                               // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLobbyQueryInvites.HandleCallback
struct UEOSCoreLobbyQueryInvites_HandleCallback_Params
{
	struct FEOSLobbyQueryInvitesCallbackInfo           Data;                                                      // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLobbyQueryInvites.EOSLobbyQueryInvitesAsync
struct UEOSCoreLobbyQueryInvites_EOSLobbyQueryInvitesAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbyQueryInvitesOptions                Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UEOSCoreLobbyQueryInvites*                   ReturnValue;                                               // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLobbySearchFind.HandleCallback
struct UEOSCoreLobbySearchFind_HandleCallback_Params
{
	struct FEOSLobbySearchFindCallbackInfo             Data;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreLobbySearchFind.EOSLobbySearchFindAsync
struct UEOSCoreLobbySearchFind_EOSLobbySearchFindAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHLobbySearch                            Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSLobbySearchFindOptions                  Options;                                                   // 0x0010(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UEOSCoreLobbySearchFind*                     ReturnValue;                                               // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreMetrics.GetMetrics
struct UCoreMetrics_GetMetrics_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreMetrics*                                ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreMetrics.EOSMetricsEndPlayerSession
struct UCoreMetrics_EOSMetricsEndPlayerSession_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSMetricsEndPlayerSessionOptions          Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreMetrics.EOSMetricsBeginPlayerSession
struct UCoreMetrics_EOSMetricsBeginPlayerSession_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSMetricsBeginPlayerSessionOptions        Options;                                                   // 0x0008(0x0070)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreMods.GetMods
struct UCoreMods_GetMods_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreMods*                                   ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreMods.EOSModsUpdateMod
struct UCoreMods_EOSModsUpdateMod_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSModsUpdateModOptions                    Options;                                                   // 0x0008(0x0080)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0088(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreMods.EOSModsUninstallMod
struct UCoreMods_EOSModsUninstallMod_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSModsUninstallModOptions                 Options;                                                   // 0x0008(0x0080)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0088(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreMods.EOSModsInstallMod
struct UCoreMods_EOSModsInstallMod_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSModsInstallModOptions                   Options;                                                   // 0x0008(0x0088)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0090(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreMods.EOSModsEnumerateMods
struct UCoreMods_EOSModsEnumerateMods_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSModsEnumerateModsOptions                Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreMods.EOSModsCopyModInfo
struct UCoreMods_EOSModsCopyModInfo_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSModsCopyModInfoOptions                  Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSModsModInfo                             OutEnumeratedMods;                                         // 0x0030(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreP2P.GetP2P
struct UCoreP2P_GetP2P_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreP2P*                                    ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreP2P.EOSP2PSetRelayControl
struct UCoreP2P_EOSP2PSetRelayControl_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSP2PSetRelayControlOptions               Options;                                                   // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreP2P.EOSP2PSetPortRange
struct UCoreP2P_EOSP2PSetPortRange_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSP2PSetPortRangeOptions                  Options;                                                   // 0x0008(0x000C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreP2P.EOSP2PSetPacketQueueSize
struct UCoreP2P_EOSP2PSetPacketQueueSize_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSP2PSetPacketQueueSizeOptions            Options;                                                   // 0x0008(0x0028)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreP2P.EOSP2PSendPacket
struct UCoreP2P_EOSP2PSendPacket_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSP2PSendPacketOptions                    Options;                                                   // 0x0008(0x0080)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreP2P.EOSP2PRemoveNotifyPeerConnectionRequest
struct UCoreP2P_EOSP2PRemoveNotifyPeerConnectionRequest_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          NotificationID;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreP2P.EOSP2PRemoveNotifyPeerConnectionClosed
struct UCoreP2P_EOSP2PRemoveNotifyPeerConnectionClosed_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          NotificationID;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreP2P.EOSP2PRemoveNotifyIncomingPacketQueueFull
struct UCoreP2P_EOSP2PRemoveNotifyIncomingPacketQueueFull_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          NotificationID;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreP2P.EOSP2PReceivePacket
struct UCoreP2P_EOSP2PReceivePacket_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSP2PReceivePacketOptions                 Options;                                                   // 0x0008(0x0030)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           OutPeerId;                                                 // 0x0038(0x0021)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSP2PSocketId                             OutSocketId;                                               // 0x0060(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	int                                                OutChannel;                                                // 0x0078(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              OutData;                                                   // 0x0080(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                OutBytesWritten;                                           // 0x0090(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0094(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreP2P.EOSP2PQueryNATType
struct UCoreP2P_EOSP2PQueryNATType_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreP2P.EOSP2PGetRelayControl
struct UCoreP2P_EOSP2PGetRelayControl_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSP2PGetRelayControlOptions               Options;                                                   // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EEOSERelayControl                          OutRelayControl;                                           // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreP2P.EOSP2PGetPortRange
struct UCoreP2P_EOSP2PGetPortRange_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSP2PGetPortRangeOptions                  Options;                                                   // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                OutPort;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutNumAdditionalPortsToTry;                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreP2P.EOSP2PGetPacketQueueInfo
struct UCoreP2P_EOSP2PGetPacketQueueInfo_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSP2PGetPacketQueueInfoOptions            Options;                                                   // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSP2PPacketQueueInfo                      OutPacketQueueInfo;                                        // 0x0010(0x0060)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreP2P.EOSP2PGetNextReceivedPacketSize
struct UCoreP2P_EOSP2PGetNextReceivedPacketSize_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSP2PGetNextReceivedPacketSizeOptions     Options;                                                   // 0x0008(0x002C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                OutPacketSizeBytes;                                        // 0x0034(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreP2P.EOSP2PGetNATType
struct UCoreP2P_EOSP2PGetNATType_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSP2PGetNATTypeOptions                    Options;                                                   // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EEOSENATType                               OutNatType;                                                // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreP2P.EOSP2PCloseConnections
struct UCoreP2P_EOSP2PCloseConnections_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSP2PCloseConnectionsOptions              Options;                                                   // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreP2P.EOSP2PCloseConnection
struct UCoreP2P_EOSP2PCloseConnection_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSP2PCloseConnectionOptions               Options;                                                   // 0x0008(0x0060)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreP2P.EOSP2PAddNotifyPeerConnectionRequest
struct UCoreP2P_EOSP2PAddNotifyPeerConnectionRequest_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSP2PAddNotifyPeerConnectionRequestOptions Options;                                                   // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreP2P.EOSP2PAddNotifyPeerConnectionClosed
struct UCoreP2P_EOSP2PAddNotifyPeerConnectionClosed_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSP2PAddNotifyPeerConnectionClosedOptions Options;                                                   // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreP2P.EOSP2PAddNotifyIncomingPacketQueueFull
struct UCoreP2P_EOSP2PAddNotifyIncomingPacketQueueFull_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSP2PAddNotifyIncomingPacketQueueFullOptions Options;                                                   // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreP2P.EOSP2PAcceptConnection
struct UCoreP2P_EOSP2PAcceptConnection_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSP2PAcceptConnectionOptions              Options;                                                   // 0x0008(0x0060)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CorePlayerDataStorage.GetPlayerDataStorage
struct UCorePlayerDataStorage_GetPlayerDataStorage_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCorePlayerDataStorage*                      ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageWriteFile
struct UCorePlayerDataStorage_EOSPlayerDataStorageWriteFile_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSPlayerDataStorageWriteFileOptions       WriteOptions;                                              // 0x0008(0x0060)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageReadFile
struct UCorePlayerDataStorage_EOSPlayerDataStorageReadFile_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSPlayerDataStorageReadFileOptions        ReadOptions;                                               // 0x0008(0x0060)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageQueryFileList
struct UCorePlayerDataStorage_EOSPlayerDataStorageQueryFileList_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSPlayerDataStorageQueryFileListOptions   QueryFileListOptions;                                      // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageQueryFile
struct UCorePlayerDataStorage_EOSPlayerDataStorageQueryFile_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSPlayerDataStorageQueryFileOptions       QueryFileOptions;                                          // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageGetFileMetadataCount
struct UCorePlayerDataStorage_EOSPlayerDataStorageGetFileMetadataCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSPlayerDataStorageGetFileMetadataCountOptions GetFileMetadataCountOptions;                               // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                OutFileMetadataCount;                                      // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageFileTransferRequestRelease
struct UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestRelease_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHPlayerDataStorageFileTransferRequest   Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageFileTransferRequestGetFileRequestState
struct UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFileRequestState_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHPlayerDataStorageFileTransferRequest   Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageFileTransferRequestGetFilename
struct UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestGetFilename_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHPlayerDataStorageFileTransferRequest   Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FilenameStringBufferSizeBytes;                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OutStringBuffer;                                           // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageFileTransferRequestCancelRequest
struct UCorePlayerDataStorage_EOSPlayerDataStorageFileTransferRequestCancelRequest_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHPlayerDataStorageFileTransferRequest   Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageDuplicateFile
struct UCorePlayerDataStorage_EOSPlayerDataStorageDuplicateFile_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSPlayerDataStorageDuplicateFileOptions   DuplicateOptions;                                          // 0x0008(0x0048)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageDeleteFile
struct UCorePlayerDataStorage_EOSPlayerDataStorageDeleteFile_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSPlayerDataStorageDeleteFileOptions      DeleteOptions;                                             // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageDeleteCache
struct UCorePlayerDataStorage_EOSPlayerDataStorageDeleteCache_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSPlayerDataStorageDeleteCacheOptions     Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageCopyFileMetadataByFilename
struct UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataByFilename_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSPlayerDataStorageCopyFileMetadataByFilenameOptions CopyFileMetadataOptions;                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FEOSPlayerDataStorageFileMetadata           OutMetadata;                                               // 0x0040(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CorePlayerDataStorage.EOSPlayerDataStorageCopyFileMetadataAtIndex
struct UCorePlayerDataStorage_EOSPlayerDataStorageCopyFileMetadataAtIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSPlayerDataStorageCopyFileMetadataAtIndexOptions CopyFileMetadataOptions;                                   // 0x0008(0x002C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSPlayerDataStorageFileMetadata           OutMetadata;                                               // 0x0038(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCorePlayerDataStorageQueryFile.HandleCallback
struct UEOSCorePlayerDataStorageQueryFile_HandleCallback_Params
{
	struct FEOSPlayerDataStorageQueryFileCallbackInfo  Data;                                                      // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCorePlayerDataStorageQueryFile.EOSPlayerDataStorageQueryFileAsync
struct UEOSCorePlayerDataStorageQueryFile_EOSPlayerDataStorageQueryFileAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSPlayerDataStorageQueryFileOptions       QueryFileOptions;                                          // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCorePlayerDataStorageQueryFile*          ReturnValue;                                               // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCorePlayerDataStorageQueryFileList.HandleCallback
struct UEOSCorePlayerDataStorageQueryFileList_HandleCallback_Params
{
	struct FEOSPlayerDataStorageQueryFileListCallbackInfo Data;                                                      // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCorePlayerDataStorageQueryFileList.EOSPlayerDataStorageQueryFileListAsync
struct UEOSCorePlayerDataStorageQueryFileList_EOSPlayerDataStorageQueryFileListAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSPlayerDataStorageQueryFileListOptions   QueryFileListOptions;                                      // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UEOSCorePlayerDataStorageQueryFileList*      ReturnValue;                                               // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCorePlayerDataStorageDuplicateFile.HandleCallback
struct UEOSCorePlayerDataStorageDuplicateFile_HandleCallback_Params
{
	struct FEOSPlayerDataStorageDuplicateFileCallbackInfo Data;                                                      // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCorePlayerDataStorageDuplicateFile.EOSPlayerDataStorageDuplicateFileAsync
struct UEOSCorePlayerDataStorageDuplicateFile_EOSPlayerDataStorageDuplicateFileAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSPlayerDataStorageDuplicateFileOptions   DuplicateOptions;                                          // 0x0008(0x0048)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCorePlayerDataStorageDuplicateFile*      ReturnValue;                                               // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCorePlayerDataStorageDeleteFile.HandleCallback
struct UEOSCorePlayerDataStorageDeleteFile_HandleCallback_Params
{
	struct FEOSPlayerDataStorageDeleteFileCallbackInfo Data;                                                      // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCorePlayerDataStorageDeleteFile.EOSPlayerDataStorageDeleteFileAsync
struct UEOSCorePlayerDataStorageDeleteFile_EOSPlayerDataStorageDeleteFileAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSPlayerDataStorageDeleteFileOptions      DeleteOptions;                                             // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCorePlayerDataStorageDeleteFile*         ReturnValue;                                               // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCorePlayerDataStorageReadFile.HandleCallback
struct UEOSCorePlayerDataStorageReadFile_HandleCallback_Params
{
	struct FEOSPlayerDataStorageReadFileCallbackInfo   Data;                                                      // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCorePlayerDataStorageReadFile.EOSPlayerDataStorageReadFileAsync
struct UEOSCorePlayerDataStorageReadFile_EOSPlayerDataStorageReadFileAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSPlayerDataStorageReadFileOptions        ReadOptions;                                               // 0x0008(0x0060)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCorePlayerDataStorageReadFile*           ReturnValue;                                               // 0x0068(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCorePlayerDataStorageWriteFile.HandleCallback
struct UEOSCorePlayerDataStorageWriteFile_HandleCallback_Params
{
	struct FEOSPlayerDataStorageWriteFileCallbackInfo  Data;                                                      // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCorePlayerDataStorageWriteFile.EOSPlayerDataStorageWriteFileAsync
struct UEOSCorePlayerDataStorageWriteFile_EOSPlayerDataStorageWriteFileAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSPlayerDataStorageWriteFileOptions       WriteOptions;                                              // 0x0008(0x0060)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCorePlayerDataStorageWriteFile*          ReturnValue;                                               // 0x0068(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CorePresence.GetPresence
struct UCorePresence_GetPresence_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCorePresence*                               ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CorePresence.EOSPresenceSetPresence
struct UCorePresence_EOSPresenceSetPresence_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSPresenceSetPresenceOptions              Options;                                                   // 0x0008(0x0030)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CorePresence.EOSPresenceRemoveNotifyOnPresenceChanged
struct UCorePresence_EOSPresenceRemoveNotifyOnPresenceChanged_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          NotificationID;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CorePresence.EOSPresenceRemoveNotifyJoinGameAccepted
struct UCorePresence_EOSPresenceRemoveNotifyJoinGameAccepted_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ID;                                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CorePresence.EOSPresenceQueryPresence
struct UCorePresence_EOSPresenceQueryPresence_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSPresenceQueryPresenceOptions            Options;                                                   // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CorePresence.EOSPresenceModificationSetStatus
struct UCorePresence_EOSPresenceModificationSetStatus_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHPresenceModification                   Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSPresenceModificationSetStatusOptions    Options;                                                   // 0x0010(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CorePresence.EOSPresenceModificationSetRawRichText
struct UCorePresence_EOSPresenceModificationSetRawRichText_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHPresenceModification                   Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSPresenceModificationSetRawRichTextOptions Options;                                                   // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CorePresence.EOSPresenceModificationSetJoinInfo
struct UCorePresence_EOSPresenceModificationSetJoinInfo_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHPresenceModification                   Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSPresenceModificationSetJoinInfoOptions  Options;                                                   // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CorePresence.EOSPresenceModificationSetData
struct UCorePresence_EOSPresenceModificationSetData_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHPresenceModification                   Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSPresenceModificationSetDataOptions      Options;                                                   // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CorePresence.EOSPresenceModificationRelease
struct UCorePresence_EOSPresenceModificationRelease_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHPresenceModification                   PresenceModificationHandle;                                // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CorePresence.EOSPresenceModificationDeleteData
struct UCorePresence_EOSPresenceModificationDeleteData_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHPresenceModification                   Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSPresenceModificationDeleteDataOptions   Options;                                                   // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CorePresence.EOSPresenceHasPresence
struct UCorePresence_EOSPresenceHasPresence_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSPresenceHasPresenceOptions              Options;                                                   // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CorePresence.EOSPresenceGetJoinInfo
struct UCorePresence_EOSPresenceGetJoinInfo_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSPresenceGetJoinInfoOptions              Options;                                                   // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     OutInfo;                                                   // 0x0050(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CorePresence.EOSPresenceCreatePresenceModification
struct UCorePresence_EOSPresenceCreatePresenceModification_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSPresenceCreatePresenceModificationOptions Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSHPresenceModification                   OutPresenceModificationHandle;                             // 0x0030(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CorePresence.EOSPresenceCopyPresence
struct UCorePresence_EOSPresenceCopyPresence_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSPresenceCopyPresenceOptions             Options;                                                   // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSPresenceInfo                            OutPresence;                                               // 0x0050(0x0090)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x00E0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CorePresence.EOSPresenceAddNotifyOnPresenceChanged
struct UCorePresence_EOSPresenceAddNotifyOnPresenceChanged_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CorePresence.EOSPresenceAddNotifyJoinGameAccepted
struct UCorePresence_EOSPresenceAddNotifyJoinGameAccepted_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCorePresenceQueryPresence.HandleCallback
struct UEOSCorePresenceQueryPresence_HandleCallback_Params
{
	struct FEOSPresenceQueryPresenceCallbackInfo       Data;                                                      // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCorePresenceQueryPresence.EOSPresenceQueryPresenceAsync
struct UEOSCorePresenceQueryPresence_EOSPresenceQueryPresenceAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSPresenceQueryPresenceOptions            Options;                                                   // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UEOSCorePresenceQueryPresence*               ReturnValue;                                               // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCorePresenceSetPresence.HandleCallback
struct UEOSCorePresenceSetPresence_HandleCallback_Params
{
	struct FEOSPresenceSetPresenceCallbackInfo         Data;                                                      // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCorePresenceSetPresence.EOSPresenceSetPresenceAsync
struct UEOSCorePresenceSetPresence_EOSPresenceSetPresenceAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSPresenceSetPresenceOptions              Options;                                                   // 0x0008(0x0030)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UEOSCorePresenceSetPresence*                 ReturnValue;                                               // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreProgressionSnapshot.GetProgressionSnapshot
struct UCoreProgressionSnapshot_GetProgressionSnapshot_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreProgressionSnapshot*                    ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreProgressionSnapshot.EOSProgressionSnapshotSubmitSnapshot
struct UCoreProgressionSnapshot_EOSProgressionSnapshotSubmitSnapshot_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProgressionSnapshotSubmitSnapshotOptions Options;                                                   // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreProgressionSnapshot.EOSProgressionSnapshotEndSnapshot
struct UCoreProgressionSnapshot_EOSProgressionSnapshotEndSnapshot_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProgressionSnapshotEndSnapshotOptions   Options;                                                   // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreProgressionSnapshot.EOSProgressionSnapshotDeleteSnapshot
struct UCoreProgressionSnapshot_EOSProgressionSnapshotDeleteSnapshot_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProgressionSnapshotDeleteSnapshotOptions Options;                                                   // 0x0008(0x0021)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x002C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreProgressionSnapshot.EOSProgressionSnapshotBeginSnapshot
struct UCoreProgressionSnapshot_EOSProgressionSnapshotBeginSnapshot_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProgressionSnapshotBeginSnapshotOptions Options;                                                   // 0x0008(0x0021)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                OutSnapshotId;                                             // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreProgressionSnapshot.EOSProgressionSnapshotAddProgression
struct UCoreProgressionSnapshot_EOSProgressionSnapshotAddProgression_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSProgressionSnapshotAddProgressionOptions Options;                                                   // 0x0008(0x0028)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreReports.GetReports
struct UCoreReports_GetReports_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreReports*                                ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreReports.EOSReportsSendPlayerBehaviorReport
struct UCoreReports_EOSReportsSendPlayerBehaviorReport_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSReportsSendPlayerBehaviorReportOptions  Options;                                                   // 0x0008(0x0068)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0070(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSReportsSendPlayerBehaviorReport.HandleCallback
struct UEOSReportsSendPlayerBehaviorReport_HandleCallback_Params
{
	struct FEOSReportsSendPlayerBehaviorReportCompleteCallbackInfo Data;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSReportsSendPlayerBehaviorReport.EOSReportsSendPlayerBehaviorReportAsync
struct UEOSReportsSendPlayerBehaviorReport_EOSReportsSendPlayerBehaviorReportAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSReportsSendPlayerBehaviorReportOptions  Options;                                                   // 0x0008(0x0068)  (Parm, NativeAccessSpecifierPublic)
	class UEOSReportsSendPlayerBehaviorReport*         ReturnValue;                                               // 0x0070(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTC.GetRTC
struct UCoreRTC_GetRTC_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreRTC*                                    ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTC.EOSRTCRemoveNotifyParticipantStatusChanged
struct UCoreRTC_EOSRTCRemoveNotifyParticipantStatusChanged_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          NotificationID;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTC.EOSRTCRemoveNotifyDisconnected
struct UCoreRTC_EOSRTCRemoveNotifyDisconnected_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          NotificationID;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTC.EOSRTCLeaveRoom
struct UCoreRTC_EOSRTCLeaveRoom_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLeaveRoomOptions                           Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTC.EOSRTCJoinRoom
struct UCoreRTC_EOSRTCJoinRoom_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJoinRoomOptions                            Options;                                                   // 0x0008(0x0088)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0090(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTC.EOSRTCGetAudioInterface
struct UCoreRTC_EOSRTCGetAudioInterface_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHRTCAudio                               ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTC.EOSRTCBlockParticipant
struct UCoreRTC_EOSRTCBlockParticipant_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlockParticipantOptions                    Options;                                                   // 0x0008(0x0060)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTC.EOSRTCAddNotifyParticipantStatusChanged
struct UCoreRTC_EOSRTCAddNotifyParticipantStatusChanged_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAddNotifyParticipantStatusChangedOptions   Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTC.EOSRTCAddNotifyDisconnected
struct UCoreRTC_EOSRTCAddNotifyDisconnected_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAddNotifyDisconnectedOptions               Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTCAdmin.GetRTCAdmin
struct UCoreRTCAdmin_GetRTCAdmin_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreRTCAdmin*                               ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTCAdmin.EOSRTCAdminSetParticipantHardMute
struct UCoreRTCAdmin_EOSRTCAdminSetParticipantHardMute_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSetParticipantHardMuteOptions           Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTCAdmin.EOSRTCAdminQueryJoinRoomToken
struct UCoreRTCAdmin_EOSRTCAdminQueryJoinRoomToken_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSQueryJoinRoomTokenOptions               Options;                                                   // 0x0008(0x0058)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTCAdmin.EOSRTCAdminKick
struct UCoreRTCAdmin_EOSRTCAdminKick_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSKickOptions                             Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTCAdmin.EOSRTCAdminCopyUserTokenByUserId
struct UCoreRTCAdmin_EOSRTCAdminCopyUserTokenByUserId_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSCopyUserTokenByUserIdOptions            Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSUserToken                               OutUserToken;                                              // 0x0030(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTCAdmin.EOSRTCAdminCopyUserTokenByIndex
struct UCoreRTCAdmin_EOSRTCAdminCopyUserTokenByIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSCopyUserTokenByIndexOptions             Options;                                                   // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSUserToken                               OutUserToken;                                              // 0x0010(0x0038)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTCAudio.GetRTCAudio
struct UCoreRTCAudio_GetRTCAudio_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreRTCAudio*                               ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTCAudio.EOSRTCAudioUpdateSending
struct UCoreRTCAudio_EOSRTCAudioUpdateSending_Params
{
	struct FEOSHRTCAudio                               Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSUpdateSendingOptions                    Options;                                                   // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTCAudio.EOSRTCAudioUpdateReceiving
struct UCoreRTCAudio_EOSRTCAudioUpdateReceiving_Params
{
	struct FEOSHRTCAudio                               Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSUpdateReceivingOptions                  Options;                                                   // 0x0008(0x0060)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTCAudio.EOSRTCAudioUnregisterPlatformAudioUser
struct UCoreRTCAudio_EOSRTCAudioUnregisterPlatformAudioUser_Params
{
	struct FEOSHRTCAudio                               Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSUnregisterPlatformAudioUserOptions      Options;                                                   // 0x0008(0x0010)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTCAudio.EOSRTCAudioSetAudioOutputSettings
struct UCoreRTCAudio_EOSRTCAudioSetAudioOutputSettings_Params
{
	struct FEOSHRTCAudio                               Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSetAudioOutputSettingsOptions           Options;                                                   // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTCAudio.EOSRTCAudioSetAudioInputSettings
struct UCoreRTCAudio_EOSRTCAudioSetAudioInputSettings_Params
{
	struct FEOSHRTCAudio                               Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSetAudioInputSettingsOptions            Options;                                                   // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTCAudio.EOSRTCAudioSendAudio
struct UCoreRTCAudio_EOSRTCAudioSendAudio_Params
{
	struct FEOSHRTCAudio                               Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSendAudioOptions                        Options;                                                   // 0x0008(0x0048)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTCAudio.EOSRTCAudioRemoveNotifyParticipantUpdated
struct UCoreRTCAudio_EOSRTCAudioRemoveNotifyParticipantUpdated_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHRTCAudio                               Handle;                                                    // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          NotificationID;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTCAudio.EOSRTCAudioRemoveNotifyAudioOutputState
struct UCoreRTCAudio_EOSRTCAudioRemoveNotifyAudioOutputState_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHRTCAudio                               Handle;                                                    // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          NotificationID;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTCAudio.EOSRTCAudioRemoveNotifyAudioInputState
struct UCoreRTCAudio_EOSRTCAudioRemoveNotifyAudioInputState_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHRTCAudio                               Handle;                                                    // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          NotificationID;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTCAudio.EOSRTCAudioRemoveNotifyAudioDevicesChanged
struct UCoreRTCAudio_EOSRTCAudioRemoveNotifyAudioDevicesChanged_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHRTCAudio                               Handle;                                                    // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          NotificationID;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTCAudio.EOSRTCAudioRemoveNotifyAudioBeforeSend
struct UCoreRTCAudio_EOSRTCAudioRemoveNotifyAudioBeforeSend_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHRTCAudio                               Handle;                                                    // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          NotificationID;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTCAudio.EOSRTCAudioRemoveNotifyAudioBeforeRender
struct UCoreRTCAudio_EOSRTCAudioRemoveNotifyAudioBeforeRender_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHRTCAudio                               Handle;                                                    // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          NotificationID;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTCAudio.EOSRTCAudioRegisterPlatformAudioUser
struct UCoreRTCAudio_EOSRTCAudioRegisterPlatformAudioUser_Params
{
	struct FEOSHRTCAudio                               Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSRegisterPlatformAudioUserOptions        Options;                                                   // 0x0008(0x0010)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTCAudio.EOSRTCAudioGetAudioOutputDevicesCount
struct UCoreRTCAudio_EOSRTCAudioGetAudioOutputDevicesCount_Params
{
	struct FEOSHRTCAudio                               Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSGetAudioOutputDevicesCountOptions       Options;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTCAudio.EOSRTCAudioGetAudioOutputDeviceByIndex
struct UCoreRTCAudio_EOSRTCAudioGetAudioOutputDeviceByIndex_Params
{
	struct FEOSHRTCAudio                               Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSGetAudioOutputDeviceByIndexOptions      Options;                                                   // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSAudioOutputDeviceInfo                   ReturnValue;                                               // 0x0010(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTCAudio.EOSRTCAudioGetAudioInputDevicesCount
struct UCoreRTCAudio_EOSRTCAudioGetAudioInputDevicesCount_Params
{
	struct FEOSHRTCAudio                               Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSGetAudioInputDevicesCountOptions        Options;                                                   // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTCAudio.EOSRTCAudioGetAudioInputDeviceByIndex
struct UCoreRTCAudio_EOSRTCAudioGetAudioInputDeviceByIndex_Params
{
	struct FEOSHRTCAudio                               Handle;                                                    // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSGetAudioOutputDeviceByIndexOptions      Options;                                                   // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSAudioInputDeviceInfo                    ReturnValue;                                               // 0x0010(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTCAudio.EOSRTCAudioAddNotifyParticipantUpdated
struct UCoreRTCAudio_EOSRTCAudioAddNotifyParticipantUpdated_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHRTCAudio                               Handle;                                                    // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAddNotifyParticipantUpdatedOptions      Options;                                                   // 0x0010(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTCAudio.EOSRTCAudioAddNotifyAudioOutputState
struct UCoreRTCAudio_EOSRTCAudioAddNotifyAudioOutputState_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHRTCAudio                               Handle;                                                    // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAddNotifyAudioOutputStateOptions        Options;                                                   // 0x0010(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTCAudio.EOSRTCAudioAddNotifyAudioInputState
struct UCoreRTCAudio_EOSRTCAudioAddNotifyAudioInputState_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHRTCAudio                               Handle;                                                    // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAddNotifyAudioInputStateOptions         Options;                                                   // 0x0010(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTCAudio.EOSRTCAudioAddNotifyAudioDevicesChanged
struct UCoreRTCAudio_EOSRTCAudioAddNotifyAudioDevicesChanged_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHRTCAudio                               Handle;                                                    // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAddNotifyAudioDevicesChangedOptions     Options;                                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0014(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTCAudio.EOSRTCAudioAddNotifyAudioBeforeSend
struct UCoreRTCAudio_EOSRTCAudioAddNotifyAudioBeforeSend_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHRTCAudio                               Handle;                                                    // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAddNotifyAudioBeforeSendOptions         Options;                                                   // 0x0010(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreRTCAudio.EOSRTCAudioAddNotifyAudioBeforeRender
struct UCoreRTCAudio_EOSRTCAudioAddNotifyAudioBeforeRender_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHRTCAudio                               Handle;                                                    // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSAddNotifyAudioBeforeRenderOptions       Options;                                                   // 0x0010(0x0040)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSanctions.GetSanctions
struct UCoreSanctions_GetSanctions_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreSanctions*                              ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSanctions.EOSSanctionsQueryActivePlayerSanctions
struct UCoreSanctions_EOSSanctionsQueryActivePlayerSanctions_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSanctionsQueryActivePlayerSanctionsOptions Options;                                                   // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSanctions.EOSSanctionsGetPlayerSanctionCount
struct UCoreSanctions_EOSSanctionsGetPlayerSanctionCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSanctionsGetPlayerSanctionCountOptions  Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSanctions.EOSSanctionsCopyPlayerSanctionByIndex
struct UCoreSanctions_EOSSanctionsCopyPlayerSanctionByIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSanctionsCopyPlayerSanctionByIndexOptions Options;                                                   // 0x0008(0x002C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSSanctionsPlayerSanction                 OutSanction;                                               // 0x0038(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSSanctionsQueryActivePlayerSanctions.HandleCallback
struct UEOSSanctionsQueryActivePlayerSanctions_HandleCallback_Params
{
	struct FEOSSanctionsQueryActivePlayerSanctionsCallbackInfo Data;                                                      // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSSanctionsQueryActivePlayerSanctions.EOSSanctionsQueryActivePlayerSanctionsAsync
struct UEOSSanctionsQueryActivePlayerSanctions_EOSSanctionsQueryActivePlayerSanctionsAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSanctionsQueryActivePlayerSanctionsOptions Options;                                                   // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UEOSSanctionsQueryActivePlayerSanctions*     ReturnValue;                                               // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.GetSessions
struct UCoreSessions_GetSessions_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreSessions*                               ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionsUpdateSessionModification
struct UCoreSessions_EOSSessionsUpdateSessionModification_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionsUpdateSessionModificationOptions Options;                                                   // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
	struct FEOSHSessionModification                    OutSessionModificationHandle;                              // 0x0020(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionsUpdateSession
struct UCoreSessions_EOSSessionsUpdateSession_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionsUpdateSessionOptions            Options;                                                   // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionsUnregisterPlayers
struct UCoreSessions_EOSSessionsUnregisterPlayers_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionsUnregisterPlayersOptions        Options;                                                   // 0x0008(0x0030)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionsStartSession
struct UCoreSessions_EOSSessionsStartSession_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionsStartSessionOptions             Options;                                                   // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionsSendInvite
struct UCoreSessions_EOSSessionsSendInvite_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionsSendInviteOptions               Options;                                                   // 0x0008(0x0060)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionsRemoveNotifySessionInviteReceived
struct UCoreSessions_EOSSessionsRemoveNotifySessionInviteReceived_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ID;                                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionsRemoveNotifySessionInviteAccepted
struct UCoreSessions_EOSSessionsRemoveNotifySessionInviteAccepted_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ID;                                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionsRemoveNotifyJoinSessionAccepted
struct UCoreSessions_EOSSessionsRemoveNotifyJoinSessionAccepted_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ID;                                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionsRejectInvite
struct UCoreSessions_EOSSessionsRejectInvite_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionsRejectInviteOptions             Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionsRegisterPlayers
struct UCoreSessions_EOSSessionsRegisterPlayers_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionsRegisterPlayersOptions          Options;                                                   // 0x0008(0x0030)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionsQueryInvites
struct UCoreSessions_EOSSessionsQueryInvites_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionsQueryInvitesOptions             Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionsJoinSession
struct UCoreSessions_EOSSessionsJoinSession_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionsJoinSessionOptions              Options;                                                   // 0x0008(0x0048)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionsIsUserInSession
struct UCoreSessions_EOSSessionsIsUserInSession_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionsIsUserInSessionOptions          Options;                                                   // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionsGetInviteIdByIndex
struct UCoreSessions_EOSSessionsGetInviteIdByIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionsGetInviteIdByIndexOptions       Options;                                                   // 0x0008(0x002C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     OutBuffer;                                                 // 0x0038(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionsGetInviteCount
struct UCoreSessions_EOSSessionsGetInviteCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionsGetInviteCountOptions           Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionsEndSession
struct UCoreSessions_EOSSessionsEndSession_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionsEndSessionOptions               Options;                                                   // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionSearchSetTargetUserId
struct UCoreSessions_EOSSessionSearchSetTargetUserId_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHSessionSearch                          Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionSearchSetTargetUserIdOptions     Options;                                                   // 0x0010(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionSearchSetSessionId
struct UCoreSessions_EOSSessionSearchSetSessionId_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHSessionSearch                          Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionSearchSetSessionIdOptions        Options;                                                   // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionSearchSetParameterString
struct UCoreSessions_EOSSessionSearchSetParameterString_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHSessionSearch                          Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEComparisonOp                          ComparisonOp;                                              // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionSearchSetParameterInt64
struct UCoreSessions_EOSSessionSearchSetParameterInt64_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHSessionSearch                          Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEComparisonOp                          ComparisonOp;                                              // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionSearchSetParameterDouble
struct UCoreSessions_EOSSessionSearchSetParameterDouble_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHSessionSearch                          Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEComparisonOp                          ComparisonOp;                                              // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0031(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionSearchSetParameterBool
struct UCoreSessions_EOSSessionSearchSetParameterBool_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHSessionSearch                          Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bValue;                                                    // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSEComparisonOp                          ComparisonOp;                                              // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0022(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionSearchSetMaxResults
struct UCoreSessions_EOSSessionSearchSetMaxResults_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHSessionSearch                          Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionSearchSetMaxResultsOptions       Options;                                                   // 0x0010(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionSearchRemoveParameter
struct UCoreSessions_EOSSessionSearchRemoveParameter_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHSessionSearch                          Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionSearchRemoveParameterOptions     Options;                                                   // 0x0010(0x0020)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionSearchRelease
struct UCoreSessions_EOSSessionSearchRelease_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHSessionSearch                          SessionSearchHandle;                                       // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionSearchGetSearchResultCount
struct UCoreSessions_EOSSessionSearchGetSearchResultCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHSessionSearch                          Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionSearchGetSearchResultCountOptions Options;                                                   // 0x0010(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionSearchFind
struct UCoreSessions_EOSSessionSearchFind_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHSessionSearch                          Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionSearchFindOptions                Options;                                                   // 0x0010(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionSearchCopySearchResultByIndex
struct UCoreSessions_EOSSessionSearchCopySearchResultByIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHSessionSearch                          Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionSearchCopySearchResultByIndexOptions Options;                                                   // 0x0010(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSHSessionDetails                         OutSessionHandle;                                          // 0x0018(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionsDumpSessionState
struct UCoreSessions_EOSSessionsDumpSessionState_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionsDumpSessionStateOptions         Options;                                                   // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionsDestroySession
struct UCoreSessions_EOSSessionsDestroySession_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionsDestroySessionOptions           Options;                                                   // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionsCreateSessionSearch
struct UCoreSessions_EOSSessionsCreateSessionSearch_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionsCreateSessionSearchOptions      Options;                                                   // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSHSessionSearch                          OutSessionSearchHandle;                                    // 0x0010(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionsCreateSessionModification
struct UCoreSessions_EOSSessionsCreateSessionModification_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionsCreateSessionModificationOptions Options;                                                   // 0x0008(0x0050)  (Parm, NativeAccessSpecifierPublic)
	struct FEOSHSessionModification                    OutSessionModificationHandle;                              // 0x0058(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionsCopySessionHandleForPresence
struct UCoreSessions_EOSSessionsCopySessionHandleForPresence_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionsCopySessionHandleForPresenceOptions Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSHSessionDetails                         OutSessionHandle;                                          // 0x0030(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionsCopySessionHandleByUiEventId
struct UCoreSessions_EOSSessionsCopySessionHandleByUiEventId_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionsCopySessionHandleByUiEventIdOptions Options;                                                   // 0x0008(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSHSessionDetails                         OutSessionHandle;                                          // 0x0018(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionsCopySessionHandleByInviteId
struct UCoreSessions_EOSSessionsCopySessionHandleByInviteId_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionsCopySessionHandleByInviteIdOptions Options;                                                   // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
	struct FEOSHSessionDetails                         OutSessionHandle;                                          // 0x0020(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionsCopyActiveSessionHandle
struct UCoreSessions_EOSSessionsCopyActiveSessionHandle_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionsCopyActiveSessionHandleOptions  Options;                                                   // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
	struct FEOSHActiveSession                          OutSessionHandle;                                          // 0x0020(0x0008)  (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionsAddNotifySessionInviteReceived
struct UCoreSessions_EOSSessionsAddNotifySessionInviteReceived_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionsAddNotifySessionInviteAccepted
struct UCoreSessions_EOSSessionsAddNotifySessionInviteAccepted_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionsAddNotifyJoinSessionAccepted
struct UCoreSessions_EOSSessionsAddNotifyJoinSessionAccepted_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionModificationSetPermissionLevel
struct UCoreSessions_EOSSessionModificationSetPermissionLevel_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHSessionModification                    Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionModificationSetPermissionLevelOptions Options;                                                   // 0x0010(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionModificationSetMaxPlayers
struct UCoreSessions_EOSSessionModificationSetMaxPlayers_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHSessionModification                    Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionModificationSetMaxPlayersOptions Options;                                                   // 0x0010(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionModificationSetJoinInProgressAllowed
struct UCoreSessions_EOSSessionModificationSetJoinInProgressAllowed_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHSessionModification                    Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionModificationSetJoinInProgressAllowedOptions Options;                                                   // 0x0010(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionModificationSetInvitesAllowed
struct UCoreSessions_EOSSessionModificationSetInvitesAllowed_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHSessionModification                    Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionModificationSetInvitesAllowedOptions Options;                                                   // 0x0010(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionModificationSetHostAddress
struct UCoreSessions_EOSSessionModificationSetHostAddress_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHSessionModification                    Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionModificationSetHostAddressOptions Options;                                                   // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionModificationSetBucketId
struct UCoreSessions_EOSSessionModificationSetBucketId_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHSessionModification                    Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionModificationSetBucketIdOptions   Options;                                                   // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionModificationRemoveAttribute
struct UCoreSessions_EOSSessionModificationRemoveAttribute_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHSessionModification                    Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionModificationRemoveAttributeOptions Options;                                                   // 0x0010(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionModificationRelease
struct UCoreSessions_EOSSessionModificationRelease_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHSessionModification                    SessionModificationHandle;                                 // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionModificationAddAttributeString
struct UCoreSessions_EOSSessionModificationAddAttributeString_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHSessionModification                    Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSESessionAttributeAdvertisementType     AdvertisementType;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionModificationAddAttributeInt64
struct UCoreSessions_EOSSessionModificationAddAttributeInt64_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHSessionModification                    Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSESessionAttributeAdvertisementType     AdvertisementType;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionModificationAddAttributeDouble
struct UCoreSessions_EOSSessionModificationAddAttributeDouble_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHSessionModification                    Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSESessionAttributeAdvertisementType     AdvertisementType;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionModificationAddAttributeBool
struct UCoreSessions_EOSSessionModificationAddAttributeBool_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHSessionModification                    Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSESessionAttributeAdvertisementType     AdvertisementType;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Key;                                                       // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bValue;                                                    // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionDetailsRelease
struct UCoreSessions_EOSSessionDetailsRelease_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHSessionDetails                         SessionHandle;                                             // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionDetailsGetSessionAttributeCount
struct UCoreSessions_EOSSessionDetailsGetSessionAttributeCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHSessionDetails                         Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionDetailsGetSessionAttributeCountOptions Options;                                                   // 0x0010(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionDetailsCopySessionAttributeByKey
struct UCoreSessions_EOSSessionDetailsCopySessionAttributeByKey_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHSessionDetails                         Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionDetailsCopySessionAttributeByKeyOptions Options;                                                   // 0x0010(0x0018)  (Parm, NativeAccessSpecifierPublic)
	struct FEOSSessionDetailsAttribute                 OutSessionAttribute;                                       // 0x0028(0x0038)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionDetailsCopySessionAttributeByIndex
struct UCoreSessions_EOSSessionDetailsCopySessionAttributeByIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHSessionDetails                         Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionDetailsCopySessionAttributeByIndexOptions Options;                                                   // 0x0010(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSSessionDetailsAttribute                 OutSessionAttribute;                                       // 0x0018(0x0038)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSSessionDetailsCopyInfo
struct UCoreSessions_EOSSessionDetailsCopyInfo_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHSessionDetails                         Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionDetailsCopyInfoOptions           Options;                                                   // 0x0010(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSSessionDetailsInfo                      outSessionInfo;                                            // 0x0018(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSActiveSessionRelease
struct UCoreSessions_EOSActiveSessionRelease_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHActiveSession                          ActiveSessionHandle;                                       // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSActiveSessionGetRegisteredPlayerCount
struct UCoreSessions_EOSActiveSessionGetRegisteredPlayerCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHActiveSession                          Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSActiveSessionGetRegisteredPlayerCountOptions Options;                                                   // 0x0010(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSActiveSessionGetRegisteredPlayerByIndex
struct UCoreSessions_EOSActiveSessionGetRegisteredPlayerByIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHActiveSession                          Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSActiveSessionGetRegisteredPlayerByIndexOptions Options;                                                   // 0x0010(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSProductUserId                           ReturnValue;                                               // 0x0018(0x0021)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreSessions.EOSActiveSessionCopyInfo
struct UCoreSessions_EOSActiveSessionCopyInfo_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHActiveSession                          Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSActiveSessionCopyInfoOptions            Options;                                                   // 0x0010(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSActiveSessionInfo                       OutActiveSessionInfo;                                      // 0x0018(0x0090)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x00A8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreSessionsUpdateSession.HandleCallback
struct UEOSCoreSessionsUpdateSession_HandleCallback_Params
{
	struct FEOSSessionsUpdateSessionCallbackInfo       Data;                                                      // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreSessionsUpdateSession.EOSSessionsUpdateSessionAsync
struct UEOSCoreSessionsUpdateSession_EOSSessionsUpdateSessionAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionsUpdateSessionOptions            Options;                                                   // 0x0008(0x0010)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UEOSCoreSessionsUpdateSession*               ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreSessionsDestroySession.HandleCallback
struct UEOSCoreSessionsDestroySession_HandleCallback_Params
{
	struct FEOSSessionsDestroySessionCallbackInfo      Data;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreSessionsDestroySession.EOSSessionsDestroySessionAsync
struct UEOSCoreSessionsDestroySession_EOSSessionsDestroySessionAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionsDestroySessionOptions           Options;                                                   // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreSessionsDestroySession*              ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreSessionsJoinSession.HandleCallback
struct UEOSCoreSessionsJoinSession_HandleCallback_Params
{
	struct FEOSSessionsJoinSessionCallbackInfo         Data;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreSessionsJoinSession.EOSSessionsJoinSessionAsync
struct UEOSCoreSessionsJoinSession_EOSSessionsJoinSessionAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionsJoinSessionOptions              Options;                                                   // 0x0008(0x0048)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreSessionsJoinSession*                 ReturnValue;                                               // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreSessionsStartSession.HandleCallback
struct UEOSCoreSessionsStartSession_HandleCallback_Params
{
	struct FEOSSessionsStartSessionCallbackInfo        Data;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreSessionsStartSession.EOSSessionsStartSessionAsync
struct UEOSCoreSessionsStartSession_EOSSessionsStartSessionAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionsStartSessionOptions             Options;                                                   // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreSessionsStartSession*                ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreSessionsEndSession.HandleCallback
struct UEOSCoreSessionsEndSession_HandleCallback_Params
{
	struct FEOSSessionsEndSessionCallbackInfo          Data;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreSessionsEndSession.EOSSessionsEndSessionAsync
struct UEOSCoreSessionsEndSession_EOSSessionsEndSessionAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionsEndSessionOptions               Options;                                                   // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreSessionsEndSession*                  ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreSessionsRegisterPlayers.HandleCallback
struct UEOSCoreSessionsRegisterPlayers_HandleCallback_Params
{
	struct FEOSSessionsRegisterPlayersCallbackInfo     Data;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreSessionsRegisterPlayers.EOSSessionsRegisterPlayersAsync
struct UEOSCoreSessionsRegisterPlayers_EOSSessionsRegisterPlayersAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionsRegisterPlayersOptions          Options;                                                   // 0x0008(0x0030)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreSessionsRegisterPlayers*             ReturnValue;                                               // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreSessionsUnregisterPlayers.HandleCallback
struct UEOSCoreSessionsUnregisterPlayers_HandleCallback_Params
{
	struct FEOSSessionsUnregisterPlayersCallbackInfo   Data;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreSessionsUnregisterPlayers.EOSSessionsUnregisterPlayersAsync
struct UEOSCoreSessionsUnregisterPlayers_EOSSessionsUnregisterPlayersAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionsUnregisterPlayersOptions        Options;                                                   // 0x0008(0x0030)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreSessionsUnregisterPlayers*           ReturnValue;                                               // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreSessionsSendInvite.HandleCallback
struct UEOSCoreSessionsSendInvite_HandleCallback_Params
{
	struct FEOSSessionsSendInviteCallbackInfo          Data;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreSessionsSendInvite.EOSSessionsSendInviteAsync
struct UEOSCoreSessionsSendInvite_EOSSessionsSendInviteAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionsSendInviteOptions               Options;                                                   // 0x0008(0x0060)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreSessionsSendInvite*                  ReturnValue;                                               // 0x0068(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreSessionsRejectInvite.HandleCallback
struct UEOSCoreSessionsRejectInvite_HandleCallback_Params
{
	struct FEOSSessionsRejectInviteCallbackInfo        Data;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreSessionsRejectInvite.EOSSessionsRejectInviteAsync
struct UEOSCoreSessionsRejectInvite_EOSSessionsRejectInviteAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionsRejectInviteOptions             Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreSessionsRejectInvite*                ReturnValue;                                               // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreSessionsQueryInvites.HandleCallback
struct UEOSCoreSessionsQueryInvites_HandleCallback_Params
{
	struct FEOSSessionsQueryInvitesCallbackInfo        Data;                                                      // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreSessionsQueryInvites.EOSSessionsQueryInvitesAsync
struct UEOSCoreSessionsQueryInvites_EOSSessionsQueryInvitesAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionsQueryInvitesOptions             Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UEOSCoreSessionsQueryInvites*                ReturnValue;                                               // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreSessionsSearchFind.HandleCallback
struct UEOSCoreSessionsSearchFind_HandleCallback_Params
{
	struct FEOSSessionSearchFindCallbackInfo           Data;                                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreSessionsSearchFind.EOSSessionSearchFindAsync
struct UEOSCoreSessionsSearchFind_EOSSessionSearchFindAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSHSessionSearch                          SearchHandle;                                              // 0x0008(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSSessionSearchFindOptions                Options;                                                   // 0x0010(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UEOSCoreSessionsSearchFind*                  ReturnValue;                                               // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreStats.GetStats
struct UCoreStats_GetStats_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreStats*                                  ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreStats.EOSStatsQueryStats
struct UCoreStats_EOSStatsQueryStats_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSStatsQueryStatsOptions                  Options;                                                   // 0x0008(0x0080)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0088(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreStats.EOSStatsIngestStat
struct UCoreStats_EOSStatsIngestStat_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSStatsIngestStatOptions                  Options;                                                   // 0x0008(0x0060)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreStats.EOSStatsGetStatsCount
struct UCoreStats_EOSStatsGetStatsCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSStatsGetStatCountOptions                Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreStats.EOSStatsCopyStatByName
struct UCoreStats_EOSStatsCopyStatByName_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSStatsCopyStatByNameOptions              Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FEOSStatsStat                               OutStat;                                                   // 0x0040(0x0040)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0080(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreStats.EOSStatsCopyStatByIndex
struct UCoreStats_EOSStatsCopyStatByIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSStatsCopyStatByIndexOptions             Options;                                                   // 0x0008(0x002C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSStatsStat                               OutStat;                                                   // 0x0038(0x0040)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreStatsIngestStat.HandleCallback
struct UEOSCoreStatsIngestStat_HandleCallback_Params
{
	struct FEOSStatsIngestStatCompleteCallbackInfo     Data;                                                      // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreStatsIngestStat.EOSStatsIngestStatAsync
struct UEOSCoreStatsIngestStat_EOSStatsIngestStatAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSStatsIngestStatOptions                  Options;                                                   // 0x0008(0x0060)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreStatsIngestStat*                     ReturnValue;                                               // 0x0068(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreStatsQueryStats.HandleCallback
struct UEOSCoreStatsQueryStats_HandleCallback_Params
{
	struct FEOSStatsOnQueryStatsCompleteCallbackInfo   Data;                                                      // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreStatsQueryStats.EOSStatsQueryStatsAsync
struct UEOSCoreStatsQueryStats_EOSStatsQueryStatsAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSStatsQueryStatsOptions                  Options;                                                   // 0x0008(0x0080)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreStatsQueryStats*                     ReturnValue;                                               // 0x0088(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreTitleStorage.GetTitleStorage
struct UCoreTitleStorage_GetTitleStorage_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreTitleStorage*                           ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreTitleStorage.EOSTitleStorageReadFile
struct UCoreTitleStorage_EOSTitleStorageReadFile_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSTitleStorageReadFileOptions             Options;                                                   // 0x0008(0x0058)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0060(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSTitleStorageFileTransferRequestHandle   ReturnValue;                                               // 0x0070(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreTitleStorage.EOSTitleStorageQueryFileList
struct UCoreTitleStorage_EOSTitleStorageQueryFileList_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSTitleStorageQueryFileListOptions        Options;                                                   // 0x0008(0x0038)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreTitleStorage.EOSTitleStorageQueryFile
struct UCoreTitleStorage_EOSTitleStorageQueryFile_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSTitleStorageQueryFileOptions            Options;                                                   // 0x0008(0x0038)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreTitleStorage.EOSTitleStorageGetFileMetadataCount
struct UCoreTitleStorage_EOSTitleStorageGetFileMetadataCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSTitleStorageGetFileMetadataCountOptions Options;                                                   // 0x0008(0x0028)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreTitleStorage.EOSTitleStorageFileTransferRequestGetFileRequestState
struct UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFileRequestState_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSTitleStorageFileTransferRequestHandle   Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreTitleStorage.EOSTitleStorageFileTransferRequestGetFilename
struct UCoreTitleStorage_EOSTitleStorageFileTransferRequestGetFilename_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSTitleStorageFileTransferRequestHandle   Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FilenameStringBufferSizeBytes;                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OutStringBuffer;                                           // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreTitleStorage.EOSTitleStorageFileTransferRequestCancelRequest
struct UCoreTitleStorage_EOSTitleStorageFileTransferRequestCancelRequest_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSTitleStorageFileTransferRequestHandle   Handle;                                                    // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreTitleStorage.EOSTitleStorageDeleteCache
struct UCoreTitleStorage_EOSTitleStorageDeleteCache_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSTitleStorageDeleteCacheOptions          Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreTitleStorage.EOSTitleStorageCopyFileMetadataByFilename
struct UCoreTitleStorage_EOSTitleStorageCopyFileMetadataByFilename_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSTitleStorageCopyFileMetadataByFilenameOptions Options;                                                   // 0x0008(0x0038)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FEOSTitleStorageFileMetadata                OutMetadata;                                               // 0x0040(0x0028)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0068(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreTitleStorage.EOSTitleStorageCopyFileMetadataAtIndex
struct UCoreTitleStorage_EOSTitleStorageCopyFileMetadataAtIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSTitleStorageCopyFileMetadataAtIndexOptions Options;                                                   // 0x0008(0x002C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSTitleStorageFileMetadata                OutMetadata;                                               // 0x0038(0x0028)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreTitleStorageQueryFile.HandleCallback
struct UEOSCoreTitleStorageQueryFile_HandleCallback_Params
{
	struct FEOSTitleStorageQueryFileCallbackInfo       Data;                                                      // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreTitleStorageQueryFile.EOSTitleStorageQueryFileAsync
struct UEOSCoreTitleStorageQueryFile_EOSTitleStorageQueryFileAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSTitleStorageQueryFileOptions            Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreTitleStorageQueryFile*               ReturnValue;                                               // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreTitleStorageQueryFileList.HandleCallback
struct UEOSCoreTitleStorageQueryFileList_HandleCallback_Params
{
	struct FEOSTitleStorageQueryFileListCallbackInfo   Data;                                                      // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreTitleStorageQueryFileList.EOSTitleStorageQueryFileListAsync
struct UEOSCoreTitleStorageQueryFileList_EOSTitleStorageQueryFileListAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSTitleStorageQueryFileListOptions        Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreTitleStorageQueryFileList*           ReturnValue;                                               // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreTitleStorageReadFile.HandleCallback
struct UEOSCoreTitleStorageReadFile_HandleCallback_Params
{
	struct FEOSTitleStorageReadFileCallbackInfo        Data;                                                      // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreTitleStorageReadFile.EOSTitleStorageReadFileAsync
struct UEOSCoreTitleStorageReadFile_EOSTitleStorageReadFileAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSTitleStorageReadFileOptions             Options;                                                   // 0x0008(0x0058)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreTitleStorageReadFile*                ReturnValue;                                               // 0x0060(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreTitleStorageDeleteCache.HandleCallback
struct UEOSCoreTitleStorageDeleteCache_HandleCallback_Params
{
	struct FEOSTitleStorageDeleteCacheCallbackInfo     Data;                                                      // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreTitleStorageDeleteCache.EOSTitleStorageDeleteCacheAsync
struct UEOSCoreTitleStorageDeleteCache_EOSTitleStorageDeleteCacheAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSTitleStorageDeleteCacheOptions          Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UEOSCoreTitleStorageDeleteCache*             ReturnValue;                                               // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreUI.GetUI
struct UCoreUI_GetUI_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreUI*                                     ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreUI.EOSUIShowFriends
struct UCoreUI_EOSUIShowFriends_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSUIShowFriendsOptions                    Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreUI.EOSUISetToggleFriendsKey
struct UCoreUI_EOSUISetToggleFriendsKey_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSUISetToggleFriendsKeyOptions            Options;                                                   // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreUI.EOSUISetDisplayPreference
struct UCoreUI_EOSUISetDisplayPreference_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSUISetDisplayPreferenceOptions           Options;                                                   // 0x0008(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreUI.EOSUIRemoveNotifyDisplaySettingsUpdated
struct UCoreUI_EOSUIRemoveNotifyDisplaySettingsUpdated_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ID;                                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreUI.EOSUIIsValidKeyCombination
struct UCoreUI_EOSUIIsValidKeyCombination_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                keyCombination;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreUI.EOSUIHideFriends
struct UCoreUI_EOSUIHideFriends_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSUIHideFriendsOptions                    Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreUI.EOSUIGetToggleFriendsKey
struct UCoreUI_EOSUIGetToggleFriendsKey_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSUIGetToggleFriendsKeyOptions            Options;                                                   // 0x0008(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreUI.EOSUIGetNotificationLocationPreference
struct UCoreUI_EOSUIGetNotificationLocationPreference_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EOSCore_EEOSUIENotificationLocation                ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreUI.EOSUIGetFriendsVisible
struct UCoreUI_EOSUIGetFriendsVisible_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSUIGetFriendsVisibleOptions              Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreUI.EOSUIAddNotifyDisplaySettingsUpdated
struct UCoreUI_EOSUIAddNotifyDisplaySettingsUpdated_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSUIAddNotifyDisplaySettingsUpdatedOptions Options;                                                   // 0x0008(0x0004)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSNotificationId                          ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreUI.EOSUIAcknowledgeEventId
struct UCoreUI_EOSUIAcknowledgeEventId_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSUIAcknowledgeEventIdOptions             Options;                                                   // 0x0008(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreUIShowFriends.HandleCallback
struct UEOSCoreUIShowFriends_HandleCallback_Params
{
	struct FEOSUIShowFriendsCallbackInfo               Data;                                                      // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreUIShowFriends.EOSUIShowFriendsAsync
struct UEOSCoreUIShowFriends_EOSUIShowFriendsAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSUIShowFriendsOptions                    Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UEOSCoreUIShowFriends*                       ReturnValue;                                               // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreUIHideFriends.HandleCallback
struct UEOSCoreUIHideFriends_HandleCallback_Params
{
	struct FEOSUIHideFriendsCallbackInfo               Data;                                                      // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreUIHideFriends.EOSUIHideFriendsAsync
struct UEOSCoreUIHideFriends_EOSUIHideFriendsAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSUIHideFriendsOptions                    Options;                                                   // 0x0008(0x0028)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UEOSCoreUIHideFriends*                       ReturnValue;                                               // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreUserInfo.GetUserInfo
struct UCoreUserInfo_GetUserInfo_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCoreUserInfo*                               ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreUserInfo.EOSUserInfoQueryUserInfoByExternalAccount
struct UCoreUserInfo_EOSUserInfoQueryUserInfoByExternalAccount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSUserInfoQueryUserInfoByExternalAccountOptions Options;                                                   // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreUserInfo.EOSUserInfoQueryUserInfoByDisplayName
struct UCoreUserInfo_EOSUserInfoQueryUserInfoByDisplayName_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSUserInfoQueryUserInfoByDisplayNameOptions Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreUserInfo.EOSUserInfoQueryUserInfo
struct UCoreUserInfo_EOSUserInfoQueryUserInfo_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSUserInfoQueryUserInfoOptions            Options;                                                   // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreUserInfo.EOSUserInfoGetExternalUserInfoCount
struct UCoreUserInfo_EOSUserInfoGetExternalUserInfoCount_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSUserInfoGetExternalUserInfoCountOptions Options;                                                   // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0050(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreUserInfo.EOSUserInfoCopyUserInfo
struct UCoreUserInfo_EOSUserInfoCopyUserInfo_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSUserInfoCopyUserInfoOptions             Options;                                                   // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSUserInfo                                OutUserInfo;                                               // 0x0050(0x0068)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreUserInfo.EOSUserInfoCopyExternalUserInfoByIndex
struct UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSUserInfoCopyExternalUserInfoByIndexOptions Options;                                                   // 0x0008(0x004C)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSUserInfoExternalUserInfo                OutExternalUserInfo;                                       // 0x0058(0x0028)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0080(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreUserInfo.EOSUserInfoCopyExternalUserInfoByAccountType
struct UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountType_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSUserInfoCopyExternalUserInfoByAccountTypeOptions Options;                                                   // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FEOSUserInfoExternalUserInfo                OutExternalUserInfo;                                       // 0x0050(0x0028)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0078(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.CoreUserInfo.EOSUserInfoCopyExternalUserInfoByAccountId
struct UCoreUserInfo_EOSUserInfoCopyExternalUserInfoByAccountId_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSUserInfoCopyExternalUserInfoByAccountIdOptions Options;                                                   // 0x0008(0x0058)  (Parm, NativeAccessSpecifierPublic)
	struct FEOSUserInfoExternalUserInfo                OutExternalUserInfo;                                       // 0x0060(0x0028)  (Parm, OutParm, NativeAccessSpecifierPublic)
	EOSCore_EOSResult                                  ReturnValue;                                               // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreUserInfoQueryUserInfo.HandleCallback
struct UEOSCoreUserInfoQueryUserInfo_HandleCallback_Params
{
	struct FEOSUserInfoQueryUserInfoCallbackInfo       Data;                                                      // 0x0000(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreUserInfoQueryUserInfo.EOSUserInfoQueryUserInfoAsync
struct UEOSCoreUserInfoQueryUserInfo_EOSUserInfoQueryUserInfoAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSUserInfoQueryUserInfoOptions            Options;                                                   // 0x0008(0x0048)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UEOSCoreUserInfoQueryUserInfo*               ReturnValue;                                               // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreUserInfoQueryUserInfoByDisplayName.HandleCallback
struct UEOSCoreUserInfoQueryUserInfoByDisplayName_HandleCallback_Params
{
	struct FEOSUserInfoQueryUserInfoByDisplayNameCallbackInfo Data;                                                      // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0068(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreUserInfoQueryUserInfoByDisplayName.EOSUserInfoQueryUserInfoByDisplayNameAsync
struct UEOSCoreUserInfoQueryUserInfoByDisplayName_EOSUserInfoQueryUserInfoByDisplayNameAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSUserInfoQueryUserInfoByDisplayNameOptions Options;                                                   // 0x0008(0x0038)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreUserInfoQueryUserInfoByDisplayName*  ReturnValue;                                               // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreUserInfoByExternalAccount.HandleCallback
struct UEOSCoreUserInfoByExternalAccount_HandleCallback_Params
{
	struct FEOSUserInfoQueryUserInfoByExternalAccountCallbackInfo Data;                                                      // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               bWasSuccessful;                                            // 0x0070(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EOSCore.EOSCoreUserInfoByExternalAccount.EOSUserInfoQueryUserInfoByExternalAccountAsync
struct UEOSCoreUserInfoByExternalAccount_EOSUserInfoQueryUserInfoByExternalAccountAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEOSUserInfoQueryUserInfoByExternalAccountOptions Options;                                                   // 0x0008(0x0040)  (Parm, NativeAccessSpecifierPublic)
	class UEOSCoreUserInfoByExternalAccount*           ReturnValue;                                               // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
