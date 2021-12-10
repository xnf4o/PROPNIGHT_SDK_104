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

// Function PC_PropHunt.PC_PropHunt_C.GetCurrentEXP
struct APC_PropHunt_C_GetCurrentEXP_Params
{
	int                                                CurEXP;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.GetPointsForPerks
struct APC_PropHunt_C_GetPointsForPerks_Params
{
	int                                                PerkPoints;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.SeeKillerSilhouetteNearHC
struct APC_PropHunt_C_SeeKillerSilhouetteNearHC_Params
{
	bool                                               wannasee;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_PropHunt.PC_PropHunt_C.GetPerkName
struct APC_PropHunt_C_GetPerkName_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PerkIndex;                                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.GetServerId
struct APC_PropHunt_C_GetServerId_Params
{
	struct FString                                     ID;                                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.isVisibleRadialInventory
struct APC_PropHunt_C_isVisibleRadialInventory_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PC_PropHunt.PC_PropHunt_C.IsVisibleRadialSoundChat
struct APC_PropHunt_C_IsVisibleRadialSoundChat_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function PC_PropHunt.PC_PropHunt_C.JoinVivoxRoom
struct APC_PropHunt_C_JoinVivoxRoom_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.GetLevelName
struct APC_PropHunt_C_GetLevelName_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     MapName;                                                   // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.GetPlayerStartLobbyWait
struct APC_PropHunt_C_GetPlayerStartLobbyWait_Params
{
	class AActor*                                      PlayerStart;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.Get Tutorial Player Start
struct APC_PropHunt_C_Get_Tutorial_Player_Start_Params
{
	bool                                               KillerTutorial_;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      PlayerStart;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.AuthoritiDetect
struct APC_PropHunt_C_AuthoritiDetect_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               serv;                                                      // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_PropHunt.PC_PropHunt_C.StopEndMusic
struct APC_PropHunt_C_StopEndMusic_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.SetLobbySlotName
struct APC_PropHunt_C_SetLobbySlotName_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               AffectState;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_PropHunt.PC_PropHunt_C.SetIsKiller
struct APC_PropHunt_C_SetIsKiller_Params
{
	bool                                               IsKiller;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AffectState;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_PropHunt.PC_PropHunt_C.GetPlayerStart
struct APC_PropHunt_C_GetPlayerStart_Params
{
	class AActor*                                      PlayerStart;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.InpActEvt_Escape_K2Node_InputKeyEvent_2
struct APC_PropHunt_C_InpActEvt_Escape_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.OnFailure_D22A08944B2EE4FD352FFDB74C85B31E
struct APC_PropHunt_C_OnFailure_D22A08944B2EE4FD352FFDB74C85B31E_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.OnSuccess_D22A08944B2EE4FD352FFDB74C85B31E
struct APC_PropHunt_C_OnSuccess_D22A08944B2EE4FD352FFDB74C85B31E_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.InpActEvt_P_K2Node_InputKeyEvent_1
struct APC_PropHunt_C_InpActEvt_P_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.InpActEvt_Skills Info_K2Node_InputActionEvent_7
struct APC_PropHunt_C_InpActEvt_Skills_Info_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.InpActEvt_Skills Info_K2Node_InputActionEvent_6
struct APC_PropHunt_C_InpActEvt_Skills_Info_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.InpActEvt_AnyKey_K2Node_InputActionEvent_5
struct APC_PropHunt_C_InpActEvt_AnyKey_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.InpActEvt_Voice Chat (Hold)_K2Node_InputActionEvent_4
struct APC_PropHunt_C_InpActEvt_Voice_Chat__Hold__K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.InpActEvt_Voice Chat (Hold)_K2Node_InputActionEvent_3
struct APC_PropHunt_C_InpActEvt_Voice_Chat__Hold__K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.InpActEvt_Scoreboard_K2Node_InputActionEvent_2
struct APC_PropHunt_C_InpActEvt_Scoreboard_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.InpActEvt_Scoreboard_K2Node_InputActionEvent_1
struct APC_PropHunt_C_InpActEvt_Scoreboard_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.AddEXP
struct APC_PropHunt_C_AddEXP_Params
{
	int                                                Exp;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Player;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                        HUD;                                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.IncreaseOnceHP
struct APC_PropHunt_C_IncreaseOnceHP_Params
{
	int                                                HP;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.SetTimingToAllChairs
struct APC_PropHunt_C_SetTimingToAllChairs_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.SetDepth
struct APC_PropHunt_C_SetDepth_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.LevelUpped
struct APC_PropHunt_C_LevelUpped_Params
{
	class AActor*                                      PlayerRef;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.DecreasePerkPoints
struct APC_PropHunt_C_DecreasePerkPoints_Params
{
	int                                                PerkPoints;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.SurvDropItem
struct APC_PropHunt_C_SurvDropItem_Params
{
	bool                                               lastLVL;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_PropHunt.PC_PropHunt_C.OnSessionCreated
struct APC_PropHunt_C_OnSessionCreated_Params
{
	struct FString                                     Map;                                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.FailCreateSession
struct APC_PropHunt_C_FailCreateSession_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.OnTravelError
struct APC_PropHunt_C_OnTravelError_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.FailSessionList
struct APC_PropHunt_C_FailSessionList_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.OnFoundSessions
struct APC_PropHunt_C_OnFoundSessions_Params
{
	TArray<struct FBlueprintSessionResult>             Sessions;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PC_PropHunt.PC_PropHunt_C.JoinToTicket
struct APC_PropHunt_C_JoinToTicket_Params
{
	struct FString                                     Ticket;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.CloseTicket
struct APC_PropHunt_C_CloseTicket_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.ReceiveBeginPlay
struct APC_PropHunt_C_ReceiveBeginPlay_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.ReceiveTick
struct APC_PropHunt_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.NotifyPlayerJoined
struct APC_PropHunt_C_NotifyPlayerJoined_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.ConfirmJoin
struct APC_PropHunt_C_ConfirmJoin_Params
{
	struct FString                                     PlayFabId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     SteamUserID;                                               // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.ReserveSlot
struct APC_PropHunt_C_ReserveSlot_Params
{
	struct FString                                     SlotName;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.ReleaseSlot
struct APC_PropHunt_C_ReleaseSlot_Params
{
	struct FString                                     SlotName;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.ForceStartGame
struct APC_PropHunt_C_ForceStartGame_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.OnStartGame
struct APC_PropHunt_C_OnStartGame_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.ClientOnStartGame
struct APC_PropHunt_C_ClientOnStartGame_Params
{
	class APlayerStart*                                ref;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AvatarID;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BannerID;                                                  // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TagID;                                                     // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.OnRaiseLobby
struct APC_PropHunt_C_OnRaiseLobby_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.ClientOnRaiseLobby
struct APC_PropHunt_C_ClientOnRaiseLobby_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.OnEndGame
struct APC_PropHunt_C_OnEndGame_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.ClientOnEndGame
struct APC_PropHunt_C_ClientOnEndGame_Params
{
	bool                                               Host;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_PropHunt.PC_PropHunt_C.ForceRestart
struct APC_PropHunt_C_ForceRestart_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.ServForceRestart
struct APC_PropHunt_C_ServForceRestart_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_PropHunt.PC_PropHunt_C.ToggleDevLab
struct APC_PropHunt_C_ToggleDevLab_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.PlayerReady
struct APC_PropHunt_C_PlayerReady_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.OnSurvivorDeath
struct APC_PropHunt_C_OnSurvivorDeath_Params
{
	bool                                               BecomeSpectator;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_PropHunt.PC_PropHunt_C.BecomeSpectator
struct APC_PropHunt_C_BecomeSpectator_Params
{
	bool                                               Escape_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               WithoutFade;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_PropHunt.PC_PropHunt_C.KillSurvivor
struct APC_PropHunt_C_KillSurvivor_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.ChangeLevel
struct APC_PropHunt_C_ChangeLevel_Params
{
	struct FString                                     LevelName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.OnChangeLevel
struct APC_PropHunt_C_OnChangeLevel_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.SendKillerChar
struct APC_PropHunt_C_SendKillerChar_Params
{
	TEnumAsByte<KillerType_EKillerType>                KillerType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.GetChatMessage
struct APC_PropHunt_C_GetChatMessage_Params
{
	struct FText                                       TextToSend;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Type;                                                      // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Killer_;                                                   // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_PropHunt.PC_PropHunt_C.UpdateChat
struct APC_PropHunt_C_UpdateChat_Params
{
	struct FText                                       sender;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Text;                                                      // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Type;                                                      // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Killer_;                                                   // 0x0034(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ItsMe_;                                                    // 0x0035(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_PropHunt.PC_PropHunt_C.LootboxShopServer
struct APC_PropHunt_C_LootboxShopServer_Params
{
	class ALootboxShop_C*                              Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Class;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  SpawnTransform;                                            // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	bool                                               Block_;                                                    // 0x0040(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_PropHunt.PC_PropHunt_C.LootboxShopMulticast
struct APC_PropHunt_C_LootboxShopMulticast_Params
{
	bool                                               Block_;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ALootboxShop_C*                              Actor;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.LootboxShopAnimServer
struct APC_PropHunt_C_LootboxShopAnimServer_Params
{
	class ALootboxShop_C*                              Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Arm_;                                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Door_;                                                     // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_PropHunt.PC_PropHunt_C.JoinToNext
struct APC_PropHunt_C_JoinToNext_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.SendSurvClass
struct APC_PropHunt_C_SendSurvClass_Params
{
	TEnumAsByte<SurvClass_ESurvClass>                  Class;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SurvChars_ESurvChars>                  char_;                                                     // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.DevDestroySession
struct APC_PropHunt_C_DevDestroySession_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.FailJoin
struct APC_PropHunt_C_FailJoin_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.OnNetworkError
struct APC_PropHunt_C_OnNetworkError_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.OpenLootboxServ
struct APC_PropHunt_C_OpenLootboxServ_Params
{
	class AActor*                                      lootbox;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<LootBoxRollType_ELootBoxRollType>      RollType;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Nickname;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.SpawnItemlootboxServ
struct APC_PropHunt_C_SpawnItemlootboxServ_Params
{
	class AActor*                                      NewParam;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  NewParam2;                                                 // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	class UClass*                                      NewParam3;                                                 // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     NewParam4;                                                 // 0x0048(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.SpawnItemLootboxMulti
struct APC_PropHunt_C_SpawnItemLootboxMulti_Params
{
	class ALootBox_C*                                  NewParam;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  NewParam2;                                                 // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	class UClass*                                      NewParam3;                                                 // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.HideHUD_AfterDeath
struct APC_PropHunt_C_HideHUD_AfterDeath_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.LootboxNotEnoughServ
struct APC_PropHunt_C_LootboxNotEnoughServ_Params
{
	class AActor*                                      lootbox;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.PlayerUnready
struct APC_PropHunt_C_PlayerUnready_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.SoundChatServ
struct APC_PropHunt_C_SoundChatServ_Params
{
	int                                                SoundIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundChat_C*                                Widget;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WidgetMenuType;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.SoundChatMulticast
struct APC_PropHunt_C_SoundChatMulticast_Params
{
	int                                                SoundIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundChat_C*                                Widget;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WidgetMenuType;                                            // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.SoundChatMenu1
struct APC_PropHunt_C_SoundChatMenu1_Params
{
	int                                                Sound;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.SoundChatMenu2
struct APC_PropHunt_C_SoundChatMenu2_Params
{
	int                                                Sound;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.SendSurvSkill
struct APC_PropHunt_C_SendSurvSkill_Params
{
	TEnumAsByte<SurvSkills_ESurvSkills>                Skill;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.MenuCall
struct APC_PropHunt_C_MenuCall_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.OpenEndGameWindow
struct APC_PropHunt_C_OpenEndGameWindow_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.SpectatorSwitch
struct APC_PropHunt_C_SpectatorSwitch_Params
{
	class ABP_Spectator_C*                             Spectator;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Spectating_;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_PropHunt.PC_PropHunt_C.AllEndGame
struct APC_PropHunt_C_AllEndGame_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.Fade
struct APC_PropHunt_C_Fade_Params
{
	bool                                               Escape_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_PropHunt.PC_PropHunt_C.AllPlayersFade
struct APC_PropHunt_C_AllPlayersFade_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.SpectateEndGame
struct APC_PropHunt_C_SpectateEndGame_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.SendSurvSkinId
struct APC_PropHunt_C_SendSurvSkinId_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Lvl;                                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.SpawnWait
struct APC_PropHunt_C_SpawnWait_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.ReceiveDestroyed
struct APC_PropHunt_C_ReceiveDestroyed_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.VictoryScreen
struct APC_PropHunt_C_VictoryScreen_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.FadeOut
struct APC_PropHunt_C_FadeOut_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.MapVote
struct APC_PropHunt_C_MapVote_Params
{
	TEnumAsByte<MapVote_EMapVote>                      MapVoteEnum;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.PlayerVote
struct APC_PropHunt_C_PlayerVote_Params
{
	TEnumAsByte<PlayerCategoryVote_EPlayerCategoryVote> PlayerCategoryVoteEnum;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.Clear
struct APC_PropHunt_C_Clear_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.SwapRequest
struct APC_PropHunt_C_SwapRequest_Params
{
	class APawn*                                       Target;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.AcceptSwap
struct APC_PropHunt_C_AcceptSwap_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.OnSwapPerformed
struct APC_PropHunt_C_OnSwapPerformed_Params
{
	bool                                               IsKiller;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_PropHunt.PC_PropHunt_C.OnSwap
struct APC_PropHunt_C_OnSwap_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.SpawnTutorial
struct APC_PropHunt_C_SpawnTutorial_Params
{
	bool                                               Killer_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_PropHunt.PC_PropHunt_C.Liked
struct APC_PropHunt_C_Liked_Params
{
	class APS_PropHunt_C*                              NewParam;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.OnSwapNotification
struct APC_PropHunt_C_OnSwapNotification_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.GetSystemMessage
struct APC_PropHunt_C_GetSystemMessage_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PC_PropHunt.PC_PropHunt_C.UpdateSurvProp
struct APC_PropHunt_C_UpdateSurvProp_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.PerksPrintChat
struct APC_PropHunt_C_PerksPrintChat_Params
{
	struct FText                                       sender;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Text;                                                      // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PC_PropHunt.PC_PropHunt_C.SurvOnChair
struct APC_PropHunt_C_SurvOnChair_Params
{
	bool                                               WantBeSpectator_;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PC_PropHunt.PC_PropHunt_C.PlayerTo_Spectator
struct APC_PropHunt_C_PlayerTo_Spectator_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.SpectatorTo_Player
struct APC_PropHunt_C_SpectatorTo_Player_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.SpectatorBackUISurv
struct APC_PropHunt_C_SpectatorBackUISurv_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.InitMicVoiceSettings
struct APC_PropHunt_C_InitMicVoiceSettings_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.Swap_LeaveFromServer
struct APC_PropHunt_C_Swap_LeaveFromServer_Params
{
	class APawn*                                       LeftPlayer;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.ClientLeft_FromServer(Swap)
struct APC_PropHunt_C_ClientLeft_FromServer_Swap__Params
{
	class APawn*                                       LeftPlayer;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.YouHaveBeenKicked
struct APC_PropHunt_C_YouHaveBeenKicked_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.ReceiveEndPlay
struct APC_PropHunt_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.SetPerkIndex_SERV
struct APC_PropHunt_C_SetPerkIndex_SERV_Params
{
	int                                                PerkIndex;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     PerkName;                                                  // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.SetPerkIndex_MULTI
struct APC_PropHunt_C_SetPerkIndex_MULTI_Params
{
	int                                                PerkIndex;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     PerkName;                                                  // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.RandomPerk_Serv
struct APC_PropHunt_C_RandomPerk_Serv_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.PlayerVote_v2
struct APC_PropHunt_C_PlayerVote_v2_Params
{
	struct FString                                     PlayerNickName;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.AddCoins
struct APC_PropHunt_C_AddCoins_Params
{
	int                                                Coins;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.SetSkin
struct APC_PropHunt_C_SetSkin_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.ShowIntroBanner_Server
struct APC_PropHunt_C_ShowIntroBanner_Server_Params
{
	struct FName                                       PlayerStartTag;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                                PlayerState;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AvatarID;                                                  // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BannerID;                                                  // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TagID;                                                     // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.ShowIntroBanner_Client
struct APC_PropHunt_C_ShowIntroBanner_Client_Params
{
	class APlayerState*                                State;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Tag;                                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AvatarID;                                                  // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BannerID;                                                  // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TagID;                                                     // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     inString;                                                  // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<SurvChars_ESurvChars>                  SurvChar;                                                  // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function PC_PropHunt.PC_PropHunt_C.StartProfle
struct APC_PropHunt_C_StartProfle_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.StartNetProfile
struct APC_PropHunt_C_StartNetProfile_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.GetSettings
struct APC_PropHunt_C_GetSettings_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.LeaveVivoxChannelIfKiller
struct APC_PropHunt_C_LeaveVivoxChannelIfKiller_Params
{
};

// Function PC_PropHunt.PC_PropHunt_C.ExecuteUbergraph_PC_PropHunt
struct APC_PropHunt_C_ExecuteUbergraph_PC_PropHunt_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
