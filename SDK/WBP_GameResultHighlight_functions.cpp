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
//		Name   -> Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.getLeaveMVP
//		Flags  -> ()
// Parameters:
//		struct FEndGamePlayerData                          PlayerInformation                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UWBP_GameResultHighlight_C::getLeaveMVP(struct FEndGamePlayerData* PlayerInformation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.getLeaveMVP");

	UWBP_GameResultHighlight_C_getLeaveMVP_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayerInformation != nullptr)
		*PlayerInformation = params.PlayerInformation;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.isMVPSurvLeave
//		Flags  -> ()
// Parameters:
//		bool                                               Resualt                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_GameResultHighlight_C::isMVPSurvLeave(bool* Resualt)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.isMVPSurvLeave");

	UWBP_GameResultHighlight_C_isMVPSurvLeave_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Resualt != nullptr)
		*Resualt = params.Resualt;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.Set Player State with Player Information
//		Flags  -> ()
// Parameters:
//		struct FEndGamePlayerData                          PlayerInformation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWBP_GameResultHighlight_C::Set_Player_State_with_Player_Information(const struct FEndGamePlayerData& PlayerInformation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.Set Player State with Player Information");

	UWBP_GameResultHighlight_C_Set_Player_State_with_Player_Information_Params params {};
	params.PlayerInformation = PlayerInformation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.GetCategoriesWithPlayerInformation
//		Flags  -> ()
// Parameters:
//		struct FEndGamePlayerData                          PlayerInformation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWBP_GameResultHighlight_C::GetCategoriesWithPlayerInformation(const struct FEndGamePlayerData& PlayerInformation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.GetCategoriesWithPlayerInformation");

	UWBP_GameResultHighlight_C_GetCategoriesWithPlayerInformation_Params params {};
	params.PlayerInformation = PlayerInformation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.CheckLeaveMVP
//		Flags  -> ()
// Parameters:
//		bool                                               isMVPPlayer                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_GameResultHighlight_C::CheckLeaveMVP(bool* isMVPPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.CheckLeaveMVP");

	UWBP_GameResultHighlight_C_CheckLeaveMVP_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (isMVPPlayer != nullptr)
		*isMVPPlayer = params.isMVPPlayer;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.AnimateNickname
//		Flags  -> ()
// Parameters:
//		bool                                               IsForwardDirection                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_GameResultHighlight_C::AnimateNickname(bool IsForwardDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.AnimateNickname");

	UWBP_GameResultHighlight_C_AnimateNickname_Params params {};
	params.IsForwardDirection = IsForwardDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.SetPlayerState
