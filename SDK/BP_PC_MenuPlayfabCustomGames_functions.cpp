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
//		Name   -> Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.GetCachedBuildId
//		Flags  -> ()
// Parameters:
//		struct FString                                     BuildId                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfabCustomGames_C::GetCachedBuildId(struct FString* BuildId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.GetCachedBuildId");

	UBP_PC_MenuPlayfabCustomGames_C_GetCachedBuildId_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BuildId != nullptr)
		*BuildId = params.BuildId;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.OnPlayFabResponse_243841614579DCA22F2E0BADB6B65521
//		Flags  -> ()
// Parameters:
//		struct FPlayFabBaseModel                           response                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               successful                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PC_MenuPlayfabCustomGames_C::OnPlayFabResponse_243841614579DCA22F2E0BADB6B65521(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.OnPlayFabResponse_243841614579DCA22F2E0BADB6B65521");

	UBP_PC_MenuPlayfabCustomGames_C_OnPlayFabResponse_243841614579DCA22F2E0BADB6B65521_Params params {};
	params.response = response;
	params.customData = customData;
	params.successful = successful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.RetrieveServerBuildId
//		Flags  -> ()
void UBP_PC_MenuPlayfabCustomGames_C::RetrieveServerBuildId()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.RetrieveServerBuildId");

	UBP_PC_MenuPlayfabCustomGames_C_RetrieveServerBuildId_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.OnListServersOK
//		Flags  -> ()
// Parameters:
//		class UVaRestRequestJSON*                          Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfabCustomGames_C::OnListServersOK(class UVaRestRequestJSON* Request)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.OnListServersOK");

	UBP_PC_MenuPlayfabCustomGames_C_OnListServersOK_Params params {};
	params.Request = Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.OnListServersFail
//		Flags  -> ()
// Parameters:
//		class UVaRestRequestJSON*                          Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfabCustomGames_C::OnListServersFail(class UVaRestRequestJSON* Request)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.OnListServersFail");

	UBP_PC_MenuPlayfabCustomGames_C_OnListServersFail_Params params {};
	params.Request = Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.RetrieveServerList
//		Flags  -> ()
// Parameters:
//		struct FString                                     Region                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     SkipToken                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfabCustomGames_C::RetrieveServerList(const struct FString& Region, const struct FString& SkipToken)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.RetrieveServerList");

	UBP_PC_MenuPlayfabCustomGames_C_RetrieveServerList_Params params {};
	params.Region = Region;
	params.SkipToken = SkipToken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.ServerLisetOK
//		Flags  -> ()
// Parameters:
//		class UVaRestRequestJSON*                          Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfabCustomGames_C::ServerLisetOK(class UVaRestRequestJSON* Request)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.ServerLisetOK");

	UBP_PC_MenuPlayfabCustomGames_C_ServerLisetOK_Params params {};
	params.Request = Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.ServerListFail
//		Flags  -> ()
// Parameters:
//		class UVaRestRequestJSON*                          Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfabCustomGames_C::ServerListFail(class UVaRestRequestJSON* Request)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.ServerListFail");

	UBP_PC_MenuPlayfabCustomGames_C_ServerListFail_Params params {};
	params.Request = Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.CreateServer
//		Flags  -> ()
// Parameters:
//		struct FString                                     Map                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     ServerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Region                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfabCustomGames_C::CreateServer(const struct FString& Map, const struct FString& ServerName, const struct FString& Region)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.CreateServer");

	UBP_PC_MenuPlayfabCustomGames_C_CreateServer_Params params {};
	params.Map = Map;
	params.ServerName = ServerName;
	params.Region = Region;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.CreateServerOK
//		Flags  -> ()
// Parameters:
//		class UVaRestRequestJSON*                          Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfabCustomGames_C::CreateServerOK(class UVaRestRequestJSON* Request)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.CreateServerOK");

	UBP_PC_MenuPlayfabCustomGames_C_CreateServerOK_Params params {};
	params.Request = Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.CreateServerFail
