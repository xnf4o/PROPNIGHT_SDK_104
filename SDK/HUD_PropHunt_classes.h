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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HUD_PropHunt.HUD_PropHunt_C
// 0x01A0 (FullSize[0x04B0] - InheritedSize[0x0310])
class AHUD_PropHunt_C : public AHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0310(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0318(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_0_Alpha_BD8370D34F8ED99EECACF0A572FB9267;         // 0x0320(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_BD8370D34F8ED99EECACF0A572FB9267;    // 0x0324(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3KXF[0x3];                                     // 0x0325(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USurvivalProgressBarWidget_C*                SurvivorProgress;                                          // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USurvivalSkillCheckWidget_C*                 SurvivorSkillCheck;                                        // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCoolDownWBP_C*                              KillerCooldown;                                            // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_MiniLobby_C*                              MiniLobby;                                                 // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAlarmsCountWBP_C*                           AlarmWidget;                                               // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USurvStatusWBP_C*                            SurvStatus;                                                // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USurvivalInventoryWidget_C*                  SurvivorInventory;                                         // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCoolDownWBP_C*                              SurvivorAbility;                                           // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_GameResult_C*                             GameResult;                                                // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_DevLab_C*                                 DevLab;                                                    // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableButtonsWidget_C*                InteractableButtonSurv;                                    // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFlashWidget_C*                              KillerFlash;                                               // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAmmoKillerWBP_C*                            AmmoKiller;                                                // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInteractableButtonsWidget_C*                InteractableButtonKiller;                                  // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCrossHairWBP_C*                             CrosshairKiller;                                           // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWaypointWidget_C*                           WaypointWidget;                                            // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKillerMarked_C*                             KillerMarked;                                              // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayersScore_Tab_Stats_C*                   PlayerScore;                                               // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChatWindow_C*                               ChatWindow;                                                // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGeneralSettingWBP_C*                        Settings;                                                  // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVoiceChatWindow_C*                          VoiceChat;                                                 // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPauseMenu_C*                                PauseMenu;                                                 // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USurvivalEffectsUI_C*                        SurvEffectsUI;                                             // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USurvivalStaminaBarWidget_C*                 SurvStaminaBar;                                            // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bLocked;                                                   // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1MPA[0x7];                                     // 0x03F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWBP_EffectsWindow_C*                        EffectWindow;                                              // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundChat_C*                                SoundChat;                                                 // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEffectsHUDWidget_C*                         EffectsHUD;                                                // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_BDRush_Killer_C*                        EffectBloodLast;                                           // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULobbyEffectsHUD_C*                          LobbyEffects;                                              // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFartTimer_C*                                FartTimer;                                                 // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_VictoryScreen_C*                          VictoryScreen;                                             // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadingScreen_C*                          NewVar_1;                                                  // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_LoadingScreen_C*                          LoadingScreen;                                             // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_Tip_C*                                  WidgetTip;                                                 // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_EliminatedScreen_C*                     WidgetEliminationScreen;                                   // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWB_Spectator_C*                             Spectator;                                                 // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_LastChance_C*                           LastChanceWidget;                                          // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_HitMark_KillerAlarm_C*                  Killer_HitmarkAlarmDone;                                   // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_MVPScreen_C*                            MVPScreen;                                                 // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_MatchCanceled_C*                          MatchCanceled;                                             // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Tutorial_;                                                 // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GP2M[0x7];                                     // 0x0479(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UW_VictoryScreen_Tutorial_C*                 VictoryScreenTutorial;                                     // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsGameLoading;                                             // 0x0488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MCBF[0x7];                                     // 0x0489(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWBP_InGameBannerScreen_C*                   InGameBannerScreen;                                        // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_IntroUI_C*                              IntroUI;                                                   // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    IsGameLoaded;                                              // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass HUD_PropHunt.HUD_PropHunt_C");
		return ptr;
	}



	void GetCurrentEXP(int* CurEXP);
	void GetPointsForPerks(int* PerkPoints);
	void GetPerkName(struct FName* Name, int* PerkIndex);
	void SeeKillerSilhouetteNearHC(bool* wannasee);
	void GetLocalizedMapName(const struct FString& MapName, struct FText* Localized);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnRaiseLobby();
	void CreateGameResult();
	void OnEndGame(bool EndGame_);
	void CreateDevLab();
	void ShowDevLab();
	void HideDevLab();
	void InitSurvStatus();
	void CreateKillerUI();
	void CreateSurvivorUI();
	void CreateKillerFlashUI();
	void CreateAmmoKiller();
	void InitKillerAmmo();
	void ReceiveBeginPlay();
	void FadeOut();
	void CreatePlayerScore();
	void InitPlayerScore();
	void CreateChatWindow();
	void InitChat();
	void CreateSetteings();
	void InitSettings();
	void FadeIn();
	void SurvDropItem(bool lastLVL);
	void CreateVoiceChat();
	void InitVoiceChat();
	void InitPauseMenu();
	void CreatePauseMenu();
	void DecreasePerkPoints(int PerkPoints);
	void VisibilityGameUI(bool Hide_, bool OnlyGameUI_);
	void CreateSurvStatusWidget();
	void CreateSurvEffectsUI();
	void GameEndHideUI();
	void SetDepth();
	void RemoveSettings();
	void PlayerDeath();
	void SetTimingToAllChairs();
	void InitlAlarm();
	void CreateEffectWindow();
	void AddEffect(int Index, float Duration, const struct FText& Description);
	void CreateSoundChat();
	void IncreaseOnceHP(int HP);
	void CreateEffectsHUD();
	void CreateAlarmWidget();
	void AddEXP(int Exp, class AActor* Player, class AHUD* HUD);
	void LoadingScreenHUD();
	void RemoveLoadingScreenHUD();
	void AddAvatarSteam(class UTexture2D* NewParam);
	void SpectateHideUI(bool On_);
	void HideLobby(bool Wait_);
	void OnStartGame();
	void CreatePropHuntWidgets();
	void ClearSurvHUD();
	void InitLobby();
	void VictoryScreenInit();
	void EndGameFade();
	void EndGameHide(bool On_);
	void RemoveLoadingScreen2();
	void CreateMiniLobby();
	void CreateTipWidget();
	void ShowEliminationScreen(const struct FText& Text, const struct FString& Nickname, int Score);
	void CreateEliminationScreen();
	void CreateEffectBloodLast();
	void CreateSpectator();
	void SpectateShowUI();
	void InitForKiller(class AKillerMasterBP_C* Killer);
	void CreateLastChanceWidget();
	void ShowLastChanceWidget();
	void HideLastChanceWidget();
	void Doppelganger();
	void CreateMVPSCreen();
	void HideAllDoorMarks();
	void RemoveLoadingScreen3();
	void OnMatchCanceled();
	void CreateMatchCanceled();
	void LevelUpped(class AActor* PlayerRef);
	void CreateBannerScreen();
	void InitForSurvivor(class ASurvivorMasterBP_C* Survivor, bool Wait_);
	void ExecuteUbergraph_HUD_PropHunt(int EntryPoint);
	void IsGameLoaded__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
