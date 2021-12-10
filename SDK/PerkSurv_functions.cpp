// Name: P, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.GetCurrentEXP
//		Flags  -> ()
// Parameters:
//		int                                                CurEXP                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkSurv_C::GetCurrentEXP(int* CurEXP)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.GetCurrentEXP");

	UPerkSurv_C_GetCurrentEXP_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurEXP != nullptr)
		*CurEXP = params.CurEXP;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.GetPointsForPerks
//		Flags  -> ()
// Parameters:
//		int                                                PerkPoints                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkSurv_C::GetPointsForPerks(int* PerkPoints)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.GetPointsForPerks");

	UPerkSurv_C_GetPointsForPerks_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PerkPoints != nullptr)
		*PerkPoints = params.PerkPoints;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.SeeKillerSilhouetteNearHC
//		Flags  -> ()
// Parameters:
//		bool                                               wannasee                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPerkSurv_C::SeeKillerSilhouetteNearHC(bool* wannasee)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.SeeKillerSilhouetteNearHC");

	UPerkSurv_C_SeeKillerSilhouetteNearHC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (wannasee != nullptr)
		*wannasee = params.wannasee;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.GetPerkName
//		Flags  -> ()
// Parameters:
//		struct FName                                       Name                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                PerkIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkSurv_C::GetPerkName(struct FName* Name, int* PerkIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.GetPerkName");

	UPerkSurv_C_GetPerkName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Name != nullptr)
		*Name = params.Name;
	if (PerkIndex != nullptr)
		*PerkIndex = params.PerkIndex;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.HelpSelfChair
//		Flags  -> ()
// Parameters:
//		bool                                               CanSelfHelp                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPerkSurv_C::HelpSelfChair(bool* CanSelfHelp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.HelpSelfChair");

	UPerkSurv_C_HelpSelfChair_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanSelfHelp != nullptr)
		*CanSelfHelp = params.CanSelfHelp;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.IsAnotherSurvWantToHaveDelayedStun
//		Flags  -> ()
// Parameters:
//		bool                                               Yes                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                interger                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkSurv_C::IsAnotherSurvWantToHaveDelayedStun(bool* Yes, int* interger)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.IsAnotherSurvWantToHaveDelayedStun");

	UPerkSurv_C_IsAnotherSurvWantToHaveDelayedStun_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Yes != nullptr)
		*Yes = params.Yes;
	if (interger != nullptr)
		*interger = params.interger;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.HittedWannaSeeKiller
//		Flags  -> ()
// Parameters:
void UPerkSurv_C::HittedWannaSeeKiller()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.HittedWannaSeeKiller");

	UPerkSurv_C_HittedWannaSeeKiller_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.DelayedStun
//		Flags  -> ()
// Parameters:
void UPerkSurv_C::DelayedStun()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.DelayedStun");

	UPerkSurv_C_DelayedStun_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.SeeOtherSurvivors
//		Flags  -> ()
// Parameters:
void UPerkSurv_C::SeeOtherSurvivors()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.SeeOtherSurvivors");

	UPerkSurv_C_SeeOtherSurvivors_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.SetToAllKillerSillhouette
//		Flags  -> ()
void UPerkSurv_C::SetToAllKillerSillhouette()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.SetToAllKillerSillhouette");

	UPerkSurv_C_SetToAllKillerSillhouette_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.See Killer Silhouette Near Hypno Chair
//		Flags  -> ()
// Parameters:
//		bool                                               WannaSee_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPerkSurv_C::See_Killer_Silhouette_Near_Hypno_Chair(bool WannaSee_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.See Killer Silhouette Near Hypno Chair");

	UPerkSurv_C_See_Killer_Silhouette_Near_Hypno_Chair_Params params {};
	params.WannaSee_ = WannaSee_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.AddPercentToRareLP
//		Flags  -> ()
// Parameters:
//		class ALootBox_C*                                  LP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkSurv_C::AddPercentToRareLP(class ALootBox_C* LP)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.AddPercentToRareLP");

	UPerkSurv_C_AddPercentToRareLP_Params params {};
	params.LP = LP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.IfAlarmSucceedIncreaseTime
//		Flags  -> ()
// Parameters:
void UPerkSurv_C::IfAlarmSucceedIncreaseTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.IfAlarmSucceedIncreaseTime");

	UPerkSurv_C_IfAlarmSucceedIncreaseTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.PropmachineFixAndGetHeal
