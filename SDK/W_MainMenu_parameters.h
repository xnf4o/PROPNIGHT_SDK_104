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

// Function W_MainMenu.W_MainMenu_C.BanTimerTick
struct UW_MainMenu_C_BanTimerTick_Params
{
};

// Function W_MainMenu.W_MainMenu_C.StartBanTimer
struct UW_MainMenu_C_StartBanTimer_Params
{
};

// Function W_MainMenu.W_MainMenu_C.CheckBanned
struct UW_MainMenu_C_CheckBanned_Params
{
	bool                                               IsBanned;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_MainMenu.W_MainMenu_C.BlockTutotialButton
struct UW_MainMenu_C_BlockTutotialButton_Params
{
	bool                                               bLock;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_MainMenu.W_MainMenu_C.MouseFocus?
struct UW_MainMenu_C_MouseFocus__Params
{
	bool                                               Result;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_MainMenu.W_MainMenu_C.Get Anim
struct UW_MainMenu_C_Get_Anim_Params
{
	class UButton*                                     Button;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Anim;                                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_MainMenu.W_MainMenu_C.PrintError
struct UW_MainMenu_C_PrintError_Params
{
	struct FString                                     Text;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function W_MainMenu.W_MainMenu_C.Get_LVL_Text_1
struct UW_MainMenu_C_Get_LVL_Text_1_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function W_MainMenu.W_MainMenu_C.LastKnowFocus
struct UW_MainMenu_C_LastKnowFocus_Params
{
	class UButton*                                     LastFocusedButton;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_MainMenu.W_MainMenu_C.PreConstruct
struct UW_MainMenu_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_MainMenu.W_MainMenu_C.Construct
struct UW_MainMenu_C_Construct_Params
{
};

// Function W_MainMenu.W_MainMenu_C.Tick
struct UW_MainMenu_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UW_MainMenu_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UW_MainMenu_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.ResetButtonVisibility
struct UW_MainMenu_C_ResetButtonVisibility_Params
{
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
struct UW_MainMenu_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.Search
struct UW_MainMenu_C_Search_Params
{
};

// Function W_MainMenu.W_MainMenu_C.SearchingActive
struct UW_MainMenu_C_SearchingActive_Params
{
};

// Function W_MainMenu.W_MainMenu_C.SearchingDeactive
struct UW_MainMenu_C_SearchingDeactive_Params
{
};

// Function W_MainMenu.W_MainMenu_C.CancelSerach
struct UW_MainMenu_C_CancelSerach_Params
{
};

// Function W_MainMenu.W_MainMenu_C.StartMainMenuSound
struct UW_MainMenu_C_StartMainMenuSound_Params
{
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UW_MainMenu_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.SetSettingOpen?
struct UW_MainMenu_C_SetSettingOpen__Params
{
};

// Function W_MainMenu.W_MainMenu_C.OnMouseLeave
struct UW_MainMenu_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function W_MainMenu.W_MainMenu_C.OnMouseEnter
struct UW_MainMenu_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function W_MainMenu.W_MainMenu_C.SetFocusToMouse
struct UW_MainMenu_C_SetFocusToMouse_Params
{
};

// Function W_MainMenu.W_MainMenu_C.Event_ESC
struct UW_MainMenu_C_Event_ESC_Params
{
};

// Function W_MainMenu.W_MainMenu_C.UpdateSessionList
struct UW_MainMenu_C_UpdateSessionList_Params
{
	TArray<struct FBlueprintSessionResult>             Sessions;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature
struct UW_MainMenu_C_BndEvt__Button_Play_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__W_PressAnyKeyScreen_K2Node_ComponentBoundEvent_58_OnHidden__DelegateSignature
struct UW_MainMenu_C_BndEvt__W_PressAnyKeyScreen_K2Node_ComponentBoundEvent_58_OnHidden__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.PAK_Screen_OnShown
struct UW_MainMenu_C_PAK_Screen_OnShown_Params
{
};

// Function W_MainMenu.W_MainMenu_C.Bind_PAK_Events
struct UW_MainMenu_C_Bind_PAK_Events_Params
{
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Tutorial_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature
struct UW_MainMenu_C_BndEvt__Button_Tutorial_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature
struct UW_MainMenu_C_BndEvt__Button_Play_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.HideMenu
struct UW_MainMenu_C_HideMenu_Params
{
	bool                                               HideNetworks;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_MainMenu.W_MainMenu_C.ShowMenu
struct UW_MainMenu_C_ShowMenu_Params
{
	bool                                               ShowNetworks;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_MainMenu.W_MainMenu_C.HideChat
struct UW_MainMenu_C_HideChat_Params
{
};

// Function W_MainMenu.W_MainMenu_C.ShowChat
struct UW_MainMenu_C_ShowChat_Params
{
};

// Function W_MainMenu.W_MainMenu_C.FadeBlackScreen
struct UW_MainMenu_C_FadeBlackScreen_Params
{
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__Button_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
struct UW_MainMenu_C_BndEvt__Button_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.ShowBackButton
struct UW_MainMenu_C_ShowBackButton_Params
{
};

// Function W_MainMenu.W_MainMenu_C.HideBackButton
struct UW_MainMenu_C_HideBackButton_Params
{
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Instagram_Link_K2Node_ComponentBoundEvent_51_OnButtonHoverEvent__DelegateSignature
struct UW_MainMenu_C_BndEvt__Button_Instagram_Link_K2Node_ComponentBoundEvent_51_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Twitter_Link_K2Node_ComponentBoundEvent_52_OnButtonHoverEvent__DelegateSignature
struct UW_MainMenu_C_BndEvt__Button_Twitter_Link_K2Node_ComponentBoundEvent_52_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Facebook_Link_K2Node_ComponentBoundEvent_53_OnButtonHoverEvent__DelegateSignature
struct UW_MainMenu_C_BndEvt__Button_Facebook_Link_K2Node_ComponentBoundEvent_53_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Button_197_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature
struct UW_MainMenu_C_BndEvt__W_MainMenu_Button_197_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_SurvPerkButton_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature
struct UW_MainMenu_C_BndEvt__W_MainMenu_SurvPerkButton_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.UpdatePerksName
struct UW_MainMenu_C_UpdatePerksName_Params
{
	bool                                               Surv_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_KillerPerkButton_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature
struct UW_MainMenu_C_BndEvt__W_MainMenu_KillerPerkButton_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.LoadPerks
struct UW_MainMenu_C_LoadPerks_Params
{
	bool                                               Surv_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_MainMenu.W_MainMenu_C.SelectPerk
struct UW_MainMenu_C_SelectPerk_Params
{
	class UClass*                                      SelectedPerk;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Perk1_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature
struct UW_MainMenu_C_BndEvt__W_MainMenu_Perk1_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Perk2_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature
struct UW_MainMenu_C_BndEvt__W_MainMenu_Perk2_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Perk3_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature
struct UW_MainMenu_C_BndEvt__W_MainMenu_Perk3_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_ClearPerkButton_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature
struct UW_MainMenu_C_BndEvt__W_MainMenu_ClearPerkButton_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_65_OnAccept__DelegateSignature
struct UW_MainMenu_C_BndEvt__W_MainMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_65_OnAccept__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_68_OnDeclineDelayed__DelegateSignature
struct UW_MainMenu_C_BndEvt__W_MainMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_68_OnDeclineDelayed__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.LostFocusMouseClick
struct UW_MainMenu_C_LostFocusMouseClick_Params
{
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Button_Discord_Link_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature
struct UW_MainMenu_C_BndEvt__W_MainMenu_Button_Discord_Link_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.OnInitialized
struct UW_MainMenu_C_OnInitialized_Params
{
};

// Function W_MainMenu.W_MainMenu_C.MoveSliderMenu
struct UW_MainMenu_C_MoveSliderMenu_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_MainMenu.W_MainMenu_C.Move
struct UW_MainMenu_C_Move_Params
{
	struct FName                                       EntryName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_MainMenu.W_MainMenu_C.SettingsHoverStyle
struct UW_MainMenu_C_SettingsHoverStyle_Params
{
};

// Function W_MainMenu.W_MainMenu_C.QuitHoverStyle
struct UW_MainMenu_C_QuitHoverStyle_Params
{
};

// Function W_MainMenu.W_MainMenu_C.SetStyleForButtonsFromKeyboard
struct UW_MainMenu_C_SetStyleForButtonsFromKeyboard_Params
{
};

// Function W_MainMenu.W_MainMenu_C.SetUnhoveredButtonsStyle
struct UW_MainMenu_C_SetUnhoveredButtonsStyle_Params
{
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__Button_78_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature
struct UW_MainMenu_C_BndEvt__Button_78_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__Button_524_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature
struct UW_MainMenu_C_BndEvt__Button_524_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__Button_631_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature
struct UW_MainMenu_C_BndEvt__Button_631_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__Button_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature
struct UW_MainMenu_C_BndEvt__Button_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature
struct UW_MainMenu_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_WBP_SocialUI_K2Node_ComponentBoundEvent_67_OnShowDetailed__DelegateSignature
struct UW_MainMenu_C_BndEvt__W_MainMenu_WBP_SocialUI_K2Node_ComponentBoundEvent_67_OnShowDetailed__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_WBP_SocialUI_K2Node_ComponentBoundEvent_69_OnHideDetailed__DelegateSignature
struct UW_MainMenu_C_BndEvt__W_MainMenu_WBP_SocialUI_K2Node_ComponentBoundEvent_69_OnHideDetailed__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.Disable_SocialsButtons
struct UW_MainMenu_C_Disable_SocialsButtons_Params
{
};

// Function W_MainMenu.W_MainMenu_C.Esc_Quit
struct UW_MainMenu_C_Esc_Quit_Params
{
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Button_Discord_Link_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature
struct UW_MainMenu_C_BndEvt__W_MainMenu_Button_Discord_Link_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Button_Twitter_Link_K2Node_ComponentBoundEvent_71_OnButtonClickedEvent__DelegateSignature
struct UW_MainMenu_C_BndEvt__W_MainMenu_Button_Twitter_Link_K2Node_ComponentBoundEvent_71_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Button_Facebook_Link_K2Node_ComponentBoundEvent_72_OnButtonClickedEvent__DelegateSignature
struct UW_MainMenu_C_BndEvt__W_MainMenu_Button_Facebook_Link_K2Node_ComponentBoundEvent_72_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Tutorial_K2Node_ComponentBoundEvent_59_OnButtonHoverEvent__DelegateSignature
struct UW_MainMenu_C_BndEvt__Button_Tutorial_K2Node_ComponentBoundEvent_59_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.ShowSocialNetworks
struct UW_MainMenu_C_ShowSocialNetworks_Params
{
};

// Function W_MainMenu.W_MainMenu_C.HideSocialNetworks
struct UW_MainMenu_C_HideSocialNetworks_Params
{
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Button_Lootbox_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UW_MainMenu_C_BndEvt__W_MainMenu_Button_Lootbox_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Button_Lootbox_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UW_MainMenu_C_BndEvt__W_MainMenu_Button_Lootbox_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_MainMenu.W_MainMenu_C.ShowUpdateDialog
struct UW_MainMenu_C_ShowUpdateDialog_Params
{
};

// Function W_MainMenu.W_MainMenu_C.OnAcceptUpdate
struct UW_MainMenu_C_OnAcceptUpdate_Params
{
};

// Function W_MainMenu.W_MainMenu_C.HideSocUIAndVersion
struct UW_MainMenu_C_HideSocUIAndVersion_Params
{
};

// Function W_MainMenu.W_MainMenu_C.ShowSocUIAndVersion
struct UW_MainMenu_C_ShowSocUIAndVersion_Params
{
};

// Function W_MainMenu.W_MainMenu_C.ExecuteUbergraph_W_MainMenu
struct UW_MainMenu_C_ExecuteUbergraph_W_MainMenu_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
