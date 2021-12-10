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

// BlueprintGeneratedClass PC_PropHunt.PC_PropHunt_C
// 0x02DE (FullSize[0x084E] - InheritedSize[0x0570])
class APC_PropHunt_C : public APropnightPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0570(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBP_BanManager_C*                            BP_BanManager;                                             // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FString                                     PlayFabPlayerID;                                           // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               IsKiller;                                                  // 0x0590(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_00JM[0x7];                                     // 0x0591(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APawn*                                       LobbyPawn;                                                 // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       char_;                                                     // 0x05A0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DevLabOpened;                                              // 0x05A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsJustSpawnedPawn;                                         // 0x05A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_U3O7[0x6];                                     // 0x05AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LobbySlotName;                                             // 0x05B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class APawn*                                       SpectatorRef;                                              // 0x05C0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Nickname;                                                  // 0x05C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               IsGranny;                                                  // 0x05D8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IQ7T[0x7];                                     // 0x05D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       SenderText;                                                // 0x05E0(0x0018) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FText                                       SenderName;                                                // 0x05F8(0x0018) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	int                                                TypeMessage;                                               // 0x0610(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MQUB[0x4];                                     // 0x0614(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     NextSessionID;                                             // 0x0618(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               SessionIsFound;                                            // 0x0628(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7N0C[0x7];                                     // 0x0629(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlueprintSessionResult                     NextSession;                                               // 0x0630(0x0108) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ImNextHost;                                                // 0x0738(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<SurvClass_ESurvClass>                  SurvClass;                                                 // 0x0739(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VLD9[0x6];                                     // 0x073A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  Avatar;                                                    // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BlockUI_;                                                  // 0x0748(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               KillerMessage_;                                            // 0x0749(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<KillerType_EKillerType>                KillerType;                                                // 0x074A(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SurvSkills_ESurvSkills>                SurvSkills;                                                // 0x074B(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IM24[0x4];                                     // 0x074C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ADoppelganger_C*>                     NewVar_1;                                                  // 0x0750(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class AEndGameBP_C*                                EndGameActor;                                              // 0x0760(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEndGamePlayerMesh_C*                        EndGameMesh;                                               // 0x0768(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Spectator_;                                                // 0x0770(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Escape_;                                                   // 0x0771(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SurvWin_;                                                  // 0x0772(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               LobbyWait_;                                                // 0x0773(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<SurvChars_ESurvChars>                  SurvCharPC;                                                // 0x0774(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<MapVote_EMapVote>                      MapVoteEnum;                                               // 0x0775(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<PlayerCategoryVote_EPlayerCategoryVote> PlayerCategoryVoteEnum;                                    // 0x0776(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Liked_;                                                    // 0x0777(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AActor*                                      Player_Start;                                              // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Spectator_C*                             NewVar_2;                                                  // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsUsingGamepad_;                                           // 0x0788(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SoundmenuVisible_;                                         // 0x0789(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_56V4[0x6];                                     // 0x078A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EndGameSwapSlotName;                                       // 0x0790(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               MvpAnimStart_;                                             // 0x07A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               WinForce;                                                  // 0x07A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               NicknameOff_;                                              // 0x07A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CW0M[0x5];                                     // 0x07A3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UW_HelpWindow_C*                             HelpWindow;                                                // 0x07A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NewVar_3;                                                  // 0x07B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SZ0X[0x7];                                     // 0x07B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      SecLobbyPawn;                                              // 0x07B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     PerkName;                                                  // 0x07C0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                PerkIndex;                                                 // 0x07D0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_B9E8[0x4];                                     // 0x07D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               TempName;                                                  // 0x07D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               TabStatsVisible_;                                          // 0x07E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_T1I0[0x7];                                     // 0x07E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayerCategoryVoteNickname;                                // 0x07F0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<int>                                        SkinIDarr;                                                 // 0x0800(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	TArray<class APlayerState*>                        PlayerStateArray;                                          // 0x0810(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FName>                               PlayerStartTagArray;                                       // 0x0820(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FString                                     SteamUserID;                                               // 0x0830(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                Avatar_1;                                                  // 0x0840(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Banner_ID;                                                 // 0x0844(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Tag_ID;                                                    // 0x0848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SurvDeath_;                                                // 0x084C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               InvertY_;                                                  // 0x084D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass PC_PropHunt.PC_PropHunt_C");
		return ptr;
	}



	void GetCurrentEXP(int* CurEXP);
	void GetPointsForPerks(int* PerkPoints);
	void SeeKillerSilhouetteNearHC(bool* wannasee);
	void GetPerkName(struct FName* Name, int* PerkIndex);
	void GetServerId(struct FString* ID);
	bool isVisibleRadialInventory();
	bool IsVisibleRadialSoundChat();
	void JoinVivoxRoom();
	void GetLevelName(bool* B, struct FString* MapName);
	void GetPlayerStartLobbyWait(class AActor** PlayerStart);
	void Get_Tutorial_Player_Start(bool KillerTutorial_, class AActor** PlayerStart);
	void AuthoritiDetect(bool B, bool* serv);
	void StopEndMusic();
	void SetLobbySlotName(const struct FString& Name, bool AffectState);
	void SetIsKiller(bool IsKiller, bool AffectState);
	void GetPlayerStart(class AActor** PlayerStart);
	void InpActEvt_Escape_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void OnFailure_D22A08944B2EE4FD352FFDB74C85B31E();
	void OnSuccess_D22A08944B2EE4FD352FFDB74C85B31E();
	void InpActEvt_P_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_Skills_Info_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_Skills_Info_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_AnyKey_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_Voice_Chat__Hold__K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Voice_Chat__Hold__K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Scoreboard_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Scoreboard_K2Node_InputActionEvent_1(const struct FKey& Key);
	void AddEXP(int Exp, class AActor* Player, class AHUD* HUD);
	void IncreaseOnceHP(int HP);
	void SetTimingToAllChairs();
	void SetDepth();
	void LevelUpped(class AActor* PlayerRef);
	void DecreasePerkPoints(int PerkPoints);
	void SurvDropItem(bool lastLVL);
	void OnSessionCreated(const struct FString& Map);
	void FailCreateSession();
	void OnTravelError();
	void FailSessionList();
	void OnFoundSessions(TArray<struct FBlueprintSessionResult> Sessions);
	void JoinToTicket(const struct FString& Ticket);
	void CloseTicket();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void NotifyPlayerJoined();
	void ConfirmJoin(const struct FString& PlayFabId, const struct FString& SteamUserID);
	void ReserveSlot(const struct FString& SlotName);
	void ReleaseSlot(const struct FString& SlotName);
	void ForceStartGame();
	void OnStartGame();
	void ClientOnStartGame(class APlayerStart* ref, int AvatarID, int BannerID, int TagID);
	void OnRaiseLobby();
	void ClientOnRaiseLobby();
	void OnEndGame();
	void ClientOnEndGame(bool Host);
	void ForceRestart();
	void ServForceRestart(bool B);
	void ToggleDevLab();
	void PlayerReady();
	void OnSurvivorDeath(bool BecomeSpectator);
	void BecomeSpectator(bool Escape_, bool WithoutFade);
	void KillSurvivor();
	void ChangeLevel(const struct FString& LevelName);
	void OnChangeLevel();
	void SendKillerChar(TEnumAsByte<KillerType_EKillerType> KillerType);
	void GetChatMessage(const struct FText& TextToSend, int Type, bool Killer_);
	void UpdateChat(const struct FText& sender, const struct FText& Text, int Type, bool Killer_, bool ItsMe_);
	void LootboxShopServer(class ALootboxShop_C* Actor, class UClass* Class, const struct FTransform& SpawnTransform, bool Block_);
	void LootboxShopMulticast(bool Block_, class ALootboxShop_C* Actor);
	void LootboxShopAnimServer(class ALootboxShop_C* Actor, bool Arm_, bool Door_);
	void JoinToNext();
	void SendSurvClass(TEnumAsByte<SurvClass_ESurvClass> Class, TEnumAsByte<SurvChars_ESurvChars> char_);
	void DevDestroySession();
	void FailJoin();
	void OnNetworkError();
	void OpenLootboxServ(class AActor* lootbox, TEnumAsByte<LootBoxRollType_ELootBoxRollType> RollType, const struct FString& Nickname);
	void SpawnItemlootboxServ(class AActor* NewParam, const struct FTransform& NewParam2, class UClass* NewParam3, const struct FString& NewParam4);
	void SpawnItemLootboxMulti(class ALootBox_C* NewParam, const struct FTransform& NewParam2, class UClass* NewParam3);
	void HideHUD_AfterDeath();
	void LootboxNotEnoughServ(class AActor* lootbox);
	void PlayerUnready();
	void SoundChatServ(int SoundIndex, class USoundChat_C* Widget, int WidgetMenuType);
	void SoundChatMulticast(int SoundIndex, class USoundChat_C* Widget, int WidgetMenuType);
	void SoundChatMenu1(int Sound);
	void SoundChatMenu2(int Sound);
	void SendSurvSkill(TEnumAsByte<SurvSkills_ESurvSkills> Skill);
	void MenuCall();
	void OpenEndGameWindow();
	void SpectatorSwitch(class ABP_Spectator_C* Spectator, bool Spectating_);
	void AllEndGame();
	void Fade(bool Escape_);
	void AllPlayersFade();
	void SpectateEndGame();
	void SendSurvSkinId(int ID, int Lvl);
	void SpawnWait();
	void ReceiveDestroyed();
	void VictoryScreen();
	void FadeOut();
	void MapVote(TEnumAsByte<MapVote_EMapVote> MapVoteEnum);
	void PlayerVote(TEnumAsByte<PlayerCategoryVote_EPlayerCategoryVote> PlayerCategoryVoteEnum);
	void Clear();
	void SwapRequest(class APawn* Target);
	void AcceptSwap();
	void OnSwapPerformed(bool IsKiller);
	void OnSwap();
	void SpawnTutorial(bool Killer_);
	void Liked(class APS_PropHunt_C* NewParam);
	void OnSwapNotification();
	void GetSystemMessage(const struct FText& Text);
	void UpdateSurvProp();
	void PerksPrintChat(const struct FText& sender, const struct FText& Text);
	void SurvOnChair(bool WantBeSpectator_);
	void PlayerTo_Spectator();
	void SpectatorTo_Player();
	void SpectatorBackUISurv();
	void InitMicVoiceSettings();
	void Swap_LeaveFromServer(class APawn* LeftPlayer);
	void ClientLeft_FromServer_Swap_(class APawn* LeftPlayer);
	void YouHaveBeenKicked();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void SetPerkIndex_SERV(int PerkIndex, const struct FString& PerkName);
	void SetPerkIndex_MULTI(int PerkIndex, const struct FString& PerkName);
	void RandomPerk_Serv();
	void PlayerVote_v2(const struct FString& PlayerNickName);
	void AddCoins(int Coins);
	void SetSkin();
	void ShowIntroBanner_Server(const struct FName& PlayerStartTag, class APlayerState* PlayerState, int AvatarID, int BannerID, int TagID);
	void ShowIntroBanner_Client(class APlayerState* State, const struct FName& Tag, int AvatarID, int BannerID, int TagID, const struct FString& inString, TEnumAsByte<SurvChars_ESurvChars> SurvChar);
	void StartProfle();
	void StartNetProfile();
	void GetSettings();
	void LeaveVivoxChannelIfKiller();
	void ExecuteUbergraph_PC_PropHunt(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
