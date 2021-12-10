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

// Function EOSCoreWeb.EOSWebAuthLibrary.RequestAuthAccessToken
struct UEOSWebAuthLibrary_RequestAuthAccessToken_Params
{
	struct FScriptDelegate                             Callback;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FRequestAuthAccessTokenRequest              Request;                                                   // 0x0010(0x0088)  (Parm, NativeAccessSpecifierPublic)
};

// Function EOSCoreWeb.EOSWebAuthLibrary.InitiateEpicAuthentication
struct UEOSWebAuthLibrary_InitiateEpicAuthentication_Params
{
	struct FScriptDelegate                             Callback;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FInitiateEpicAuthenticationRequest          Request;                                                   // 0x0010(0x0038)  (Parm, NativeAccessSpecifierPublic)
};

// Function EOSCoreWeb.EOSWebConnectLibrary.RequestAccessToken
struct UEOSWebConnectLibrary_RequestAccessToken_Params
{
	struct FRequestAccessTokenRequest                  Request;                                                   // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCoreWeb.EOSWebPlayerTicketLibrary.SubmitTicket
struct UEOSWebPlayerTicketLibrary_SubmitTicket_Params
{
	struct FString                                     WebApiKey;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSubmitTicketRequest                        Request;                                                   // 0x0010(0x0088)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0098(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCoreWeb.EOSWebShared.GetPublicIp
struct UEOSWebShared_GetPublicIp_Params
{
	struct FScriptDelegate                             Callback;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCoreWeb.EOSWebVoiceLibrary.RemoveParticipant
struct UEOSWebVoiceLibrary_RemoveParticipant_Params
{
	struct FString                                     AccessToken;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ProductUserId;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DeploymentId;                                              // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RoomName;                                                  // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCoreWeb.EOSWebVoiceLibrary.ModifyParticipant
struct UEOSWebVoiceLibrary_ModifyParticipant_Params
{
	struct FString                                     AccessToken;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ProductUserId;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DeploymentId;                                              // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RoomName;                                                  // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHardMuted;                                                // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0044(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function EOSCoreWeb.EOSWebVoiceLibrary.CreateRoomToken
struct UEOSWebVoiceLibrary_CreateRoomToken_Params
{
	struct FString                                     AccessToken;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWebRequestParticipantData>          Participants;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     DeploymentId;                                              // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RoomName;                                                  // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
