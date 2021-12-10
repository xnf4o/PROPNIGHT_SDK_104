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
//		Name   -> Function I_Perk.I_Perk_C.SurvDropItem
//		Flags  -> ()
// Parameters:
//		bool                                               lastLVL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UI_Perk_C::SurvDropItem(bool lastLVL)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_Perk.I_Perk_C.SurvDropItem");

	UI_Perk_C_SurvDropItem_Params params {};
	params.lastLVL = lastLVL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_Perk.I_Perk_C.GetCurrentEXP
//		Flags  -> ()
// Parameters:
//		int                                                CurEXP                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_Perk_C::GetCurrentEXP(int* CurEXP)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_Perk.I_Perk_C.GetCurrentEXP");

	UI_Perk_C_GetCurrentEXP_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurEXP != nullptr)
		*CurEXP = params.CurEXP;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_Perk.I_Perk_C.DecreasePerkPoints
//		Flags  -> ()
// Parameters:
//		int                                                PerkPoints                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_Perk_C::DecreasePerkPoints(int PerkPoints)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_Perk.I_Perk_C.DecreasePerkPoints");

	UI_Perk_C_DecreasePerkPoints_Params params {};
	params.PerkPoints = PerkPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_Perk.I_Perk_C.GetPointsForPerks
//		Flags  -> ()
// Parameters:
//		int                                                PerkPoints                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_Perk_C::GetPointsForPerks(int* PerkPoints)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_Perk.I_Perk_C.GetPointsForPerks");

	UI_Perk_C_GetPointsForPerks_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PerkPoints != nullptr)
		*PerkPoints = params.PerkPoints;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_Perk.I_Perk_C.LevelUpped
//		Flags  -> ()
// Parameters:
//		class AActor*                                      PlayerRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_Perk_C::LevelUpped(class AActor* PlayerRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_Perk.I_Perk_C.LevelUpped");

	UI_Perk_C_LevelUpped_Params params {};
	params.PlayerRef = PlayerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_Perk.I_Perk_C.SetDepth
//		Flags  -> ()
void UI_Perk_C::SetDepth()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_Perk.I_Perk_C.SetDepth");

	UI_Perk_C_SetDepth_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_Perk.I_Perk_C.SeeKillerSilhouetteNearHC
//		Flags  -> ()
// Parameters:
//		bool                                               wannasee                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UI_Perk_C::SeeKillerSilhouetteNearHC(bool* wannasee)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_Perk.I_Perk_C.SeeKillerSilhouetteNearHC");

	UI_Perk_C_SeeKillerSilhouetteNearHC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (wannasee != nullptr)
		*wannasee = params.wannasee;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_Perk.I_Perk_C.SetTimingToAllChairs
//		Flags  -> ()
void UI_Perk_C::SetTimingToAllChairs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_Perk.I_Perk_C.SetTimingToAllChairs");

	UI_Perk_C_SetTimingToAllChairs_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_Perk.I_Perk_C.GetPerkName
//		Flags  -> ()
// Parameters:
//		struct FName                                       Name                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                PerkIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_Perk_C::GetPerkName(struct FName* Name, int* PerkIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_Perk.I_Perk_C.GetPerkName");

	UI_Perk_C_GetPerkName_Params params {};

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
//		Name   -> Function I_Perk.I_Perk_C.IncreaseOnceHP
//		Flags  -> ()
// Parameters:
//		int                                                HP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_Perk_C::IncreaseOnceHP(int HP)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_Perk.I_Perk_C.IncreaseOnceHP");

	UI_Perk_C_IncreaseOnceHP_Params params {};
	params.HP = HP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_Perk.I_Perk_C.AddEXP
//		Flags  -> ()
// Parameters:
//		int                                                Exp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AHUD*                                        HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_Perk_C::AddEXP(int Exp, class AActor* Player, class AHUD* HUD)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_Perk.I_Perk_C.AddEXP");

	UI_Perk_C_AddEXP_Params params {};
	params.Exp = Exp;
	params.Player = Player;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
