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

// Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.GetCachedBuildId
struct UBP_PC_MenuPlayfabCustomGames_C_GetCachedBuildId_Params
{
	struct FString                                     BuildId;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.OnPlayFabResponse_243841614579DCA22F2E0BADB6B65521
struct UBP_PC_MenuPlayfabCustomGames_C_OnPlayFabResponse_243841614579DCA22F2E0BADB6B65521_Params
{
	struct FPlayFabBaseModel                           response;                                                  // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               successful;                                                // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.RetrieveServerBuildId
struct UBP_PC_MenuPlayfabCustomGames_C_RetrieveServerBuildId_Params
{
};

// Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.OnListServersOK
struct UBP_PC_MenuPlayfabCustomGames_C_OnListServersOK_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.OnListServersFail
struct UBP_PC_MenuPlayfabCustomGames_C_OnListServersFail_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.RetrieveServerList
struct UBP_PC_MenuPlayfabCustomGames_C_RetrieveServerList_Params
{
	struct FString                                     Region;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     SkipToken;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.ServerLisetOK
struct UBP_PC_MenuPlayfabCustomGames_C_ServerLisetOK_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.ServerListFail
struct UBP_PC_MenuPlayfabCustomGames_C_ServerListFail_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.CreateServer
struct UBP_PC_MenuPlayfabCustomGames_C_CreateServer_Params
{
	struct FString                                     Map;                                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ServerName;                                                // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Region;                                                    // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.CreateServerOK
struct UBP_PC_MenuPlayfabCustomGames_C_CreateServerOK_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.CreateServerFail
struct UBP_PC_MenuPlayfabCustomGames_C_CreateServerFail_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.SetBusy
struct UBP_PC_MenuPlayfabCustomGames_C_SetBusy_Params
{
	TEnumAsByte<E_RequestType_E_RequestType>           Type;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.Release
struct UBP_PC_MenuPlayfabCustomGames_C_Release_Params
{
};

// Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.ContinuePollServers
struct UBP_PC_MenuPlayfabCustomGames_C_ContinuePollServers_Params
{
	struct FString                                     SkipToken;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.DoGetBuildIdRequest
struct UBP_PC_MenuPlayfabCustomGames_C_DoGetBuildIdRequest_Params
{
	bool                                               IsRetry;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.DoGetServerListRequest
struct UBP_PC_MenuPlayfabCustomGames_C_DoGetServerListRequest_Params
{
	struct FString                                     Region;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     SkipToken;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               IsRetry;                                                   // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.DoCreateServerRequest
struct UBP_PC_MenuPlayfabCustomGames_C_DoCreateServerRequest_Params
{
	struct FString                                     Map;                                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ServerName;                                                // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Region;                                                    // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               IsRetry;                                                   // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.OKGetBuildNumber
struct UBP_PC_MenuPlayfabCustomGames_C_OKGetBuildNumber_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.FailGetBuildNumber
struct UBP_PC_MenuPlayfabCustomGames_C_FailGetBuildNumber_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.DoGetBuildNumber
struct UBP_PC_MenuPlayfabCustomGames_C_DoGetBuildNumber_Params
{
	bool                                               IsRetry;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.GetActualBuildNumber
struct UBP_PC_MenuPlayfabCustomGames_C_GetActualBuildNumber_Params
{
};

// Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.JoinCustomGame
struct UBP_PC_MenuPlayfabCustomGames_C_JoinCustomGame_Params
{
	struct FString                                     SessionId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Region;                                                    // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.CG_OK
struct UBP_PC_MenuPlayfabCustomGames_C_CG_OK_Params
{
	struct FMultiplayerGetMultiplayerServerDetailsResponse Result;                                                    // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // 0x00A8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.CG_Fail
struct UBP_PC_MenuPlayfabCustomGames_C_CG_Fail_Params
{
	struct FPlayFabError                               Error;                                                     // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.DoCheckSteamTicket
struct UBP_PC_MenuPlayfabCustomGames_C_DoCheckSteamTicket_Params
{
	bool                                               IsRetry;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Ticket;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.CheckTicketOK
struct UBP_PC_MenuPlayfabCustomGames_C_CheckTicketOK_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.CheckTicketFail
struct UBP_PC_MenuPlayfabCustomGames_C_CheckTicketFail_Params
{
	class UVaRestRequestJSON*                          Request;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.CheckSteamTicket
struct UBP_PC_MenuPlayfabCustomGames_C_CheckSteamTicket_Params
{
	struct FString                                     Ticket;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfabCustomGames.BP_PC_MenuPlayfabCustomGames_C.ExecuteUbergraph_BP_PC_MenuPlayfabCustomGames
struct UBP_PC_MenuPlayfabCustomGames_C_ExecuteUbergraph_BP_PC_MenuPlayfabCustomGames_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
