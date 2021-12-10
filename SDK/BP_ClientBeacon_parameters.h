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

// Function BP_ClientBeacon.BP_ClientBeacon_C.GetServerStatus
struct ABP_ClientBeacon_C_GetServerStatus_Params
{
	struct FString                                     Status;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_ClientBeacon.BP_ClientBeacon_C.ResponseServerInfo
struct ABP_ClientBeacon_C_ResponseServerInfo_Params
{
	struct FString                                     ServerName;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     MapName;                                                   // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Players;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Status;                                                    // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_ClientBeacon.BP_ClientBeacon_C.RequireServerInfo
struct ABP_ClientBeacon_C_RequireServerInfo_Params
{
};

// Function BP_ClientBeacon.BP_ClientBeacon_C.OnReady
struct ABP_ClientBeacon_C_OnReady_Params
{
};

// Function BP_ClientBeacon.BP_ClientBeacon_C.PingRequest
struct ABP_ClientBeacon_C_PingRequest_Params
{
};

// Function BP_ClientBeacon.BP_ClientBeacon_C.PingResponse
struct ABP_ClientBeacon_C_PingResponse_Params
{
	struct FString                                     Map;                                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               IsMatchmaking;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     ServerName;                                                // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_ClientBeacon.BP_ClientBeacon_C.PingRequestV2
struct ABP_ClientBeacon_C_PingRequestV2_Params
{
};

// Function BP_ClientBeacon.BP_ClientBeacon_C.PingResponseV2
struct ABP_ClientBeacon_C_PingResponseV2_Params
{
	struct FString                                     Map;                                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               IsMatchmaking;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     ServerName;                                                // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                BuildNumber;                                               // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsLobby;                                                   // 0x002C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ClientBeacon.BP_ClientBeacon_C.OnBeaconFailure
struct ABP_ClientBeacon_C_OnBeaconFailure_Params
{
};

// Function BP_ClientBeacon.BP_ClientBeacon_C.ExecuteUbergraph_BP_ClientBeacon
struct ABP_ClientBeacon_C_ExecuteUbergraph_BP_ClientBeacon_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
