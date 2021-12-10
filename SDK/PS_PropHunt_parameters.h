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

// Function PS_PropHunt.PS_PropHunt_C.GetCurrentEXP
struct APS_PropHunt_C_GetCurrentEXP_Params
{
	int                                                CurEXP;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.GetPointsForPerks
struct APS_PropHunt_C_GetPointsForPerks_Params
{
	int                                                PerkPoints;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.GetPerkName
struct APS_PropHunt_C_GetPerkName_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PerkIndex;                                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.SeeKillerSilhouetteNearHC
struct APS_PropHunt_C_SeeKillerSilhouetteNearHC_Params
{
	bool                                               wannasee;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PS_PropHunt.PS_PropHunt_C.OnRep_SteamPlayerID
struct APS_PropHunt_C_OnRep_SteamPlayerID_Params
{
};

// Function PS_PropHunt.PS_PropHunt_C.GetSkin
struct APS_PropHunt_C_GetSkin_Params
{
	TMap<int, class USkeletalMesh*>                    Output_Get;                                                // 0x0000(0x0050)  (Parm, OutParm)
};

// Function PS_PropHunt.PS_PropHunt_C.OnRep_CurrentLVL
struct APS_PropHunt_C_OnRep_CurrentLVL_Params
{
};

// Function PS_PropHunt.PS_PropHunt_C.HasAnyPawnSwap
struct APS_PropHunt_C_HasAnyPawnSwap_Params
{
	bool                                               HasAny;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PS_PropHunt.PS_PropHunt_C.HasPawnSwap
struct APS_PropHunt_C_HasPawnSwap_Params
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Has;                                                       // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PS_PropHunt.PS_PropHunt_C.ClearSwapSenders
struct APS_PropHunt_C_ClearSwapSenders_Params
{
};

// Function PS_PropHunt.PS_PropHunt_C.AddSwapSender
struct APS_PropHunt_C_AddSwapSender_Params
{
	class APawn*                                       sender;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.CheckMode
struct APS_PropHunt_C_CheckMode_Params
{
	bool                                               Propnight_;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PS_PropHunt.PS_PropHunt_C.OnRep_SurvSkinID
struct APS_PropHunt_C_OnRep_SurvSkinID_Params
{
};

// Function PS_PropHunt.PS_PropHunt_C.SetStatus
struct APS_PropHunt_C_SetStatus_Params
{
	TEnumAsByte<E_SurvivorStatus_E_SurvivorStatus>     Status;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.SurvHealScore
struct APS_PropHunt_C_SurvHealScore_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Other_;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PS_PropHunt.PS_PropHunt_C.FlashScore
struct APS_PropHunt_C_FlashScore_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsGrabbed_;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PS_PropHunt.PS_PropHunt_C.DoorOpenScore
struct APS_PropHunt_C_DoorOpenScore_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.OutFromHandsScore
struct APS_PropHunt_C_OutFromHandsScore_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.StunScore
struct APS_PropHunt_C_StunScore_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsGrabbed_;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PS_PropHunt.PS_PropHunt_C.ExitScore
struct APS_PropHunt_C_ExitScore_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.OutChairScore
struct APS_PropHunt_C_OutChairScore_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.ReanimateScore
struct APS_PropHunt_C_ReanimateScore_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.AlarmSuper
struct APS_PropHunt_C_AlarmSuper_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.AlarmGood
struct APS_PropHunt_C_AlarmGood_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.AlarmScore
struct APS_PropHunt_C_AlarmScore_Params
{
	TArray<class AActor*>                              Surfs;                                                     // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PS_PropHunt.PS_PropHunt_C.HitScore
struct APS_PropHunt_C_HitScore_Params
{
	class AActor*                                      Killer;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Damage;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.CrawlScore
struct APS_PropHunt_C_CrawlScore_Params
{
	class AActor*                                      Killer;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.OutChairSelfScore
struct APS_PropHunt_C_OutChairSelfScore_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.ChairScore
struct APS_PropHunt_C_ChairScore_Params
{
	class AActor*                                      Killer;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.ScoreCalc
struct APS_PropHunt_C_ScoreCalc_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       ScoreText;                                                 // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               GiveMoney_;                                                // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReText_;                                                   // 0x0021(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PS_PropHunt.PS_PropHunt_C.OutChairPickLockScore
struct APS_PropHunt_C_OutChairPickLockScore_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.ZeroScoreSendText
struct APS_PropHunt_C_ZeroScoreSendText_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.SurvDropItem
struct APS_PropHunt_C_SurvDropItem_Params
{
	bool                                               lastLVL;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PS_PropHunt.PS_PropHunt_C.LevelUpped
struct APS_PropHunt_C_LevelUpped_Params
{
	class AActor*                                      PlayerRef;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.SetDepth
struct APS_PropHunt_C_SetDepth_Params
{
};

// Function PS_PropHunt.PS_PropHunt_C.DamageTakenEvent
struct APS_PropHunt_C_DamageTakenEvent_Params
{
	int                                                Count;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.PointsGainedEvent
struct APS_PropHunt_C_PointsGainedEvent_Params
{
	int                                                Count;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.AssistsEvent
struct APS_PropHunt_C_AssistsEvent_Params
{
};

// Function PS_PropHunt.PS_PropHunt_C.ObjectivesDoneEvent
struct APS_PropHunt_C_ObjectivesDoneEvent_Params
{
};

// Function PS_PropHunt.PS_PropHunt_C.DamageDoneEvent
struct APS_PropHunt_C_DamageDoneEvent_Params
{
	int                                                Count;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.SetSurvCategory
struct APS_PropHunt_C_SetSurvCategory_Params
{
	TEnumAsByte<SurvCategory_ESurvCategory>            Type;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.SetKillerCategory
struct APS_PropHunt_C_SetKillerCategory_Params
{
	TEnumAsByte<KillerCategory_EKillerCategory>        Type;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.SetSurvTopCategory
struct APS_PropHunt_C_SetSurvTopCategory_Params
{
	TEnumAsByte<SurvCategory_ESurvCategory>            SurvCategory;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.SetKillerTopCategory
struct APS_PropHunt_C_SetKillerTopCategory_Params
{
	TEnumAsByte<KillerCategory_EKillerCategory>        KillerCategory;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.SurvivalTimeEvent
struct APS_PropHunt_C_SurvivalTimeEvent_Params
{
	int                                                Count;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.StunsEvent
struct APS_PropHunt_C_StunsEvent_Params
{
};

// Function PS_PropHunt.PS_PropHunt_C.KillsEvent
struct APS_PropHunt_C_KillsEvent_Params
{
};

// Function PS_PropHunt.PS_PropHunt_C.CoinServ
struct APS_PropHunt_C_CoinServ_Params
{
	int                                                I;                                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PS_PropHunt.PS_PropHunt_C.CoinMulti
struct APS_PropHunt_C_CoinMulti_Params
{
	int                                                I;                                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASurvivorMasterBP_C*                         syrv;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PS_PropHunt.PS_PropHunt_C.KillScore
struct APS_PropHunt_C_KillScore_Params
{
};

// Function PS_PropHunt.PS_PropHunt_C.GetSurvCategory
struct APS_PropHunt_C_GetSurvCategory_Params
{
};

// Function PS_PropHunt.PS_PropHunt_C.GetKillerCategory
struct APS_PropHunt_C_GetKillerCategory_Params
{
};

// Function PS_PropHunt.PS_PropHunt_C.PlayerLikes
struct APS_PropHunt_C_PlayerLikes_Params
{
};

// Function PS_PropHunt.PS_PropHunt_C.GetSurvSecondCategory
struct APS_PropHunt_C_GetSurvSecondCategory_Params
{
};

// Function PS_PropHunt.PS_PropHunt_C.GetKillerSecondCategory
struct APS_PropHunt_C_GetKillerSecondCategory_Params
{
};

// Function PS_PropHunt.PS_PropHunt_C.DistanceTraveledEvent
struct APS_PropHunt_C_DistanceTraveledEvent_Params
{
};

// Function PS_PropHunt.PS_PropHunt_C.CursedPropServer
struct APS_PropHunt_C_CursedPropServer_Params
{
	int                                                Points;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.CursedPropMulticast
struct APS_PropHunt_C_CursedPropMulticast_Params
{
	int                                                Points;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASurvivorMasterBP_C*                         Surv;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.FartCoin
struct APS_PropHunt_C_FartCoin_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.TeamScoreAddCoins
struct APS_PropHunt_C_TeamScoreAddCoins_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Scores;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.MvpSurv
struct APS_PropHunt_C_MvpSurv_Params
{
};

// Function PS_PropHunt.PS_PropHunt_C.SetTimingToAllChairs
struct APS_PropHunt_C_SetTimingToAllChairs_Params
{
};

// Function PS_PropHunt.PS_PropHunt_C.Reaction_COIN
struct APS_PropHunt_C_Reaction_COIN_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.FullAlarm_COIN
struct APS_PropHunt_C_FullAlarm_COIN_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.ReanimateSurv_COIN
struct APS_PropHunt_C_ReanimateSurv_COIN_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.Help_SurvOutFromCHAIR
struct APS_PropHunt_C_Help_SurvOutFromCHAIR_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.IncreaseOnceHP
struct APS_PropHunt_C_IncreaseOnceHP_Params
{
	int                                                HP;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.StunKiller_COIN
struct APS_PropHunt_C_StunKiller_COIN_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.FlashKiller_Coin
struct APS_PropHunt_C_FlashKiller_Coin_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.Chase_Surv
struct APS_PropHunt_C_Chase_Surv_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.Chase_Killer
struct APS_PropHunt_C_Chase_Killer_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.Summator_TotalCategories
struct APS_PropHunt_C_Summator_TotalCategories_Params
{
};

// Function PS_PropHunt.PS_PropHunt_C.AlmostPerfect
struct APS_PropHunt_C_AlmostPerfect_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.ReceiveBeginPlay
struct APS_PropHunt_C_ReceiveBeginPlay_Params
{
};

// Function PS_PropHunt.PS_PropHunt_C.ReceiveTick
struct APS_PropHunt_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.ApplyName
struct APS_PropHunt_C_ApplyName_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UTexture2D*                                  Avatar;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.LocalSkinLobby
struct APS_PropHunt_C_LocalSkinLobby_Params
{
	TEnumAsByte<SurvChars_ESurvChars>                  char_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.ServSkinLobby
struct APS_PropHunt_C_ServSkinLobby_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.MultiSkinLobby
struct APS_PropHunt_C_MultiSkinLobby_Params
{
	int                                                ID;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.AlarmNormal
struct APS_PropHunt_C_AlarmNormal_Params
{
	class AActor*                                      Surv;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.ActiveVoice
struct APS_PropHunt_C_ActiveVoice_Params
{
	bool                                               Active;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PS_PropHunt.PS_PropHunt_C.SkinCheatPSLocal
struct APS_PropHunt_C_SkinCheatPSLocal_Params
{
};

// Function PS_PropHunt.PS_PropHunt_C.SkinCheatPSServer
struct APS_PropHunt_C_SkinCheatPSServer_Params
{
	bool                                               B;                                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PS_PropHunt.PS_PropHunt_C.AddEXP
struct APS_PropHunt_C_AddEXP_Params
{
	int                                                Exp;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Player;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                        HUD;                                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.AddLVL_SERV
struct APS_PropHunt_C_AddLVL_SERV_Params
{
};

// Function PS_PropHunt.PS_PropHunt_C.AddLVL_MULTI
struct APS_PropHunt_C_AddLVL_MULTI_Params
{
};

// Function PS_PropHunt.PS_PropHunt_C.DecreasePerkPoints
struct APS_PropHunt_C_DecreasePerkPoints_Params
{
	int                                                PerkPoints;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.SetSkin_SERV
struct APS_PropHunt_C_SetSkin_SERV_Params
{
	TArray<int>                                        Array;                                                     // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PS_PropHunt.PS_PropHunt_C.SetSkin_MULTI
struct APS_PropHunt_C_SetSkin_MULTI_Params
{
	TArray<int>                                        Array;                                                     // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PS_PropHunt.PS_PropHunt_C.SetBanner
struct APS_PropHunt_C_SetBanner_Params
{
	int                                                BannerID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TagID;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Avatar;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.Diamonds
struct APS_PropHunt_C_Diamonds_Params
{
	bool                                               Add_;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Count;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.LoadSkinsAndBanner
struct APS_PropHunt_C_LoadSkinsAndBanner_Params
{
};

// Function PS_PropHunt.PS_PropHunt_C.SetSkinsAndTag
struct APS_PropHunt_C_SetSkinsAndTag_Params
{
	TArray<int>                                        Array;                                                     // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PS_PropHunt.PS_PropHunt_C.SetBanner_M
struct APS_PropHunt_C_SetBanner_M_Params
{
	int                                                BannerID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TagID;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Avatar;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PS_PropHunt.PS_PropHunt_C.ExecuteUbergraph_PS_PropHunt
struct APS_PropHunt_C_ExecuteUbergraph_PS_PropHunt_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
