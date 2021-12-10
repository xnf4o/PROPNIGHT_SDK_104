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
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.GetCurrentEXP
//		Flags  -> ()
// Parameters:
//		int                                                CurEXP                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_PropHunt_C::GetCurrentEXP(int* CurEXP)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.GetCurrentEXP");

	APC_PropHunt_C_GetCurrentEXP_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurEXP != nullptr)
		*CurEXP = params.CurEXP;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.GetPointsForPerks
//		Flags  -> ()
// Parameters:
//		int                                                PerkPoints                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_PropHunt_C::GetPointsForPerks(int* PerkPoints)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.GetPointsForPerks");

	APC_PropHunt_C_GetPointsForPerks_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PerkPoints != nullptr)
		*PerkPoints = params.PerkPoints;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.SeeKillerSilhouetteNearHC
//		Flags  -> ()
// Parameters:
//		bool                                               wannasee                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_PropHunt_C::SeeKillerSilhouetteNearHC(bool* wannasee)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.SeeKillerSilhouetteNearHC");

	APC_PropHunt_C_SeeKillerSilhouetteNearHC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (wannasee != nullptr)
		*wannasee = params.wannasee;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.GetPerkName
//		Flags  -> ()
// Parameters:
//		struct FName                                       Name                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                PerkIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_PropHunt_C::GetPerkName(struct FName* Name, int* PerkIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.GetPerkName");

	APC_PropHunt_C_GetPerkName_Params params {};

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
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.GetServerId
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void APC_PropHunt_C::GetServerId(struct FString* ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.GetServerId");

	APC_PropHunt_C_GetServerId_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.isVisibleRadialInventory
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool APC_PropHunt_C::isVisibleRadialInventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.isVisibleRadialInventory");

	APC_PropHunt_C_isVisibleRadialInventory_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.IsVisibleRadialSoundChat
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool APC_PropHunt_C::IsVisibleRadialSoundChat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.IsVisibleRadialSoundChat");

	APC_PropHunt_C_IsVisibleRadialSoundChat_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.JoinVivoxRoom
//		Flags  -> ()
// Parameters:
void APC_PropHunt_C::JoinVivoxRoom()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.JoinVivoxRoom");

	APC_PropHunt_C_JoinVivoxRoom_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.GetLevelName
//		Flags  -> ()
// Parameters:
//		bool                                               B                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     MapName                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void APC_PropHunt_C::GetLevelName(bool* B, struct FString* MapName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.GetLevelName");

	APC_PropHunt_C_GetLevelName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (B != nullptr)
		*B = params.B;
	if (MapName != nullptr)
		*MapName = params.MapName;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.GetPlayerStartLobbyWait
//		Flags  -> ()
// Parameters:
//		class AActor*                                      PlayerStart                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_PropHunt_C::GetPlayerStartLobbyWait(class AActor** PlayerStart)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.GetPlayerStartLobbyWait");

	APC_PropHunt_C_GetPlayerStartLobbyWait_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerStart != nullptr)
		*PlayerStart = params.PlayerStart;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.Get Tutorial Player Start
//		Flags  -> ()
// Parameters:
//		bool                                               KillerTutorial_                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class AActor*                                      PlayerStart                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_PropHunt_C::Get_Tutorial_Player_Start(bool KillerTutorial_, class AActor** PlayerStart)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.Get Tutorial Player Start");

	APC_PropHunt_C_Get_Tutorial_Player_Start_Params params {};
	params.KillerTutorial_ = KillerTutorial_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerStart != nullptr)
		*PlayerStart = params.PlayerStart;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.AuthoritiDetect
//		Flags  -> ()
// Parameters:
//		bool                                               B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               serv                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_PropHunt_C::AuthoritiDetect(bool B, bool* serv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.AuthoritiDetect");

	APC_PropHunt_C_AuthoritiDetect_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (serv != nullptr)
		*serv = params.serv;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.StopEndMusic
//		Flags  -> ()
// Parameters:
void APC_PropHunt_C::StopEndMusic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.StopEndMusic");

	APC_PropHunt_C_StopEndMusic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.SetLobbySlotName
//		Flags  -> ()
// Parameters:
//		struct FString                                     Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               AffectState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_PropHunt_C::SetLobbySlotName(const struct FString& Name, bool AffectState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.SetLobbySlotName");

	APC_PropHunt_C_SetLobbySlotName_Params params {};
	params.Name = Name;
	params.AffectState = AffectState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.SetIsKiller
//		Flags  -> ()
// Parameters:
//		bool                                               IsKiller                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               AffectState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_PropHunt_C::SetIsKiller(bool IsKiller, bool AffectState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.SetIsKiller");

	APC_PropHunt_C_SetIsKiller_Params params {};
	params.IsKiller = IsKiller;
	params.AffectState = AffectState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.GetPlayerStart