//		Flags  -> ()
// Parameters:
//		class APS_PropHunt_C*                              State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_GameResultHighlight_C::SetPlayerState(class APS_PropHunt_C* State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.SetPlayerState");

	UWBP_GameResultHighlight_C_SetPlayerState_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.setKillerAvatar
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<KillerType_EKillerType>                Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_GameResultHighlight_C::setKillerAvatar(TEnumAsByte<KillerType_EKillerType> Killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.setKillerAvatar");

	UWBP_GameResultHighlight_C_setKillerAvatar_Params params {};
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.SetSurvAvatar
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SurvChars_ESurvChars>                  Surv                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_GameResultHighlight_C::SetSurvAvatar(TEnumAsByte<SurvChars_ESurvChars> Surv)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.SetSurvAvatar");

	UWBP_GameResultHighlight_C_SetSurvAvatar_Params params {};
	params.Surv = Surv;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.SetCategory
//		Flags  -> ()
// Parameters:
//		struct FString                                     Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_GameResultHighlight_C::SetCategory(const struct FString& Value, const struct FString& Name, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.SetCategory");

	UWBP_GameResultHighlight_C_SetCategory_Params params {};
	params.Value = Value;
	params.Name = Name;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.GetCategoryName
//		Flags  -> ()
// Parameters:
//		bool                                               IsKiller                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TEnumAsByte<SurvCategory_ESurvCategory>            SurvCategory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<KillerCategory_EKillerCategory>        KillerCategory                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       CategoryName                                               (Parm, OutParm)
void UWBP_GameResultHighlight_C::GetCategoryName(bool IsKiller, TEnumAsByte<SurvCategory_ESurvCategory> SurvCategory, TEnumAsByte<KillerCategory_EKillerCategory> KillerCategory, struct FText* CategoryName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.GetCategoryName");

	UWBP_GameResultHighlight_C_GetCategoryName_Params params {};
	params.IsKiller = IsKiller;
	params.SurvCategory = SurvCategory;
	params.KillerCategory = KillerCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CategoryName != nullptr)
		*CategoryName = params.CategoryName;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.GetGategories
//		Flags  -> ()
// Parameters:
void UWBP_GameResultHighlight_C::GetGategories()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.GetGategories");

	UWBP_GameResultHighlight_C_GetGategories_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.SetIsMVP
//		Flags  -> ()
// Parameters:
//		bool                                               MVP                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_GameResultHighlight_C::SetIsMVP(bool MVP)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.SetIsMVP");

	UWBP_GameResultHighlight_C_SetIsMVP_Params params {};
	params.MVP = MVP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.Set Is Voted
//		Flags  -> ()
// Parameters:
//		bool                                               Voted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_GameResultHighlight_C::Set_Is_Voted(bool Voted)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.Set Is Voted");

	UWBP_GameResultHighlight_C_Set_Is_Voted_Params params {};
	params.Voted = Voted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.Set Is Killer
//		Flags  -> ()
// Parameters:
//		bool                                               Killer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_GameResultHighlight_C::Set_Is_Killer(bool Killer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.Set Is Killer");

	UWBP_GameResultHighlight_C_Set_Is_Killer_Params params {};
	params.Killer = Killer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.OnVoted
//		Flags  -> ()
// Parameters:
//		int                                                Votes                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_GameResultHighlight_C::OnVoted(int Votes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.OnVoted");

	UWBP_GameResultHighlight_C_OnVoted_Params params {};
	params.Votes = Votes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.BndEvt__WBP_GameResultHighlight_Button_VoteButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UWBP_GameResultHighlight_C::BndEvt__WBP_GameResultHighlight_Button_VoteButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.BndEvt__WBP_GameResultHighlight_Button_VoteButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UWBP_GameResultHighlight_C_BndEvt__WBP_GameResultHighlight_Button_VoteButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.OnVotedHandler
//		Flags  -> ()
// Parameters:
//		struct FString                                     Player_Nickname                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Votes_Number                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_GameResultHighlight_C::OnVotedHandler(const struct FString& Player_Nickname, int Votes_Number)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.OnVotedHandler");

	UWBP_GameResultHighlight_C_OnVotedHandler_Params params {};
	params.Player_Nickname = Player_Nickname;
	params.Votes_Number = Votes_Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.Construct
//		Flags  -> ()
void UWBP_GameResultHighlight_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.Construct");

	UWBP_GameResultHighlight_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.OnMouseEnter
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_GameResultHighlight_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.OnMouseEnter");

	UWBP_GameResultHighlight_C_OnMouseEnter_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.OnMouseLeave
//		Flags  -> ()
// Parameters:
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_GameResultHighlight_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.OnMouseLeave");

	UWBP_GameResultHighlight_C_OnMouseLeave_Params params {};
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.AnimateNicknameTick
//		Flags  -> ()
void UWBP_GameResultHighlight_C::AnimateNicknameTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.AnimateNicknameTick");

	UWBP_GameResultHighlight_C_AnimateNicknameTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.BndEvt__WBP_GameResultHighlight_Button_Vote_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UWBP_GameResultHighlight_C::BndEvt__WBP_GameResultHighlight_Button_Vote_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.BndEvt__WBP_GameResultHighlight_Button_Vote_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_GameResultHighlight_C_BndEvt__WBP_GameResultHighlight_Button_Vote_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.Unhover
//		Flags  -> ()
void UWBP_GameResultHighlight_C::Unhover()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.Unhover");

	UWBP_GameResultHighlight_C_Unhover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.ExecuteUbergraph_WBP_GameResultHighlight
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_GameResultHighlight_C::ExecuteUbergraph_WBP_GameResultHighlight(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.ExecuteUbergraph_WBP_GameResultHighlight");

	UWBP_GameResultHighlight_C_ExecuteUbergraph_WBP_GameResultHighlight_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.Voted__DelegateSignature
//		Flags  -> ()
void UWBP_GameResultHighlight_C::Voted__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.Voted__DelegateSignature");

	UWBP_GameResultHighlight_C_Voted__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
