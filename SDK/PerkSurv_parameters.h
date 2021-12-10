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

// Function PerkSurv.PerkSurv_C.GetCurrentEXP
struct UPerkSurv_C_GetCurrentEXP_Params
{
	int                                                CurEXP;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkSurv.PerkSurv_C.GetPointsForPerks
struct UPerkSurv_C_GetPointsForPerks_Params
{
	int                                                PerkPoints;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkSurv.PerkSurv_C.SeeKillerSilhouetteNearHC
struct UPerkSurv_C_SeeKillerSilhouetteNearHC_Params
{
	bool                                               wannasee;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PerkSurv.PerkSurv_C.GetPerkName
struct UPerkSurv_C_GetPerkName_Params
{
	struct FName                                       Name;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PerkIndex;                                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkSurv.PerkSurv_C.HelpSelfChair
struct UPerkSurv_C_HelpSelfChair_Params
{
	bool                                               CanSelfHelp;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PerkSurv.PerkSurv_C.IsAnotherSurvWantToHaveDelayedStun
struct UPerkSurv_C_IsAnotherSurvWantToHaveDelayedStun_Params
{
	bool                                               Yes;                                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                interger;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkSurv.PerkSurv_C.HittedWannaSeeKiller
struct UPerkSurv_C_HittedWannaSeeKiller_Params
{
};

// Function PerkSurv.PerkSurv_C.DelayedStun
struct UPerkSurv_C_DelayedStun_Params
{
};

// Function PerkSurv.PerkSurv_C.SeeOtherSurvivors
struct UPerkSurv_C_SeeOtherSurvivors_Params
{
};

// Function PerkSurv.PerkSurv_C.SetToAllKillerSillhouette
struct UPerkSurv_C_SetToAllKillerSillhouette_Params
{
};

// Function PerkSurv.PerkSurv_C.See Killer Silhouette Near Hypno Chair
struct UPerkSurv_C_See_Killer_Silhouette_Near_Hypno_Chair_Params
{
	bool                                               WannaSee_;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PerkSurv.PerkSurv_C.AddPercentToRareLP
struct UPerkSurv_C_AddPercentToRareLP_Params
{
	class ALootBox_C*                                  LP;                                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkSurv.PerkSurv_C.IfAlarmSucceedIncreaseTime
struct UPerkSurv_C_IfAlarmSucceedIncreaseTime_Params
{
};

// Function PerkSurv.PerkSurv_C.PropmachineFixAndGetHeal
struct UPerkSurv_C_PropmachineFixAndGetHeal_Params
{
	int                                                B;                                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkSurv.PerkSurv_C.IncreaseHypnochairTimeSelf
struct UPerkSurv_C_IncreaseHypnochairTimeSelf_Params
{
	class AHypnoChairBP_C*                             Chair;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkSurv.PerkSurv_C.PauseHypnohcairTime
struct UPerkSurv_C_PauseHypnohcairTime_Params
{
	class AHypnoChairBP_C*                             Chair;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BoostTime;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Pause;                                                     // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PerkSurv.PerkSurv_C.RestoreHeallthTimeMultiplier
struct UPerkSurv_C_RestoreHeallthTimeMultiplier_Params
{
	float                                              RestoreHealthTimeMultiplier;                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkSurv.PerkSurv_C.IncreaseMaxPropHealth
struct UPerkSurv_C_IncreaseMaxPropHealth_Params
{
	bool                                               increaseHP;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               _2LVL;                                                     // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PerkSurv.PerkSurv_C.IncreaseMaxStamina
struct UPerkSurv_C_IncreaseMaxStamina_Params
{
	float                                              stamina;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkSurv.PerkSurv_C.Increase HP
struct UPerkSurv_C_Increase_HP_Params
{
	int                                                HP;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkSurv.PerkSurv_C.AddEXP
struct UPerkSurv_C_AddEXP_Params
{
	int                                                Exp;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Player;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                        HUD;                                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkSurv.PerkSurv_C.IncreaseOnceHP
struct UPerkSurv_C_IncreaseOnceHP_Params
{
	int                                                HP;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkSurv.PerkSurv_C.SetTimingToAllChairs
struct UPerkSurv_C_SetTimingToAllChairs_Params
{
};

// Function PerkSurv.PerkSurv_C.SetDepth
struct UPerkSurv_C_SetDepth_Params
{
};

// Function PerkSurv.PerkSurv_C.LevelUpped
struct UPerkSurv_C_LevelUpped_Params
{
	class AActor*                                      PlayerRef;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkSurv.PerkSurv_C.DecreasePerkPoints
struct UPerkSurv_C_DecreasePerkPoints_Params
{
	int                                                PerkPoints;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkSurv.PerkSurv_C.SurvDropItem
struct UPerkSurv_C_SurvDropItem_Params
{
	bool                                               lastLVL;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PerkSurv.PerkSurv_C.ReceiveBeginPlay
struct UPerkSurv_C_ReceiveBeginPlay_Params
{
};

// Function PerkSurv.PerkSurv_C.SetPerk2Activated_SERV
struct UPerkSurv_C_SetPerk2Activated_SERV_Params
{
};

// Function PerkSurv.PerkSurv_C.SetPerk2Activated_MULTI
struct UPerkSurv_C_SetPerk2Activated_MULTI_Params
{
};

// Function PerkSurv.PerkSurv_C.SetPerk1activated_SERV
struct UPerkSurv_C_SetPerk1activated_SERV_Params
{
};

// Function PerkSurv.PerkSurv_C.SetPerk1Activated_MULTI
struct UPerkSurv_C_SetPerk1Activated_MULTI_Params
{
};

// Function PerkSurv.PerkSurv_C.SetPerk3Activated_SERV
struct UPerkSurv_C_SetPerk3Activated_SERV_Params
{
};

// Function PerkSurv.PerkSurv_C.SetPerk3Activated_MULTI
struct UPerkSurv_C_SetPerk3Activated_MULTI_Params
{
};

// Function PerkSurv.PerkSurv_C.DelayedStun_SERV
struct UPerkSurv_C_DelayedStun_SERV_Params
{
};

// Function PerkSurv.PerkSurv_C.DelayedStun_MULTI
struct UPerkSurv_C_DelayedStun_MULTI_Params
{
};

// Function PerkSurv.PerkSurv_C.ActivateDelatedStunToAnotherSurv
struct UPerkSurv_C_ActivateDelatedStunToAnotherSurv_Params
{
};

// Function PerkSurv.PerkSurv_C.SetBoostTimeHypnoChair
struct UPerkSurv_C_SetBoostTimeHypnoChair_Params
{
	float                                              BoostTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHypnoChairBP_C*                             HP;                                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkSurv.PerkSurv_C.SetBoostTimeHypnoChair_MULTI
struct UPerkSurv_C_SetBoostTimeHypnoChair_MULTI_Params
{
	class AHypnoChairBP_C*                             HP;                                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BoostTime;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkSurv.PerkSurv_C.GetHealFromPropmachine
struct UPerkSurv_C_GetHealFromPropmachine_Params
{
	int                                                B;                                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkSurv.PerkSurv_C.GetHealFromPropmachine_MULTI
struct UPerkSurv_C_GetHealFromPropmachine_MULTI_Params
{
	int                                                B;                                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkSurv.PerkSurv_C.Heal
struct UPerkSurv_C_Heal_Params
{
	int                                                B;                                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkSurv.PerkSurv_C.ExecuteUbergraph_PerkSurv
struct UPerkSurv_C_ExecuteUbergraph_PerkSurv_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