//		Flags  -> ()
// Parameters:
//		class AActor*                                      PlayerStart                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_PropHunt_C::GetPlayerStart(class AActor** PlayerStart)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.GetPlayerStart");

	APC_PropHunt_C_GetPlayerStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerStart != nullptr)
		*PlayerStart = params.PlayerStart;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.InpActEvt_Escape_K2Node_InputKeyEvent_2
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_PropHunt_C::InpActEvt_Escape_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.InpActEvt_Escape_K2Node_InputKeyEvent_2");

	APC_PropHunt_C_InpActEvt_Escape_K2Node_InputKeyEvent_2_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.OnFailure_D22A08944B2EE4FD352FFDB74C85B31E
//		Flags  -> ()
void APC_PropHunt_C::OnFailure_D22A08944B2EE4FD352FFDB74C85B31E()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.OnFailure_D22A08944B2EE4FD352FFDB74C85B31E");

	APC_PropHunt_C_OnFailure_D22A08944B2EE4FD352FFDB74C85B31E_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.OnSuccess_D22A08944B2EE4FD352FFDB74C85B31E
//		Flags  -> ()
void APC_PropHunt_C::OnSuccess_D22A08944B2EE4FD352FFDB74C85B31E()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.OnSuccess_D22A08944B2EE4FD352FFDB74C85B31E");

	APC_PropHunt_C_OnSuccess_D22A08944B2EE4FD352FFDB74C85B31E_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.InpActEvt_P_K2Node_InputKeyEvent_1
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_PropHunt_C::InpActEvt_P_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.InpActEvt_P_K2Node_InputKeyEvent_1");

	APC_PropHunt_C_InpActEvt_P_K2Node_InputKeyEvent_1_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.InpActEvt_Skills Info_K2Node_InputActionEvent_7
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_PropHunt_C::InpActEvt_Skills_Info_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.InpActEvt_Skills Info_K2Node_InputActionEvent_7");

	APC_PropHunt_C_InpActEvt_Skills_Info_K2Node_InputActionEvent_7_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.InpActEvt_Skills Info_K2Node_InputActionEvent_6
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_PropHunt_C::InpActEvt_Skills_Info_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.InpActEvt_Skills Info_K2Node_InputActionEvent_6");

	APC_PropHunt_C_InpActEvt_Skills_Info_K2Node_InputActionEvent_6_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.InpActEvt_AnyKey_K2Node_InputActionEvent_5
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_PropHunt_C::InpActEvt_AnyKey_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.InpActEvt_AnyKey_K2Node_InputActionEvent_5");

	APC_PropHunt_C_InpActEvt_AnyKey_K2Node_InputActionEvent_5_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.InpActEvt_Voice Chat (Hold)_K2Node_InputActionEvent_4
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_PropHunt_C::InpActEvt_Voice_Chat__Hold__K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.InpActEvt_Voice Chat (Hold)_K2Node_InputActionEvent_4");

	APC_PropHunt_C_InpActEvt_Voice_Chat__Hold__K2Node_InputActionEvent_4_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.InpActEvt_Voice Chat (Hold)_K2Node_InputActionEvent_3
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_PropHunt_C::InpActEvt_Voice_Chat__Hold__K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.InpActEvt_Voice Chat (Hold)_K2Node_InputActionEvent_3");

	APC_PropHunt_C_InpActEvt_Voice_Chat__Hold__K2Node_InputActionEvent_3_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.InpActEvt_Scoreboard_K2Node_InputActionEvent_2
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_PropHunt_C::InpActEvt_Scoreboard_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.InpActEvt_Scoreboard_K2Node_InputActionEvent_2");

	APC_PropHunt_C_InpActEvt_Scoreboard_K2Node_InputActionEvent_2_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.InpActEvt_Scoreboard_K2Node_InputActionEvent_1
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_PropHunt_C::InpActEvt_Scoreboard_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.InpActEvt_Scoreboard_K2Node_InputActionEvent_1");

	APC_PropHunt_C_InpActEvt_Scoreboard_K2Node_InputActionEvent_1_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.AddEXP
//		Flags  -> ()
// Parameters:
//		int                                                Exp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AHUD*                                        HUD                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_PropHunt_C::AddEXP(int Exp, class AActor* Player, class AHUD* HUD)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.AddEXP");

	APC_PropHunt_C_AddEXP_Params params {};
	params.Exp = Exp;
	params.Player = Player;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.IncreaseOnceHP
//		Flags  -> ()
// Parameters:
//		int                                                HP                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_PropHunt_C::IncreaseOnceHP(int HP)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.IncreaseOnceHP");

	APC_PropHunt_C_IncreaseOnceHP_Params params {};
	params.HP = HP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.SetTimingToAllChairs
//		Flags  -> ()
void APC_PropHunt_C::SetTimingToAllChairs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.SetTimingToAllChairs");

	APC_PropHunt_C_SetTimingToAllChairs_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.SetDepth
