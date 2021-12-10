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

// Function W_Slot.W_Slot_C.AnimateNickname
struct UW_Slot_C_AnimateNickname_Params
{
	bool                                               IsForwardDirection;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_Slot.W_Slot_C.Update Icons for Self
struct UW_Slot_C_Update_Icons_for_Self_Params
{
};

// Function W_Slot.W_Slot_C.CheckForSwapCancel
struct UW_Slot_C_CheckForSwapCancel_Params
{
};

// Function W_Slot.W_Slot_C.GetVisibility_1
struct UW_Slot_C_GetVisibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Slot.W_Slot_C.Get_SurvClass_Visibility_2
struct UW_Slot_C_Get_SurvClass_Visibility_2_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Slot.W_Slot_C.Get_SurvClass_Visibility_1
struct UW_Slot_C_Get_SurvClass_Visibility_1_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Slot.W_Slot_C.PreConstruct
struct UW_Slot_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_Slot.W_Slot_C.ChangeState
struct UW_Slot_C_ChangeState_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  ava;                                                       // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Slot.W_Slot_C.Process
struct UW_Slot_C_Process_Params
{
	class AActor*                                      Controller;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Slot.W_Slot_C.ChangeIcon
struct UW_Slot_C_ChangeIcon_Params
{
};

// Function W_Slot.W_Slot_C.ChangeIconSurvClass
struct UW_Slot_C_ChangeIconSurvClass_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Slot.W_Slot_C.ChangeReadyIcon
struct UW_Slot_C_ChangeReadyIcon_Params
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Slot.W_Slot_C.BndEvt__ReserveButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UW_Slot_C_BndEvt__ReserveButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_Slot.W_Slot_C.SetSlotName
struct UW_Slot_C_SetSlotName_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function W_Slot.W_Slot_C.SetSlotText
struct UW_Slot_C_SetSlotText_Params
{
	struct FString                                     Text;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function W_Slot.W_Slot_C.Construct
struct UW_Slot_C_Construct_Params
{
};

// Function W_Slot.W_Slot_C.OnSwapRequest
struct UW_Slot_C_OnSwapRequest_Params
{
};

// Function W_Slot.W_Slot_C.OnCancelSwapRequest
struct UW_Slot_C_OnCancelSwapRequest_Params
{
};

// Function W_Slot.W_Slot_C.ShowSwap
struct UW_Slot_C_ShowSwap_Params
{
	bool                                               BG;                                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function W_Slot.W_Slot_C.HideSwap
struct UW_Slot_C_HideSwap_Params
{
};

// Function W_Slot.W_Slot_C.BndEvt__SwapButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UW_Slot_C_BndEvt__SwapButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function W_Slot.W_Slot_C.Tick
struct UW_Slot_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function W_Slot.W_Slot_C.AnimateNicknameTick
struct UW_Slot_C_AnimateNicknameTick_Params
{
};

// Function W_Slot.W_Slot_C.ExecuteUbergraph_W_Slot
struct UW_Slot_C_ExecuteUbergraph_W_Slot_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
