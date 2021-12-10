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

// Function Propnight.BlueprintCopyTextMethod.PasteMessageFromClipboard
struct UBlueprintCopyTextMethod_PasteMessageFromClipboard_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.BlueprintCopyTextMethod.GetImportedTextureSize
struct UBlueprintCopyTextMethod_GetImportedTextureSize_Params
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                                   ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.BlueprintCopyTextMethod.CopyMessageToClipboard
struct UBlueprintCopyTextMethod_CopyMessageToClipboard_Params
{
	struct FString                                     Text;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.GSN_Prophunt.SetMaxPlayers
struct AGSN_Prophunt_SetMaxPlayers_Params
{
	int                                                maxPlayerClients;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.HTTP_Wrapper.ShutdownGame
struct UHTTP_Wrapper_ShutdownGame_Params
{
};

// Function Propnight.HTTP_Wrapper.ServerInfoToJSON
struct UHTTP_Wrapper_ServerInfoToJSON_Params
{
	struct FServerInfo                                 ServerInfo;                                                // 0x0000(0x00A0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x00A0(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.HTTP_Wrapper.SendRequest
struct UHTTP_Wrapper_SendRequest_Params
{
	struct FString                                     Address;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.HTTP_Wrapper.SendPOSTRequestWithHeader
struct UHTTP_Wrapper_SendPOSTRequestWithHeader_Params
{
	struct FString                                     Address;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsServer;                                                  // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Header;                                                    // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     HeaderValue;                                               // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.HTTP_Wrapper.SendPOSTRequest
struct UHTTP_Wrapper_SendPOSTRequest_Params
{
	struct FString                                     Address;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsServer;                                                  // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.HTTP_Wrapper.OnResponse
struct UHTTP_Wrapper_OnResponse_Params
{
	struct FString                                     Content;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.HTTP_Wrapper.OnError
struct UHTTP_Wrapper_OnError_Params
{
};

// Function Propnight.HTTP_Wrapper.JSONToArray
struct UHTTP_Wrapper_JSONToArray_Params
{
	struct FString                                     Json;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FServerInfo>                         ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Propnight.HTTP_Wrapper.GetURL
struct UHTTP_Wrapper_GetURL_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.NewATPCCameraFOVObject.CameraReset
struct UNewATPCCameraFOVObject_CameraReset_Params
{
};

// Function Propnight.PC_PropnightMainMenu.LabFunction
struct APC_PropnightMainMenu_LabFunction_Params
{
};

// Function Propnight.PC_PropnightMainMenu.CheckIsSteamModuleAvailable
struct APC_PropnightMainMenu_CheckIsSteamModuleAvailable_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.PC_PropnightMainMenu.CheckIsSteamInitialized
struct APC_PropnightMainMenu_CheckIsSteamInitialized_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.PhysicsCharacter.setPhysicsComponent
struct APhysicsCharacter_setPhysicsComponent_Params
{
	class USceneComponent*                             theComponent;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.PhysicsCharacter.PhysicsTick
struct APhysicsCharacter_PhysicsTick_Params
{
	float                                              SubstepDeltaTime;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.ProphuntGameInstance.WriteSteamAppidFile
struct UProphuntGameInstance_WriteSteamAppidFile_Params
{
};

// Function Propnight.ProphuntGameInstance.WithEditor
struct UProphuntGameInstance_WithEditor_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.ProphuntGameInstance.UninitializeVivox
struct UProphuntGameInstance_UninitializeVivox_Params
{
};

// Function Propnight.ProphuntGameInstance.ToggleMuteParticipant
struct UProphuntGameInstance_ToggleMuteParticipant_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMuted;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.ProphuntGameInstance.SetVoiceChatOutputVolume
struct UProphuntGameInstance_SetVoiceChatOutputVolume_Params
{
	int                                                Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.ProphuntGameInstance.SetVoiceChatMuted
struct UProphuntGameInstance_SetVoiceChatMuted_Params
{
	bool                                               bMuted;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.ProphuntGameInstance.SetVoiceChatInputVolume
struct UProphuntGameInstance_SetVoiceChatInputVolume_Params
{
	int                                                Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.ProphuntGameInstance.SetSteamLobbyUserData
struct UProphuntGameInstance_SetSteamLobbyUserData_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.ProphuntGameInstance.SetLobbyData
struct UProphuntGameInstance_SetLobbyData_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.ProphuntGameInstance.SendSteamLobbyMessage
struct UProphuntGameInstance_SendSteamLobbyMessage_Params
{
	struct FString                                     Message;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.ProphuntGameInstance.RestoreSteamLobbyMembers
struct UProphuntGameInstance_RestoreSteamLobbyMembers_Params
{
};

// Function Propnight.ProphuntGameInstance.ReleaseSteam
struct UProphuntGameInstance_ReleaseSteam_Params
{
};

// Function Propnight.ProphuntGameInstance.PushToTalk
struct UProphuntGameInstance_PushToTalk_Params
{
	bool                                               bPressed;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.ProphuntGameInstance.OnUserLeaveLobby
struct UProphuntGameInstance_OnUserLeaveLobby_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ID;                                                        // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.ProphuntGameInstance.OnUserEnterLobby
struct UProphuntGameInstance_OnUserEnterLobby_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ID;                                                        // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.ProphuntGameInstance.OnSteamMessage
struct UProphuntGameInstance_OnSteamMessage_Params
{
	struct FString                                     Ticket;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.ProphuntGameInstance.OnLobbyUserDataUpdated
struct UProphuntGameInstance_OnLobbyUserDataUpdated_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Entity;                                                    // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.ProphuntGameInstance.OnLobbyCreatedExt
struct UProphuntGameInstance_OnLobbyCreatedExt_Params
{
};

// Function Propnight.ProphuntGameInstance.OnJoinLobby
struct UProphuntGameInstance_OnJoinLobby_Params
{
	struct FString                                     LobbyId;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.ProphuntGameInstance.OnGetSessionTicketResponse
struct UProphuntGameInstance_OnGetSessionTicketResponse_Params
{
	bool                                               Success;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Ticket;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.ProphuntGameInstance.OnFriendGoneOffline
struct UProphuntGameInstance_OnFriendGoneOffline_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.ProphuntGameInstance.OnFriendComeOnline
struct UProphuntGameInstance_OnFriendComeOnline_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.ProphuntGameInstance.Logout
struct UProphuntGameInstance_Logout_Params
{
};

// Function Propnight.ProphuntGameInstance.LeaveVoiceChat
struct UProphuntGameInstance_LeaveVoiceChat_Params
{
};

// Function Propnight.ProphuntGameInstance.LeaveSteamLobby
struct UProphuntGameInstance_LeaveSteamLobby_Params
{
};

// Function Propnight.ProphuntGameInstance.JoinVoiceChatImpl
struct UProphuntGameInstance_JoinVoiceChatImpl_Params
{
	struct FString                                     ChannelName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamNum;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.ProphuntGameInstance.JoinSteamLobby
struct UProphuntGameInstance_JoinSteamLobby_Params
{
	struct FString                                     LobbyId;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.ProphuntGameInstance.IsAnyoneOnMySteamLobby
struct UProphuntGameInstance_IsAnyoneOnMySteamLobby_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.ProphuntGameInstance.InviteSteamFriend
struct UProphuntGameInstance_InviteSteamFriend_Params
{
	struct FString                                     FriendID;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.ProphuntGameInstance.InitializeVivox_Impl
struct UProphuntGameInstance_InitializeVivox_Impl_Params
{
};

// Function Propnight.ProphuntGameInstance.InitializeSteam
struct UProphuntGameInstance_InitializeSteam_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.ProphuntGameInstance.GetSteamSessionTicket
struct UProphuntGameInstance_GetSteamSessionTicket_Params
{
};

// Function Propnight.ProphuntGameInstance.GetSteamNickname
struct UProphuntGameInstance_GetSteamNickname_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.ProphuntGameInstance.GetSteamLobbyOwnerID
struct UProphuntGameInstance_GetSteamLobbyOwnerID_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.ProphuntGameInstance.GetSteamLobbyMembersData
struct UProphuntGameInstance_GetSteamLobbyMembersData_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Propnight.ProphuntGameInstance.GetSteamLobbyMembersCount
struct UProphuntGameInstance_GetSteamLobbyMembersCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.ProphuntGameInstance.GetSteamLobbyData
struct UProphuntGameInstance_GetSteamLobbyData_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.ProphuntGameInstance.GetSteamID
struct UProphuntGameInstance_GetSteamID_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.ProphuntGameInstance.GetSteamFriends
struct UProphuntGameInstance_GetSteamFriends_Params
{
	TArray<struct FSteamFriend>                        ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function Propnight.ProphuntGameInstance.CreateLobby
struct UProphuntGameInstance_CreateLobby_Params
{
};

// Function Propnight.ProphuntGameInstance.CallSteamCallback
struct UProphuntGameInstance_CallSteamCallback_Params
{
};

// Function Propnight.ProphuntGameInstance.AmILobbyOwner
struct UProphuntGameInstance_AmILobbyOwner_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.PropnightBeaconHost.Start
struct APropnightBeaconHost_Start_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.PropnightBeaconHost.AddHost
struct APropnightBeaconHost_AddHost_Params
{
	class AOnlineBeaconHostObject*                     HostObject;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.PropnightBeaconHostObject.UpdatePNClientBeaconType
struct APropnightBeaconHostObject_UpdatePNClientBeaconType_Params
{
};

// Function Propnight.PropnightOnlineBeaconClient.Start
struct APropnightOnlineBeaconClient_Start_Params
{
	struct FString                                     Address;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               portOverride;                                              // 0x0014(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0015(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Propnight.PropnightOnlineBeaconClient.Ready
struct APropnightOnlineBeaconClient_Ready_Params
{
};

// Function Propnight.PropnightOnlineBeaconClient.OnReady
struct APropnightOnlineBeaconClient_OnReady_Params
{
};

// Function Propnight.PropnightOnlineBeaconClient.OnBeaconFailure
struct APropnightOnlineBeaconClient_OnBeaconFailure_Params
{
};

// Function Propnight.PropnightOnlineBeaconClient.Disconnect
struct APropnightOnlineBeaconClient_Disconnect_Params
{
};

// Function Propnight.PropnightPlayerController.ClientJoinVoice
struct APropnightPlayerController_ClientJoinVoice_Params
{
	struct FString                                     ChannelName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamNum;                                                   // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