//		Flags  -> ()
void APC_PropHunt_C::SetDepth()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.SetDepth");

	APC_PropHunt_C_SetDepth_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.LevelUpped
//		Flags  -> ()
// Parameters:
//		class AActor*                                      PlayerRef                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_PropHunt_C::LevelUpped(class AActor* PlayerRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.LevelUpped");

	APC_PropHunt_C_LevelUpped_Params params {};
	params.PlayerRef = PlayerRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.DecreasePerkPoints
//		Flags  -> ()
// Parameters:
//		int                                                PerkPoints                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_PropHunt_C::DecreasePerkPoints(int PerkPoints)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.DecreasePerkPoints");

	APC_PropHunt_C_DecreasePerkPoints_Params params {};
	params.PerkPoints = PerkPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.SurvDropItem
//		Flags  -> ()
// Parameters:
//		bool                                               lastLVL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_PropHunt_C::SurvDropItem(bool lastLVL)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.SurvDropItem");

	APC_PropHunt_C_SurvDropItem_Params params {};
	params.lastLVL = lastLVL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.OnSessionCreated
//		Flags  -> ()
// Parameters:
//		struct FString                                     Map                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void APC_PropHunt_C::OnSessionCreated(const struct FString& Map)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.OnSessionCreated");

	APC_PropHunt_C_OnSessionCreated_Params params {};
	params.Map = Map;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.FailCreateSession
//		Flags  -> ()
void APC_PropHunt_C::FailCreateSession()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.FailCreateSession");

	APC_PropHunt_C_FailCreateSession_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.OnTravelError
//		Flags  -> ()
void APC_PropHunt_C::OnTravelError()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.OnTravelError");

	APC_PropHunt_C_OnTravelError_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.FailSessionList
//		Flags  -> ()
void APC_PropHunt_C::FailSessionList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.FailSessionList");

	APC_PropHunt_C_FailSessionList_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.OnFoundSessions
//		Flags  -> ()
// Parameters:
//		TArray<struct FBlueprintSessionResult>             Sessions                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void APC_PropHunt_C::OnFoundSessions(TArray<struct FBlueprintSessionResult> Sessions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.OnFoundSessions");

	APC_PropHunt_C_OnFoundSessions_Params params {};
	params.Sessions = Sessions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.JoinToTicket
//		Flags  -> ()
// Parameters:
//		struct FString                                     Ticket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void APC_PropHunt_C::JoinToTicket(const struct FString& Ticket)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.JoinToTicket");

	APC_PropHunt_C_JoinToTicket_Params params {};
	params.Ticket = Ticket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.CloseTicket
//		Flags  -> ()
void APC_PropHunt_C::CloseTicket()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.CloseTicket");

	APC_PropHunt_C_CloseTicket_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.ReceiveBeginPlay
//		Flags  -> ()
void APC_PropHunt_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.ReceiveBeginPlay");

	APC_PropHunt_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_PropHunt_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.ReceiveTick");

	APC_PropHunt_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.NotifyPlayerJoined
//		Flags  -> ()
void APC_PropHunt_C::NotifyPlayerJoined()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.NotifyPlayerJoined");

	APC_PropHunt_C_NotifyPlayerJoined_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.ConfirmJoin
//		Flags  -> ()
// Parameters:
//		struct FString                                     PlayFabId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     SteamUserID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void APC_PropHunt_C::ConfirmJoin(const struct FString& PlayFabId, const struct FString& SteamUserID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.ConfirmJoin");

	APC_PropHunt_C_ConfirmJoin_Params params {};
	params.PlayFabId = PlayFabId;
	params.SteamUserID = SteamUserID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.ReserveSlot
//		Flags  -> ()
// Parameters:
//		struct FString                                     SlotName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void APC_PropHunt_C::ReserveSlot(const struct FString& SlotName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.ReserveSlot");

	APC_PropHunt_C_ReserveSlot_Params params {};
	params.SlotName = SlotName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.ReleaseSlot
//		Flags  -> ()
// Parameters:
//		struct FString                                     SlotName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void APC_PropHunt_C::ReleaseSlot(const struct FString& SlotName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.ReleaseSlot");

	APC_PropHunt_C_ReleaseSlot_Params params {};
	params.SlotName = SlotName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.ForceStartGame
//		Flags  -> ()
void APC_PropHunt_C::ForceStartGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.ForceStartGame");

	APC_PropHunt_C_ForceStartGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.OnStartGame
//		Flags  -> ()
void APC_PropHunt_C::OnStartGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.OnStartGame");

	APC_PropHunt_C_OnStartGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.ClientOnStartGame
