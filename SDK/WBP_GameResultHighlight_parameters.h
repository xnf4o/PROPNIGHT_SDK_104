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

// Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.getLeaveMVP
struct UWBP_GameResultHighlight_C_getLeaveMVP_Params
{
	struct FEndGamePlayerData                          PlayerInformation;                                         // 0x0000(0x0058)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.isMVPSurvLeave
struct UWBP_GameResultHighlight_C_isMVPSurvLeave_Params
{
	bool                                               Resualt;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.Set Player State with Player Information
struct UWBP_GameResultHighlight_C_Set_Player_State_with_Player_Information_Params
{
	struct FEndGamePlayerData                          PlayerInformation;                                         // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.GetCategoriesWithPlayerInformation
struct UWBP_GameResultHighlight_C_GetCategoriesWithPlayerInformation_Params
{
	struct FEndGamePlayerData                          PlayerInformation;                                         // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.CheckLeaveMVP
struct UWBP_GameResultHighlight_C_CheckLeaveMVP_Params
{
	bool                                               isMVPPlayer;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.AnimateNickname
struct UWBP_GameResultHighlight_C_AnimateNickname_Params
{
	bool                                               IsForwardDirection;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.SetPlayerState
struct UWBP_GameResultHighlight_C_SetPlayerState_Params
{
	class APS_PropHunt_C*                              State;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.setKillerAvatar
struct UWBP_GameResultHighlight_C_setKillerAvatar_Params
{
	TEnumAsByte<KillerType_EKillerType>                Killer;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.SetSurvAvatar
struct UWBP_GameResultHighlight_C_SetSurvAvatar_Params
{
	TEnumAsByte<SurvChars_ESurvChars>                  Surv;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.SetCategory
struct UWBP_GameResultHighlight_C_SetCategory_Params
{
	struct FString                                     Value;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Name;                                                      // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Index;                                                     // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.GetCategoryName
struct UWBP_GameResultHighlight_C_GetCategoryName_Params
{
	bool                                               IsKiller;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<SurvCategory_ESurvCategory>            SurvCategory;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<KillerCategory_EKillerCategory>        KillerCategory;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       CategoryName;                                              // 0x0008(0x0018)  (Parm, OutParm)
};

// Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.GetGategories
struct UWBP_GameResultHighlight_C_GetGategories_Params
{
};

// Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.SetIsMVP
struct UWBP_GameResultHighlight_C_SetIsMVP_Params
{
	bool                                               MVP;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.Set Is Voted
struct UWBP_GameResultHighlight_C_Set_Is_Voted_Params
{
	bool                                               Voted;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.Set Is Killer
struct UWBP_GameResultHighlight_C_Set_Is_Killer_Params
{
	bool                                               Killer;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.OnVoted
struct UWBP_GameResultHighlight_C_OnVoted_Params
{
	int                                                Votes;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.BndEvt__WBP_GameResultHighlight_Button_VoteButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UWBP_GameResultHighlight_C_BndEvt__WBP_GameResultHighlight_Button_VoteButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.OnVotedHandler
struct UWBP_GameResultHighlight_C_OnVotedHandler_Params
{
	struct FString                                     Player_Nickname;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Votes_Number;                                              // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.Construct
struct UWBP_GameResultHighlight_C_Construct_Params
{
};

// Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.OnMouseEnter
struct UWBP_GameResultHighlight_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.OnMouseLeave
struct UWBP_GameResultHighlight_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.AnimateNicknameTick
struct UWBP_GameResultHighlight_C_AnimateNicknameTick_Params
{
};

// Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.BndEvt__WBP_GameResultHighlight_Button_Vote_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_GameResultHighlight_C_BndEvt__WBP_GameResultHighlight_Button_Vote_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.Unhover
struct UWBP_GameResultHighlight_C_Unhover_Params
{
};

// Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.ExecuteUbergraph_WBP_GameResultHighlight
struct UWBP_GameResultHighlight_C_ExecuteUbergraph_WBP_GameResultHighlight_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WBP_GameResultHighlight.WBP_GameResultHighlight_C.Voted__DelegateSignature
struct UWBP_GameResultHighlight_C_Voted__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
