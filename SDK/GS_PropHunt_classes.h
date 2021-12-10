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

// BlueprintGeneratedClass GS_PropHunt.GS_PropHunt_C
// 0x0528 (FullSize[0x0798] - InheritedSize[0x0270])
class AGS_PropHunt_C : public AGameStateBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBP_ItemsManager_C*                          BP_ItemsManager;                                           // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int                                                Seconds;                                                   // 0x0288(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsLobby;                                                   // 0x028C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VU9K[0x3];                                     // 0x028D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMiniLobbyState                             LobbyState;                                                // 0x0290(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                AlarmsCount;                                               // 0x02E8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DYO1[0x4];                                     // 0x02EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ASurvivorMasterBP_C*>                 SurvArrayRef;                                              // 0x02F0(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               IsKillerWin;                                               // 0x0300(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9WN1[0x7];                                     // 0x0301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class APlayerStart*>                        PlayerStarts;                                              // 0x0308(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              AliveSurvivors;                                            // 0x0318(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              ReadyPlayers;                                              // 0x0328(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AHypnoChairBP_C*>                     ChairRef;                                                  // 0x0338(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ANewAlarmBP_C*>                       AlarmsRef;                                                 // 0x0348(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               IsGameSession;                                             // 0x0358(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7B01[0x3];                                     // 0x0359(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SurvsOnChair;                                              // 0x035C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NeedAlarmRelaoding;                                        // 0x0360(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                EndGameAlarmCount;                                         // 0x0364(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DoorOpened_;                                               // 0x0368(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FCW5[0x3];                                     // 0x0369(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                EscapedSurvCount;                                          // 0x036C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               GameStart_;                                                // 0x0370(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Y7TW[0x7];                                     // 0x0371(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FItemSnapshot>                       ItemSnapshots;                                             // 0x0378(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                FloorsCount;                                               // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Score;                                                     // 0x038C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               GameEnd_;                                                  // 0x0390(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IDEO[0x7];                                     // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class AActor*, struct FString>                VoteMap;                                                   // 0x0398(0x0050) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               IsGranny;                                                  // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UKDV[0x3];                                     // 0x03E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Random;                                                    // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<bool>                                       RemoveSurvs_;                                              // 0x03F0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                CurrentCountCoins;                                         // 0x0400(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxCountCoins;                                             // 0x0404(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTransform>                          CoinsPositions;                                            // 0x0408(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FTransform>                          FreeSpaceCoinsPositions;                                   // 0x0418(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              DeltaSeconds;                                              // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SurvClass_ESurvClass>                  SurvClass;                                                 // 0x042C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsPublic;                                                  // 0x042D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DKA8[0x2];                                     // 0x042E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                StartGameTimer;                                            // 0x0430(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               BoostModeON_;                                              // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<KillerType_EKillerType>                KillerType;                                                // 0x0439(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_18HS[0x2];                                     // 0x043A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Temp1;                                                     // 0x043C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Temp2;                                                     // 0x0448(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               TimerStart_;                                               // 0x0454(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MVEZ[0x3];                                     // 0x0455(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxScore_AlarmGame;                                        // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_REVIVE;                                           // 0x045C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_OutChair;                                         // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_FLASH;                                            // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_HealALLY;                                         // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_HealSELF;                                         // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_OutGrip;                                          // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_HIT;                                              // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_DOWNED;                                           // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_CHAIR;                                            // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_Stun;                                             // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MAXSCOREBLOCK_AlarmGame;                                   // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MAXSCOREBLOCK_REVIVE;                                      // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MAXSCOREBLOCK_OutChair;                                    // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MAXSCOREBLOCK_FLASH;                                       // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MAXSCOREBLOCK_HealALLY;                                    // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MAXSCOREBLOCK_HealSELF;                                    // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MAXSCOREBLOCK_OutGrip;                                     // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MAXSCOREBLOCK_Stun;                                        // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MAXSCOREBLOCK_HIT;                                         // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MAXSCOREBLOCK_DOWNED;                                      // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MAXSCOREBLOCK_CHAIR;                                       // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                KillScoreCounter;                                          // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PropHuntMode_;                                             // 0x04B4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CaptureMode_;                                              // 0x04B5(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CXBB[0x2];                                     // 0x04B6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ACoinActor_C*>                        Coins;                                                     // 0x04B8(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FS_GameSettings                             GameSettings;                                              // 0x04C8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                FartSeconds;                                               // 0x04E8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsLobbyStateAccepted_;                                     // 0x04EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8FY5[0x3];                                     // 0x04ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TempCategory;                                              // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CXDP[0x4];                                     // 0x04F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APlayerState*                                IgnoredPlayer;                                             // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APlayerState*>                        TempPlayerStates;                                          // 0x0500(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class APlayerState*                                SurvFirstCategory;                                         // 0x0510(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                                SurvSecondCategory;                                        // 0x0518(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                                KillerCategory;                                            // 0x0520(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TempSwap1;                                                 // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TempSwap2;                                                 // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<TEnumAsByte<MapVote_EMapVote>, int>           ReadingMapVotesMap;                                        // 0x0530(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<TEnumAsByte<PlayerCategoryVote_EPlayerCategoryVote>, int> ReadingPlayersCategoryVotes;                               // 0x0580(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                VoteCountMap1;                                             // 0x05D0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                VoteCountMap2;                                             // 0x05D4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                VoteCountMap3;                                             // 0x05D8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                VoteCountPlayerCategory1;                                  // 0x05DC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                VoteCountPlayerCategory2;                                  // 0x05E0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                VoteCountPlayerCategory3;                                  // 0x05E4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FName>                               TempMapNames;                                              // 0x05E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                IntTemp;                                                   // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Map1;                                                      // 0x05FC(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Map2;                                                      // 0x0604(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Map3;                                                      // 0x060C(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NextGameTimer;                                             // 0x0614(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int>                                        IntArrayTemp;                                              // 0x0618(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               AllAlarmsReady_;                                           // 0x0628(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5Q0U[0x3];                                     // 0x0629(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MatchTime;                                                 // 0x062C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APlayerState*>                        TempPlayerStates2;                                         // 0x0630(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               bPlayerStart;                                              // 0x0640(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AJSL[0x7];                                     // 0x0641(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TempSlotName1;                                             // 0x0648(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     TempSlotName2;                                             // 0x0658(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                               Tutorial_;                                                 // 0x0668(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CJX6[0x7];                                     // 0x0669(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FS_ServerSettings                           ServerSettings;                                            // 0x0670(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                CountKillers;                                              // 0x0698(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CountSurvs;                                                // 0x069C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsLobbyWait;                                               // 0x06A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SoloMode_;                                                 // 0x06A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_68IH[0x2];                                     // 0x06A2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                OnChairSurvs;                                              // 0x06A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                KillerPoints;                                              // 0x06A8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SurvPoints;                                                // 0x06AC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LobbyTime;                                                 // 0x06B0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LobbyBlockRdy_;                                            // 0x06B4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PSPP[0x3];                                     // 0x06B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TempMvp;                                                   // 0x06B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LLCP[0x4];                                     // 0x06BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APS_PropHunt_C*                              MvpSurv;                                                   // 0x06C0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               MvpPlayerReady_;                                           // 0x06C8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WIWD[0x7];                                     // 0x06C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APS_PropHunt_C*                              TempSwap;                                                  // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int                                                INDX_Slots;                                                // 0x06D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<CoinEnum_ECoinEnum>                    PointsType;                                                // 0x06DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZYSD[0x3];                                     // 0x06DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      TempPlayer;                                                // 0x06E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                WaitPlayersTimerHandle;                                    // 0x06E8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               SomeoneLeftAfterFullLobby;                                 // 0x06F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               FullLobbyWasReached;                                       // 0x06F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CanAssign;                                                 // 0x06F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               KillerLeave_;                                              // 0x06F3(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XGHL[0x4];                                     // 0x06F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               TempPerks;                                                 // 0x06F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                TempInt;                                                   // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HGXH[0x4];                                     // 0x070C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, int>                          ReadingPlayersCategoryVotes_v2;                            // 0x0710(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int>                                        VotesArray;                                                // 0x0760(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnVoted;                                                   // 0x0770(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                MaxScore_DoorOpen;                                         // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_ExitDoor;                                         // 0x0784(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FEndGamePlayerData>                  HighlightPlayerInformation;                                // 0x0788(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass GS_PropHunt.GS_PropHunt_C");
		return ptr;
	}



	void AddAllHightlightsInformation();
	void SetMvpPlyerHightlight();
	void addHightlightsPlayerInforation(const struct FString& Nickname, bool IsKiller, int AvatarID, int BannerID, int TagID, TEnumAsByte<SurvChars_ESurvChars> CharType, TEnumAsByte<KillerType_EKillerType> KillerType, int DamageDone, int Kills, int Assists, int ObjectivesDone, int SurvivalTime, int Stuns, int DistanceTraveled, bool isMVPPlayer, const struct FString& SurvSlotName);
	void CheckSurvsAfterLeave(bool* HasAliveSurv);
	void IsKillerSlotFree(bool* Free);
	void IsKillerPlayerHere(bool* Here);
	void GetAvailableSurvSlot(struct FString* Name);
	void FindEmptySlotFromList(struct FString* EmptySlotName);
	void survSpawnZap(class APlayerStart** NewParam);
	void ManageProphuntSlots();
	void ToActor(class AActor* Target, class AActor** Actor);
	void ResolveNextServer();
	void Assign_Slots();
	void CheckVoteMap(bool* AllAgree);
	void ClearItems();
	void PlaceItemsP2();
	void PlaceItems(bool BeginGame_);
	void CollectItems();
	void CheckPlayerReservedSlot(class APC_PropHunt_C* Controller, bool* Reserved);
	void GetSurvivorGameStart(class APC_PropHunt_C* Controller, class APlayerStart** Result);
	void MakeEmptyLobby(struct FMiniLobbyState* Result);
	void RemoveAliveSurvivor(class AActor* Actor, bool Escaped_);
	void AddAliveSurvivor(class AActor* Actor);
	void GetRandomSurvivorPlayerStart(class APlayerStart** res);
	void GetKillerPlayerStart(class APC_PropHunt_C* Controller, class APlayerStart** PlayerStart);
	void AcceptTransport(const struct FS_LobbyStateTransport& Transport);
	void CreateLobbyTransport(struct FS_LobbyStateTransport* Transport);
	void ReceiveBeginPlay();
	void LobbyStateUpdate(const struct FS_LobbyStateTransport& State);
	void ProcessLobbyStateChange();
	void OnReserveRequest(class APC_PropHunt_C* Controller, const struct FString& SlotName, bool Silent);
	void OnReleaseRequest(class APC_PropHunt_C* Controller, const struct FString& SlotName, bool Silent);
	void GetAlarmsCountEvent();
	void DecreaseAlarmsCountEvent(TArray<class AActor*> Surfs);
	void OnStartGame();
	void GetSurvEvent();
	void SurvStatusChangedEvent();
	void OnRaiseLobby();
	void OnEndGameGS(bool IsKillerWin);
	void MultiSetIsKillerWin(bool IsKillerWin);
	void DoorIsOpen();
	void CountPlayerStarts();
	void OnPlayerDeath(class AActor* Player);
	void OnPlayerReady(class AActor* Player);
	void OnPlayerLeft(class AActor* Player);
	void OnPlayerLogin(class AActor* Player);
	void CheckForReadyPlayers();
	void GetAlarms();
	void GetChairs();
	void OnPlayerEscaped(class AActor* Player);
	void ReceiveTick(float DeltaSeconds);
	void AmbientOff();
	void BoostMode();
	void AlarmScore(TArray<class AActor*> Surfs);
	void AlarmGood(class AActor* Surv);
	void AlarmSuper(class AActor* Surv);
	void ScoreCalc(class AActor* Surv, const struct FText& ScoreText);
	void ReanimateScore(class AActor* Surv);
	void OutChairScore(class AActor* Surv);
	void ExitScore(class AActor* Surv);
	void DoorOpenScore(class AActor* Surv);
	void FlashScore(class AActor* Surv, bool IsGrabbed_);
	void SurvHealScore(class AActor* Surv, bool Other_);
	void HitScore(class AActor* Killer, int Damage);
	void CrawlScore(class AActor* Killer);
	void ChairScore(class AActor* Killer);
	void KillScore();
	void OnServerTravel();
	void SetKillerType(TEnumAsByte<KillerType_EKillerType> KillerType);
	void RedirectPlayers();
	void ItemsClear();
	void AlmostPerfect(class AActor* Surv);
	void AlarmNormal(class AActor* Surv);
	void FreezePlayersServ();
	void FreezePlayersMulti();
	void Kukarequ();
	void StartGameState();
	void CancelGameStart();
	void OnPlayerUnready(class AActor* Player);
	void TimerControl(bool Add_, int Seconds);
	void SendTextTimerControl(bool Add_, int Seconds);
	void Intro(class APlayerStart* KPSRef);
	void StormTimerServ(float F, class AMapStormBP_C* ref);
	void StormTimerMulti(float F, class AMapStormBP_C* ref);
	void UpdateAvatars();
	void ZeroScoreSendText(class AActor* Actor);
	void OutFromHandsScore(class AActor* Surv);
	void StunScore(class AActor* Surv, bool IsGrabbed_);
	void RemoveAllAlarms();
	void StartFartTime();
	void Fart();
	void GetCategory();
	void ReadingMapVotes(TEnumAsByte<MapVote_EMapVote> MapVote, bool PrevVoteDelete_);
	void ClearAllVotes();
	void ReadingPlayerVotes(TEnumAsByte<PlayerCategoryVote_EPlayerCategoryVote> PlayerVote, bool PrevVoteDelete_);
	void GetRandomMaps();
	void VoteMapEnd();
	void SwapPlayers(class APC_PropHunt_C* Player1, class APC_PropHunt_C* Player2);
	void SwapNotification();
	void CheckAliveSurvivors();
	void LoadPlayerStart();
	void CheckSurvs();
	void CheckOnChairSurvs();
	void OnChairSurvsSoundMulticast(class UFMODEvent* Event, int Count_);
	void UpdateLobbyTime();
	void EndGameAllPostProcessOff();
	void TeamScore(bool Killer_, int Points);
	void printmulti(const struct FString& inString);
	void CalculateLobbyTime();
	void SuperRoma();
	void SwapLeave_FromServer(class APawn* LeftPlayer);
	void GetMvpPlayer();
	void CheckForKiller(const struct FString& ID, class APC_PropHunt_C* Player);
	void WaitPlayersTimer();
	void WaitPlayersTimeout();
	void MultiWaitPlayersTimeout();
	void SendLobbyState();
	void KillerLeave();
	void SurvLeaved();
	void RandomPerks();
	void ReadyRandomPerk();
	void ReadingPlayerVotes_v2(const struct FString& PlayerNickName, bool PrevVoteDelete);
	void ReadingPlayerVotes_v2_Multicast(const struct FString& Player_Nickname, int Votes_Number);
	void exitvoice(class APawn* Target);
	void ExecuteUbergraph_GS_PropHunt(int EntryPoint);
	void OnVoted__DelegateSignature(const struct FString& Player_Nickname, int Votes_Number);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
