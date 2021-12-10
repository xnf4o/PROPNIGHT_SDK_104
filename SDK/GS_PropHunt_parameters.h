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

// Function GS_PropHunt.GS_PropHunt_C.AddAllHightlightsInformation
struct AGS_PropHunt_C_AddAllHightlightsInformation_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.SetMvpPlyerHightlight
struct AGS_PropHunt_C_SetMvpPlyerHightlight_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.addHightlightsPlayerInforation
struct AGS_PropHunt_C_addHightlightsPlayerInforation_Params
{
	struct FString                                     Nickname;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               IsKiller;                                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                AvatarID;                                                  // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BannerID;                                                  // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TagID;                                                     // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SurvChars_ESurvChars>                  CharType;                                                  // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<KillerType_EKillerType>                KillerType;                                                // 0x0021(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DamageDone;                                                // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Kills;                                                     // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Assists;                                                   // 0x002C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ObjectivesDone;                                            // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SurvivalTime;                                              // 0x0034(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Stuns;                                                     // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DistanceTraveled;                                          // 0x003C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               isMVPPlayer;                                               // 0x0040(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     SurvSlotName;                                              // 0x0048(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.CheckSurvsAfterLeave
struct AGS_PropHunt_C_CheckSurvsAfterLeave_Params
{
	bool                                               HasAliveSurv;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GS_PropHunt.GS_PropHunt_C.IsKillerSlotFree
struct AGS_PropHunt_C_IsKillerSlotFree_Params
{
	bool                                               Free;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GS_PropHunt.GS_PropHunt_C.IsKillerPlayerHere
struct AGS_PropHunt_C_IsKillerPlayerHere_Params
{
	bool                                               Here;                                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GS_PropHunt.GS_PropHunt_C.GetAvailableSurvSlot
struct AGS_PropHunt_C_GetAvailableSurvSlot_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.FindEmptySlotFromList
struct AGS_PropHunt_C_FindEmptySlotFromList_Params
{
	struct FString                                     EmptySlotName;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.survSpawnZap
struct AGS_PropHunt_C_survSpawnZap_Params
{
	class APlayerStart*                                NewParam;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.ManageProphuntSlots
struct AGS_PropHunt_C_ManageProphuntSlots_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.ToActor
struct AGS_PropHunt_C_ToActor_Params
{
	class AActor*                                      Target;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Actor;                                                     // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.ResolveNextServer
struct AGS_PropHunt_C_ResolveNextServer_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.Assign Slots
struct AGS_PropHunt_C_Assign_Slots_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.CheckVoteMap
struct AGS_PropHunt_C_CheckVoteMap_Params
{
	bool                                               AllAgree;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GS_PropHunt.GS_PropHunt_C.ClearItems
struct AGS_PropHunt_C_ClearItems_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.PlaceItemsP2
struct AGS_PropHunt_C_PlaceItemsP2_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.PlaceItems
struct AGS_PropHunt_C_PlaceItems_Params
{
	bool                                               BeginGame_;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GS_PropHunt.GS_PropHunt_C.CollectItems
struct AGS_PropHunt_C_CollectItems_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.CheckPlayerReservedSlot
struct AGS_PropHunt_C_CheckPlayerReservedSlot_Params
{
	class APC_PropHunt_C*                              Controller;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Reserved;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GS_PropHunt.GS_PropHunt_C.GetSurvivorGameStart
struct AGS_PropHunt_C_GetSurvivorGameStart_Params
{
	class APC_PropHunt_C*                              Controller;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerStart*                                Result;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.MakeEmptyLobby
struct AGS_PropHunt_C_MakeEmptyLobby_Params
{
	struct FMiniLobbyState                             Result;                                                    // 0x0000(0x0058)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.RemoveAliveSurvivor
struct AGS_PropHunt_C_RemoveAliveSurvivor_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Escaped_;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GS_PropHunt.GS_PropHunt_C.AddAliveSurvivor
struct AGS_PropHunt_C_AddAliveSurvivor_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.GetRandomSurvivorPlayerStart
struct AGS_PropHunt_C_GetRandomSurvivorPlayerStart_Params
{
	class APlayerStart*                                res;                                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.GetKillerPlayerStart
struct AGS_PropHunt_C_GetKillerPlayerStart_Params
{
	class APC_PropHunt_C*                              Controller;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerStart*                                PlayerStart;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.AcceptTransport
struct AGS_PropHunt_C_AcceptTransport_Params
{
	struct FS_LobbyStateTransport                      Transport;                                                 // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.CreateLobbyTransport
struct AGS_PropHunt_C_CreateLobbyTransport_Params
{
	struct FS_LobbyStateTransport                      Transport;                                                 // 0x0000(0x0068)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.ReceiveBeginPlay
struct AGS_PropHunt_C_ReceiveBeginPlay_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.LobbyStateUpdate
struct AGS_PropHunt_C_LobbyStateUpdate_Params
{
	struct FS_LobbyStateTransport                      State;                                                     // 0x0000(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.ProcessLobbyStateChange
struct AGS_PropHunt_C_ProcessLobbyStateChange_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.OnReserveRequest
struct AGS_PropHunt_C_OnReserveRequest_Params
{
	class APC_PropHunt_C*                              Controller;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     SlotName;                                                  // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Silent;                                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GS_PropHunt.GS_PropHunt_C.OnReleaseRequest
struct AGS_PropHunt_C_OnReleaseRequest_Params
{
	class APC_PropHunt_C*                              Controller;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     SlotName;                                                  // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Silent;                                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GS_PropHunt.GS_PropHunt_C.GetAlarmsCountEvent
struct AGS_PropHunt_C_GetAlarmsCountEvent_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.DecreaseAlarmsCountEvent
struct AGS_PropHunt_C_DecreaseAlarmsCountEvent_Params
{
	TArray<class AActor*>                              Surfs;                                                     // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GS_PropHunt.GS_PropHunt_C.OnStartGame
struct AGS_PropHunt_C_OnStartGame_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.GetSurvEvent
struct AGS_PropHunt_C_GetSurvEvent_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.SurvStatusChangedEvent
struct AGS_PropHunt_C_SurvStatusChangedEvent_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.OnRaiseLobby
struct AGS_PropHunt_C_OnRaiseLobby_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.OnEndGameGS
struct AGS_PropHunt_C_OnEndGameGS_Params
{
	bool                                               IsKillerWin;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GS_PropHunt.GS_PropHunt_C.MultiSetIsKillerWin
struct AGS_PropHunt_C_MultiSetIsKillerWin_Params
{
	bool                                               IsKillerWin;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GS_PropHunt.GS_PropHunt_C.DoorIsOpen
struct AGS_PropHunt_C_DoorIsOpen_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.CountPlayerStarts
struct AGS_PropHunt_C_CountPlayerStarts_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.OnPlayerDeath
struct AGS_PropHunt_C_OnPlayerDeath_Params
{
	class AActor*                                      Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.OnPlayerReady
struct AGS_PropHunt_C_OnPlayerReady_Params
{
	class AActor*                                      Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.OnPlayerLeft
struct AGS_PropHunt_C_OnPlayerLeft_Params
{
	class AActor*                                      Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.OnPlayerLogin
struct AGS_PropHunt_C_OnPlayerLogin_Params
{
	class AActor*                                      Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.CheckForReadyPlayers
struct AGS_PropHunt_C_CheckForReadyPlayers_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.GetAlarms
struct AGS_PropHunt_C_GetAlarms_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.GetChairs
struct AGS_PropHunt_C_GetChairs_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.OnPlayerEscaped
struct AGS_PropHunt_C_OnPlayerEscaped_Params
{
	class AActor*                                      Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.ReceiveTick
struct AGS_PropHunt_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.AmbientOff
struct AGS_PropHunt_C_AmbientOff_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.BoostMode
struct AGS_PropHunt_C_BoostMode_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.AlarmScore
struct AGS_PropHunt_C_AlarmScore_Params
{
	TArray<class AActor*>                              Surfs;                                                     // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GS_PropHunt.GS_PropHunt_C.AlarmGood
struct AGS_PropHunt_C_AlarmGood_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.AlarmSuper
struct AGS_PropHunt_C_AlarmSuper_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.ScoreCalc
struct AGS_PropHunt_C_ScoreCalc_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       ScoreText;                                                 // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GS_PropHunt.GS_PropHunt_C.ReanimateScore
struct AGS_PropHunt_C_ReanimateScore_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.OutChairScore
struct AGS_PropHunt_C_OutChairScore_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.ExitScore
struct AGS_PropHunt_C_ExitScore_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.DoorOpenScore
struct AGS_PropHunt_C_DoorOpenScore_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.FlashScore
struct AGS_PropHunt_C_FlashScore_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsGrabbed_;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GS_PropHunt.GS_PropHunt_C.SurvHealScore
struct AGS_PropHunt_C_SurvHealScore_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Other_;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GS_PropHunt.GS_PropHunt_C.HitScore
struct AGS_PropHunt_C_HitScore_Params
{
	class AActor*                                      Killer;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Damage;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.CrawlScore
struct AGS_PropHunt_C_CrawlScore_Params
{
	class AActor*                                      Killer;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.ChairScore
struct AGS_PropHunt_C_ChairScore_Params
{
	class AActor*                                      Killer;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.KillScore
struct AGS_PropHunt_C_KillScore_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.OnServerTravel
struct AGS_PropHunt_C_OnServerTravel_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.SetKillerType
struct AGS_PropHunt_C_SetKillerType_Params
{
	TEnumAsByte<KillerType_EKillerType>                KillerType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.RedirectPlayers
struct AGS_PropHunt_C_RedirectPlayers_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.ItemsClear
struct AGS_PropHunt_C_ItemsClear_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.AlmostPerfect
struct AGS_PropHunt_C_AlmostPerfect_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.AlarmNormal
struct AGS_PropHunt_C_AlarmNormal_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.FreezePlayersServ
struct AGS_PropHunt_C_FreezePlayersServ_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.FreezePlayersMulti
struct AGS_PropHunt_C_FreezePlayersMulti_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.Kukarequ
struct AGS_PropHunt_C_Kukarequ_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.StartGameState
struct AGS_PropHunt_C_StartGameState_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.CancelGameStart
struct AGS_PropHunt_C_CancelGameStart_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.OnPlayerUnready
struct AGS_PropHunt_C_OnPlayerUnready_Params
{
	class AActor*                                      Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.TimerControl
struct AGS_PropHunt_C_TimerControl_Params
{
	bool                                               Add_;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Seconds;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.SendTextTimerControl
struct AGS_PropHunt_C_SendTextTimerControl_Params
{
	bool                                               Add_;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Seconds;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.Intro
struct AGS_PropHunt_C_Intro_Params
{
	class APlayerStart*                                KPSRef;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.StormTimerServ
struct AGS_PropHunt_C_StormTimerServ_Params
{
	float                                              F;                                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMapStormBP_C*                               ref;                                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.StormTimerMulti
struct AGS_PropHunt_C_StormTimerMulti_Params
{
	float                                              F;                                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMapStormBP_C*                               ref;                                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.UpdateAvatars
struct AGS_PropHunt_C_UpdateAvatars_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.ZeroScoreSendText
struct AGS_PropHunt_C_ZeroScoreSendText_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.OutFromHandsScore
struct AGS_PropHunt_C_OutFromHandsScore_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.StunScore
struct AGS_PropHunt_C_StunScore_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsGrabbed_;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GS_PropHunt.GS_PropHunt_C.RemoveAllAlarms
struct AGS_PropHunt_C_RemoveAllAlarms_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.StartFartTime
struct AGS_PropHunt_C_StartFartTime_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.Fart
struct AGS_PropHunt_C_Fart_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.GetCategory
struct AGS_PropHunt_C_GetCategory_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.ReadingMapVotes
struct AGS_PropHunt_C_ReadingMapVotes_Params
{
	TEnumAsByte<MapVote_EMapVote>                      MapVote;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PrevVoteDelete_;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GS_PropHunt.GS_PropHunt_C.ClearAllVotes
struct AGS_PropHunt_C_ClearAllVotes_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.ReadingPlayerVotes
struct AGS_PropHunt_C_ReadingPlayerVotes_Params
{
	TEnumAsByte<PlayerCategoryVote_EPlayerCategoryVote> PlayerVote;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PrevVoteDelete_;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GS_PropHunt.GS_PropHunt_C.GetRandomMaps
struct AGS_PropHunt_C_GetRandomMaps_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.VoteMapEnd
struct AGS_PropHunt_C_VoteMapEnd_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.SwapPlayers
struct AGS_PropHunt_C_SwapPlayers_Params
{
	class APC_PropHunt_C*                              Player1;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APC_PropHunt_C*                              Player2;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.SwapNotification
struct AGS_PropHunt_C_SwapNotification_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.CheckAliveSurvivors
struct AGS_PropHunt_C_CheckAliveSurvivors_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.LoadPlayerStart
struct AGS_PropHunt_C_LoadPlayerStart_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.CheckSurvs
struct AGS_PropHunt_C_CheckSurvs_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.CheckOnChairSurvs
struct AGS_PropHunt_C_CheckOnChairSurvs_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.OnChairSurvsSoundMulticast
struct AGS_PropHunt_C_OnChairSurvsSoundMulticast_Params
{
	class UFMODEvent*                                  Event;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count_;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.UpdateLobbyTime
struct AGS_PropHunt_C_UpdateLobbyTime_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.EndGameAllPostProcessOff
struct AGS_PropHunt_C_EndGameAllPostProcessOff_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.TeamScore
struct AGS_PropHunt_C_TeamScore_Params
{
	bool                                               Killer_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Points;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.printmulti
struct AGS_PropHunt_C_printmulti_Params
{
	struct FString                                     inString;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.CalculateLobbyTime
struct AGS_PropHunt_C_CalculateLobbyTime_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.SuperRoma
struct AGS_PropHunt_C_SuperRoma_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.SwapLeave_FromServer
struct AGS_PropHunt_C_SwapLeave_FromServer_Params
{
	class APawn*                                       LeftPlayer;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.GetMvpPlayer
struct AGS_PropHunt_C_GetMvpPlayer_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.CheckForKiller
struct AGS_PropHunt_C_CheckForKiller_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class APC_PropHunt_C*                              Player;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.WaitPlayersTimer
struct AGS_PropHunt_C_WaitPlayersTimer_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.WaitPlayersTimeout
struct AGS_PropHunt_C_WaitPlayersTimeout_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.MultiWaitPlayersTimeout
struct AGS_PropHunt_C_MultiWaitPlayersTimeout_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.SendLobbyState
struct AGS_PropHunt_C_SendLobbyState_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.KillerLeave
struct AGS_PropHunt_C_KillerLeave_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.SurvLeaved
struct AGS_PropHunt_C_SurvLeaved_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.RandomPerks
struct AGS_PropHunt_C_RandomPerks_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.ReadyRandomPerk
struct AGS_PropHunt_C_ReadyRandomPerk_Params
{
};

// Function GS_PropHunt.GS_PropHunt_C.ReadingPlayerVotes_v2
struct AGS_PropHunt_C_ReadingPlayerVotes_v2_Params
{
	struct FString                                     PlayerNickName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               PrevVoteDelete;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GS_PropHunt.GS_PropHunt_C.ReadingPlayerVotes_v2_Multicast
struct AGS_PropHunt_C_ReadingPlayerVotes_v2_Multicast_Params
{
	struct FString                                     Player_Nickname;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Votes_Number;                                              // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.exitvoice
struct AGS_PropHunt_C_exitvoice_Params
{
	class APawn*                                       Target;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.ExecuteUbergraph_GS_PropHunt
struct AGS_PropHunt_C_ExecuteUbergraph_GS_PropHunt_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GS_PropHunt.GS_PropHunt_C.OnVoted__DelegateSignature
struct AGS_PropHunt_C_OnVoted__DelegateSignature_Params
{
	struct FString                                     Player_Nickname;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Votes_Number;                                              // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
