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

// Function W_MiniLobby.W_MiniLobby_C.ControlChatTipVisibility
struct UW_MiniLobby_C_ControlChatTipVisibility_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.InitChatTip
struct UW_MiniLobby_C_InitChatTip_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.OnGenerateWidget_2
struct UW_MiniLobby_C_OnGenerateWidget_2_Params
{
	struct FString                                     Item;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                     ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_MiniLobby.W_MiniLobby_C.OnGenerateWidget_1
struct UW_MiniLobby_C_OnGenerateWidget_1_Params
{
	struct FString                                     Item;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                     ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_MiniLobby.W_MiniLobby_C.IsProphunt
struct UW_MiniLobby_C_IsProphunt_Params
{
	bool                                               IsProphunt;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_MiniLobby.W_MiniLobby_C.GetSurvivorsCount
struct UW_MiniLobby_C_GetSurvivorsCount_Params
{
	int                                                Result;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_MiniLobby.W_MiniLobby_C.GetSlotCountByName
struct UW_MiniLobby_C_GetSlotCountByName_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Result;                                                    // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_MiniLobby.W_MiniLobby_C.GetKillersCount
struct UW_MiniLobby_C_GetKillersCount_Params
{
	int                                                Result;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_MiniLobby.W_MiniLobby_C.GetSlotByName
struct UW_MiniLobby_C_GetSlotByName_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UW_Slot_C*                                   Slot;                                                      // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_SlotM_C*                                  SlotM;                                                     // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_MiniLobby.W_MiniLobby_C.Construct
struct UW_MiniLobby_C_Construct_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.Tick
struct UW_MiniLobby_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_MiniLobby.W_MiniLobby_C.UpdateLobbyState
struct UW_MiniLobby_C_UpdateLobbyState_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.BndEvt__Button_207_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UW_MiniLobby_C_BndEvt__Button_207_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.UpdateServerInfo
struct UW_MiniLobby_C_UpdateServerInfo_Params
{
	struct FString                                     MapName;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Public;                                                    // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_MiniLobby.W_MiniLobby_C.BndEvt__RefreshList_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UW_MiniLobby_C_BndEvt__RefreshList_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.StartGameAttempt
struct UW_MiniLobby_C_StartGameAttempt_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.Cancel
struct UW_MiniLobby_C_Cancel_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.CreateButtons
struct UW_MiniLobby_C_CreateButtons_Params
{
	bool                                               Killer_;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
};

// Function W_MiniLobby.W_MiniLobby_C.CreateSurvButtons
struct UW_MiniLobby_C_CreateSurvButtons_Params
{
	bool                                               Propnight_;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_MiniLobby.W_MiniLobby_C.CreateKillerButtons
struct UW_MiniLobby_C_CreateKillerButtons_Params
{
	bool                                               Propnight_;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_MiniLobby.W_MiniLobby_C.BndEvt__Button_207_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
struct UW_MiniLobby_C_BndEvt__Button_207_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.BndEvt__Button_207_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
struct UW_MiniLobby_C_BndEvt__Button_207_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.KillerChange
struct UW_MiniLobby_C_KillerChange_Params
{
	TEnumAsByte<KillerType_EKillerType>                KillerType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_MiniLobby.W_MiniLobby_C.SurvChange
struct UW_MiniLobby_C_SurvChange_Params
{
	TEnumAsByte<SurvChars_ESurvChars>                  char_;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_MiniLobby.W_MiniLobby_C.CreateSurvSkillsButtons
struct UW_MiniLobby_C_CreateSurvSkillsButtons_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.SurvSkillChange
struct UW_MiniLobby_C_SurvSkillChange_Params
{
	TEnumAsByte<SurvSkills_ESurvSkills>                SurvSkill;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_MiniLobby.W_MiniLobby_C.BndEvt__ComboBoxString_0_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature
struct UW_MiniLobby_C_BndEvt__ComboBoxString_0_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_MiniLobby.W_MiniLobby_C.CreateSlots
struct UW_MiniLobby_C_CreateSlots_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.ClearButtons
struct UW_MiniLobby_C_ClearButtons_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.BndEvt__Button_25_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UW_MiniLobby_C_BndEvt__Button_25_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.HideSwap
struct UW_MiniLobby_C_HideSwap_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.StartGameButton
struct UW_MiniLobby_C_StartGameButton_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.BndEvt__Button_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UW_MiniLobby_C_BndEvt__Button_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.ReadyCustom
struct UW_MiniLobby_C_ReadyCustom_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.PlayMusicCustom
struct UW_MiniLobby_C_PlayMusicCustom_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.ButtonSwitch
struct UW_MiniLobby_C_ButtonSwitch_Params
{
	bool                                               On_;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_MiniLobby.W_MiniLobby_C.BndEvt__Button_272_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
struct UW_MiniLobby_C_BndEvt__Button_272_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.BndEvt__Button_KillerBoost_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
struct UW_MiniLobby_C_BndEvt__Button_KillerBoost_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.HideBoosterWidget
struct UW_MiniLobby_C_HideBoosterWidget_Params
{
	bool                                               isKillerSlot_;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_MiniLobby.W_MiniLobby_C.W8Slots
struct UW_MiniLobby_C_W8Slots_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.ResetSwaps
struct UW_MiniLobby_C_ResetSwaps_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.BndEvt__W_MiniLobby_ButtonCont_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
struct UW_MiniLobby_C_BndEvt__W_MiniLobby_ButtonCont_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.BndEvt__W_MiniLobby_ButtonCont_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
struct UW_MiniLobby_C_BndEvt__W_MiniLobby_ButtonCont_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.BndEvt__W_MiniLobby_ButtonCont_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature
struct UW_MiniLobby_C_BndEvt__W_MiniLobby_ButtonCont_K2Node_ComponentBoundEvent_11_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.BndEvt__W_MiniLobby_Button_351_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
struct UW_MiniLobby_C_BndEvt__W_MiniLobby_Button_351_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.BndEvt__W_MiniLobby_Button_351_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
struct UW_MiniLobby_C_BndEvt__W_MiniLobby_Button_351_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.BndEvt__W_MiniLobby_Button_351_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
struct UW_MiniLobby_C_BndEvt__W_MiniLobby_Button_351_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.BndEvt__W_MiniLobby_Button_start_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
struct UW_MiniLobby_C_BndEvt__W_MiniLobby_Button_start_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.BndEvt__W_MiniLobby_Button_start_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
struct UW_MiniLobby_C_BndEvt__W_MiniLobby_Button_start_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.BndEvt__W_MiniLobby_Button_207_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
struct UW_MiniLobby_C_BndEvt__W_MiniLobby_Button_207_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.BndEvt__W_MiniLobby_Button_207_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
struct UW_MiniLobby_C_BndEvt__W_MiniLobby_Button_207_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.UpdateLobbyTime
struct UW_MiniLobby_C_UpdateLobbyTime_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.PreConstruct
struct UW_MiniLobby_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_MiniLobby.W_MiniLobby_C.ClearSwap_LeaveFromServer
struct UW_MiniLobby_C_ClearSwap_LeaveFromServer_Params
{
	class APawn*                                       LeftPlayer;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_MiniLobby.W_MiniLobby_C.LosesFocusWidget
struct UW_MiniLobby_C_LosesFocusWidget_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.HoverFocusButton
struct UW_MiniLobby_C_HoverFocusButton_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.CheckPerk
struct UW_MiniLobby_C_CheckPerk_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.ShowInviteFriends
struct UW_MiniLobby_C_ShowInviteFriends_Params
{
};

// Function W_MiniLobby.W_MiniLobby_C.ExecuteUbergraph_W_MiniLobby
struct UW_MiniLobby_C_ExecuteUbergraph_W_MiniLobby_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
