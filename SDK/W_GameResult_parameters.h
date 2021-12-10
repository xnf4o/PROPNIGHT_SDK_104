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

// Function W_GameResult.W_GameResult_C.GetCountPlayersForInforamtion
struct UW_GameResult_C_GetCountPlayersForInforamtion_Params
{
	TArray<struct FEndGamePlayerData>                  Informations;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                Counter;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_GameResult.W_GameResult_C.GetKillerPlayerInformation
struct UW_GameResult_C_GetKillerPlayerInformation_Params
{
	struct FEndGamePlayerData                          PlayerInformation;                                         // 0x0000(0x0058)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function W_GameResult.W_GameResult_C.InitHighlighs
struct UW_GameResult_C_InitHighlighs_Params
{
};

// Function W_GameResult.W_GameResult_C.Deselect Other Maps
struct UW_GameResult_C_Deselect_Other_Maps_Params
{
	class UObject*                                     MapBG;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     ImageLight;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     Checkimage;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_GameResult.W_GameResult_C.PlayAnimAndSetColor
struct UW_GameResult_C_PlayAnimAndSetColor_Params
{
	class UWidgetAnimation*                            InAnimation;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      Target;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_GameResult.W_GameResult_C.Get_MapImage1_2_Brush_1
struct UW_GameResult_C_Get_MapImage1_2_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
};

// Function W_GameResult.W_GameResult_C.Get_MapImage1_1_Brush_1
struct UW_GameResult_C_Get_MapImage1_1_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
};

// Function W_GameResult.W_GameResult_C.Get_MapImage1_Brush_1
struct UW_GameResult_C_Get_MapImage1_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
};

// Function W_GameResult.W_GameResult_C.Get_MapName1_2_Text_1
struct UW_GameResult_C_Get_MapName1_2_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function W_GameResult.W_GameResult_C.Get_MapName1_1_Text_1
struct UW_GameResult_C_Get_MapName1_1_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function W_GameResult.W_GameResult_C.Get_MapName1_Text_1
struct UW_GameResult_C_Get_MapName1_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function W_GameResult.W_GameResult_C.Get_MapVote1_2_Text_1
struct UW_GameResult_C_Get_MapVote1_2_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function W_GameResult.W_GameResult_C.Get Map Vote 1 1 Text 0
struct UW_GameResult_C_Get_Map_Vote_1_1_Text_0_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function W_GameResult.W_GameResult_C.Get_MapVote1_Text_1
struct UW_GameResult_C_Get_MapVote1_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function W_GameResult.W_GameResult_C.PercentageLVL
struct UW_GameResult_C_PercentageLVL_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_GameResult.W_GameResult_C.LvlText
struct UW_GameResult_C_LvlText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function W_GameResult.W_GameResult_C.OnKeyDown
struct UW_GameResult_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function W_GameResult.W_GameResult_C.HasAnyEscapedSurvivor
struct UW_GameResult_C_HasAnyEscapedSurvivor_Params
{
	bool                                               Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_GameResult.W_GameResult_C.Finished_F07CB7EC4C8D6A1F1BFD15BF186FBFB6
struct UW_GameResult_C_Finished_F07CB7EC4C8D6A1F1BFD15BF186FBFB6_Params
{
};

// Function W_GameResult.W_GameResult_C.Finished_DF5EDB26487B5FA79CE8E1B7B19ECACE
struct UW_GameResult_C_Finished_DF5EDB26487B5FA79CE8E1B7B19ECACE_Params
{
};

// Function W_GameResult.W_GameResult_C.Construct
struct UW_GameResult_C_Construct_Params
{
};

// Function W_GameResult.W_GameResult_C.Tick
struct UW_GameResult_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_GameResult.W_GameResult_C.OnEndGameUI
struct UW_GameResult_C_OnEndGameUI_Params
{
	bool                                               EndGame_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_GameResult.W_GameResult_C.StartCreate
struct UW_GameResult_C_StartCreate_Params
{
};

// Function W_GameResult.W_GameResult_C.UploadExp
struct UW_GameResult_C_UploadExp_Params
{
};

// Function W_GameResult.W_GameResult_C.BndEvt__ButtonVoteMap1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UW_GameResult_C_BndEvt__ButtonVoteMap1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_GameResult.W_GameResult_C.BndEvt__ButtonVoteMap1_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UW_GameResult_C_BndEvt__ButtonVoteMap1_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_GameResult.W_GameResult_C.BndEvt__ButtonVoteMap1_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UW_GameResult_C_BndEvt__ButtonVoteMap1_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_GameResult.W_GameResult_C.BndEvt__VotingMap_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UW_GameResult_C_BndEvt__VotingMap_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_GameResult.W_GameResult_C.BndEvt__MatchResult_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
struct UW_GameResult_C_BndEvt__MatchResult_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_GameResult.W_GameResult_C.StopEndGameSounds
struct UW_GameResult_C_StopEndGameSounds_Params
{
};

// Function W_GameResult.W_GameResult_C.PreConstruct
struct UW_GameResult_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_GameResult.W_GameResult_C.OpenVotingMap
struct UW_GameResult_C_OpenVotingMap_Params
{
};

// Function W_GameResult.W_GameResult_C.PressE
struct UW_GameResult_C_PressE_Params
{
};

// Function W_GameResult.W_GameResult_C.PressQ
struct UW_GameResult_C_PressQ_Params
{
};

// Function W_GameResult.W_GameResult_C.Keyboard
struct UW_GameResult_C_Keyboard_Params
{
};

// Function W_GameResult.W_GameResult_C.SetMatchRes
struct UW_GameResult_C_SetMatchRes_Params
{
};

// Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_ButtonVoteMap1_1_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
struct UW_GameResult_C_BndEvt__W_GameResult_ButtonVoteMap1_1_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_ButtonVoteMap1_1_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
struct UW_GameResult_C_BndEvt__W_GameResult_ButtonVoteMap1_1_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_ButtonVoteMap1_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
struct UW_GameResult_C_BndEvt__W_GameResult_ButtonVoteMap1_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_ButtonVoteMap1_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
struct UW_GameResult_C_BndEvt__W_GameResult_ButtonVoteMap1_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_ButtonVoteMap1_2_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
struct UW_GameResult_C_BndEvt__W_GameResult_ButtonVoteMap1_2_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_ButtonVoteMap1_2_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
struct UW_GameResult_C_BndEvt__W_GameResult_ButtonVoteMap1_2_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_GameResult.W_GameResult_C.UnhoverMap_4
struct UW_GameResult_C_UnhoverMap_4_Params
{
};

// Function W_GameResult.W_GameResult_C.UnhoverMap_3
struct UW_GameResult_C_UnhoverMap_3_Params
{
};

// Function W_GameResult.W_GameResult_C.UnhoverMap_2
struct UW_GameResult_C_UnhoverMap_2_Params
{
};

// Function W_GameResult.W_GameResult_C.EndCamera
struct UW_GameResult_C_EndCamera_Params
{
};

// Function W_GameResult.W_GameResult_C.SetSettingsWidgetForQuickMatchSetUp
struct UW_GameResult_C_SetSettingsWidgetForQuickMatchSetUp_Params
{
	bool                                               That_QM_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_GameResult.W_GameResult_C.OnVoted
struct UW_GameResult_C_OnVoted_Params
{
};

// Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_Button_Level_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UW_GameResult_C_BndEvt__W_GameResult_Button_Level_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_Button_Level_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UW_GameResult_C_BndEvt__W_GameResult_Button_Level_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_Button_Level_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct UW_GameResult_C_BndEvt__W_GameResult_Button_Level_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_Button_Highlighs_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
struct UW_GameResult_C_BndEvt__W_GameResult_Button_Highlighs_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_Button_Highlighs_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
struct UW_GameResult_C_BndEvt__W_GameResult_Button_Highlighs_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_GameResult.W_GameResult_C.BndEvt__W_GameResult_Button_Highlighs_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
struct UW_GameResult_C_BndEvt__W_GameResult_Button_Highlighs_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_GameResult.W_GameResult_C.ShowHighlights
struct UW_GameResult_C_ShowHighlights_Params
{
};

// Function W_GameResult.W_GameResult_C.ExecuteUbergraph_W_GameResult
struct UW_GameResult_C_ExecuteUbergraph_W_GameResult_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