//		Flags  -> ()
// Parameters:
//		int                                                B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkSurv_C::PropmachineFixAndGetHeal(int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.PropmachineFixAndGetHeal");

	UPerkSurv_C_PropmachineFixAndGetHeal_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.IncreaseHypnochairTimeSelf
//		Flags  -> ()
// Parameters:
//		class AHypnoChairBP_C*                             Chair                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkSurv_C::IncreaseHypnochairTimeSelf(class AHypnoChairBP_C* Chair)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.IncreaseHypnochairTimeSelf");

	UPerkSurv_C_IncreaseHypnochairTimeSelf_Params params {};
	params.Chair = Chair;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.PauseHypnohcairTime
//		Flags  -> ()
// Parameters:
//		class AHypnoChairBP_C*                             Chair                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              BoostTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Pause                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPerkSurv_C::PauseHypnohcairTime(class AHypnoChairBP_C* Chair, float BoostTime, bool Pause)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.PauseHypnohcairTime");

	UPerkSurv_C_PauseHypnohcairTime_Params params {};
	params.Chair = Chair;
	params.BoostTime = BoostTime;
	params.Pause = Pause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.RestoreHeallthTimeMultiplier
//		Flags  -> ()
// Parameters:
//		float                                              RestoreHealthTimeMultiplier                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkSurv_C::RestoreHeallthTimeMultiplier(float RestoreHealthTimeMultiplier)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.RestoreHeallthTimeMultiplier");

	UPerkSurv_C_RestoreHeallthTimeMultiplier_Params params {};
	params.RestoreHealthTimeMultiplier = RestoreHealthTimeMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.IncreaseMaxPropHealth
//		Flags  -> ()
// Parameters:
//		bool                                               increaseHP                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               _2LVL                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPerkSurv_C::IncreaseMaxPropHealth(bool* increaseHP, bool* _2LVL)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.IncreaseMaxPropHealth");

	UPerkSurv_C_IncreaseMaxPropHealth_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (increaseHP != nullptr)
		*increaseHP = params.increaseHP;
	if (_2LVL != nullptr)
		*_2LVL = params._2LVL;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.IncreaseMaxStamina
//		Flags  -> ()
// Parameters:
//		float                                              stamina                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkSurv_C::IncreaseMaxStamina(float stamina)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.IncreaseMaxStamina");

	UPerkSurv_C_IncreaseMaxStamina_Params params {};
	params.stamina = stamina;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.Increase HP
//		Flags  -> ()
// Parameters:
//		int                                                HP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkSurv_C::Increase_HP(int HP)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.Increase HP");

	UPerkSurv_C_Increase_HP_Params params {};
	params.HP = HP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.AddEXP
//		Flags  -> ()
// Parameters:
//		int                                                Exp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AHUD*                                        HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkSurv_C::AddEXP(int Exp, class AActor* Player, class AHUD* HUD)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.AddEXP");

	UPerkSurv_C_AddEXP_Params params {};
	params.Exp = Exp;
	params.Player = Player;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.IncreaseOnceHP
//		Flags  -> ()
// Parameters:
//		int                                                HP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkSurv_C::IncreaseOnceHP(int HP)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.IncreaseOnceHP");

	UPerkSurv_C_IncreaseOnceHP_Params params {};
	params.HP = HP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.SetTimingToAllChairs
//		Flags  -> ()
void UPerkSurv_C::SetTimingToAllChairs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.SetTimingToAllChairs");

	UPerkSurv_C_SetTimingToAllChairs_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.SetDepth
//		Flags  -> ()
void UPerkSurv_C::SetDepth()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.SetDepth");

	UPerkSurv_C_SetDepth_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.LevelUpped
//		Flags  -> ()
// Parameters:
//		class AActor*                                      PlayerRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkSurv_C::LevelUpped(class AActor* PlayerRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.LevelUpped");

	UPerkSurv_C_LevelUpped_Params params {};
	params.PlayerRef = PlayerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.DecreasePerkPoints
//		Flags  -> ()
// Parameters:
//		int                                                PerkPoints                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkSurv_C::DecreasePerkPoints(int PerkPoints)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.DecreasePerkPoints");

	UPerkSurv_C_DecreasePerkPoints_Params params {};
	params.PerkPoints = PerkPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.SurvDropItem