//		Flags  -> ()
// Parameters:
//		class APlayerStart*                                ref                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                AvatarID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BannerID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                TagID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_PropHunt_C::ClientOnStartGame(class APlayerStart* ref, int AvatarID, int BannerID, int TagID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.ClientOnStartGame");

	APC_PropHunt_C_ClientOnStartGame_Params params {};
	params.ref = ref;
	params.AvatarID = AvatarID;
	params.BannerID = BannerID;
	params.TagID = TagID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.OnRaiseLobby
//		Flags  -> ()
void APC_PropHunt_C::OnRaiseLobby()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.OnRaiseLobby");

	APC_PropHunt_C_OnRaiseLobby_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.ClientOnRaiseLobby
//		Flags  -> ()
void APC_PropHunt_C::ClientOnRaiseLobby()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.ClientOnRaiseLobby");

	APC_PropHunt_C_ClientOnRaiseLobby_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.OnEndGame
//		Flags  -> ()
void APC_PropHunt_C::OnEndGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.OnEndGame");

	APC_PropHunt_C_OnEndGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.ClientOnEndGame
//		Flags  -> ()
// Parameters:
//		bool                                               Host                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_PropHunt_C::ClientOnEndGame(bool Host)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.ClientOnEndGame");

	APC_PropHunt_C_ClientOnEndGame_Params params {};
	params.Host = Host;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.ForceRestart
//		Flags  -> ()
void APC_PropHunt_C::ForceRestart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.ForceRestart");

	APC_PropHunt_C_ForceRestart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.ServForceRestart
//		Flags  -> ()
// Parameters:
//		bool                                               B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_PropHunt_C::ServForceRestart(bool B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.ServForceRestart");

	APC_PropHunt_C_ServForceRestart_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.ToggleDevLab
//		Flags  -> ()
void APC_PropHunt_C::ToggleDevLab()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.ToggleDevLab");

	APC_PropHunt_C_ToggleDevLab_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.PlayerReady
//		Flags  -> ()
void APC_PropHunt_C::PlayerReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.PlayerReady");

	APC_PropHunt_C_PlayerReady_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.OnSurvivorDeath
//		Flags  -> ()
// Parameters:
//		bool                                               BecomeSpectator                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_PropHunt_C::OnSurvivorDeath(bool BecomeSpectator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.OnSurvivorDeath");

	APC_PropHunt_C_OnSurvivorDeath_Params params {};
	params.BecomeSpectator = BecomeSpectator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.BecomeSpectator
//		Flags  -> ()
// Parameters:
//		bool                                               Escape_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               WithoutFade                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_PropHunt_C::BecomeSpectator(bool Escape_, bool WithoutFade)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.BecomeSpectator");

	APC_PropHunt_C_BecomeSpectator_Params params {};
	params.Escape_ = Escape_;
	params.WithoutFade = WithoutFade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.KillSurvivor
//		Flags  -> ()
void APC_PropHunt_C::KillSurvivor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.KillSurvivor");

	APC_PropHunt_C_KillSurvivor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.ChangeLevel
//		Flags  -> ()
// Parameters:
//		struct FString                                     LevelName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void APC_PropHunt_C::ChangeLevel(const struct FString& LevelName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.ChangeLevel");

	APC_PropHunt_C_ChangeLevel_Params params {};
	params.LevelName = LevelName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.OnChangeLevel
