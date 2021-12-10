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
//		Name   -> Function BP_ClientBeacon.BP_ClientBeacon_C.GetServerStatus
//		Flags  -> ()
// Parameters:
//		struct FString                                     Status                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void ABP_ClientBeacon_C::GetServerStatus(struct FString* Status)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ClientBeacon.BP_ClientBeacon_C.GetServerStatus");

	ABP_ClientBeacon_C_GetServerStatus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Status != nullptr)
		*Status = params.Status;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_ClientBeacon.BP_ClientBeacon_C.ResponseServerInfo
//		Flags  -> ()
// Parameters:
//		struct FString                                     ServerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     MapName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Players                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Status                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_ClientBeacon_C::ResponseServerInfo(const struct FString& ServerName, const struct FString& MapName, int Players, const struct FString& Status)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ClientBeacon.BP_ClientBeacon_C.ResponseServerInfo");

	ABP_ClientBeacon_C_ResponseServerInfo_Params params {};
	params.ServerName = ServerName;
	params.MapName = MapName;
	params.Players = Players;
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_ClientBeacon.BP_ClientBeacon_C.RequireServerInfo
//		Flags  -> ()
void ABP_ClientBeacon_C::RequireServerInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ClientBeacon.BP_ClientBeacon_C.RequireServerInfo");

	ABP_ClientBeacon_C_RequireServerInfo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_ClientBeacon.BP_ClientBeacon_C.OnReady
//		Flags  -> ()
void ABP_ClientBeacon_C::OnReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ClientBeacon.BP_ClientBeacon_C.OnReady");

	ABP_ClientBeacon_C_OnReady_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_ClientBeacon.BP_ClientBeacon_C.PingRequest
//		Flags  -> ()
void ABP_ClientBeacon_C::PingRequest()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ClientBeacon.BP_ClientBeacon_C.PingRequest");

	ABP_ClientBeacon_C_PingRequest_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_ClientBeacon.BP_ClientBeacon_C.PingResponse
//		Flags  -> ()
// Parameters:
//		struct FString                                     Map                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               IsMatchmaking                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     ServerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void ABP_ClientBeacon_C::PingResponse(const struct FString& Map, bool IsMatchmaking, const struct FString& ServerName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ClientBeacon.BP_ClientBeacon_C.PingResponse");

	ABP_ClientBeacon_C_PingResponse_Params params {};
	params.Map = Map;
	params.IsMatchmaking = IsMatchmaking;
	params.ServerName = ServerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_ClientBeacon.BP_ClientBeacon_C.PingRequestV2
//		Flags  -> ()
void ABP_ClientBeacon_C::PingRequestV2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ClientBeacon.BP_ClientBeacon_C.PingRequestV2");

	ABP_ClientBeacon_C_PingRequestV2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_ClientBeacon.BP_ClientBeacon_C.PingResponseV2
//		Flags  -> ()
// Parameters:
//		struct FString                                     Map                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               IsMatchmaking                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     ServerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                BuildNumber                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsLobby                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ClientBeacon_C::PingResponseV2(const struct FString& Map, bool IsMatchmaking, const struct FString& ServerName, int BuildNumber, bool IsLobby)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ClientBeacon.BP_ClientBeacon_C.PingResponseV2");

	ABP_ClientBeacon_C_PingResponseV2_Params params {};
	params.Map = Map;
	params.IsMatchmaking = IsMatchmaking;
	params.ServerName = ServerName;
	params.BuildNumber = BuildNumber;
	params.IsLobby = IsLobby;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_ClientBeacon.BP_ClientBeacon_C.OnBeaconFailure
//		Flags  -> ()
void ABP_ClientBeacon_C::OnBeaconFailure()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ClientBeacon.BP_ClientBeacon_C.OnBeaconFailure");

	ABP_ClientBeacon_C_OnBeaconFailure_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_ClientBeacon.BP_ClientBeacon_C.ExecuteUbergraph_BP_ClientBeacon
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ClientBeacon_C::ExecuteUbergraph_BP_ClientBeacon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ClientBeacon.BP_ClientBeacon_C.ExecuteUbergraph_BP_ClientBeacon");

	ABP_ClientBeacon_C_ExecuteUbergraph_BP_ClientBeacon_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
