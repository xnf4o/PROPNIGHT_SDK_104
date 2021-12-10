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

// Function MouseSensivity.MouseSensivity_C.GetText_6
struct UMouseSensivity_C_GetText_6_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function MouseSensivity.MouseSensivity_C.OnMouseWheel
struct UMouseSensivity_C_OnMouseWheel_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function MouseSensivity.MouseSensivity_C.LastKnowFocus
struct UMouseSensivity_C_LastKnowFocus_Params
{
	class USlider*                                     Output_Get;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MouseSensivity.MouseSensivity_C.Save
struct UMouseSensivity_C_Save_Params
{
};

// Function MouseSensivity.MouseSensivity_C.Load
struct UMouseSensivity_C_Load_Params
{
};

// Function MouseSensivity.MouseSensivity_C.ChangeSliderColor
struct UMouseSensivity_C_ChangeSliderColor_Params
{
	bool                                               Condition;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USlider*                                     Target;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MouseSensivity.MouseSensivity_C.BndEvt__GeneralS_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
struct UMouseSensivity_C_BndEvt__GeneralS_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MouseSensivity.MouseSensivity_C.BndEvt__MusicS_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
struct UMouseSensivity_C_BndEvt__MusicS_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MouseSensivity.MouseSensivity_C.BndEvt__SFXS_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature
struct UMouseSensivity_C_BndEvt__SFXS_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MouseSensivity.MouseSensivity_C.ChangeTextColor
struct UMouseSensivity_C_ChangeTextColor_Params
{
	class UWidget*                                     Overlay;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  Text;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  Value;                                                     // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      Image;                                                     // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USlider*                                     Slider;                                                    // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MouseSensivity.MouseSensivity_C.ChangeFocus
struct UMouseSensivity_C_ChangeFocus_Params
{
};

// Function MouseSensivity.MouseSensivity_C.OnMouseLeave
struct UMouseSensivity_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MouseSensivity.MouseSensivity_C.OnMouseEnter
struct UMouseSensivity_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MouseSensivity.MouseSensivity_C.SetFocusToMouse
struct UMouseSensivity_C_SetFocusToMouse_Params
{
};

// Function MouseSensivity.MouseSensivity_C.LostFocusMouseClick
struct UMouseSensivity_C_LostFocusMouseClick_Params
{
};

// Function MouseSensivity.MouseSensivity_C.BndEvt__Button_Sensivity_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UMouseSensivity_C_BndEvt__Button_Sensivity_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MouseSensivity.MouseSensivity_C.BndEvt__Button_X_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UMouseSensivity_C_BndEvt__Button_X_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MouseSensivity.MouseSensivity_C.BndEvt__Button_Y_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct UMouseSensivity_C_BndEvt__Button_Y_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MouseSensivity.MouseSensivity_C.Select
struct UMouseSensivity_C_Select_Params
{
	class UImage*                                      Image;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MouseSensivity.MouseSensivity_C.Deselect
struct UMouseSensivity_C_Deselect_Params
{
};

// Function MouseSensivity.MouseSensivity_C.SelectSensivity
struct UMouseSensivity_C_SelectSensivity_Params
{
};

// Function MouseSensivity.MouseSensivity_C.SelectAxisX
struct UMouseSensivity_C_SelectAxisX_Params
{
};

// Function MouseSensivity.MouseSensivity_C.SelectAxisY
struct UMouseSensivity_C_SelectAxisY_Params
{
};

// Function MouseSensivity.MouseSensivity_C.PreConstruct
struct UMouseSensivity_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MouseSensivity.MouseSensivity_C.Tick
struct UMouseSensivity_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MouseSensivity.MouseSensivity_C.ChangeSliderValue
struct UMouseSensivity_C_ChangeSliderValue_Params
{
	class USlider*                                     Slider;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MouseSensivity.MouseSensivity_C.ChangePanel
struct UMouseSensivity_C_ChangePanel_Params
{
	class UCustomGraphicButton_C*                      Overlay;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  Title;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                                  Value;                                                     // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      Image;                                                     // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      LowBTN;                                                    // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      HigthBTN;                                                  // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Lenght;                                                    // 0x0034(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               B;                                                         // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MouseSensivity.MouseSensivity_C.Construct
struct UMouseSensivity_C_Construct_Params
{
};

// Function MouseSensivity.MouseSensivity_C.BndEvt__MouseSensivity_InvertY_K2Node_ComponentBoundEvent_6_EventDispatcher_Left__DelegateSignature
struct UMouseSensivity_C_BndEvt__MouseSensivity_InvertY_K2Node_ComponentBoundEvent_6_EventDispatcher_Left__DelegateSignature_Params
{
};

// Function MouseSensivity.MouseSensivity_C.BndEvt__MouseSensivity_InvertY_K2Node_ComponentBoundEvent_7_EventDispatcher_Right__DelegateSignature
struct UMouseSensivity_C_BndEvt__MouseSensivity_InvertY_K2Node_ComponentBoundEvent_7_EventDispatcher_Right__DelegateSignature_Params
{
};

// Function MouseSensivity.MouseSensivity_C.SetInvertY
struct UMouseSensivity_C_SetInvertY_Params
{
};

// Function MouseSensivity.MouseSensivity_C.ExecuteUbergraph_MouseSensivity
struct UMouseSensivity_C_ExecuteUbergraph_MouseSensivity_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
