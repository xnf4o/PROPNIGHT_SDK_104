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

// Function PauseMenu.PauseMenu_C.GetAnim
struct UPauseMenu_C_GetAnim_Params
{
	class UButton*                                     Button;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Anim;                                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PauseMenu.PauseMenu_C.LastKnowFocus
struct UPauseMenu_C_LastKnowFocus_Params
{
	class UButton*                                     Output_Get;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PauseMenu.PauseMenu_C.SettingsActive
struct UPauseMenu_C_SettingsActive_Params
{
};

// Function PauseMenu.PauseMenu_C.SettingsDeactive
struct UPauseMenu_C_SettingsDeactive_Params
{
};

// Function PauseMenu.PauseMenu_C.SettingsUnhovored
struct UPauseMenu_C_SettingsUnhovored_Params
{
};

// Function PauseMenu.PauseMenu_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UPauseMenu_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PauseMenu.PauseMenu_C.OnMouseEnter
struct UPauseMenu_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PauseMenu.PauseMenu_C.OnMouseLeave
struct UPauseMenu_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PauseMenu.PauseMenu_C.HideSettingsText
struct UPauseMenu_C_HideSettingsText_Params
{
};

// Function PauseMenu.PauseMenu_C.ShowSettingsText
struct UPauseMenu_C_ShowSettingsText_Params
{
};

// Function PauseMenu.PauseMenu_C.SetStyleFocusedButton
struct UPauseMenu_C_SetStyleFocusedButton_Params
{
};

// Function PauseMenu.PauseMenu_C.BndEvt__W_MainMenu_Button_Back_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature
struct UPauseMenu_C_BndEvt__W_MainMenu_Button_Back_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PauseMenu.PauseMenu_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature
struct UPauseMenu_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PauseMenu.PauseMenu_C.PauseMenu
struct UPauseMenu_C_PauseMenu_Params
{
};

// Function PauseMenu.PauseMenu_C.ContinueGame
struct UPauseMenu_C_ContinueGame_Params
{
};

// Function PauseMenu.PauseMenu_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
struct UPauseMenu_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PauseMenu.PauseMenu_C.SetBackButtonText
struct UPauseMenu_C_SetBackButtonText_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PauseMenu.PauseMenu_C.SettingsEvent
struct UPauseMenu_C_SettingsEvent_Params
{
};

// Function PauseMenu.PauseMenu_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UPauseMenu_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PauseMenu.PauseMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct UPauseMenu_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PauseMenu.PauseMenu_C.ContinueHover
struct UPauseMenu_C_ContinueHover_Params
{
};

// Function PauseMenu.PauseMenu_C.PlayAnimForward
struct UPauseMenu_C_PlayAnimForward_Params
{
	class UButton*                                     Button;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PauseMenu.PauseMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UPauseMenu_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PauseMenu.PauseMenu_C.PlayAnimReverse
struct UPauseMenu_C_PlayAnimReverse_Params
{
	class UButton*                                     Button;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PauseMenu.PauseMenu_C.Tick
struct UPauseMenu_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PauseMenu.PauseMenu_C.MoveButton
struct UPauseMenu_C_MoveButton_Params
{
	class UButton*                                     Button;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PauseMenu.PauseMenu_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UPauseMenu_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PauseMenu.PauseMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
struct UPauseMenu_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PauseMenu.PauseMenu_C.BndEvt__PauseMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_13_OnDeclineDelayed__DelegateSignature
struct UPauseMenu_C_BndEvt__PauseMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_13_OnDeclineDelayed__DelegateSignature_Params
{
};

// Function PauseMenu.PauseMenu_C.Construct
struct UPauseMenu_C_Construct_Params
{
};

// Function PauseMenu.PauseMenu_C.PreConstruct
struct UPauseMenu_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PauseMenu.PauseMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UPauseMenu_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function PauseMenu.PauseMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
struct UPauseMenu_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function PauseMenu.PauseMenu_C.BndEvt__PauseMenu_Button_DefaultCfg_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature
struct UPauseMenu_C_BndEvt__PauseMenu_Button_DefaultCfg_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function PauseMenu.PauseMenu_C.BndEvt__PauseMenu_Button_DefaultCfg_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature
struct UPauseMenu_C_BndEvt__PauseMenu_Button_DefaultCfg_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function PauseMenu.PauseMenu_C.ShowResetButton
struct UPauseMenu_C_ShowResetButton_Params
{
};

// Function PauseMenu.PauseMenu_C.MoveSliderMenu
struct UPauseMenu_C_MoveSliderMenu_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PauseMenu.PauseMenu_C.Move
struct UPauseMenu_C_Move_Params
{
	struct FName                                       EntryName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PauseMenu.PauseMenu_C.BndEvt__PauseMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_12_OnDecline__DelegateSignature
struct UPauseMenu_C_BndEvt__PauseMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_12_OnDecline__DelegateSignature_Params
{
};

// Function PauseMenu.PauseMenu_C.BndEvt__PauseMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_16_OnAccept__DelegateSignature
struct UPauseMenu_C_BndEvt__PauseMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_16_OnAccept__DelegateSignature_Params
{
};

// Function PauseMenu.PauseMenu_C.ExecuteUbergraph_PauseMenu
struct UPauseMenu_C_ExecuteUbergraph_PauseMenu_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
