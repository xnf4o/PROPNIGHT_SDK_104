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
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetLobbyDataBP
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Value                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::GetLobbyDataBP(const struct FString& Key, struct FString* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetLobbyDataBP");

	UBPI_SteamGameInterface_C_GetLobbyDataBP_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetLobbyDataBP
//		Flags  -> ()
// Parameters:
//		struct FString                                     Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::SetLobbyDataBP(const struct FString& Key, const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetLobbyDataBP");

	UBPI_SteamGameInterface_C_SetLobbyDataBP_Params params {};
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetCustomGameData
//		Flags  -> ()
// Parameters:
//		struct FString                                     Address                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::SetCustomGameData(const struct FString& Address)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetCustomGameData");

	UBPI_SteamGameInterface_C_SetCustomGameData_Params params {};
	params.Address = Address;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetLobbyMembersCount
//		Flags  -> ()
// Parameters:
//		int                                                Members                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::GetLobbyMembersCount(int* Members)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetLobbyMembersCount");

	UBPI_SteamGameInterface_C_GetLobbyMembersCount_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Members != nullptr)
		*Members = params.Members;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetIsInMainMenuBP
//		Flags  -> ()
// Parameters:
//		bool                                               Val                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_SteamGameInterface_C::SetIsInMainMenuBP(bool Val)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetIsInMainMenuBP");

	UBPI_SteamGameInterface_C_SetIsInMainMenuBP_Params params {};
	params.Val = Val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.NotifyConnetCustomGame
//		Flags  -> ()
// Parameters:
//		struct FString                                     Address                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::NotifyConnetCustomGame(const struct FString& Address)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.NotifyConnetCustomGame");

	UBPI_SteamGameInterface_C_NotifyConnetCustomGame_Params params {};
	params.Address = Address;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetShouldCreateLobby
//		Flags  -> ()
// Parameters:
//		bool                                               Val                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_SteamGameInterface_C::SetShouldCreateLobby(bool Val)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetShouldCreateLobby");

	UBPI_SteamGameInterface_C_SetShouldCreateLobby_Params params {};
	params.Val = Val;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetShouldCreateLobby
//		Flags  -> ()
// Parameters:
//		bool                                               Val                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_SteamGameInterface_C::GetShouldCreateLobby(bool* Val)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetShouldCreateLobby");

	UBPI_SteamGameInterface_C_GetShouldCreateLobby_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Val != nullptr)
		*Val = params.Val;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.Get_GC_Data
//		Flags  -> ()
// Parameters:
//		struct FString                                     Region                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     session                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::Get_GC_Data(struct FString* Region, struct FString* session)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.Get_GC_Data");

	UBPI_SteamGameInterface_C_Get_GC_Data_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Region != nullptr)
		*Region = params.Region;
	if (session != nullptr)
		*session = params.session;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.Set_CS_Data
//		Flags  -> ()
// Parameters:
//		struct FString                                     SessionId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Region                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::Set_CS_Data(const struct FString& SessionId, const struct FString& Region)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.Set_CS_Data");

	UBPI_SteamGameInterface_C_Set_CS_Data_Params params {};
	params.SessionId = SessionId;
	params.Region = Region;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetCachedBuildId
//		Flags  -> ()
// Parameters:
//		struct FString                                     BuildId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::SetCachedBuildId(const struct FString& BuildId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetCachedBuildId");

	UBPI_SteamGameInterface_C_SetCachedBuildId_Params params {};
	params.BuildId = BuildId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetCachedBuildId
//		Flags  -> ()
// Parameters:
//		struct FString                                     BuildId                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::GetCachedBuildId(struct FString* BuildId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetCachedBuildId");

	UBPI_SteamGameInterface_C_GetCachedBuildId_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BuildId != nullptr)
		*BuildId = params.BuildId;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.ConnectCustomGame
