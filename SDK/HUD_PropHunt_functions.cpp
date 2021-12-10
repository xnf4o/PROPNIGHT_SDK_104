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
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.GetCurrentEXP
//		Flags  -> ()
// Parameters:
//		int                                                CurEXP                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHUD_PropHunt_C::GetCurrentEXP(int* CurEXP)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.GetCurrentEXP");

	AHUD_PropHunt_C_GetCurrentEXP_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurEXP != nullptr)
		*CurEXP = params.CurEXP;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.GetPointsForPerks
//		Flags  -> ()
// Parameters:
//		int                                                PerkPoints                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHUD_PropHunt_C::GetPointsForPerks(int* PerkPoints)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.GetPointsForPerks");

	AHUD_PropHunt_C_GetPointsForPerks_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PerkPoints != nullptr)
		*PerkPoints = params.PerkPoints;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.GetPerkName
//		Flags  -> ()
// Parameters:
//		struct FName                                       Name                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                PerkIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHUD_PropHunt_C::GetPerkName(struct FName* Name, int* PerkIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.GetPerkName");

	AHUD_PropHunt_C_GetPerkName_Params params {};

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
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.SeeKillerSilhouetteNearHC
//		Flags  -> ()
// Parameters:
//		bool                                               wannasee                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHUD_PropHunt_C::SeeKillerSilhouetteNearHC(bool* wannasee)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.SeeKillerSilhouetteNearHC");

	AHUD_PropHunt_C_SeeKillerSilhouetteNearHC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (wannasee != nullptr)
		*wannasee = params.wannasee;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.GetLocalizedMapName
//		Flags  -> ()
// Parameters:
//		struct FString                                     MapName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FText                                       Localized                                                  (Parm, OutParm)
void AHUD_PropHunt_C::GetLocalizedMapName(const struct FString& MapName, struct FText* Localized)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.GetLocalizedMapName");

	AHUD_PropHunt_C_GetLocalizedMapName_Params params {};
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Localized != nullptr)
		*Localized = params.Localized;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.Timeline_0__FinishedFunc
//		Flags  -> ()
void AHUD_PropHunt_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.Timeline_0__FinishedFunc");

	AHUD_PropHunt_C_Timeline_0__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.Timeline_0__UpdateFunc
//		Flags  -> ()
void AHUD_PropHunt_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.Timeline_0__UpdateFunc");

	AHUD_PropHunt_C_Timeline_0__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.OnRaiseLobby
//		Flags  -> ()
void AHUD_PropHunt_C::OnRaiseLobby()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.OnRaiseLobby");

	AHUD_PropHunt_C_OnRaiseLobby_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.CreateGameResult
//		Flags  -> ()
void AHUD_PropHunt_C::CreateGameResult()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.CreateGameResult");

	AHUD_PropHunt_C_CreateGameResult_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.OnEndGame
//		Flags  -> ()
// Parameters:
//		bool                                               EndGame_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHUD_PropHunt_C::OnEndGame(bool EndGame_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.OnEndGame");

	AHUD_PropHunt_C_OnEndGame_Params params {};
	params.EndGame_ = EndGame_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.CreateDevLab
//		Flags  -> ()
void AHUD_PropHunt_C::CreateDevLab()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.CreateDevLab");

	AHUD_PropHunt_C_CreateDevLab_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.ShowDevLab
//		Flags  -> ()
void AHUD_PropHunt_C::ShowDevLab()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.ShowDevLab");

	AHUD_PropHunt_C_ShowDevLab_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.HideDevLab
//		Flags  -> ()
void AHUD_PropHunt_C::HideDevLab()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.HideDevLab");

	AHUD_PropHunt_C_HideDevLab_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.InitSurvStatus
//		Flags  -> ()
void AHUD_PropHunt_C::InitSurvStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.InitSurvStatus");

	AHUD_PropHunt_C_InitSurvStatus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.CreateKillerUI
//		Flags  -> ()
void AHUD_PropHunt_C::CreateKillerUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.CreateKillerUI");

	AHUD_PropHunt_C_CreateKillerUI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.CreateSurvivorUI
