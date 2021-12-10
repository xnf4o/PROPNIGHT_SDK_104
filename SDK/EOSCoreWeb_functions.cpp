// Name: P, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00000000
//		Name   -> Function EOSCoreWeb.EOSWebAuthLibrary.RequestAuthAccessToken
//		Flags  -> ()
// Parameters:
//		struct FScriptDelegate                             Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FRequestAuthAccessTokenRequest              Request                                                    (Parm, NativeAccessSpecifierPublic)
void UEOSWebAuthLibrary::RequestAuthAccessToken(const struct FScriptDelegate& Callback, const struct FRequestAuthAccessTokenRequest& Request)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EOSCoreWeb.EOSWebAuthLibrary.RequestAuthAccessToken");

	UEOSWebAuthLibrary_RequestAuthAccessToken_Params params {};
	params.Callback = Callback;
	params.Request = Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EOSCoreWeb.EOSWebAuthLibrary.InitiateEpicAuthentication
//		Flags  -> ()
// Parameters:
//		struct FScriptDelegate                             Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FInitiateEpicAuthenticationRequest          Request                                                    (Parm, NativeAccessSpecifierPublic)
void UEOSWebAuthLibrary::InitiateEpicAuthentication(const struct FScriptDelegate& Callback, const struct FInitiateEpicAuthenticationRequest& Request)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EOSCoreWeb.EOSWebAuthLibrary.InitiateEpicAuthentication");

	UEOSWebAuthLibrary_InitiateEpicAuthentication_Params params {};
	params.Callback = Callback;
	params.Request = Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EOSCoreWeb.EOSWebConnectLibrary.RequestAccessToken
//		Flags  -> ()
// Parameters:
//		struct FRequestAccessTokenRequest                  Request                                                    (Parm, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UEOSWebConnectLibrary::RequestAccessToken(const struct FRequestAccessTokenRequest& Request, const struct FScriptDelegate& Callback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EOSCoreWeb.EOSWebConnectLibrary.RequestAccessToken");

	UEOSWebConnectLibrary_RequestAccessToken_Params params {};
	params.Request = Request;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EOSCoreWeb.EOSWebPlayerTicketLibrary.SubmitTicket
//		Flags  -> ()
// Parameters:
//		struct FString                                     WebApiKey                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FSubmitTicketRequest                        Request                                                    (Parm, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UEOSWebPlayerTicketLibrary::SubmitTicket(const struct FString& WebApiKey, const struct FSubmitTicketRequest& Request, const struct FScriptDelegate& Callback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EOSCoreWeb.EOSWebPlayerTicketLibrary.SubmitTicket");

	UEOSWebPlayerTicketLibrary_SubmitTicket_Params params {};
	params.WebApiKey = WebApiKey;
	params.Request = Request;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EOSCoreWeb.EOSWebShared.GetPublicIp
//		Flags  -> ()
// Parameters:
//		struct FScriptDelegate                             Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UEOSWebShared::GetPublicIp(const struct FScriptDelegate& Callback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EOSCoreWeb.EOSWebShared.GetPublicIp");

	UEOSWebShared_GetPublicIp_Params params {};
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EOSCoreWeb.EOSWebVoiceLibrary.RemoveParticipant
//		Flags  -> ()
// Parameters:
//		struct FString                                     AccessToken                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ProductUserId                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     DeploymentId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     RoomName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UEOSWebVoiceLibrary::RemoveParticipant(const struct FString& AccessToken, const struct FString& ProductUserId, const struct FString& DeploymentId, const struct FString& RoomName, const struct FScriptDelegate& Callback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EOSCoreWeb.EOSWebVoiceLibrary.RemoveParticipant");

	UEOSWebVoiceLibrary_RemoveParticipant_Params params {};
	params.AccessToken = AccessToken;
	params.ProductUserId = ProductUserId;
	params.DeploymentId = DeploymentId;
	params.RoomName = RoomName;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EOSCoreWeb.EOSWebVoiceLibrary.ModifyParticipant
//		Flags  -> ()
// Parameters:
//		struct FString                                     AccessToken                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ProductUserId                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     DeploymentId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     RoomName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bHardMuted                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UEOSWebVoiceLibrary::ModifyParticipant(const struct FString& AccessToken, const struct FString& ProductUserId, const struct FString& DeploymentId, const struct FString& RoomName, bool bHardMuted, const struct FScriptDelegate& Callback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EOSCoreWeb.EOSWebVoiceLibrary.ModifyParticipant");

	UEOSWebVoiceLibrary_ModifyParticipant_Params params {};
	params.AccessToken = AccessToken;
	params.ProductUserId = ProductUserId;
	params.DeploymentId = DeploymentId;
	params.RoomName = RoomName;
	params.bHardMuted = bHardMuted;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EOSCoreWeb.EOSWebVoiceLibrary.CreateRoomToken
//		Flags  -> ()
// Parameters:
//		struct FString                                     AccessToken                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FWebRequestParticipantData>          Participants                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		struct FString                                     DeploymentId                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     RoomName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UEOSWebVoiceLibrary::CreateRoomToken(const struct FString& AccessToken, TArray<struct FWebRequestParticipantData> Participants, const struct FString& DeploymentId, const struct FString& RoomName, const struct FScriptDelegate& Callback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EOSCoreWeb.EOSWebVoiceLibrary.CreateRoomToken");

	UEOSWebVoiceLibrary_CreateRoomToken_Params params {};
	params.AccessToken = AccessToken;
	params.Participants = Participants;
	params.DeploymentId = DeploymentId;
	params.RoomName = RoomName;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