//		Flags  -> ()
// Parameters:
//		struct FString                                     Address                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::ConnectCustomGame(const struct FString& Address)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.ConnectCustomGame");

	UBPI_SteamGameInterface_C_ConnectCustomGame_Params params {};
	params.Address = Address;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetRandomMap3
//		Flags  -> ()
// Parameters:
//		struct FString                                     MapName                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::GetRandomMap3(struct FString* MapName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetRandomMap3");

	UBPI_SteamGameInterface_C_GetRandomMap3_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MapName != nullptr)
		*MapName = params.MapName;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetRandomMap2
//		Flags  -> ()
// Parameters:
//		struct FString                                     Map                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::GetRandomMap2(struct FString* Map)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetRandomMap2");

	UBPI_SteamGameInterface_C_GetRandomMap2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Map != nullptr)
		*Map = params.Map;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetLobbyOwner
//		Flags  -> ()
// Parameters:
//		struct FString                                     OwnerID                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::GetLobbyOwner(struct FString* OwnerID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetLobbyOwner");

	UBPI_SteamGameInterface_C_GetLobbyOwner_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OwnerID != nullptr)
		*OwnerID = params.OwnerID;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.IsAnyoneOnLobby
//		Flags  -> ()
// Parameters:
//		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_SteamGameInterface_C::IsAnyoneOnLobby(bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.IsAnyoneOnLobby");

	UBPI_SteamGameInterface_C_IsAnyoneOnLobby_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.RestoreLobby
//		Flags  -> ()
void UBPI_SteamGameInterface_C::RestoreLobby()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.RestoreLobby");

	UBPI_SteamGameInterface_C_RestoreLobby_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.HandleStartupSteamInvite
//		Flags  -> ()
void UBPI_SteamGameInterface_C::HandleStartupSteamInvite()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.HandleStartupSteamInvite");

	UBPI_SteamGameInterface_C_HandleStartupSteamInvite_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetMenuLoaded
//		Flags  -> ()
void UBPI_SteamGameInterface_C::SetMenuLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetMenuLoaded");

	UBPI_SteamGameInterface_C_SetMenuLoaded_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.ConnectMatchmakingGame
//		Flags  -> ()
// Parameters:
//		struct FString                                     Address                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::ConnectMatchmakingGame(const struct FString& Address)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.ConnectMatchmakingGame");

	UBPI_SteamGameInterface_C_ConnectMatchmakingGame_Params params {};
	params.Address = Address;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetAmILobbyMember
//		Flags  -> ()
// Parameters:
//		bool                                               Member                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_SteamGameInterface_C::GetAmILobbyMember(bool* Member)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetAmILobbyMember");

	UBPI_SteamGameInterface_C_GetAmILobbyMember_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Member != nullptr)
		*Member = params.Member;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetPings
//		Flags  -> ()
// Parameters:
//		TArray<struct FPingQoSInfo>                        Pings                                                      (Parm, OutParm)
void UBPI_SteamGameInterface_C::GetPings(TArray<struct FPingQoSInfo>* Pings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetPings");

	UBPI_SteamGameInterface_C_GetPings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Pings != nullptr)
		*Pings = params.Pings;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetPings
//		Flags  -> ()
// Parameters:
//		TArray<struct FPingQoSInfo>                        Pings                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBPI_SteamGameInterface_C::SetPings(TArray<struct FPingQoSInfo> Pings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetPings");

	UBPI_SteamGameInterface_C_SetPings_Params params {};
	params.Pings = Pings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetPlayfabMatchPlayers
//		Flags  -> ()
// Parameters:
//		TArray<class UPlayFabJsonObject*>                  Players                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBPI_SteamGameInterface_C::SetPlayfabMatchPlayers(TArray<class UPlayFabJsonObject*> Players)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetPlayfabMatchPlayers");

	UBPI_SteamGameInterface_C_SetPlayfabMatchPlayers_Params params {};
	params.Players = Players;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.NotifySteamLobbyStopSearch