//		Flags  -> ()
void AHUD_PropHunt_C::CreateSurvivorUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.CreateSurvivorUI");

	AHUD_PropHunt_C_CreateSurvivorUI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.CreateKillerFlashUI
//		Flags  -> ()
void AHUD_PropHunt_C::CreateKillerFlashUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.CreateKillerFlashUI");

	AHUD_PropHunt_C_CreateKillerFlashUI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.CreateAmmoKiller
//		Flags  -> ()
void AHUD_PropHunt_C::CreateAmmoKiller()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.CreateAmmoKiller");

	AHUD_PropHunt_C_CreateAmmoKiller_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.InitKillerAmmo
//		Flags  -> ()
void AHUD_PropHunt_C::InitKillerAmmo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.InitKillerAmmo");

	AHUD_PropHunt_C_InitKillerAmmo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.ReceiveBeginPlay
//		Flags  -> ()
void AHUD_PropHunt_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.ReceiveBeginPlay");

	AHUD_PropHunt_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.FadeOut
//		Flags  -> ()
void AHUD_PropHunt_C::FadeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.FadeOut");

	AHUD_PropHunt_C_FadeOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.CreatePlayerScore
//		Flags  -> ()
void AHUD_PropHunt_C::CreatePlayerScore()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.CreatePlayerScore");

	AHUD_PropHunt_C_CreatePlayerScore_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.InitPlayerScore
//		Flags  -> ()
void AHUD_PropHunt_C::InitPlayerScore()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.InitPlayerScore");

	AHUD_PropHunt_C_InitPlayerScore_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.CreateChatWindow
//		Flags  -> ()
void AHUD_PropHunt_C::CreateChatWindow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.CreateChatWindow");

	AHUD_PropHunt_C_CreateChatWindow_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.InitChat
//		Flags  -> ()
void AHUD_PropHunt_C::InitChat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.InitChat");

	AHUD_PropHunt_C_InitChat_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.CreateSetteings
//		Flags  -> ()
void AHUD_PropHunt_C::CreateSetteings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.CreateSetteings");

	AHUD_PropHunt_C_CreateSetteings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.InitSettings
//		Flags  -> ()
void AHUD_PropHunt_C::InitSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.InitSettings");

	AHUD_PropHunt_C_InitSettings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.FadeIn
//		Flags  -> ()
void AHUD_PropHunt_C::FadeIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.FadeIn");

	AHUD_PropHunt_C_FadeIn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.SurvDropItem
//		Flags  -> ()
// Parameters:
//		bool                                               lastLVL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHUD_PropHunt_C::SurvDropItem(bool lastLVL)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.SurvDropItem");

	AHUD_PropHunt_C_SurvDropItem_Params params {};
	params.lastLVL = lastLVL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.CreateVoiceChat
//		Flags  -> ()
void AHUD_PropHunt_C::CreateVoiceChat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.CreateVoiceChat");

	AHUD_PropHunt_C_CreateVoiceChat_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.InitVoiceChat
//		Flags  -> ()
void AHUD_PropHunt_C::InitVoiceChat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.InitVoiceChat");

	AHUD_PropHunt_C_InitVoiceChat_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.InitPauseMenu
//		Flags  -> ()
void AHUD_PropHunt_C::InitPauseMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.InitPauseMenu");

	AHUD_PropHunt_C_InitPauseMenu_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.CreatePauseMenu
//		Flags  -> ()
void AHUD_PropHunt_C::CreatePauseMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.CreatePauseMenu");

	AHUD_PropHunt_C_CreatePauseMenu_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.DecreasePerkPoints
//		Flags  -> ()
// Parameters:
//		int                                                PerkPoints                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHUD_PropHunt_C::DecreasePerkPoints(int PerkPoints)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.DecreasePerkPoints");

	AHUD_PropHunt_C_DecreasePerkPoints_Params params {};
	params.PerkPoints = PerkPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.VisibilityGameUI
