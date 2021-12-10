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

// Function GM_PropHunt.GM_PropHunt_C.GetPlayfabPlayers
struct AGM_PropHunt_C_GetPlayfabPlayers_Params
{
	TArray<class APC_PropHunt_C*>                      Players;                                                   // 0x0000(0x0010)  (Parm, OutParm)
};

// Function GM_PropHunt.GM_PropHunt_C.GetServerCapacity
struct AGM_PropHunt_C_GetServerCapacity_Params
{
	int                                                Capacity;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GM_PropHunt.GM_PropHunt_C.GetMap
struct AGM_PropHunt_C_GetMap_Params
{
	struct FString                                     Map;                                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GM_PropHunt.GM_PropHunt_C.GetMode
struct AGM_PropHunt_C_GetMode_Params
{
	struct FString                                     Mode;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GM_PropHunt.GM_PropHunt_C.GetStatus
struct AGM_PropHunt_C_GetStatus_Params
{
	struct FString                                     Status;                                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GM_PropHunt.GM_PropHunt_C.GetPlayersCount
struct AGM_PropHunt_C_GetPlayersCount_Params
{
	int                                                Count;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GM_PropHunt.GM_PropHunt_C.SetAllPlayersHightlightPlyers
struct AGM_PropHunt_C_SetAllPlayersHightlightPlyers_Params
{
};

// Function GM_PropHunt.GM_PropHunt_C.AddHightlightsPlayerInformation
struct AGM_PropHunt_C_AddHightlightsPlayerInformation_Params
{
	class APC_PropHunt_C*                              Player_Cottroller;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GM_PropHunt.GM_PropHunt_C.GetNextMap
struct AGM_PropHunt_C_GetNextMap_Params
{
	struct FString                                     NextMap;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GM_PropHunt.GM_PropHunt_C.Get Random Surv
struct AGM_PropHunt_C_Get_Random_Surv_Params
{
	struct FString                                     KillerID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     NextKiller;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GM_PropHunt.GM_PropHunt_C.SetStatus
struct AGM_PropHunt_C_SetStatus_Params
{
	struct FString                                     Status;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GM_PropHunt.GM_PropHunt_C.GetMapName
struct AGM_PropHunt_C_GetMapName_Params
{
	struct FString                                     MapName;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GM_PropHunt.GM_PropHunt_C.GetGameSettings
struct AGM_PropHunt_C_GetGameSettings_Params
{
	struct FString                                     Map;                                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Mode;                                                      // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Players;                                                   // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GM_PropHunt.GM_PropHunt_C.PrintError
struct AGM_PropHunt_C_PrintError_Params
{
	struct FString                                     Text;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GM_PropHunt.GM_PropHunt_C.IsPublic
struct AGM_PropHunt_C_IsPublic_Params
{
	bool                                               Public;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GM_PropHunt.GM_PropHunt_C.Update SessionInfo
struct AGM_PropHunt_C_Update_SessionInfo_Params
{
};

// Function GM_PropHunt.GM_PropHunt_C.IsPlayfabServer
struct AGM_PropHunt_C_IsPlayfabServer_Params
{
	bool                                               IsIt;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GM_PropHunt.GM_PropHunt_C.ReceiveBeginPlay
struct AGM_PropHunt_C_ReceiveBeginPlay_Params
{
};

// Function GM_PropHunt.GM_PropHunt_C.ReceiveTick
struct AGM_PropHunt_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GM_PropHunt.GM_PropHunt_C.StartGame
struct AGM_PropHunt_C_StartGame_Params
{
};

// Function GM_PropHunt.GM_PropHunt_C.K2_PostLogin
struct AGM_PropHunt_C_K2_PostLogin_Params
{
	class APlayerController*                           NewPlayer;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GM_PropHunt.GM_PropHunt_C.ConfirmPlayerJoined
struct AGM_PropHunt_C_ConfirmPlayerJoined_Params
{
	struct FString                                     PlayFabPlayerID;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class APC_PropHunt_C*                              Controller;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GM_PropHunt.GM_PropHunt_C.K2_OnLogout
struct AGM_PropHunt_C_K2_OnLogout_Params
{
	class AController*                                 ExitingController;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GM_PropHunt.GM_PropHunt_C.RaiseLobby
struct AGM_PropHunt_C_RaiseLobby_Params
{
};

// Function GM_PropHunt.GM_PropHunt_C.GmEndGame
struct AGM_PropHunt_C_GmEndGame_Params
{
	bool                                               IsKillerWin;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GM_PropHunt.GM_PropHunt_C.TravelToLevel
struct AGM_PropHunt_C_TravelToLevel_Params
{
	struct FString                                     LevelName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GM_PropHunt.GM_PropHunt_C.StartTutorial
struct AGM_PropHunt_C_StartTutorial_Params
{
};

// Function GM_PropHunt.GM_PropHunt_C.SetupServer
struct AGM_PropHunt_C_SetupServer_Params
{
};

// Function GM_PropHunt.GM_PropHunt_C.playerCalling
struct AGM_PropHunt_C_playerCalling_Params
{
	bool                                               IsPlayer;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ANewAlarmBP_C*                               alarms;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GM_PropHunt.GM_PropHunt_C.SetPlayfabKillerID
struct AGM_PropHunt_C_SetPlayfabKillerID_Params
{
	struct FString                                     KillerID;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GM_PropHunt.GM_PropHunt_C.ExecuteUbergraph_GM_PropHunt
struct AGM_PropHunt_C_ExecuteUbergraph_GM_PropHunt_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