//		Flags  -> ()
void UBPI_SteamGameInterface_C::NotifySteamLobbyStopSearch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.NotifySteamLobbyStopSearch");

	UBPI_SteamGameInterface_C_NotifySteamLobbyStopSearch_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.InviteFriendToLobby
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::InviteFriendToLobby(const struct FString& ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.InviteFriendToLobby");

	UBPI_SteamGameInterface_C_InviteFriendToLobby_Params params {};
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.LeaveLobby
//		Flags  -> ()
void UBPI_SteamGameInterface_C::LeaveLobby()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.LeaveLobby");

	UBPI_SteamGameInterface_C_LeaveLobby_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetSteamFriendList
//		Flags  -> ()
// Parameters:
//		TArray<struct FSteamFriend>                        Friends                                                    (Parm, OutParm)
void UBPI_SteamGameInterface_C::GetSteamFriendList(TArray<struct FSteamFriend>* Friends)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetSteamFriendList");

	UBPI_SteamGameInterface_C_GetSteamFriendList_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Friends != nullptr)
		*Friends = params.Friends;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.IsLobbyOwner
//		Flags  -> ()
// Parameters:
//		bool                                               Owner                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_SteamGameInterface_C::IsLobbyOwner(bool* Owner)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.IsLobbyOwner");

	UBPI_SteamGameInterface_C_IsLobbyOwner_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Owner != nullptr)
		*Owner = params.Owner;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetLobbyPlayfabPlayers
//		Flags  -> ()
// Parameters:
//		TArray<struct FString>                             Players                                                    (Parm, OutParm)
void UBPI_SteamGameInterface_C::GetLobbyPlayfabPlayers(TArray<struct FString>* Players)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetLobbyPlayfabPlayers");

	UBPI_SteamGameInterface_C_GetLobbyPlayfabPlayers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.NotifySteamLobbyConnect
//		Flags  -> ()
// Parameters:
//		struct FString                                     Address                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::NotifySteamLobbyConnect(const struct FString& Address)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.NotifySteamLobbyConnect");

	UBPI_SteamGameInterface_C_NotifySteamLobbyConnect_Params params {};
	params.Address = Address;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.NotifySteamLobbyStartSearch
//		Flags  -> ()
// Parameters:
//		struct FString                                     Ticket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::NotifySteamLobbyStartSearch(const struct FString& Ticket)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.NotifySteamLobbyStartSearch");

	UBPI_SteamGameInterface_C_NotifySteamLobbyStartSearch_Params params {};
	params.Ticket = Ticket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.CreateSteamLobby
//		Flags  -> ()
void UBPI_SteamGameInterface_C::CreateSteamLobby()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.CreateSteamLobby");

	UBPI_SteamGameInterface_C_CreateSteamLobby_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.RunSteamCallback
//		Flags  -> ()
void UBPI_SteamGameInterface_C::RunSteamCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.RunSteamCallback");

	UBPI_SteamGameInterface_C_RunSteamCallback_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetIsMatchmaking
//		Flags  -> ()
// Parameters:
//		bool                                               Is                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_SteamGameInterface_C::GetIsMatchmaking(bool* Is)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetIsMatchmaking");

	UBPI_SteamGameInterface_C_GetIsMatchmaking_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Is != nullptr)
		*Is = params.Is;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetIsMatchMaking
//		Flags  -> ()
// Parameters:
//		bool                                               Is                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_SteamGameInterface_C::SetIsMatchMaking(bool Is)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetIsMatchMaking");

	UBPI_SteamGameInterface_C_SetIsMatchMaking_Params params {};
	params.Is = Is;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetKillerID
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::GetKillerID(struct FString* ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetKillerID");

	UBPI_SteamGameInterface_C_GetKillerID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetKillerID
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::SetKillerID(const struct FString& ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetKillerID");

	UBPI_SteamGameInterface_C_SetKillerID_Params params {};
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetIsWithEditor
//		Flags  -> ()
// Parameters:
//		bool                                               IsEditor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_SteamGameInterface_C::GetIsWithEditor(bool* IsEditor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetIsWithEditor");

	UBPI_SteamGameInterface_C_GetIsWithEditor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsEditor != nullptr)
		*IsEditor = params.IsEditor;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.IsPlayfabServerV2
//		Flags  -> ()
// Parameters:
//		bool                                               Is                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_SteamGameInterface_C::IsPlayfabServerV2(bool* Is)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.IsPlayfabServerV2");

	UBPI_SteamGameInterface_C_IsPlayfabServerV2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Is != nullptr)
		*Is = params.Is;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetServerId
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::GetServerId(struct FString* ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetServerId");

	UBPI_SteamGameInterface_C_GetServerId_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetServerId
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::SetServerId(const struct FString& ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetServerId");

	UBPI_SteamGameInterface_C_SetServerId_Params params {};
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetServerName
//		Flags  -> ()
// Parameters:
//		struct FString                                     Name                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::GetServerName(struct FString* Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetServerName");

	UBPI_SteamGameInterface_C_GetServerName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetServerName
//		Flags  -> ()
// Parameters:
//		struct FString                                     Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::SetServerName(const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetServerName");

	UBPI_SteamGameInterface_C_SetServerName_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetBuildNumber
//		Flags  -> ()
// Parameters:
//		int                                                BuildNumber                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::GetBuildNumber(int* BuildNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetBuildNumber");

	UBPI_SteamGameInterface_C_GetBuildNumber_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BuildNumber != nullptr)
		*BuildNumber = params.BuildNumber;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetActualServer
//		Flags  -> ()
void UBPI_SteamGameInterface_C::SetActualServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetActualServer");

	UBPI_SteamGameInterface_C_SetActualServer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetIsActualServer
//		Flags  -> ()
// Parameters:
//		bool                                               IsActual                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_SteamGameInterface_C::GetIsActualServer(bool* IsActual)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetIsActualServer");

	UBPI_SteamGameInterface_C_GetIsActualServer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsActual != nullptr)
		*IsActual = params.IsActual;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetServerRegion
//		Flags  -> ()
// Parameters:
//		struct FString                                     Region                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::GetServerRegion(struct FString* Region)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetServerRegion");

	UBPI_SteamGameInterface_C_GetServerRegion_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Region != nullptr)
		*Region = params.Region;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetServerRegion
//		Flags  -> ()
// Parameters:
//		struct FString                                     Region                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::SetServerRegion(const struct FString& Region)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetServerRegion");

	UBPI_SteamGameInterface_C_SetServerRegion_Params params {};
	params.Region = Region;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetGameServerSettings
//		Flags  -> ()
// Parameters:
//		struct FS_GameSettings                             GameSettings                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		struct FS_ServerSettings                           ServerSettings                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::SetGameServerSettings(const struct FS_GameSettings& GameSettings, const struct FS_ServerSettings& ServerSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetGameServerSettings");

	UBPI_SteamGameInterface_C_SetGameServerSettings_Params params {};
	params.GameSettings = GameSettings;
	params.ServerSettings = ServerSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetServiceAddress
//		Flags  -> ()
// Parameters:
//		struct FString                                     Address                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::SetServiceAddress(const struct FString& Address)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetServiceAddress");

	UBPI_SteamGameInterface_C_SetServiceAddress_Params params {};
	params.Address = Address;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetServiceAddress
//		Flags  -> ()
// Parameters:
//		struct FString                                     Address                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::GetServiceAddress(struct FString* Address)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetServiceAddress");

	UBPI_SteamGameInterface_C_GetServiceAddress_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Address != nullptr)
		*Address = params.Address;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetServerSettings
//		Flags  -> ()
// Parameters:
//		struct FS_ServerSettings                           ServerSettings                                             (Parm, OutParm, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::GetServerSettings(struct FS_ServerSettings* ServerSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetServerSettings");

	UBPI_SteamGameInterface_C_GetServerSettings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ServerSettings != nullptr)
		*ServerSettings = params.ServerSettings;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetPlayerName
