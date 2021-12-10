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
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.GetCurrentEXP
//		Flags  -> ()
// Parameters:
//		int                                                CurEXP                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::GetCurrentEXP(int* CurEXP)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.GetCurrentEXP");

	APS_PropHunt_C_GetCurrentEXP_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurEXP != nullptr)
		*CurEXP = params.CurEXP;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.GetPointsForPerks
//		Flags  -> ()
// Parameters:
//		int                                                PerkPoints                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::GetPointsForPerks(int* PerkPoints)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.GetPointsForPerks");

	APS_PropHunt_C_GetPointsForPerks_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PerkPoints != nullptr)
		*PerkPoints = params.PerkPoints;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.GetPerkName
//		Flags  -> ()
// Parameters:
//		struct FName                                       Name                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                PerkIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::GetPerkName(struct FName* Name, int* PerkIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.GetPerkName");

	APS_PropHunt_C_GetPerkName_Params params {};

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
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.SeeKillerSilhouetteNearHC
//		Flags  -> ()
// Parameters:
//		bool                                               wannasee                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APS_PropHunt_C::SeeKillerSilhouetteNearHC(bool* wannasee)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.SeeKillerSilhouetteNearHC");

	APS_PropHunt_C_SeeKillerSilhouetteNearHC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (wannasee != nullptr)
		*wannasee = params.wannasee;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.OnRep_SteamPlayerID
//		Flags  -> ()
void APS_PropHunt_C::OnRep_SteamPlayerID()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.OnRep_SteamPlayerID");

	APS_PropHunt_C_OnRep_SteamPlayerID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.GetSkin
//		Flags  -> ()
// Parameters:
//		TMap<int, class USkeletalMesh*>                    Output_Get                                                 (Parm, OutParm)
void APS_PropHunt_C::GetSkin(TMap<int, class USkeletalMesh*>* Output_Get)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.GetSkin");

	APS_PropHunt_C_GetSkin_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.OnRep_CurrentLVL
//		Flags  -> ()
void APS_PropHunt_C::OnRep_CurrentLVL()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.OnRep_CurrentLVL");

	APS_PropHunt_C_OnRep_CurrentLVL_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.HasAnyPawnSwap
//		Flags  -> ()
// Parameters:
//		bool                                               HasAny                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APS_PropHunt_C::HasAnyPawnSwap(bool* HasAny)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.HasAnyPawnSwap");

	APS_PropHunt_C_HasAnyPawnSwap_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasAny != nullptr)
		*HasAny = params.HasAny;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.HasPawnSwap
//		Flags  -> ()
// Parameters:
//		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Has                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APS_PropHunt_C::HasPawnSwap(class APawn* Pawn, bool* Has)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.HasPawnSwap");

	APS_PropHunt_C_HasPawnSwap_Params params {};
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Has != nullptr)
		*Has = params.Has;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.ClearSwapSenders
//		Flags  -> ()
void APS_PropHunt_C::ClearSwapSenders()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.ClearSwapSenders");

	APS_PropHunt_C_ClearSwapSenders_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.AddSwapSender
//		Flags  -> ()
// Parameters:
//		class APawn*                                       sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::AddSwapSender(class APawn* sender)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.AddSwapSender");

	APS_PropHunt_C_AddSwapSender_Params params {};
	params.sender = sender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.CheckMode
//		Flags  -> ()
// Parameters:
//		bool                                               Propnight_                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APS_PropHunt_C::CheckMode(bool* Propnight_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.CheckMode");

	APS_PropHunt_C_CheckMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Propnight_ != nullptr)
		*Propnight_ = params.Propnight_;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.OnRep_SurvSkinID
