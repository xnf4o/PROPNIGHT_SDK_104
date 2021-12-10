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

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetQueueName
struct UBP_PC_MenuPlayfab_C_GetQueueName_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.MakePingRequest
struct UBP_PC_MenuPlayfab_C_MakePingRequest_Params
{
	struct FMultiplayerListQosServersForTitleResponse  ListQosServers;                                            // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.Ticket Member
struct UBP_PC_MenuPlayfab_C_Ticket_Member_Params
{
	class UPlayFabJsonObject*                          Data;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                          RMember;                                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.PlayersToEntities
struct UBP_PC_MenuPlayfab_C_PlayersToEntities_Params
{
	TArray<struct FString>                             Players;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UPlayFabJsonObject*>                  Entities;                                                  // 0x0010(0x0010)  (Parm, OutParm)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetPortByName
struct UBP_PC_MenuPlayfab_C_GetPortByName_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                          ServerDetails;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Port;                                                      // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.MakeInfoRequest
struct UBP_PC_MenuPlayfab_C_MakeInfoRequest_Params
{
	class UPlayFabJsonObject*                          res;                                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.MakeTicketCreator
struct UBP_PC_MenuPlayfab_C_MakeTicketCreator_Params
{
	class UPlayFabJsonObject*                          Data;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                          Result;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.MakeListRequest
struct UBP_PC_MenuPlayfab_C_MakeListRequest_Params
{
	class UPlayFabJsonObject*                          Request;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetBuidID
struct UBP_PC_MenuPlayfab_C_GetBuidID_Params
{
	struct FString                                     BuildId;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetSteamID
struct UBP_PC_MenuPlayfab_C_GetSteamID_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetDevID
struct UBP_PC_MenuPlayfab_C_GetDevID_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetID
struct UBP_PC_MenuPlayfab_C_GetID_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ID;                                                        // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.ObtainSteamID
struct UBP_PC_MenuPlayfab_C_ObtainSteamID_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.ObtainDevID
struct UBP_PC_MenuPlayfab_C_ObtainDevID_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.SaveID
struct UBP_PC_MenuPlayfab_C_SaveID_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Key;                                                       // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.LoadSteamID
struct UBP_PC_MenuPlayfab_C_LoadSteamID_Params
{
	bool                                               Has;                                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     ID;                                                        // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.LoadDevID
struct UBP_PC_MenuPlayfab_C_LoadDevID_Params
{
	bool                                               Has;                                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     ID;                                                        // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.LoadID
struct UBP_PC_MenuPlayfab_C_LoadID_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Has;                                                       // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     ID;                                                        // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_A92A282247ECE940F0053FAF63539A78
struct UBP_PC_MenuPlayfab_C_OnPlayFabResponse_A92A282247ECE940F0053FAF63539A78_Params
{
	struct FPlayFabBaseModel                           response;                                                  // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               successful;                                                // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_9FC35E3D44B5111A1BD7D58DA1ADA4C3
struct UBP_PC_MenuPlayfab_C_OnPlayFabResponse_9FC35E3D44B5111A1BD7D58DA1ADA4C3_Params
{
	struct FPlayFabBaseModel                           response;                                                  // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               successful;                                                // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_DEB0CB0E430C530F64D4448704AB2932
struct UBP_PC_MenuPlayfab_C_OnPlayFabResponse_DEB0CB0E430C530F64D4448704AB2932_Params
{
	struct FPlayFabBaseModel                           response;                                                  // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               successful;                                                // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_6C964D7D449A2BD5DF7C919725866912
struct UBP_PC_MenuPlayfab_C_OnPlayFabResponse_6C964D7D449A2BD5DF7C919725866912_Params
{
	struct FPlayFabBaseModel                           response;                                                  // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               successful;                                                // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_677A318A4235A59CCBF04882635DE43C
struct UBP_PC_MenuPlayfab_C_OnPlayFabResponse_677A318A4235A59CCBF04882635DE43C_Params
{
	struct FPlayFabBaseModel                           response;                                                  // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               successful;                                                // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_CB78BFF8498E6C17C5311DA80209927D
struct UBP_PC_MenuPlayfab_C_OnPlayFabResponse_CB78BFF8498E6C17C5311DA80209927D_Params
{
	struct FPlayFabBaseModel                           response;                                                  // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               successful;                                                // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_226D655344D07C8D45CF83B777A2CB9B
struct UBP_PC_MenuPlayfab_C_OnPlayFabResponse_226D655344D07C8D45CF83B777A2CB9B_Params
{
	struct FPlayFabBaseModel                           response;                                                  // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               successful;                                                // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_63FFA46E446E8BE4A274F7A5F0FAA2E0
struct UBP_PC_MenuPlayfab_C_OnPlayFabResponse_63FFA46E446E8BE4A274F7A5F0FAA2E0_Params
{
	struct FPlayFabBaseModel                           response;                                                  // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               successful;                                                // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_9BC98809466C4A82FBDC15AD276707F2
struct UBP_PC_MenuPlayfab_C_OnPlayFabResponse_9BC98809466C4A82FBDC15AD276707F2_Params
{
	struct FPlayFabBaseModel                           response;                                                  // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               successful;                                                // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnPlayFabResponse_38B701DD4151EECD732D4887140B423E
struct UBP_PC_MenuPlayfab_C_OnPlayFabResponse_38B701DD4151EECD732D4887140B423E_Params
{
	struct FPlayFabBaseModel                           response;                                                  // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               successful;                                                // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.ReceiveBeginPlay
struct UBP_PC_MenuPlayfab_C_ReceiveBeginPlay_Params
{
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.LoginDev
struct UBP_PC_MenuPlayfab_C_LoginDev_Params
{
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CreateServer
struct UBP_PC_MenuPlayfab_C_CreateServer_Params
{
	struct FString                                     Cookie;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CreateServerOK
struct UBP_PC_MenuPlayfab_C_CreateServerOK_Params
{
	struct FMultiplayerRequestMultiplayerServerResponse Result;                                                    // 0x0000(0x00A8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // 0x00A8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CreateServerFail
struct UBP_PC_MenuPlayfab_C_CreateServerFail_Params
{
	struct FPlayFabError                               Error;                                                     // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.ListServers
struct UBP_PC_MenuPlayfab_C_ListServers_Params
{
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.ListServersOK
struct UBP_PC_MenuPlayfab_C_ListServersOK_Params
{
	struct FClientExecuteCloudScriptResult             Result;                                                    // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // 0x0060(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.ListServersFail
struct UBP_PC_MenuPlayfab_C_ListServersFail_Params
{
	struct FPlayFabError                               Error;                                                     // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.Search
struct UBP_PC_MenuPlayfab_C_Search_Params
{
	struct FString                                     Queue;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                          Data;                                                      // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.SearchOK
struct UBP_PC_MenuPlayfab_C_SearchOK_Params
{
	struct FMultiplayerCreateMatchmakingTicketResult   Result;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.SearchFail
struct UBP_PC_MenuPlayfab_C_SearchFail_Params
{
	struct FPlayFabError                               Error;                                                     // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.ReceiveTick
struct UBP_PC_MenuPlayfab_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CheckTicket
struct UBP_PC_MenuPlayfab_C_CheckTicket_Params
{
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CheckTicketOK
struct UBP_PC_MenuPlayfab_C_CheckTicketOK_Params
{
	struct FMultiplayerGetMatchmakingTicketResult      Result;                                                    // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // 0x0098(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CheckTicketFail
struct UBP_PC_MenuPlayfab_C_CheckTicketFail_Params
{
	struct FPlayFabError                               Error;                                                     // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CancelSearch
struct UBP_PC_MenuPlayfab_C_CancelSearch_Params
{
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CancelSearchOK
struct UBP_PC_MenuPlayfab_C_CancelSearchOK_Params
{
	struct FMultiplayerCancelMatchmakingTicketResult   Result;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class UObject*                                     customData;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CancelSearchFail
struct UBP_PC_MenuPlayfab_C_CancelSearchFail_Params
{
	struct FPlayFabError                               Error;                                                     // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetMatch
struct UBP_PC_MenuPlayfab_C_GetMatch_Params
{
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetMatchOK
struct UBP_PC_MenuPlayfab_C_GetMatchOK_Params
{
	struct FMultiplayerGetMatchResult                  Result;                                                    // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.GetMatchFail
struct UBP_PC_MenuPlayfab_C_GetMatchFail_Params
{
	struct FPlayFabError                               Error;                                                     // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.LoginSteam
struct UBP_PC_MenuPlayfab_C_LoginSteam_Params
{
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.Login
struct UBP_PC_MenuPlayfab_C_Login_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.LoginOK
struct UBP_PC_MenuPlayfab_C_LoginOK_Params
{
	struct FClientLoginResult                          Result;                                                    // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // 0x0068(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.LoginFail
struct UBP_PC_MenuPlayfab_C_LoginFail_Params
{
	struct FPlayFabError                               Error;                                                     // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CancelAllTickets
struct UBP_PC_MenuPlayfab_C_CancelAllTickets_Params
{
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CancelAllTicketsOK
struct UBP_PC_MenuPlayfab_C_CancelAllTicketsOK_Params
{
	struct FMultiplayerCancelAllMatchmakingTicketsForPlayerResult Result;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class UObject*                                     customData;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CancelAllTicketsFail
struct UBP_PC_MenuPlayfab_C_CancelAllTicketsFail_Params
{
	struct FPlayFabError                               Error;                                                     // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.JoinTicket
struct UBP_PC_MenuPlayfab_C_JoinTicket_Params
{
	struct FString                                     Ticket;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                          DataObject;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.JoinTicketOK
struct UBP_PC_MenuPlayfab_C_JoinTicketOK_Params
{
	struct FMultiplayerJoinMatchmakingTicketResult     Result;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class UObject*                                     customData;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.JoinTicketFail
struct UBP_PC_MenuPlayfab_C_JoinTicketFail_Params
{
	struct FPlayFabError                               Error;                                                     // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnQosServersSuccess
struct UBP_PC_MenuPlayfab_C_OnQosServersSuccess_Params
{
	struct FMultiplayerListQosServersForTitleResponse  Result;                                                    // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnQosServersFailure
struct UBP_PC_MenuPlayfab_C_OnQosServersFailure_Params
{
	struct FPlayFabError                               Error;                                                     // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     customData;                                                // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.CallPingRequest
struct UBP_PC_MenuPlayfab_C_CallPingRequest_Params
{
	bool                                               Include_All_Regions;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.OnTicketCanceled
struct UBP_PC_MenuPlayfab_C_OnTicketCanceled_Params
{
};

// Function BP_PC_MenuPlayfab.BP_PC_MenuPlayfab_C.ExecuteUbergraph_BP_PC_MenuPlayfab
struct UBP_PC_MenuPlayfab_C_ExecuteUbergraph_BP_PC_MenuPlayfab_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