//		Flags  -> ()
// Parameters:
//		class UVaRestRequestJSON*                          Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfabCustomGames_C::CreateServerFail(class UVaRestRequestJSON* Request)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.CreateServerFail");

	UBP_PC_MenuPlayfabCustomGames_C_CreateServerFail_Params params {};
	params.Request = Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.SetBusy
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<E_RequestType_E_RequestType>           Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfabCustomGames_C::SetBusy(TEnumAsByte<E_RequestType_E_RequestType> Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.SetBusy");

	UBP_PC_MenuPlayfabCustomGames_C_SetBusy_Params params {};
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.Release
//		Flags  -> ()
void UBP_PC_MenuPlayfabCustomGames_C::Release()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.Release");

	UBP_PC_MenuPlayfabCustomGames_C_Release_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.ContinuePollServers
//		Flags  -> ()
// Parameters:
//		struct FString                                     SkipToken                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfabCustomGames_C::ContinuePollServers(const struct FString& SkipToken)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.ContinuePollServers");

	UBP_PC_MenuPlayfabCustomGames_C_ContinuePollServers_Params params {};
	params.SkipToken = SkipToken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.DoGetBuildIdRequest
//		Flags  -> ()
// Parameters:
//		bool                                               IsRetry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PC_MenuPlayfabCustomGames_C::DoGetBuildIdRequest(bool IsRetry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.DoGetBuildIdRequest");

	UBP_PC_MenuPlayfabCustomGames_C_DoGetBuildIdRequest_Params params {};
	params.IsRetry = IsRetry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.DoGetServerListRequest
//		Flags  -> ()
// Parameters:
//		struct FString                                     Region                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     SkipToken                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               IsRetry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PC_MenuPlayfabCustomGames_C::DoGetServerListRequest(const struct FString& Region, const struct FString& SkipToken, bool IsRetry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.DoGetServerListRequest");

	UBP_PC_MenuPlayfabCustomGames_C_DoGetServerListRequest_Params params {};
	params.Region = Region;
	params.SkipToken = SkipToken;
	params.IsRetry = IsRetry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.DoCreateServerRequest
//		Flags  -> ()
// Parameters:
//		struct FString                                     Map                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     ServerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Region                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               IsRetry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PC_MenuPlayfabCustomGames_C::DoCreateServerRequest(const struct FString& Map, const struct FString& ServerName, const struct FString& Region, bool IsRetry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.DoCreateServerRequest");

	UBP_PC_MenuPlayfabCustomGames_C_DoCreateServerRequest_Params params {};
	params.Map = Map;
	params.ServerName = ServerName;
	params.Region = Region;
	params.IsRetry = IsRetry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.OKGetBuildNumber
//		Flags  -> ()
// Parameters:
//		class UVaRestRequestJSON*                          Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfabCustomGames_C::OKGetBuildNumber(class UVaRestRequestJSON* Request)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.OKGetBuildNumber");

	UBP_PC_MenuPlayfabCustomGames_C_OKGetBuildNumber_Params params {};
	params.Request = Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.FailGetBuildNumber
//		Flags  -> ()
// Parameters:
//		class UVaRestRequestJSON*                          Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfabCustomGames_C::FailGetBuildNumber(class UVaRestRequestJSON* Request)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.FailGetBuildNumber");

	UBP_PC_MenuPlayfabCustomGames_C_FailGetBuildNumber_Params params {};
	params.Request = Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.DoGetBuildNumber
//		Flags  -> ()
// Parameters:
//		bool                                               IsRetry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_PC_MenuPlayfabCustomGames_C::DoGetBuildNumber(bool IsRetry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.DoGetBuildNumber");

	UBP_PC_MenuPlayfabCustomGames_C_DoGetBuildNumber_Params params {};
	params.IsRetry = IsRetry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.GetActualBuildNumber
//		Flags  -> ()
void UBP_PC_MenuPlayfabCustomGames_C::GetActualBuildNumber()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.GetActualBuildNumber");

	UBP_PC_MenuPlayfabCustomGames_C_GetActualBuildNumber_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.JoinCustomGame
//		Flags  -> ()
// Parameters:
//		struct FString                                     SessionId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Region                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfabCustomGames_C::JoinCustomGame(const struct FString& SessionId, const struct FString& Region)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.JoinCustomGame");

	UBP_PC_MenuPlayfabCustomGames_C_JoinCustomGame_Params params {};
	params.SessionId = SessionId;
	params.Region = Region;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.CG_OK
//		Flags  -> ()
// Parameters:
//		struct FMultiplayerGetMultiplayerServerDetailsResponse Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfabCustomGames_C::CG_OK(const struct FMultiplayerGetMultiplayerServerDetailsResponse& Result, class UObject* customData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.CG_OK");

	UBP_PC_MenuPlayfabCustomGames_C_CG_OK_Params params {};
	params.Result = Result;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.CG_Fail
//		Flags  -> ()
// Parameters:
//		struct FPlayFabError                               Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfabCustomGames_C::CG_Fail(const struct FPlayFabError& Error, class UObject* customData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.CG_Fail");

	UBP_PC_MenuPlayfabCustomGames_C_CG_Fail_Params params {};
	params.Error = Error;
	params.customData = customData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.DoCheckSteamTicket
//		Flags  -> ()
// Parameters:
//		bool                                               IsRetry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     Ticket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfabCustomGames_C::DoCheckSteamTicket(bool IsRetry, const struct FString& Ticket)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.DoCheckSteamTicket");

	UBP_PC_MenuPlayfabCustomGames_C_DoCheckSteamTicket_Params params {};
	params.IsRetry = IsRetry;
	params.Ticket = Ticket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.CheckTicketOK
//		Flags  -> ()
// Parameters:
//		class UVaRestRequestJSON*                          Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfabCustomGames_C::CheckTicketOK(class UVaRestRequestJSON* Request)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.CheckTicketOK");

	UBP_PC_MenuPlayfabCustomGames_C_CheckTicketOK_Params params {};
	params.Request = Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.CheckTicketFail
//		Flags  -> ()
// Parameters:
//		class UVaRestRequestJSON*                          Request                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfabCustomGames_C::CheckTicketFail(class UVaRestRequestJSON* Request)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.CheckTicketFail");

	UBP_PC_MenuPlayfabCustomGames_C_CheckTicketFail_Params params {};
	params.Request = Request;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.CheckSteamTicket
//		Flags  -> ()
// Parameters:
//		struct FString                                     Ticket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfabCustomGames_C::CheckSteamTicket(const struct FString& Ticket)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.CheckSteamTicket");

	UBP_PC_MenuPlayfabCustomGames_C_CheckSteamTicket_Params params {};
	params.Ticket = Ticket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.ExecuteUbergraph_BP_PC_MenuPlayfabCustomGames
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_PC_MenuPlayfabCustomGames_C::ExecuteUbergraph_BP_PC_MenuPlayfabCustomGames(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.ExecuteUbergraph_BP_PC_MenuPlayfabCustomGames");

	UBP_PC_MenuPlayfabCustomGames_C_ExecuteUbergraph_BP_PC_MenuPlayfabCustomGames_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