//		Flags  -> ()
// Parameters:
//		struct FString                                     Nickname                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::GetPlayerName(struct FString* Nickname)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetPlayerName");

	UBPI_SteamGameInterface_C_GetPlayerName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Nickname != nullptr)
		*Nickname = params.Nickname;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetGameSettings
//		Flags  -> ()
// Parameters:
//		struct FS_GameSettings                             GameSettings                                               (Parm, OutParm, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::GetGameSettings(struct FS_GameSettings* GameSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetGameSettings");

	UBPI_SteamGameInterface_C_GetGameSettings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GameSettings != nullptr)
		*GameSettings = params.GameSettings;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.CreateServerWithSettings
//		Flags  -> ()
// Parameters:
//		struct FS_GameSettings                             Settings                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		struct FS_ServerSettings                           ServerSettings                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::CreateServerWithSettings(const struct FS_GameSettings& Settings, const struct FS_ServerSettings& ServerSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.CreateServerWithSettings");

	UBPI_SteamGameInterface_C_CreateServerWithSettings_Params params {};
	params.Settings = Settings;
	params.ServerSettings = ServerSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetLoggedIn
//		Flags  -> ()
// Parameters:
//		bool                                               IsLogged                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_SteamGameInterface_C::SetLoggedIn(bool IsLogged)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.SetLoggedIn");

	UBPI_SteamGameInterface_C_SetLoggedIn_Params params {};
	params.IsLogged = IsLogged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.IsLoggedIn
//		Flags  -> ()
// Parameters:
//		bool                                               IsLoggedIn                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_SteamGameInterface_C::IsLoggedIn(bool* IsLoggedIn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.IsLoggedIn");

	UBPI_SteamGameInterface_C_IsLoggedIn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsLoggedIn != nullptr)
		*IsLoggedIn = params.IsLoggedIn;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.CancelSearch
//		Flags  -> ()
void UBPI_SteamGameInterface_C::CancelSearch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.CancelSearch");

	UBPI_SteamGameInterface_C_CancelSearch_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.LeaveAndSearch
//		Flags  -> ()
void UBPI_SteamGameInterface_C::LeaveAndSearch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.LeaveAndSearch");

	UBPI_SteamGameInterface_C_LeaveAndSearch_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetAudioHandles
//		Flags  -> ()
// Parameters:
//		struct FS_AudioHandles                             AudioHandles                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::GetAudioHandles(struct FS_AudioHandles* AudioHandles)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.GetAudioHandles");

	UBPI_SteamGameInterface_C_GetAudioHandles_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AudioHandles != nullptr)
		*AudioHandles = params.AudioHandles;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.Search
//		Flags  -> ()
void UBPI_SteamGameInterface_C::Search()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.Search");

	UBPI_SteamGameInterface_C_Search_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.MainMenu
//		Flags  -> ()
void UBPI_SteamGameInterface_C::MainMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.MainMenu");

	UBPI_SteamGameInterface_C_MainMenu_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.IsPublic
//		Flags  -> ()
// Parameters:
//		bool                                               Public                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_SteamGameInterface_C::IsPublic(bool* Public)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.IsPublic");

	UBPI_SteamGameInterface_C_IsPublic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Public != nullptr)
		*Public = params.Public;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.Join
//		Flags  -> ()
// Parameters:
//		struct FBlueprintSessionResult                     session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UBPI_SteamGameInterface_C::Join(const struct FBlueprintSessionResult& session)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.Join");

	UBPI_SteamGameInterface_C_Join_Params params {};
	params.session = session;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.Starter
//		Flags  -> ()
// Parameters:
//		bool                                               Private                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     Map                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_SteamGameInterface_C::Starter(bool Private, const struct FString& Map)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SteamGameInterface.BPI_SteamGameInterface_C.Starter");

	UBPI_SteamGameInterface_C_Starter_Params params {};
	params.Private = Private;
	params.Map = Map;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
