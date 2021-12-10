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

// Function HUD_PropHunt.HUD_PropHunt_C.GetCurrentEXP
struct AHUD_PropHunt_C_GetCurrentEXP_Params
{
	int                                                CurEXP;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HUD_PropHunt.HUD_PropHunt_C.GetPointsForPerks
struct AHUD_PropHunt_C_GetPointsForPerks_Params
{
	int                                                PerkPoints;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HUD_PropHunt.HUD_PropHunt_C.GetPerkName
struct AHUD_PropHunt_C_GetPerkName_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PerkIndex;                                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HUD_PropHunt.HUD_PropHunt_C.SeeKillerSilhouetteNearHC
struct AHUD_PropHunt_C_SeeKillerSilhouetteNearHC_Params
{
	bool                                               wannasee;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HUD_PropHunt.HUD_PropHunt_C.GetLocalizedMapName
struct AHUD_PropHunt_C_GetLocalizedMapName_Params
{
	struct FString                                     MapName;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FText                                       Localized;                                                 // 0x0010(0x0018)  (Parm, OutParm)
};

// Function HUD_PropHunt.HUD_PropHunt_C.Timeline_0__FinishedFunc
struct AHUD_PropHunt_C_Timeline_0__FinishedFunc_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.Timeline_0__UpdateFunc
struct AHUD_PropHunt_C_Timeline_0__UpdateFunc_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.OnRaiseLobby
struct AHUD_PropHunt_C_OnRaiseLobby_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.CreateGameResult
struct AHUD_PropHunt_C_CreateGameResult_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.OnEndGame
struct AHUD_PropHunt_C_OnEndGame_Params
{
	bool                                               EndGame_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HUD_PropHunt.HUD_PropHunt_C.CreateDevLab
struct AHUD_PropHunt_C_CreateDevLab_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.ShowDevLab
struct AHUD_PropHunt_C_ShowDevLab_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.HideDevLab
struct AHUD_PropHunt_C_HideDevLab_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.InitSurvStatus
struct AHUD_PropHunt_C_InitSurvStatus_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.CreateKillerUI
struct AHUD_PropHunt_C_CreateKillerUI_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.CreateSurvivorUI
struct AHUD_PropHunt_C_CreateSurvivorUI_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.CreateKillerFlashUI
struct AHUD_PropHunt_C_CreateKillerFlashUI_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.CreateAmmoKiller
struct AHUD_PropHunt_C_CreateAmmoKiller_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.InitKillerAmmo
struct AHUD_PropHunt_C_InitKillerAmmo_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.ReceiveBeginPlay
struct AHUD_PropHunt_C_ReceiveBeginPlay_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.FadeOut
struct AHUD_PropHunt_C_FadeOut_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.CreatePlayerScore
struct AHUD_PropHunt_C_CreatePlayerScore_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.InitPlayerScore
struct AHUD_PropHunt_C_InitPlayerScore_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.CreateChatWindow
struct AHUD_PropHunt_C_CreateChatWindow_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.InitChat
struct AHUD_PropHunt_C_InitChat_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.CreateSetteings
struct AHUD_PropHunt_C_CreateSetteings_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.InitSettings
struct AHUD_PropHunt_C_InitSettings_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.FadeIn
struct AHUD_PropHunt_C_FadeIn_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.SurvDropItem
struct AHUD_PropHunt_C_SurvDropItem_Params
{
	bool                                               lastLVL;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HUD_PropHunt.HUD_PropHunt_C.CreateVoiceChat
struct AHUD_PropHunt_C_CreateVoiceChat_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.InitVoiceChat
struct AHUD_PropHunt_C_InitVoiceChat_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.InitPauseMenu
struct AHUD_PropHunt_C_InitPauseMenu_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.CreatePauseMenu
struct AHUD_PropHunt_C_CreatePauseMenu_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.DecreasePerkPoints
struct AHUD_PropHunt_C_DecreasePerkPoints_Params
{
	int                                                PerkPoints;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HUD_PropHunt.HUD_PropHunt_C.VisibilityGameUI
struct AHUD_PropHunt_C_VisibilityGameUI_Params
{
	bool                                               Hide_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OnlyGameUI_;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HUD_PropHunt.HUD_PropHunt_C.CreateSurvStatusWidget
struct AHUD_PropHunt_C_CreateSurvStatusWidget_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.CreateSurvEffectsUI
struct AHUD_PropHunt_C_CreateSurvEffectsUI_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.GameEndHideUI
struct AHUD_PropHunt_C_GameEndHideUI_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.SetDepth
struct AHUD_PropHunt_C_SetDepth_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.RemoveSettings
struct AHUD_PropHunt_C_RemoveSettings_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.PlayerDeath
struct AHUD_PropHunt_C_PlayerDeath_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.SetTimingToAllChairs
struct AHUD_PropHunt_C_SetTimingToAllChairs_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.InitlAlarm
struct AHUD_PropHunt_C_InitlAlarm_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.CreateEffectWindow
struct AHUD_PropHunt_C_CreateEffectWindow_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.AddEffect
struct AHUD_PropHunt_C_AddEffect_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Description;                                               // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HUD_PropHunt.HUD_PropHunt_C.CreateSoundChat
struct AHUD_PropHunt_C_CreateSoundChat_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.IncreaseOnceHP
struct AHUD_PropHunt_C_IncreaseOnceHP_Params
{
	int                                                HP;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HUD_PropHunt.HUD_PropHunt_C.CreateEffectsHUD
struct AHUD_PropHunt_C_CreateEffectsHUD_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.CreateAlarmWidget
struct AHUD_PropHunt_C_CreateAlarmWidget_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.AddEXP
struct AHUD_PropHunt_C_AddEXP_Params
{
	int                                                Exp;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Player;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                        HUD;                                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HUD_PropHunt.HUD_PropHunt_C.LoadingScreenHUD
struct AHUD_PropHunt_C_LoadingScreenHUD_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.RemoveLoadingScreenHUD
struct AHUD_PropHunt_C_RemoveLoadingScreenHUD_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.AddAvatarSteam
struct AHUD_PropHunt_C_AddAvatarSteam_Params
{
	class UTexture2D*                                  NewParam;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HUD_PropHunt.HUD_PropHunt_C.SpectateHideUI
struct AHUD_PropHunt_C_SpectateHideUI_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HUD_PropHunt.HUD_PropHunt_C.HideLobby
struct AHUD_PropHunt_C_HideLobby_Params
{
	bool                                               Wait_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HUD_PropHunt.HUD_PropHunt_C.OnStartGame
struct AHUD_PropHunt_C_OnStartGame_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.CreatePropHuntWidgets
struct AHUD_PropHunt_C_CreatePropHuntWidgets_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.ClearSurvHUD
struct AHUD_PropHunt_C_ClearSurvHUD_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.InitLobby
struct AHUD_PropHunt_C_InitLobby_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.VictoryScreenInit
struct AHUD_PropHunt_C_VictoryScreenInit_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.EndGameFade
struct AHUD_PropHunt_C_EndGameFade_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.EndGameHide
struct AHUD_PropHunt_C_EndGameHide_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HUD_PropHunt.HUD_PropHunt_C.RemoveLoadingScreen2
struct AHUD_PropHunt_C_RemoveLoadingScreen2_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.CreateMiniLobby
struct AHUD_PropHunt_C_CreateMiniLobby_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.CreateTipWidget
struct AHUD_PropHunt_C_CreateTipWidget_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.ShowEliminationScreen
struct AHUD_PropHunt_C_ShowEliminationScreen_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     Nickname;                                                  // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Score;                                                     // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HUD_PropHunt.HUD_PropHunt_C.CreateEliminationScreen
struct AHUD_PropHunt_C_CreateEliminationScreen_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.CreateEffectBloodLast
struct AHUD_PropHunt_C_CreateEffectBloodLast_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.CreateSpectator
struct AHUD_PropHunt_C_CreateSpectator_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.SpectateShowUI
struct AHUD_PropHunt_C_SpectateShowUI_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.InitForKiller
struct AHUD_PropHunt_C_InitForKiller_Params
{
	class AKillerMasterBP_C*                           Killer;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HUD_PropHunt.HUD_PropHunt_C.CreateLastChanceWidget
struct AHUD_PropHunt_C_CreateLastChanceWidget_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.ShowLastChanceWidget
struct AHUD_PropHunt_C_ShowLastChanceWidget_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.HideLastChanceWidget
struct AHUD_PropHunt_C_HideLastChanceWidget_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.Doppelganger
struct AHUD_PropHunt_C_Doppelganger_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.CreateMVPSCreen
struct AHUD_PropHunt_C_CreateMVPSCreen_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.HideAllDoorMarks
struct AHUD_PropHunt_C_HideAllDoorMarks_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.RemoveLoadingScreen3
struct AHUD_PropHunt_C_RemoveLoadingScreen3_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.OnMatchCanceled
struct AHUD_PropHunt_C_OnMatchCanceled_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.CreateMatchCanceled
struct AHUD_PropHunt_C_CreateMatchCanceled_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.LevelUpped
struct AHUD_PropHunt_C_LevelUpped_Params
{
	class AActor*                                      PlayerRef;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HUD_PropHunt.HUD_PropHunt_C.CreateBannerScreen
struct AHUD_PropHunt_C_CreateBannerScreen_Params
{
};

// Function HUD_PropHunt.HUD_PropHunt_C.InitForSurvivor
struct AHUD_PropHunt_C_InitForSurvivor_Params
{
	class ASurvivorMasterBP_C*                         Survivor;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Wait_;                                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HUD_PropHunt.HUD_PropHunt_C.ExecuteUbergraph_HUD_PropHunt
struct AHUD_PropHunt_C_ExecuteUbergraph_HUD_PropHunt_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HUD_PropHunt.HUD_PropHunt_C.IsGameLoaded__DelegateSignature
struct AHUD_PropHunt_C_IsGameLoaded__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