//		Flags  -> ()
void APC_PropHunt_C::OnChangeLevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.OnChangeLevel");

	APC_PropHunt_C_OnChangeLevel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.SendKillerChar
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<KillerType_EKillerType>                KillerType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_PropHunt_C::SendKillerChar(TEnumAsByte<KillerType_EKillerType> KillerType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.SendKillerChar");

	APC_PropHunt_C_SendKillerChar_Params params {};
	params.KillerType = KillerType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.GetChatMessage
//		Flags  -> ()
// Parameters:
//		struct FText                                       TextToSend                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		int                                                Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Killer_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_PropHunt_C::GetChatMessage(const struct FText& TextToSend, int Type, bool Killer_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.GetChatMessage");

	APC_PropHunt_C_GetChatMessage_Params params {};
	params.TextToSend = TextToSend;
	params.Type = Type;
	params.Killer_ = Killer_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.UpdateChat
//		Flags  -> ()
// Parameters:
//		struct FText                                       sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		int                                                Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Killer_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ItsMe_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_PropHunt_C::UpdateChat(const struct FText& sender, const struct FText& Text, int Type, bool Killer_, bool ItsMe_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.UpdateChat");

	APC_PropHunt_C_UpdateChat_Params params {};
	params.sender = sender;
	params.Text = Text;
	params.Type = Type;
	params.Killer_ = Killer_;
	params.ItsMe_ = ItsMe_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.LootboxShopServer
//		Flags  -> ()
// Parameters:
//		class ALootboxShop_C*                              Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTransform                                  SpawnTransform                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		bool                                               Block_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_PropHunt_C::LootboxShopServer(class ALootboxShop_C* Actor, class UClass* Class, const struct FTransform& SpawnTransform, bool Block_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.LootboxShopServer");

	APC_PropHunt_C_LootboxShopServer_Params params {};
	params.Actor = Actor;
	params.Class = Class;
	params.SpawnTransform = SpawnTransform;
	params.Block_ = Block_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.LootboxShopMulticast
//		Flags  -> ()
// Parameters:
//		bool                                               Block_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class ALootboxShop_C*                              Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_PropHunt_C::LootboxShopMulticast(bool Block_, class ALootboxShop_C* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.LootboxShopMulticast");

	APC_PropHunt_C_LootboxShopMulticast_Params params {};
	params.Block_ = Block_;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.LootboxShopAnimServer
//		Flags  -> ()
// Parameters:
//		class ALootboxShop_C*                              Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Arm_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Door_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_PropHunt_C::LootboxShopAnimServer(class ALootboxShop_C* Actor, bool Arm_, bool Door_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.LootboxShopAnimServer");

	APC_PropHunt_C_LootboxShopAnimServer_Params params {};
	params.Actor = Actor;
	params.Arm_ = Arm_;
	params.Door_ = Door_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.JoinToNext
//		Flags  -> ()
void APC_PropHunt_C::JoinToNext()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.JoinToNext");

	APC_PropHunt_C_JoinToNext_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.SendSurvClass
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SurvClass_ESurvClass>                  Class                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<SurvChars_ESurvChars>                  char_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_PropHunt_C::SendSurvClass(TEnumAsByte<SurvClass_ESurvClass> Class, TEnumAsByte<SurvChars_ESurvChars> char_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.SendSurvClass");

	APC_PropHunt_C_SendSurvClass_Params params {};
	params.Class = Class;
	params.char_ = char_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.DevDestroySession
//		Flags  -> ()
void APC_PropHunt_C::DevDestroySession()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.DevDestroySession");

	APC_PropHunt_C_DevDestroySession_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.FailJoin
//		Flags  -> ()
void APC_PropHunt_C::FailJoin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.FailJoin");

	APC_PropHunt_C_FailJoin_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.OnNetworkError
//		Flags  -> ()
void APC_PropHunt_C::OnNetworkError()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.OnNetworkError");

	APC_PropHunt_C_OnNetworkError_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.OpenLootboxServ
//		Flags  -> ()
// Parameters:
//		class AActor*                                      lootbox                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<LootBoxRollType_ELootBoxRollType>      RollType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     Nickname                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void APC_PropHunt_C::OpenLootboxServ(class AActor* lootbox, TEnumAsByte<LootBoxRollType_ELootBoxRollType> RollType, const struct FString& Nickname)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.OpenLootboxServ");

	APC_PropHunt_C_OpenLootboxServ_Params params {};
	params.lootbox = lootbox;
	params.RollType = RollType;
	params.Nickname = Nickname;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.SpawnItemlootboxServ
//		Flags  -> ()
// Parameters:
//		class AActor*                                      NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTransform                                  NewParam2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		class UClass*                                      NewParam3                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     NewParam4                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void APC_PropHunt_C::SpawnItemlootboxServ(class AActor* NewParam, const struct FTransform& NewParam2, class UClass* NewParam3, const struct FString& NewParam4)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.SpawnItemlootboxServ");

	APC_PropHunt_C_SpawnItemlootboxServ_Params params {};
	params.NewParam = NewParam;
	params.NewParam2 = NewParam2;
	params.NewParam3 = NewParam3;
	params.NewParam4 = NewParam4;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.SpawnItemLootboxMulti
//		Flags  -> ()
// Parameters:
//		class ALootBox_C*                                  NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTransform                                  NewParam2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		class UClass*                                      NewParam3                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_PropHunt_C::SpawnItemLootboxMulti(class ALootBox_C* NewParam, const struct FTransform& NewParam2, class UClass* NewParam3)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.SpawnItemLootboxMulti");

	APC_PropHunt_C_SpawnItemLootboxMulti_Params params {};
	params.NewParam = NewParam;
	params.NewParam2 = NewParam2;
	params.NewParam3 = NewParam3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.HideHUD_AfterDeath
//		Flags  -> ()
void APC_PropHunt_C::HideHUD_AfterDeath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.HideHUD_AfterDeath");

	APC_PropHunt_C_HideHUD_AfterDeath_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.LootboxNotEnoughServ
//		Flags  -> ()
// Parameters:
//		class AActor*                                      lootbox                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_PropHunt_C::LootboxNotEnoughServ(class AActor* lootbox)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.LootboxNotEnoughServ");

	APC_PropHunt_C_LootboxNotEnoughServ_Params params {};
	params.lootbox = lootbox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.PlayerUnready
//		Flags  -> ()
void APC_PropHunt_C::PlayerUnready()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.PlayerUnready");

	APC_PropHunt_C_PlayerUnready_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.SoundChatServ
//		Flags  -> ()
// Parameters:
//		int                                                SoundIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USoundChat_C*                                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                WidgetMenuType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_PropHunt_C::SoundChatServ(int SoundIndex, class USoundChat_C* Widget, int WidgetMenuType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.SoundChatServ");

	APC_PropHunt_C_SoundChatServ_Params params {};
	params.SoundIndex = SoundIndex;
	params.Widget = Widget;
	params.WidgetMenuType = WidgetMenuType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.SoundChatMulticast
//		Flags  -> ()
// Parameters:
//		int                                                SoundIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USoundChat_C*                                Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                WidgetMenuType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_PropHunt_C::SoundChatMulticast(int SoundIndex, class USoundChat_C* Widget, int WidgetMenuType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.SoundChatMulticast");

	APC_PropHunt_C_SoundChatMulticast_Params params {};
	params.SoundIndex = SoundIndex;
	params.Widget = Widget;
	params.WidgetMenuType = WidgetMenuType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.SoundChatMenu1
//		Flags  -> ()
// Parameters:
//		int                                                Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_PropHunt_C::SoundChatMenu1(int Sound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.SoundChatMenu1");

	APC_PropHunt_C_SoundChatMenu1_Params params {};
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.SoundChatMenu2
//		Flags  -> ()
// Parameters:
//		int                                                Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_PropHunt_C::SoundChatMenu2(int Sound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.SoundChatMenu2");

	APC_PropHunt_C_SoundChatMenu2_Params params {};
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.SendSurvSkill
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SurvSkills_ESurvSkills>                Skill                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_PropHunt_C::SendSurvSkill(TEnumAsByte<SurvSkills_ESurvSkills> Skill)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.SendSurvSkill");

	APC_PropHunt_C_SendSurvSkill_Params params {};
	params.Skill = Skill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.MenuCall
//		Flags  -> ()
void APC_PropHunt_C::MenuCall()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.MenuCall");

	APC_PropHunt_C_MenuCall_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.OpenEndGameWindow
//		Flags  -> ()
void APC_PropHunt_C::OpenEndGameWindow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.OpenEndGameWindow");

	APC_PropHunt_C_OpenEndGameWindow_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.SpectatorSwitch
//		Flags  -> ()
// Parameters:
//		class ABP_Spectator_C*                             Spectator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Spectating_                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_PropHunt_C::SpectatorSwitch(class ABP_Spectator_C* Spectator, bool Spectating_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.SpectatorSwitch");

	APC_PropHunt_C_SpectatorSwitch_Params params {};
	params.Spectator = Spectator;
	params.Spectating_ = Spectating_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.AllEndGame
//		Flags  -> ()
void APC_PropHunt_C::AllEndGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.AllEndGame");

	APC_PropHunt_C_AllEndGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.Fade
//		Flags  -> ()
// Parameters:
//		bool                                               Escape_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_PropHunt_C::Fade(bool Escape_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.Fade");

	APC_PropHunt_C_Fade_Params params {};
	params.Escape_ = Escape_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.AllPlayersFade
//		Flags  -> ()
void APC_PropHunt_C::AllPlayersFade()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.AllPlayersFade");

	APC_PropHunt_C_AllPlayersFade_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.SpectateEndGame
//		Flags  -> ()
void APC_PropHunt_C::SpectateEndGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.SpectateEndGame");

	APC_PropHunt_C_SpectateEndGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.SendSurvSkinId
//		Flags  -> ()
// Parameters:
//		int                                                ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Lvl                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_PropHunt_C::SendSurvSkinId(int ID, int Lvl)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.SendSurvSkinId");

	APC_PropHunt_C_SendSurvSkinId_Params params {};
	params.ID = ID;
	params.Lvl = Lvl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.SpawnWait
//		Flags  -> ()
void APC_PropHunt_C::SpawnWait()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.SpawnWait");

	APC_PropHunt_C_SpawnWait_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.ReceiveDestroyed
//		Flags  -> ()
void APC_PropHunt_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.ReceiveDestroyed");

	APC_PropHunt_C_ReceiveDestroyed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.VictoryScreen
//		Flags  -> ()
void APC_PropHunt_C::VictoryScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.VictoryScreen");

	APC_PropHunt_C_VictoryScreen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.FadeOut
//		Flags  -> ()
void APC_PropHunt_C::FadeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.FadeOut");

	APC_PropHunt_C_FadeOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.MapVote
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<MapVote_EMapVote>                      MapVoteEnum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_PropHunt_C::MapVote(TEnumAsByte<MapVote_EMapVote> MapVoteEnum)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.MapVote");

	APC_PropHunt_C_MapVote_Params params {};
	params.MapVoteEnum = MapVoteEnum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.PlayerVote
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<PlayerCategoryVote_EPlayerCategoryVote> PlayerCategoryVoteEnum                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_PropHunt_C::PlayerVote(TEnumAsByte<PlayerCategoryVote_EPlayerCategoryVote> PlayerCategoryVoteEnum)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.PlayerVote");

	APC_PropHunt_C_PlayerVote_Params params {};
	params.PlayerCategoryVoteEnum = PlayerCategoryVoteEnum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.Clear
//		Flags  -> ()
void APC_PropHunt_C::Clear()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.Clear");

	APC_PropHunt_C_Clear_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.SwapRequest
//		Flags  -> ()
// Parameters:
//		class APawn*                                       Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_PropHunt_C::SwapRequest(class APawn* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.SwapRequest");

	APC_PropHunt_C_SwapRequest_Params params {};
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.AcceptSwap
//		Flags  -> ()
void APC_PropHunt_C::AcceptSwap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.AcceptSwap");

	APC_PropHunt_C_AcceptSwap_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.OnSwapPerformed
//		Flags  -> ()
// Parameters:
//		bool                                               IsKiller                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_PropHunt_C::OnSwapPerformed(bool IsKiller)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.OnSwapPerformed");

	APC_PropHunt_C_OnSwapPerformed_Params params {};
	params.IsKiller = IsKiller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.OnSwap
//		Flags  -> ()
void APC_PropHunt_C::OnSwap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.OnSwap");

	APC_PropHunt_C_OnSwap_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.SpawnTutorial
//		Flags  -> ()
// Parameters:
//		bool                                               Killer_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_PropHunt_C::SpawnTutorial(bool Killer_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.SpawnTutorial");

	APC_PropHunt_C_SpawnTutorial_Params params {};
	params.Killer_ = Killer_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.Liked
//		Flags  -> ()
// Parameters:
//		class APS_PropHunt_C*                              NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_PropHunt_C::Liked(class APS_PropHunt_C* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.Liked");

	APC_PropHunt_C_Liked_Params params {};
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.OnSwapNotification
//		Flags  -> ()
void APC_PropHunt_C::OnSwapNotification()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.OnSwapNotification");

	APC_PropHunt_C_OnSwapNotification_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.GetSystemMessage
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void APC_PropHunt_C::GetSystemMessage(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.GetSystemMessage");

	APC_PropHunt_C_GetSystemMessage_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.UpdateSurvProp
//		Flags  -> ()
void APC_PropHunt_C::UpdateSurvProp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.UpdateSurvProp");

	APC_PropHunt_C_UpdateSurvProp_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.PerksPrintChat
//		Flags  -> ()
// Parameters:
//		struct FText                                       sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void APC_PropHunt_C::PerksPrintChat(const struct FText& sender, const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.PerksPrintChat");

	APC_PropHunt_C_PerksPrintChat_Params params {};
	params.sender = sender;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.SurvOnChair
//		Flags  -> ()
// Parameters:
//		bool                                               WantBeSpectator_                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_PropHunt_C::SurvOnChair(bool WantBeSpectator_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.SurvOnChair");

	APC_PropHunt_C_SurvOnChair_Params params {};
	params.WantBeSpectator_ = WantBeSpectator_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.PlayerTo_Spectator
//		Flags  -> ()
void APC_PropHunt_C::PlayerTo_Spectator()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.PlayerTo_Spectator");

	APC_PropHunt_C_PlayerTo_Spectator_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.SpectatorTo_Player
//		Flags  -> ()
void APC_PropHunt_C::SpectatorTo_Player()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.SpectatorTo_Player");

	APC_PropHunt_C_SpectatorTo_Player_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.SpectatorBackUISurv
//		Flags  -> ()
void APC_PropHunt_C::SpectatorBackUISurv()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.SpectatorBackUISurv");

	APC_PropHunt_C_SpectatorBackUISurv_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.InitMicVoiceSettings
//		Flags  -> ()
void APC_PropHunt_C::InitMicVoiceSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.InitMicVoiceSettings");

	APC_PropHunt_C_InitMicVoiceSettings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.Swap_LeaveFromServer
//		Flags  -> ()
// Parameters:
//		class APawn*                                       LeftPlayer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_PropHunt_C::Swap_LeaveFromServer(class APawn* LeftPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.Swap_LeaveFromServer");

	APC_PropHunt_C_Swap_LeaveFromServer_Params params {};
	params.LeftPlayer = LeftPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.ClientLeft_FromServer(Swap)
//		Flags  -> ()
// Parameters:
//		class APawn*                                       LeftPlayer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_PropHunt_C::ClientLeft_FromServer_Swap_(class APawn* LeftPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.ClientLeft_FromServer(Swap)");

	APC_PropHunt_C_ClientLeft_FromServer_Swap__Params params {};
	params.LeftPlayer = LeftPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.YouHaveBeenKicked
//		Flags  -> ()
void APC_PropHunt_C::YouHaveBeenKicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.YouHaveBeenKicked");

	APC_PropHunt_C_YouHaveBeenKicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.ReceiveEndPlay
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_PropHunt_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.ReceiveEndPlay");

	APC_PropHunt_C_ReceiveEndPlay_Params params {};
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.SetPerkIndex_SERV
//		Flags  -> ()
// Parameters:
//		int                                                PerkIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     PerkName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void APC_PropHunt_C::SetPerkIndex_SERV(int PerkIndex, const struct FString& PerkName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.SetPerkIndex_SERV");

	APC_PropHunt_C_SetPerkIndex_SERV_Params params {};
	params.PerkIndex = PerkIndex;
	params.PerkName = PerkName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.SetPerkIndex_MULTI
//		Flags  -> ()
// Parameters:
//		int                                                PerkIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     PerkName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void APC_PropHunt_C::SetPerkIndex_MULTI(int PerkIndex, const struct FString& PerkName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.SetPerkIndex_MULTI");

	APC_PropHunt_C_SetPerkIndex_MULTI_Params params {};
	params.PerkIndex = PerkIndex;
	params.PerkName = PerkName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.RandomPerk_Serv
//		Flags  -> ()
void APC_PropHunt_C::RandomPerk_Serv()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.RandomPerk_Serv");

	APC_PropHunt_C_RandomPerk_Serv_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.PlayerVote_v2
//		Flags  -> ()
// Parameters:
//		struct FString                                     PlayerNickName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void APC_PropHunt_C::PlayerVote_v2(const struct FString& PlayerNickName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.PlayerVote_v2");

	APC_PropHunt_C_PlayerVote_v2_Params params {};
	params.PlayerNickName = PlayerNickName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.AddCoins
//		Flags  -> ()
// Parameters:
//		int                                                Coins                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_PropHunt_C::AddCoins(int Coins)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.AddCoins");

	APC_PropHunt_C_AddCoins_Params params {};
	params.Coins = Coins;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.SetSkin
//		Flags  -> ()
void APC_PropHunt_C::SetSkin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.SetSkin");

	APC_PropHunt_C_SetSkin_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.ShowIntroBanner_Server
//		Flags  -> ()
// Parameters:
//		struct FName                                       PlayerStartTag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APlayerState*                                PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                AvatarID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BannerID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                TagID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_PropHunt_C::ShowIntroBanner_Server(const struct FName& PlayerStartTag, class APlayerState* PlayerState, int AvatarID, int BannerID, int TagID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.ShowIntroBanner_Server");

	APC_PropHunt_C_ShowIntroBanner_Server_Params params {};
	params.PlayerStartTag = PlayerStartTag;
	params.PlayerState = PlayerState;
	params.AvatarID = AvatarID;
	params.BannerID = BannerID;
	params.TagID = TagID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.ShowIntroBanner_Client
//		Flags  -> ()
// Parameters:
//		class APlayerState*                                State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                AvatarID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BannerID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                TagID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     inString                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TEnumAsByte<SurvChars_ESurvChars>                  SurvChar                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void APC_PropHunt_C::ShowIntroBanner_Client(class APlayerState* State, const struct FName& Tag, int AvatarID, int BannerID, int TagID, const struct FString& inString, TEnumAsByte<SurvChars_ESurvChars> SurvChar)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.ShowIntroBanner_Client");

	APC_PropHunt_C_ShowIntroBanner_Client_Params params {};
	params.State = State;
	params.Tag = Tag;
	params.AvatarID = AvatarID;
	params.BannerID = BannerID;
	params.TagID = TagID;
	params.inString = inString;
	params.SurvChar = SurvChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.StartProfle
//		Flags  -> ()
void APC_PropHunt_C::StartProfle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.StartProfle");

	APC_PropHunt_C_StartProfle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.StartNetProfile
//		Flags  -> ()
void APC_PropHunt_C::StartNetProfile()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.StartNetProfile");

	APC_PropHunt_C_StartNetProfile_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.GetSettings
//		Flags  -> ()
void APC_PropHunt_C::GetSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.GetSettings");

	APC_PropHunt_C_GetSettings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.LeaveVivoxChannelIfKiller
//		Flags  -> ()
void APC_PropHunt_C::LeaveVivoxChannelIfKiller()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.LeaveVivoxChannelIfKiller");

	APC_PropHunt_C_LeaveVivoxChannelIfKiller_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_PropHunt.PC_PropHunt_C.ExecuteUbergraph_PC_PropHunt
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_PropHunt_C::ExecuteUbergraph_PC_PropHunt(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_PropHunt.PC_PropHunt_C.ExecuteUbergraph_PC_PropHunt");

	APC_PropHunt_C_ExecuteUbergraph_PC_PropHunt_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