//		Flags  -> ()
// Parameters:
//		bool                                               lastLVL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPerkSurv_C::SurvDropItem(bool lastLVL)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.SurvDropItem");

	UPerkSurv_C_SurvDropItem_Params params {};
	params.lastLVL = lastLVL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.ReceiveBeginPlay
//		Flags  -> ()
void UPerkSurv_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.ReceiveBeginPlay");

	UPerkSurv_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.SetPerk2Activated_SERV
//		Flags  -> ()
void UPerkSurv_C::SetPerk2Activated_SERV()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.SetPerk2Activated_SERV");

	UPerkSurv_C_SetPerk2Activated_SERV_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.SetPerk2Activated_MULTI
//		Flags  -> ()
void UPerkSurv_C::SetPerk2Activated_MULTI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.SetPerk2Activated_MULTI");

	UPerkSurv_C_SetPerk2Activated_MULTI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.SetPerk1activated_SERV
//		Flags  -> ()
void UPerkSurv_C::SetPerk1activated_SERV()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.SetPerk1activated_SERV");

	UPerkSurv_C_SetPerk1activated_SERV_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.SetPerk1Activated_MULTI
//		Flags  -> ()
void UPerkSurv_C::SetPerk1Activated_MULTI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.SetPerk1Activated_MULTI");

	UPerkSurv_C_SetPerk1Activated_MULTI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.SetPerk3Activated_SERV
//		Flags  -> ()
void UPerkSurv_C::SetPerk3Activated_SERV()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.SetPerk3Activated_SERV");

	UPerkSurv_C_SetPerk3Activated_SERV_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.SetPerk3Activated_MULTI
//		Flags  -> ()
void UPerkSurv_C::SetPerk3Activated_MULTI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.SetPerk3Activated_MULTI");

	UPerkSurv_C_SetPerk3Activated_MULTI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.DelayedStun_SERV
//		Flags  -> ()
void UPerkSurv_C::DelayedStun_SERV()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.DelayedStun_SERV");

	UPerkSurv_C_DelayedStun_SERV_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.DelayedStun_MULTI
//		Flags  -> ()
void UPerkSurv_C::DelayedStun_MULTI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.DelayedStun_MULTI");

	UPerkSurv_C_DelayedStun_MULTI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.ActivateDelatedStunToAnotherSurv
//		Flags  -> ()
void UPerkSurv_C::ActivateDelatedStunToAnotherSurv()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.ActivateDelatedStunToAnotherSurv");

	UPerkSurv_C_ActivateDelatedStunToAnotherSurv_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.SetBoostTimeHypnoChair
//		Flags  -> ()
// Parameters:
//		float                                              BoostTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AHypnoChairBP_C*                             HP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkSurv_C::SetBoostTimeHypnoChair(float BoostTime, class AHypnoChairBP_C* HP)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.SetBoostTimeHypnoChair");

	UPerkSurv_C_SetBoostTimeHypnoChair_Params params {};
	params.BoostTime = BoostTime;
	params.HP = HP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.SetBoostTimeHypnoChair_MULTI
//		Flags  -> ()
// Parameters:
//		class AHypnoChairBP_C*                             HP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              BoostTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkSurv_C::SetBoostTimeHypnoChair_MULTI(class AHypnoChairBP_C* HP, float BoostTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.SetBoostTimeHypnoChair_MULTI");

	UPerkSurv_C_SetBoostTimeHypnoChair_MULTI_Params params {};
	params.HP = HP;
	params.BoostTime = BoostTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.GetHealFromPropmachine
//		Flags  -> ()
// Parameters:
//		int                                                B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkSurv_C::GetHealFromPropmachine(int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.GetHealFromPropmachine");

	UPerkSurv_C_GetHealFromPropmachine_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.GetHealFromPropmachine_MULTI
//		Flags  -> ()
// Parameters:
//		int                                                B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkSurv_C::GetHealFromPropmachine_MULTI(int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.GetHealFromPropmachine_MULTI");

	UPerkSurv_C_GetHealFromPropmachine_MULTI_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.Heal
//		Flags  -> ()
// Parameters:
//		int                                                B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkSurv_C::Heal(int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.Heal");

	UPerkSurv_C_Heal_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PerkSurv.PerkSurv_C.ExecuteUbergraph_PerkSurv
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPerkSurv_C::ExecuteUbergraph_PerkSurv(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PerkSurv.PerkSurv_C.ExecuteUbergraph_PerkSurv");

	UPerkSurv_C_ExecuteUbergraph_PerkSurv_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