//		Flags  -> ()
// Parameters:
//		bool                                               Hide_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               OnlyGameUI_                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHUD_PropHunt_C::VisibilityGameUI(bool Hide_, bool OnlyGameUI_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.VisibilityGameUI");

	AHUD_PropHunt_C_VisibilityGameUI_Params params {};
	params.Hide_ = Hide_;
	params.OnlyGameUI_ = OnlyGameUI_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.CreateSurvStatusWidget
//		Flags  -> ()
void AHUD_PropHunt_C::CreateSurvStatusWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.CreateSurvStatusWidget");

	AHUD_PropHunt_C_CreateSurvStatusWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.CreateSurvEffectsUI
//		Flags  -> ()
void AHUD_PropHunt_C::CreateSurvEffectsUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.CreateSurvEffectsUI");

	AHUD_PropHunt_C_CreateSurvEffectsUI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.GameEndHideUI
//		Flags  -> ()
void AHUD_PropHunt_C::GameEndHideUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.GameEndHideUI");

	AHUD_PropHunt_C_GameEndHideUI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.SetDepth
//		Flags  -> ()
void AHUD_PropHunt_C::SetDepth()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.SetDepth");

	AHUD_PropHunt_C_SetDepth_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.RemoveSettings
//		Flags  -> ()
void AHUD_PropHunt_C::RemoveSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.RemoveSettings");

	AHUD_PropHunt_C_RemoveSettings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.PlayerDeath
//		Flags  -> ()
void AHUD_PropHunt_C::PlayerDeath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.PlayerDeath");

	AHUD_PropHunt_C_PlayerDeath_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.SetTimingToAllChairs
//		Flags  -> ()
void AHUD_PropHunt_C::SetTimingToAllChairs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.SetTimingToAllChairs");

	AHUD_PropHunt_C_SetTimingToAllChairs_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.InitlAlarm
//		Flags  -> ()
void AHUD_PropHunt_C::InitlAlarm()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.InitlAlarm");

	AHUD_PropHunt_C_InitlAlarm_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.CreateEffectWindow
//		Flags  -> ()
void AHUD_PropHunt_C::CreateEffectWindow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.CreateEffectWindow");

	AHUD_PropHunt_C_CreateEffectWindow_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.AddEffect
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Description                                                (BlueprintVisible, BlueprintReadOnly, Parm)
void AHUD_PropHunt_C::AddEffect(int Index, float Duration, const struct FText& Description)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.AddEffect");

	AHUD_PropHunt_C_AddEffect_Params params {};
	params.Index = Index;
	params.Duration = Duration;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.CreateSoundChat
//		Flags  -> ()
void AHUD_PropHunt_C::CreateSoundChat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.CreateSoundChat");

	AHUD_PropHunt_C_CreateSoundChat_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.IncreaseOnceHP
//		Flags  -> ()
// Parameters:
//		int                                                HP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHUD_PropHunt_C::IncreaseOnceHP(int HP)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.IncreaseOnceHP");

	AHUD_PropHunt_C_IncreaseOnceHP_Params params {};
	params.HP = HP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.CreateEffectsHUD
//		Flags  -> ()
void AHUD_PropHunt_C::CreateEffectsHUD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.CreateEffectsHUD");

	AHUD_PropHunt_C_CreateEffectsHUD_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.CreateAlarmWidget
//		Flags  -> ()
void AHUD_PropHunt_C::CreateAlarmWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.CreateAlarmWidget");

	AHUD_PropHunt_C_CreateAlarmWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.AddEXP
//		Flags  -> ()
// Parameters:
//		int                                                Exp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AHUD*                                        HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHUD_PropHunt_C::AddEXP(int Exp, class AActor* Player, class AHUD* HUD)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.AddEXP");

	AHUD_PropHunt_C_AddEXP_Params params {};
	params.Exp = Exp;
	params.Player = Player;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.LoadingScreenHUD
//		Flags  -> ()
void AHUD_PropHunt_C::LoadingScreenHUD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.LoadingScreenHUD");

	AHUD_PropHunt_C_LoadingScreenHUD_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.RemoveLoadingScreenHUD
