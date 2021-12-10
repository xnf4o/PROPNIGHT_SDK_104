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

// BlueprintGeneratedClass PS_PropHunt.PS_PropHunt_C
// 0x02E8 (FullSize[0x0608] - InheritedSize[0x0320])
class APS_PropHunt_C : public APlayerState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0320(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               IsDead;                                                    // 0x0330(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsKiller;                                                  // 0x0331(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BOUN[0x6];                                     // 0x0332(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     NamePS;                                                    // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TEnumAsByte<E_SurvivorStatus_E_SurvivorStatus>     Status;                                                    // 0x0348(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5LHW[0x7];                                     // 0x0349(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     NickNamePS;                                                // 0x0350(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                KillerType;                                                // 0x0360(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerScore;                                               // 0x0364(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       ScoreText;                                                 // 0x0368(0x0018) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	TEnumAsByte<SurvClass_ESurvClass>                  SurvClass;                                                 // 0x0380(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IOWX[0x7];                                     // 0x0381(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  AvatarPS;                                                  // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerFinalScore;                                          // 0x0390(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Ready_;                                                    // 0x0394(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JH5R[0x3];                                     // 0x0395(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPlayerInfo                                 Info;                                                      // 0x0398(0x0018) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int                                                SurvSkinID;                                                // 0x03B0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YBX4[0x4];                                     // 0x03B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        SurvSkinArray;                                             // 0x03B8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                Exp;                                                       // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Lvl;                                                       // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              AliveSurvivors;                                            // 0x03D0(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                Scores;                                                    // 0x03E0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_AlarmGame;                                        // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_REVIVE;                                           // 0x03E8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_OutChair;                                         // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_OutChair_Self;                                    // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_OutChair_Self_PickLock;                           // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_OutGrip;                                          // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_FLASH;                                            // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_HealALLY;                                         // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_HealSELF;                                         // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_HIT;                                              // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_DOWNED;                                           // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_CHAIR;                                            // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_Stun;                                             // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_ChaseSurv;                                        // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_ChaseKiller;                                      // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_DoorOpen;                                         // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_ExitDoor;                                         // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MAXSCOREBLOCK_AlarmGame;                                   // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MAXSCOREBLOCK_REVIVE;                                      // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MAXSCOREBLOCK_OutChair;                                    // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MAXSCOREBLOCK_OutChair_Self;                               // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MAXSCOREBLOCK_OutChair_Self_PickLock;                      // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MAXSCOREBLOCK_OutGrip;                                     // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MAXSCOREBLOCK_FLASH;                                       // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MAXSCOREBLOCK_HealALLY;                                    // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MAXSCOREBLOCK_HealSELF;                                    // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MAXSCOREBLOCK_Stun;                                        // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MAXSCOREBLOCK_HIT;                                         // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MAXSCOREBLOCK_DOWNED;                                      // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MAXSCOREBLOCK_CHAIR;                                       // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                KillScoreCounter;                                          // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SurvChars_ESurvChars>                  SurvChar;                                                  // 0x0460(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4FFF[0x3];                                     // 0x0461(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Assists;                                                   // 0x0464(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ObjectivesDone;                                            // 0x0468(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DamageTaken;                                               // 0x046C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DamageDone;                                                // 0x0470(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PointsGained;                                              // 0x0474(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SurvCategory_ESurvCategory>            SurvCategory;                                              // 0x0478(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TopCategory_;                                              // 0x0479(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<KillerCategory_EKillerCategory>        KillerCategory;                                            // 0x047A(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Z6MV[0x1];                                     // 0x047B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CategoryValue;                                             // 0x047C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SurvivalTime;                                              // 0x0480(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Stuns;                                                     // 0x0484(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Kills;                                                     // 0x0488(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EYLZ[0x4];                                     // 0x048C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TEnumAsByte<SurvCategory_ESurvCategory>>    SurvAllCategory;                                           // 0x0490(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TEnumAsByte<KillerCategory_EKillerCategory>> KillerAllCategory;                                         // 0x04A0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int>                                        AllCategoryValue;                                          // 0x04B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               TopSeveralCategory_;                                       // 0x04C0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SSOS[0x7];                                     // 0x04C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APawn*                                       SwapSender;                                                // 0x04C8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                alarms;                                                    // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TempRandom;                                                // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Likes;                                                     // 0x04D8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<KillerCategory_EKillerCategory>        KillerSecondCategory;                                      // 0x04DC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BKBL[0x3];                                     // 0x04DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SecondCategoryValue;                                       // 0x04E0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SurvCategory_ESurvCategory>            SurvSecondCategory;                                        // 0x04E4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Z6BJ[0x3];                                     // 0x04E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class APawn*>                               SwapSenders;                                               // 0x04E8(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                DistanceTraveled;                                          // 0x04F8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<KillerType_EKillerType>                KillerChar;                                                // 0x04FC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_249U[0x3];                                     // 0x04FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BonusCounter;                                              // 0x0500(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MvpCategory;                                               // 0x0504(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MvpAllCategory;                                            // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SurvCategory_ESurvCategory>            MvpCategoryEnum;                                           // 0x050C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_K2GT[0x3];                                     // 0x050D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ID;                                                        // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsTalking;                                                 // 0x0514(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SkinCheat;                                                 // 0x0515(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TIPB[0x2];                                     // 0x0516(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PerkIndex;                                                 // 0x0518(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentLVL;                                                // 0x051C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxLVL;                                                    // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsLVlAdded;                                                // 0x0524(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_W33Q[0x3];                                     // 0x0525(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PointsForPerks;                                            // 0x0528(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8D8U[0x4];                                     // 0x052C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<int, class USkeletalMesh*>                    Skin;                                                      // 0x0530(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int>                                        SkinArr;                                                   // 0x0580(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	int                                                TagID;                                                     // 0x0590(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BannerID;                                                  // 0x0594(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DiamondsCount;                                             // 0x0598(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_AlarmGame_Coin;                                   // 0x059C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MAXSCOREBLOCK_AlarmGame_Coin;                              // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_AlarmFull_Coin;                                   // 0x05A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MAXSCOREBLOCK_AlarmFull_Coin;                              // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_Reanimate_Coin;                                   // 0x05AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MAXSCOREBLOCK_Reanimate_Coin;                              // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_OutChair_Coin;                                    // 0x05B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MAXSCOREBLOCK_OutChair_Coin;                               // 0x05B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_StunKiller_Coin;                                  // 0x05BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MAXSCOREBLOCK_StunKiller_Coin;                             // 0x05C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxScore_FlashKiller_Coin;                                 // 0x05C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MAXSCOREBLOCK_FlashKiller_Coin;                            // 0x05C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MAXSCOREBLOCK_ChaseSurv;                                   // 0x05CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MAXSCOREBLOCK_ChaseKiller;                                 // 0x05D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Sum_Assists_Surv;                                          // 0x05D4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Sum_Objectives_Surv;                                       // 0x05D8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Sum_KillerAction_Surv;                                     // 0x05DC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Sum_Chase_Killer;                                          // 0x05E0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Avatar;                                                    // 0x05E4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Sum_Hit_Killer;                                            // 0x05E8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Sum_Captured_Killer;                                       // 0x05EC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Sum_Downed_Killer;                                         // 0x05F0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Sum_Kills_Killer;                                          // 0x05F4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     SteamPlayerID;                                             // 0x05F8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass PS_PropHunt.PS_PropHunt_C");
		return ptr;
	}



	void GetCurrentEXP(int* CurEXP);
	void GetPointsForPerks(int* PerkPoints);
	void GetPerkName(struct FName* Name, int* PerkIndex);
	void SeeKillerSilhouetteNearHC(bool* wannasee);
	void OnRep_SteamPlayerID();
	void GetSkin(TMap<int, class USkeletalMesh*>* Output_Get);
	void OnRep_CurrentLVL();
	void HasAnyPawnSwap(bool* HasAny);
	void HasPawnSwap(class APawn* Pawn, bool* Has);
	void ClearSwapSenders();
	void AddSwapSender(class APawn* sender);
	void CheckMode(bool* Propnight_);
	void OnRep_SurvSkinID();
	void SetStatus(TEnumAsByte<E_SurvivorStatus_E_SurvivorStatus> Status);
	void SurvHealScore(class AActor* Surv, bool Other_);
	void FlashScore(class AActor* Surv, bool IsGrabbed_);
	void DoorOpenScore(class AActor* Surv);
	void OutFromHandsScore(class AActor* Surv);
	void StunScore(class AActor* Surv, bool IsGrabbed_);
	void ExitScore(class AActor* Surv);
	void OutChairScore(class AActor* Surv);
	void ReanimateScore(class AActor* Surv);
	void AlarmSuper(class AActor* Surv);
	void AlarmGood(class AActor* Surv);
	void AlarmScore(TArray<class AActor*> Surfs);
	void HitScore(class AActor* Killer, int Damage);
	void CrawlScore(class AActor* Killer);
	void OutChairSelfScore(class AActor* Surv);
	void ChairScore(class AActor* Killer);
	void ScoreCalc(class AActor* Surv, const struct FText& ScoreText, bool GiveMoney_, bool ReText_);
	void OutChairPickLockScore(class AActor* Surv);
	void ZeroScoreSendText(class AActor* Actor);
	void SurvDropItem(bool lastLVL);
	void LevelUpped(class AActor* PlayerRef);
	void SetDepth();
	void DamageTakenEvent(int Count);
	void PointsGainedEvent(int Count);
	void AssistsEvent();
	void ObjectivesDoneEvent();
	void DamageDoneEvent(int Count);
	void SetSurvCategory(TEnumAsByte<SurvCategory_ESurvCategory> Type, int Count);
	void SetKillerCategory(TEnumAsByte<KillerCategory_EKillerCategory> Type, int Count);
	void SetSurvTopCategory(TEnumAsByte<SurvCategory_ESurvCategory> SurvCategory);
	void SetKillerTopCategory(TEnumAsByte<KillerCategory_EKillerCategory> KillerCategory);
	void SurvivalTimeEvent(int Count);
	void StunsEvent();
	void KillsEvent();
	void CoinServ(int I, class ASurvivorMasterBP_C* Surv, const struct FText& Text);
	void CoinMulti(int I, class ASurvivorMasterBP_C* syrv, const struct FText& Text);
	void KillScore();
	void GetSurvCategory();
	void GetKillerCategory();
	void PlayerLikes();
	void GetSurvSecondCategory();
	void GetKillerSecondCategory();
	void DistanceTraveledEvent();
	void CursedPropServer(int Points, class ASurvivorMasterBP_C* Surv);
	void CursedPropMulticast(int Points, class ASurvivorMasterBP_C* Surv);
	void FartCoin(class AActor* Actor);
	void TeamScoreAddCoins(class AActor* Actor, int Scores);
	void MvpSurv();
	void SetTimingToAllChairs();
	void Reaction_COIN(class AActor* Surv);
	void FullAlarm_COIN(class AActor* Surv);
	void ReanimateSurv_COIN(class AActor* Surv);
	void Help_SurvOutFromCHAIR(class AActor* Surv);
	void IncreaseOnceHP(int HP);
	void StunKiller_COIN(class AActor* Surv);
	void FlashKiller_Coin(class AActor* Surv);
	void Chase_Surv(class AActor* Surv);
	void Chase_Killer(class AActor* Surv);
	void Summator_TotalCategories();
	void AlmostPerfect(class AActor* Surv);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ApplyName(const struct FString& Name, class UTexture2D* Avatar);
	void LocalSkinLobby(TEnumAsByte<SurvChars_ESurvChars> char_);
	void ServSkinLobby(int ID);
	void MultiSkinLobby(int ID);
	void AlarmNormal(class AActor* Surv);
	void ActiveVoice(bool Active);
	void SkinCheatPSLocal();
	void SkinCheatPSServer(bool B);
	void AddEXP(int Exp, class AActor* Player, class AHUD* HUD);
	void AddLVL_SERV();
	void AddLVL_MULTI();
	void DecreasePerkPoints(int PerkPoints);
	void SetSkin_SERV(TArray<int> Array);
	void SetSkin_MULTI(TArray<int> Array);
	void SetBanner(int BannerID, int TagID, int Avatar);
	void Diamonds(bool Add_, int Count);
	void LoadSkinsAndBanner();
	void SetSkinsAndTag(TArray<int> Array);
	void SetBanner_M(int BannerID, int TagID, int Avatar);
	void ExecuteUbergraph_PS_PropHunt(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
