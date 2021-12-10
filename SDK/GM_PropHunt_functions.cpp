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
//		Name   -> Function GM_PropHunt.GM_PropHunt_C.GetPlayfabPlayers
//		Flags  -> ()
// Parameters:
//		TArray<class APC_PropHunt_C*>                      Players                                                    (Parm, OutParm)
void AGM_PropHunt_C::GetPlayfabPlayers(TArray<class APC_PropHunt_C*>* Players)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt.GM_PropHunt_C.GetPlayfabPlayers");

	AGM_PropHunt_C_GetPlayfabPlayers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt.GM_PropHunt_C.GetServerCapacity
//		Flags  -> ()
// Parameters:
//		int                                                Capacity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGM_PropHunt_C::GetServerCapacity(int* Capacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt.GM_PropHunt_C.GetServerCapacity");

	AGM_PropHunt_C_GetServerCapacity_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Capacity != nullptr)
		*Capacity = params.Capacity;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt.GM_PropHunt_C.GetMap
//		Flags  -> ()
// Parameters:
//		struct FString                                     Map                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void AGM_PropHunt_C::GetMap(struct FString* Map)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt.GM_PropHunt_C.GetMap");

	AGM_PropHunt_C_GetMap_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Map != nullptr)
		*Map = params.Map;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt.GM_PropHunt_C.GetMode
//		Flags  -> ()
// Parameters:
//		struct FString                                     Mode                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void AGM_PropHunt_C::GetMode(struct FString* Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt.GM_PropHunt_C.GetMode");

	AGM_PropHunt_C_GetMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Mode != nullptr)
		*Mode = params.Mode;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt.GM_PropHunt_C.GetStatus
//		Flags  -> ()
// Parameters:
//		struct FString                                     Status                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void AGM_PropHunt_C::GetStatus(struct FString* Status)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt.GM_PropHunt_C.GetStatus");

	AGM_PropHunt_C_GetStatus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Status != nullptr)
		*Status = params.Status;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt.GM_PropHunt_C.GetPlayersCount
//		Flags  -> ()
// Parameters:
//		int                                                Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGM_PropHunt_C::GetPlayersCount(int* Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt.GM_PropHunt_C.GetPlayersCount");

	AGM_PropHunt_C_GetPlayersCount_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt.GM_PropHunt_C.SetAllPlayersHightlightPlyers
//		Flags  -> ()
// Parameters:
void AGM_PropHunt_C::SetAllPlayersHightlightPlyers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt.GM_PropHunt_C.SetAllPlayersHightlightPlyers");

	AGM_PropHunt_C_SetAllPlayersHightlightPlyers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt.GM_PropHunt_C.AddHightlightsPlayerInformation
//		Flags  -> ()
// Parameters:
//		class APC_PropHunt_C*                              Player_Cottroller                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGM_PropHunt_C::AddHightlightsPlayerInformation(class APC_PropHunt_C* Player_Cottroller)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt.GM_PropHunt_C.AddHightlightsPlayerInformation");

	AGM_PropHunt_C_AddHightlightsPlayerInformation_Params params {};
	params.Player_Cottroller = Player_Cottroller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt.GM_PropHunt_C.GetNextMap
//		Flags  -> ()
// Parameters:
//		struct FString                                     NextMap                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void AGM_PropHunt_C::GetNextMap(struct FString* NextMap)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt.GM_PropHunt_C.GetNextMap");

	AGM_PropHunt_C_GetNextMap_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NextMap != nullptr)
		*NextMap = params.NextMap;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt.GM_PropHunt_C.Get Random Surv
//		Flags  -> ()
// Parameters:
//		struct FString                                     KillerID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     NextKiller                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void AGM_PropHunt_C::Get_Random_Surv(const struct FString& KillerID, struct FString* NextKiller)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt.GM_PropHunt_C.Get Random Surv");

	AGM_PropHunt_C_Get_Random_Surv_Params params {};
	params.KillerID = KillerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NextKiller != nullptr)
		*NextKiller = params.NextKiller;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt.GM_PropHunt_C.SetStatus
//		Flags  -> ()
// Parameters:
//		struct FString                                     Status                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AGM_PropHunt_C::SetStatus(const struct FString& Status)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt.GM_PropHunt_C.SetStatus");

	AGM_PropHunt_C_SetStatus_Params params {};
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt.GM_PropHunt_C.GetMapName
//		Flags  -> ()
// Parameters:
//		struct FString                                     MapName                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void AGM_PropHunt_C::GetMapName(struct FString* MapName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt.GM_PropHunt_C.GetMapName");

	AGM_PropHunt_C_GetMapName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MapName != nullptr)
		*MapName = params.MapName;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt.GM_PropHunt_C.GetGameSettings
//		Flags  -> ()
// Parameters:
//		struct FString                                     Map                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Mode                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Players                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGM_PropHunt_C::GetGameSettings(struct FString* Map, struct FString* Mode, int* Players)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt.GM_PropHunt_C.GetGameSettings");

	AGM_PropHunt_C_GetGameSettings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Map != nullptr)
		*Map = params.Map;
	if (Mode != nullptr)
		*Mode = params.Mode;
	if (Players != nullptr)
		*Players = params.Players;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt.GM_PropHunt_C.PrintError
//		Flags  -> ()
// Parameters:
//		struct FString                                     Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AGM_PropHunt_C::PrintError(const struct FString& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt.GM_PropHunt_C.PrintError");

	AGM_PropHunt_C_PrintError_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt.GM_PropHunt_C.IsPublic