//		Flags  -> ()
void APS_PropHunt_C::OnRep_SurvSkinID()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.OnRep_SurvSkinID");

	APS_PropHunt_C_OnRep_SurvSkinID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.SetStatus
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<E_SurvivorStatus_E_SurvivorStatus>     Status                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::SetStatus(TEnumAsByte<E_SurvivorStatus_E_SurvivorStatus> Status)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.SetStatus");

	APS_PropHunt_C_SetStatus_Params params {};
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.SurvHealScore
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Other_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APS_PropHunt_C::SurvHealScore(class AActor* Surv, bool Other_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.SurvHealScore");

	APS_PropHunt_C_SurvHealScore_Params params {};
	params.Surv = Surv;
	params.Other_ = Other_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.FlashScore
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsGrabbed_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APS_PropHunt_C::FlashScore(class AActor* Surv, bool IsGrabbed_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.FlashScore");

	APS_PropHunt_C_FlashScore_Params params {};
	params.Surv = Surv;
	params.IsGrabbed_ = IsGrabbed_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.DoorOpenScore
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::DoorOpenScore(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.DoorOpenScore");

	APS_PropHunt_C_DoorOpenScore_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.OutFromHandsScore
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::OutFromHandsScore(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.OutFromHandsScore");

	APS_PropHunt_C_OutFromHandsScore_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.StunScore
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsGrabbed_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APS_PropHunt_C::StunScore(class AActor* Surv, bool IsGrabbed_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.StunScore");

	APS_PropHunt_C_StunScore_Params params {};
	params.Surv = Surv;
	params.IsGrabbed_ = IsGrabbed_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.ExitScore
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::ExitScore(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.ExitScore");

	APS_PropHunt_C_ExitScore_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.OutChairScore
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::OutChairScore(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.OutChairScore");

	APS_PropHunt_C_OutChairScore_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.ReanimateScore
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::ReanimateScore(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.ReanimateScore");

	APS_PropHunt_C_ReanimateScore_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.AlarmSuper
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::AlarmSuper(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.AlarmSuper");

	APS_PropHunt_C_AlarmSuper_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.AlarmGood
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::AlarmGood(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.AlarmGood");

	APS_PropHunt_C_AlarmGood_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.AlarmScore
//		Flags  -> ()
// Parameters:
//		TArray<class AActor*>                              Surfs                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void APS_PropHunt_C::AlarmScore(TArray<class AActor*> Surfs)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.AlarmScore");

	APS_PropHunt_C_AlarmScore_Params params {};
	params.Surfs = Surfs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.HitScore
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::HitScore(class AActor* Killer, int Damage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.HitScore");

	APS_PropHunt_C_HitScore_Params params {};
	params.Killer = Killer;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.CrawlScore
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::CrawlScore(class AActor* Killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.CrawlScore");

	APS_PropHunt_C_CrawlScore_Params params {};
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.OutChairSelfScore
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::OutChairSelfScore(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.OutChairSelfScore");

	APS_PropHunt_C_OutChairSelfScore_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.ChairScore
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::ChairScore(class AActor* Killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.ChairScore");

	APS_PropHunt_C_ChairScore_Params params {};
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.ScoreCalc
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       ScoreText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               GiveMoney_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ReText_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APS_PropHunt_C::ScoreCalc(class AActor* Surv, const struct FText& ScoreText, bool GiveMoney_, bool ReText_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.ScoreCalc");

	APS_PropHunt_C_ScoreCalc_Params params {};
	params.Surv = Surv;
	params.ScoreText = ScoreText;
	params.GiveMoney_ = GiveMoney_;
	params.ReText_ = ReText_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.OutChairPickLockScore
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::OutChairPickLockScore(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.OutChairPickLockScore");

	APS_PropHunt_C_OutChairPickLockScore_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.ZeroScoreSendText
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::ZeroScoreSendText(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.ZeroScoreSendText");

	APS_PropHunt_C_ZeroScoreSendText_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.SurvDropItem
//		Flags  -> ()
// Parameters:
//		bool                                               lastLVL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APS_PropHunt_C::SurvDropItem(bool lastLVL)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.SurvDropItem");

	APS_PropHunt_C_SurvDropItem_Params params {};
	params.lastLVL = lastLVL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.LevelUpped
//		Flags  -> ()
// Parameters:
//		class AActor*                                      PlayerRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::LevelUpped(class AActor* PlayerRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.LevelUpped");

	APS_PropHunt_C_LevelUpped_Params params {};
	params.PlayerRef = PlayerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.SetDepth
//		Flags  -> ()
void APS_PropHunt_C::SetDepth()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.SetDepth");

	APS_PropHunt_C_SetDepth_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.DamageTakenEvent
//		Flags  -> ()
// Parameters:
//		int                                                Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::DamageTakenEvent(int Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.DamageTakenEvent");

	APS_PropHunt_C_DamageTakenEvent_Params params {};
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.PointsGainedEvent
//		Flags  -> ()
// Parameters:
//		int                                                Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::PointsGainedEvent(int Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.PointsGainedEvent");

	APS_PropHunt_C_PointsGainedEvent_Params params {};
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.AssistsEvent
//		Flags  -> ()
void APS_PropHunt_C::AssistsEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.AssistsEvent");

	APS_PropHunt_C_AssistsEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.ObjectivesDoneEvent
//		Flags  -> ()
void APS_PropHunt_C::ObjectivesDoneEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.ObjectivesDoneEvent");

	APS_PropHunt_C_ObjectivesDoneEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.DamageDoneEvent
//		Flags  -> ()
// Parameters:
//		int                                                Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::DamageDoneEvent(int Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.DamageDoneEvent");

	APS_PropHunt_C_DamageDoneEvent_Params params {};
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.SetSurvCategory
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SurvCategory_ESurvCategory>            Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::SetSurvCategory(TEnumAsByte<SurvCategory_ESurvCategory> Type, int Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.SetSurvCategory");

	APS_PropHunt_C_SetSurvCategory_Params params {};
	params.Type = Type;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.SetKillerCategory
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<KillerCategory_EKillerCategory>        Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::SetKillerCategory(TEnumAsByte<KillerCategory_EKillerCategory> Type, int Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.SetKillerCategory");

	APS_PropHunt_C_SetKillerCategory_Params params {};
	params.Type = Type;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.SetSurvTopCategory
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SurvCategory_ESurvCategory>            SurvCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::SetSurvTopCategory(TEnumAsByte<SurvCategory_ESurvCategory> SurvCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.SetSurvTopCategory");

	APS_PropHunt_C_SetSurvTopCategory_Params params {};
	params.SurvCategory = SurvCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.SetKillerTopCategory
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<KillerCategory_EKillerCategory>        KillerCategory                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::SetKillerTopCategory(TEnumAsByte<KillerCategory_EKillerCategory> KillerCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.SetKillerTopCategory");

	APS_PropHunt_C_SetKillerTopCategory_Params params {};
	params.KillerCategory = KillerCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.SurvivalTimeEvent
//		Flags  -> ()
// Parameters:
//		int                                                Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::SurvivalTimeEvent(int Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.SurvivalTimeEvent");

	APS_PropHunt_C_SurvivalTimeEvent_Params params {};
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.StunsEvent
//		Flags  -> ()
void APS_PropHunt_C::StunsEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.StunsEvent");

	APS_PropHunt_C_StunsEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.KillsEvent
//		Flags  -> ()
void APS_PropHunt_C::KillsEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.KillsEvent");

	APS_PropHunt_C_KillsEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.CoinServ
//		Flags  -> ()
// Parameters:
//		int                                                I                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ASurvivorMasterBP_C*                         Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void APS_PropHunt_C::CoinServ(int I, class ASurvivorMasterBP_C* Surv, const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.CoinServ");

	APS_PropHunt_C_CoinServ_Params params {};
	params.I = I;
	params.Surv = Surv;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.CoinMulti
//		Flags  -> ()
// Parameters:
//		int                                                I                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ASurvivorMasterBP_C*                         syrv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void APS_PropHunt_C::CoinMulti(int I, class ASurvivorMasterBP_C* syrv, const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.CoinMulti");

	APS_PropHunt_C_CoinMulti_Params params {};
	params.I = I;
	params.syrv = syrv;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.KillScore
//		Flags  -> ()
void APS_PropHunt_C::KillScore()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.KillScore");

	APS_PropHunt_C_KillScore_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.GetSurvCategory
//		Flags  -> ()
void APS_PropHunt_C::GetSurvCategory()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.GetSurvCategory");

	APS_PropHunt_C_GetSurvCategory_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.GetKillerCategory
//		Flags  -> ()
void APS_PropHunt_C::GetKillerCategory()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.GetKillerCategory");

	APS_PropHunt_C_GetKillerCategory_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.PlayerLikes
//		Flags  -> ()
void APS_PropHunt_C::PlayerLikes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.PlayerLikes");

	APS_PropHunt_C_PlayerLikes_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.GetSurvSecondCategory
//		Flags  -> ()
void APS_PropHunt_C::GetSurvSecondCategory()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.GetSurvSecondCategory");

	APS_PropHunt_C_GetSurvSecondCategory_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.GetKillerSecondCategory
//		Flags  -> ()
void APS_PropHunt_C::GetKillerSecondCategory()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.GetKillerSecondCategory");

	APS_PropHunt_C_GetKillerSecondCategory_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.DistanceTraveledEvent
//		Flags  -> ()
void APS_PropHunt_C::DistanceTraveledEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.DistanceTraveledEvent");

	APS_PropHunt_C_DistanceTraveledEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.CursedPropServer
//		Flags  -> ()
// Parameters:
//		int                                                Points                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ASurvivorMasterBP_C*                         Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::CursedPropServer(int Points, class ASurvivorMasterBP_C* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.CursedPropServer");

	APS_PropHunt_C_CursedPropServer_Params params {};
	params.Points = Points;
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.CursedPropMulticast
//		Flags  -> ()
// Parameters:
//		int                                                Points                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ASurvivorMasterBP_C*                         Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::CursedPropMulticast(int Points, class ASurvivorMasterBP_C* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.CursedPropMulticast");

	APS_PropHunt_C_CursedPropMulticast_Params params {};
	params.Points = Points;
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.FartCoin
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::FartCoin(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.FartCoin");

	APS_PropHunt_C_FartCoin_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.TeamScoreAddCoins
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Scores                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::TeamScoreAddCoins(class AActor* Actor, int Scores)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.TeamScoreAddCoins");

	APS_PropHunt_C_TeamScoreAddCoins_Params params {};
	params.Actor = Actor;
	params.Scores = Scores;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.MvpSurv
//		Flags  -> ()
void APS_PropHunt_C::MvpSurv()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.MvpSurv");

	APS_PropHunt_C_MvpSurv_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.SetTimingToAllChairs
//		Flags  -> ()
void APS_PropHunt_C::SetTimingToAllChairs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.SetTimingToAllChairs");

	APS_PropHunt_C_SetTimingToAllChairs_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.Reaction_COIN
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::Reaction_COIN(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.Reaction_COIN");

	APS_PropHunt_C_Reaction_COIN_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.FullAlarm_COIN
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::FullAlarm_COIN(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.FullAlarm_COIN");

	APS_PropHunt_C_FullAlarm_COIN_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.ReanimateSurv_COIN
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::ReanimateSurv_COIN(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.ReanimateSurv_COIN");

	APS_PropHunt_C_ReanimateSurv_COIN_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.Help_SurvOutFromCHAIR
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::Help_SurvOutFromCHAIR(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.Help_SurvOutFromCHAIR");

	APS_PropHunt_C_Help_SurvOutFromCHAIR_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.IncreaseOnceHP
//		Flags  -> ()
// Parameters:
//		int                                                HP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::IncreaseOnceHP(int HP)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.IncreaseOnceHP");

	APS_PropHunt_C_IncreaseOnceHP_Params params {};
	params.HP = HP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.StunKiller_COIN
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::StunKiller_COIN(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.StunKiller_COIN");

	APS_PropHunt_C_StunKiller_COIN_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.FlashKiller_Coin
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::FlashKiller_Coin(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.FlashKiller_Coin");

	APS_PropHunt_C_FlashKiller_Coin_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.Chase_Surv
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::Chase_Surv(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.Chase_Surv");

	APS_PropHunt_C_Chase_Surv_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.Chase_Killer
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::Chase_Killer(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.Chase_Killer");

	APS_PropHunt_C_Chase_Killer_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.Summator_TotalCategories
//		Flags  -> ()
void APS_PropHunt_C::Summator_TotalCategories()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.Summator_TotalCategories");

	APS_PropHunt_C_Summator_TotalCategories_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.AlmostPerfect
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::AlmostPerfect(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.AlmostPerfect");

	APS_PropHunt_C_AlmostPerfect_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.ReceiveBeginPlay
//		Flags  -> ()
void APS_PropHunt_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.ReceiveBeginPlay");

	APS_PropHunt_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.ReceiveTick");

	APS_PropHunt_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.ApplyName
//		Flags  -> ()
// Parameters:
//		struct FString                                     Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UTexture2D*                                  Avatar                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::ApplyName(const struct FString& Name, class UTexture2D* Avatar)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.ApplyName");

	APS_PropHunt_C_ApplyName_Params params {};
	params.Name = Name;
	params.Avatar = Avatar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.LocalSkinLobby
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SurvChars_ESurvChars>                  char_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::LocalSkinLobby(TEnumAsByte<SurvChars_ESurvChars> char_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.LocalSkinLobby");

	APS_PropHunt_C_LocalSkinLobby_Params params {};
	params.char_ = char_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.ServSkinLobby
//		Flags  -> ()
// Parameters:
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::ServSkinLobby(int ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.ServSkinLobby");

	APS_PropHunt_C_ServSkinLobby_Params params {};
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.MultiSkinLobby
//		Flags  -> ()
// Parameters:
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::MultiSkinLobby(int ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.MultiSkinLobby");

	APS_PropHunt_C_MultiSkinLobby_Params params {};
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.AlarmNormal
//		Flags  -> ()
// Parameters:
//		class AActor*                                      Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::AlarmNormal(class AActor* Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.AlarmNormal");

	APS_PropHunt_C_AlarmNormal_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.ActiveVoice
//		Flags  -> ()
// Parameters:
//		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APS_PropHunt_C::ActiveVoice(bool Active)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.ActiveVoice");

	APS_PropHunt_C_ActiveVoice_Params params {};
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.SkinCheatPSLocal
//		Flags  -> ()
void APS_PropHunt_C::SkinCheatPSLocal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.SkinCheatPSLocal");

	APS_PropHunt_C_SkinCheatPSLocal_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.SkinCheatPSServer
//		Flags  -> ()
// Parameters:
//		bool                                               B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APS_PropHunt_C::SkinCheatPSServer(bool B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.SkinCheatPSServer");

	APS_PropHunt_C_SkinCheatPSServer_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.AddEXP
//		Flags  -> ()
// Parameters:
//		int                                                Exp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AHUD*                                        HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::AddEXP(int Exp, class AActor* Player, class AHUD* HUD)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.AddEXP");

	APS_PropHunt_C_AddEXP_Params params {};
	params.Exp = Exp;
	params.Player = Player;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.AddLVL_SERV
//		Flags  -> ()
void APS_PropHunt_C::AddLVL_SERV()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.AddLVL_SERV");

	APS_PropHunt_C_AddLVL_SERV_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.AddLVL_MULTI
//		Flags  -> ()
void APS_PropHunt_C::AddLVL_MULTI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.AddLVL_MULTI");

	APS_PropHunt_C_AddLVL_MULTI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.DecreasePerkPoints
//		Flags  -> ()
// Parameters:
//		int                                                PerkPoints                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::DecreasePerkPoints(int PerkPoints)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.DecreasePerkPoints");

	APS_PropHunt_C_DecreasePerkPoints_Params params {};
	params.PerkPoints = PerkPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.SetSkin_SERV
//		Flags  -> ()
// Parameters:
//		TArray<int>                                        Array                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void APS_PropHunt_C::SetSkin_SERV(TArray<int> Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.SetSkin_SERV");

	APS_PropHunt_C_SetSkin_SERV_Params params {};
	params.Array = Array;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.SetSkin_MULTI
//		Flags  -> ()
// Parameters:
//		TArray<int>                                        Array                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void APS_PropHunt_C::SetSkin_MULTI(TArray<int> Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.SetSkin_MULTI");

	APS_PropHunt_C_SetSkin_MULTI_Params params {};
	params.Array = Array;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.SetBanner
//		Flags  -> ()
// Parameters:
//		int                                                BannerID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                TagID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Avatar                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::SetBanner(int BannerID, int TagID, int Avatar)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.SetBanner");

	APS_PropHunt_C_SetBanner_Params params {};
	params.BannerID = BannerID;
	params.TagID = TagID;
	params.Avatar = Avatar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.Diamonds
//		Flags  -> ()
// Parameters:
//		bool                                               Add_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::Diamonds(bool Add_, int Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.Diamonds");

	APS_PropHunt_C_Diamonds_Params params {};
	params.Add_ = Add_;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.LoadSkinsAndBanner
//		Flags  -> ()
void APS_PropHunt_C::LoadSkinsAndBanner()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.LoadSkinsAndBanner");

	APS_PropHunt_C_LoadSkinsAndBanner_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.SetSkinsAndTag
//		Flags  -> ()
// Parameters:
//		TArray<int>                                        Array                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void APS_PropHunt_C::SetSkinsAndTag(TArray<int> Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.SetSkinsAndTag");

	APS_PropHunt_C_SetSkinsAndTag_Params params {};
	params.Array = Array;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.SetBanner_M
//		Flags  -> ()
// Parameters:
//		int                                                BannerID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                TagID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Avatar                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::SetBanner_M(int BannerID, int TagID, int Avatar)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.SetBanner_M");

	APS_PropHunt_C_SetBanner_M_Params params {};
	params.BannerID = BannerID;
	params.TagID = TagID;
	params.Avatar = Avatar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PS_PropHunt.PS_PropHunt_C.ExecuteUbergraph_PS_PropHunt
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APS_PropHunt_C::ExecuteUbergraph_PS_PropHunt(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PS_PropHunt.PS_PropHunt_C.ExecuteUbergraph_PS_PropHunt");

	APS_PropHunt_C_ExecuteUbergraph_PS_PropHunt_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