//		Flags  -> ()
void AHUD_PropHunt_C::RemoveLoadingScreenHUD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.RemoveLoadingScreenHUD");

	AHUD_PropHunt_C_RemoveLoadingScreenHUD_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.AddAvatarSteam
//		Flags  -> ()
// Parameters:
//		class UTexture2D*                                  NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHUD_PropHunt_C::AddAvatarSteam(class UTexture2D* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.AddAvatarSteam");

	AHUD_PropHunt_C_AddAvatarSteam_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.SpectateHideUI
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHUD_PropHunt_C::SpectateHideUI(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.SpectateHideUI");

	AHUD_PropHunt_C_SpectateHideUI_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.HideLobby
//		Flags  -> ()
// Parameters:
//		bool                                               Wait_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHUD_PropHunt_C::HideLobby(bool Wait_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.HideLobby");

	AHUD_PropHunt_C_HideLobby_Params params {};
	params.Wait_ = Wait_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.OnStartGame
//		Flags  -> ()
void AHUD_PropHunt_C::OnStartGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.OnStartGame");

	AHUD_PropHunt_C_OnStartGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.CreatePropHuntWidgets
//		Flags  -> ()
void AHUD_PropHunt_C::CreatePropHuntWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.CreatePropHuntWidgets");

	AHUD_PropHunt_C_CreatePropHuntWidgets_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.ClearSurvHUD
//		Flags  -> ()
void AHUD_PropHunt_C::ClearSurvHUD()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.ClearSurvHUD");

	AHUD_PropHunt_C_ClearSurvHUD_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.InitLobby
//		Flags  -> ()
void AHUD_PropHunt_C::InitLobby()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.InitLobby");

	AHUD_PropHunt_C_InitLobby_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.VictoryScreenInit
//		Flags  -> ()
void AHUD_PropHunt_C::VictoryScreenInit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.VictoryScreenInit");

	AHUD_PropHunt_C_VictoryScreenInit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.EndGameFade
//		Flags  -> ()
void AHUD_PropHunt_C::EndGameFade()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.EndGameFade");

	AHUD_PropHunt_C_EndGameFade_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.EndGameHide
//		Flags  -> ()
// Parameters:
//		bool                                               On_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHUD_PropHunt_C::EndGameHide(bool On_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.EndGameHide");

	AHUD_PropHunt_C_EndGameHide_Params params {};
	params.On_ = On_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.RemoveLoadingScreen2
//		Flags  -> ()
void AHUD_PropHunt_C::RemoveLoadingScreen2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.RemoveLoadingScreen2");

	AHUD_PropHunt_C_RemoveLoadingScreen2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.CreateMiniLobby
//		Flags  -> ()
void AHUD_PropHunt_C::CreateMiniLobby()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.CreateMiniLobby");

	AHUD_PropHunt_C_CreateMiniLobby_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.CreateTipWidget
//		Flags  -> ()
void AHUD_PropHunt_C::CreateTipWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.CreateTipWidget");

	AHUD_PropHunt_C_CreateTipWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.ShowEliminationScreen
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FString                                     Nickname                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHUD_PropHunt_C::ShowEliminationScreen(const struct FText& Text, const struct FString& Nickname, int Score)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.ShowEliminationScreen");

	AHUD_PropHunt_C_ShowEliminationScreen_Params params {};
	params.Text = Text;
	params.Nickname = Nickname;
	params.Score = Score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.CreateEliminationScreen
//		Flags  -> ()
void AHUD_PropHunt_C::CreateEliminationScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.CreateEliminationScreen");

	AHUD_PropHunt_C_CreateEliminationScreen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.CreateEffectBloodLast
//		Flags  -> ()
void AHUD_PropHunt_C::CreateEffectBloodLast()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.CreateEffectBloodLast");

	AHUD_PropHunt_C_CreateEffectBloodLast_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.CreateSpectator
//		Flags  -> ()
void AHUD_PropHunt_C::CreateSpectator()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.CreateSpectator");

	AHUD_PropHunt_C_CreateSpectator_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.SpectateShowUI
//		Flags  -> ()
void AHUD_PropHunt_C::SpectateShowUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.SpectateShowUI");

	AHUD_PropHunt_C_SpectateShowUI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.InitForKiller
//		Flags  -> ()
// Parameters:
//		class AKillerMasterBP_C*                           Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHUD_PropHunt_C::InitForKiller(class AKillerMasterBP_C* Killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.InitForKiller");

	AHUD_PropHunt_C_InitForKiller_Params params {};
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.CreateLastChanceWidget
//		Flags  -> ()
void AHUD_PropHunt_C::CreateLastChanceWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.CreateLastChanceWidget");

	AHUD_PropHunt_C_CreateLastChanceWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.ShowLastChanceWidget
//		Flags  -> ()
void AHUD_PropHunt_C::ShowLastChanceWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.ShowLastChanceWidget");

	AHUD_PropHunt_C_ShowLastChanceWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.HideLastChanceWidget
//		Flags  -> ()
void AHUD_PropHunt_C::HideLastChanceWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.HideLastChanceWidget");

	AHUD_PropHunt_C_HideLastChanceWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.Doppelganger
//		Flags  -> ()
void AHUD_PropHunt_C::Doppelganger()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.Doppelganger");

	AHUD_PropHunt_C_Doppelganger_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.CreateMVPSCreen
//		Flags  -> ()
void AHUD_PropHunt_C::CreateMVPSCreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.CreateMVPSCreen");

	AHUD_PropHunt_C_CreateMVPSCreen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.HideAllDoorMarks
//		Flags  -> ()
void AHUD_PropHunt_C::HideAllDoorMarks()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.HideAllDoorMarks");

	AHUD_PropHunt_C_HideAllDoorMarks_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.RemoveLoadingScreen3
//		Flags  -> ()
void AHUD_PropHunt_C::RemoveLoadingScreen3()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.RemoveLoadingScreen3");

	AHUD_PropHunt_C_RemoveLoadingScreen3_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.OnMatchCanceled
//		Flags  -> ()
void AHUD_PropHunt_C::OnMatchCanceled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.OnMatchCanceled");

	AHUD_PropHunt_C_OnMatchCanceled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.CreateMatchCanceled
//		Flags  -> ()
void AHUD_PropHunt_C::CreateMatchCanceled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.CreateMatchCanceled");

	AHUD_PropHunt_C_CreateMatchCanceled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.LevelUpped
//		Flags  -> ()
// Parameters:
//		class AActor*                                      PlayerRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHUD_PropHunt_C::LevelUpped(class AActor* PlayerRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.LevelUpped");

	AHUD_PropHunt_C_LevelUpped_Params params {};
	params.PlayerRef = PlayerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.CreateBannerScreen
//		Flags  -> ()
void AHUD_PropHunt_C::CreateBannerScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.CreateBannerScreen");

	AHUD_PropHunt_C_CreateBannerScreen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.InitForSurvivor
//		Flags  -> ()
// Parameters:
//		class ASurvivorMasterBP_C*                         Survivor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Wait_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHUD_PropHunt_C::InitForSurvivor(class ASurvivorMasterBP_C* Survivor, bool Wait_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.InitForSurvivor");

	AHUD_PropHunt_C_InitForSurvivor_Params params {};
	params.Survivor = Survivor;
	params.Wait_ = Wait_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.ExecuteUbergraph_HUD_PropHunt
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHUD_PropHunt_C::ExecuteUbergraph_HUD_PropHunt(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.ExecuteUbergraph_HUD_PropHunt");

	AHUD_PropHunt_C_ExecuteUbergraph_HUD_PropHunt_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HUD_PropHunt.HUD_PropHunt_C.IsGameLoaded__DelegateSignature
//		Flags  -> ()
void AHUD_PropHunt_C::IsGameLoaded__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUD_PropHunt.HUD_PropHunt_C.IsGameLoaded__DelegateSignature");

	AHUD_PropHunt_C_IsGameLoaded__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