//		Flags  -> ()
// Parameters:
//		bool                                               Public                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGM_PropHunt_C::IsPublic(bool* Public)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt.GM_PropHunt_C.IsPublic");

	AGM_PropHunt_C_IsPublic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Public != nullptr)
		*Public = params.Public;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt.GM_PropHunt_C.Update SessionInfo
//		Flags  -> ()
void AGM_PropHunt_C::Update_SessionInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt.GM_PropHunt_C.Update SessionInfo");

	AGM_PropHunt_C_Update_SessionInfo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt.GM_PropHunt_C.IsPlayfabServer
//		Flags  -> ()
// Parameters:
//		bool                                               IsIt                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGM_PropHunt_C::IsPlayfabServer(bool* IsIt)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt.GM_PropHunt_C.IsPlayfabServer");

	AGM_PropHunt_C_IsPlayfabServer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsIt != nullptr)
		*IsIt = params.IsIt;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt.GM_PropHunt_C.ReceiveBeginPlay
//		Flags  -> ()
void AGM_PropHunt_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt.GM_PropHunt_C.ReceiveBeginPlay");

	AGM_PropHunt_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt.GM_PropHunt_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGM_PropHunt_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt.GM_PropHunt_C.ReceiveTick");

	AGM_PropHunt_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt.GM_PropHunt_C.StartGame
//		Flags  -> ()
void AGM_PropHunt_C::StartGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt.GM_PropHunt_C.StartGame");

	AGM_PropHunt_C_StartGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt.GM_PropHunt_C.K2_PostLogin
//		Flags  -> ()
// Parameters:
//		class APlayerController*                           NewPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGM_PropHunt_C::K2_PostLogin(class APlayerController* NewPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt.GM_PropHunt_C.K2_PostLogin");

	AGM_PropHunt_C_K2_PostLogin_Params params {};
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt.GM_PropHunt_C.ConfirmPlayerJoined
//		Flags  -> ()
// Parameters:
//		struct FString                                     PlayFabPlayerID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class APC_PropHunt_C*                              Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGM_PropHunt_C::ConfirmPlayerJoined(const struct FString& PlayFabPlayerID, class APC_PropHunt_C* Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt.GM_PropHunt_C.ConfirmPlayerJoined");

	AGM_PropHunt_C_ConfirmPlayerJoined_Params params {};
	params.PlayFabPlayerID = PlayFabPlayerID;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt.GM_PropHunt_C.K2_OnLogout
//		Flags  -> ()
// Parameters:
//		class AController*                                 ExitingController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGM_PropHunt_C::K2_OnLogout(class AController* ExitingController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt.GM_PropHunt_C.K2_OnLogout");

	AGM_PropHunt_C_K2_OnLogout_Params params {};
	params.ExitingController = ExitingController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt.GM_PropHunt_C.RaiseLobby
//		Flags  -> ()
void AGM_PropHunt_C::RaiseLobby()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt.GM_PropHunt_C.RaiseLobby");

	AGM_PropHunt_C_RaiseLobby_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt.GM_PropHunt_C.GmEndGame
//		Flags  -> ()
// Parameters:
//		bool                                               IsKillerWin                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGM_PropHunt_C::GmEndGame(bool IsKillerWin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt.GM_PropHunt_C.GmEndGame");

	AGM_PropHunt_C_GmEndGame_Params params {};
	params.IsKillerWin = IsKillerWin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt.GM_PropHunt_C.TravelToLevel
//		Flags  -> ()
// Parameters:
//		struct FString                                     LevelName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AGM_PropHunt_C::TravelToLevel(const struct FString& LevelName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt.GM_PropHunt_C.TravelToLevel");

	AGM_PropHunt_C_TravelToLevel_Params params {};
	params.LevelName = LevelName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt.GM_PropHunt_C.StartTutorial
//		Flags  -> ()
void AGM_PropHunt_C::StartTutorial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt.GM_PropHunt_C.StartTutorial");

	AGM_PropHunt_C_StartTutorial_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt.GM_PropHunt_C.SetupServer
//		Flags  -> ()
void AGM_PropHunt_C::SetupServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt.GM_PropHunt_C.SetupServer");

	AGM_PropHunt_C_SetupServer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt.GM_PropHunt_C.playerCalling
//		Flags  -> ()
// Parameters:
//		bool                                               IsPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class ANewAlarmBP_C*                               alarms                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGM_PropHunt_C::playerCalling(bool IsPlayer, class ANewAlarmBP_C* alarms)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt.GM_PropHunt_C.playerCalling");

	AGM_PropHunt_C_playerCalling_Params params {};
	params.IsPlayer = IsPlayer;
	params.alarms = alarms;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt.GM_PropHunt_C.SetPlayfabKillerID
//		Flags  -> ()
// Parameters:
//		struct FString                                     KillerID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void AGM_PropHunt_C::SetPlayfabKillerID(const struct FString& KillerID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt.GM_PropHunt_C.SetPlayfabKillerID");

	AGM_PropHunt_C_SetPlayfabKillerID_Params params {};
	params.KillerID = KillerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt.GM_PropHunt_C.ExecuteUbergraph_GM_PropHunt
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGM_PropHunt_C::ExecuteUbergraph_GM_PropHunt(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt.GM_PropHunt_C.ExecuteUbergraph_GM_PropHunt");

	AGM_PropHunt_C_ExecuteUbergraph_GM_PropHunt_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
