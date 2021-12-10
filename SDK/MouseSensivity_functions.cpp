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
//		Name   -> Function MouseSensivity.MouseSensivity_C.GetText_6
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UMouseSensivity_C::GetText_6()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseSensivity.MouseSensivity_C.GetText_6");

	UMouseSensivity_C_GetText_6_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MouseSensivity.MouseSensivity_C.OnMouseWheel
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UMouseSensivity_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseSensivity.MouseSensivity_C.OnMouseWheel");

	UMouseSensivity_C_OnMouseWheel_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MouseSensivity.MouseSensivity_C.LastKnowFocus
//		Flags  -> ()
// Parameters:
//		class USlider*                                     Output_Get                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMouseSensivity_C::LastKnowFocus(class USlider** Output_Get)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseSensivity.MouseSensivity_C.LastKnowFocus");

	UMouseSensivity_C_LastKnowFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MouseSensivity.MouseSensivity_C.Save
//		Flags  -> ()
// Parameters:
void UMouseSensivity_C::Save()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseSensivity.MouseSensivity_C.Save");

	UMouseSensivity_C_Save_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MouseSensivity.MouseSensivity_C.Load
//		Flags  -> ()
// Parameters:
void UMouseSensivity_C::Load()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseSensivity.MouseSensivity_C.Load");

	UMouseSensivity_C_Load_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MouseSensivity.MouseSensivity_C.ChangeSliderColor
//		Flags  -> ()
// Parameters:
//		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class USlider*                                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMouseSensivity_C::ChangeSliderColor(bool Condition, class USlider* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseSensivity.MouseSensivity_C.ChangeSliderColor");

	UMouseSensivity_C_ChangeSliderColor_Params params {};
	params.Condition = Condition;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MouseSensivity.MouseSensivity_C.BndEvt__GeneralS_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
//		Flags  -> ()
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMouseSensivity_C::BndEvt__GeneralS_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseSensivity.MouseSensivity_C.BndEvt__GeneralS_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");

	UMouseSensivity_C_BndEvt__GeneralS_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MouseSensivity.MouseSensivity_C.BndEvt__MusicS_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
//		Flags  -> ()
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMouseSensivity_C::BndEvt__MusicS_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseSensivity.MouseSensivity_C.BndEvt__MusicS_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	UMouseSensivity_C_BndEvt__MusicS_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MouseSensivity.MouseSensivity_C.BndEvt__SFXS_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature
//		Flags  -> ()
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMouseSensivity_C::BndEvt__SFXS_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseSensivity.MouseSensivity_C.BndEvt__SFXS_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature");

	UMouseSensivity_C_BndEvt__SFXS_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MouseSensivity.MouseSensivity_C.ChangeTextColor
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     Overlay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTextBlock*                                  Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTextBlock*                                  Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UImage*                                      Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USlider*                                     Slider                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMouseSensivity_C::ChangeTextColor(class UWidget* Overlay, class UTextBlock* Text, class UTextBlock* Value, class UImage* Image, class USlider* Slider)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseSensivity.MouseSensivity_C.ChangeTextColor");

	UMouseSensivity_C_ChangeTextColor_Params params {};
	params.Overlay = Overlay;
	params.Text = Text;
	params.Value = Value;
	params.Image = Image;
	params.Slider = Slider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MouseSensivity.MouseSensivity_C.ChangeFocus
//		Flags  -> ()
void UMouseSensivity_C::ChangeFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseSensivity.MouseSensivity_C.ChangeFocus");

	UMouseSensivity_C_ChangeFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MouseSensivity.MouseSensivity_C.OnMouseLeave
//		Flags  -> ()
// Parameters:
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UMouseSensivity_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseSensivity.MouseSensivity_C.OnMouseLeave");

	UMouseSensivity_C_OnMouseLeave_Params params {};
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MouseSensivity.MouseSensivity_C.OnMouseEnter
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UMouseSensivity_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseSensivity.MouseSensivity_C.OnMouseEnter");

	UMouseSensivity_C_OnMouseEnter_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MouseSensivity.MouseSensivity_C.SetFocusToMouse
//		Flags  -> ()
void UMouseSensivity_C::SetFocusToMouse()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseSensivity.MouseSensivity_C.SetFocusToMouse");

	UMouseSensivity_C_SetFocusToMouse_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MouseSensivity.MouseSensivity_C.LostFocusMouseClick
//		Flags  -> ()
void UMouseSensivity_C::LostFocusMouseClick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseSensivity.MouseSensivity_C.LostFocusMouseClick");

	UMouseSensivity_C_LostFocusMouseClick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MouseSensivity.MouseSensivity_C.BndEvt__Button_Sensivity_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UMouseSensivity_C::BndEvt__Button_Sensivity_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseSensivity.MouseSensivity_C.BndEvt__Button_Sensivity_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UMouseSensivity_C_BndEvt__Button_Sensivity_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MouseSensivity.MouseSensivity_C.BndEvt__Button_X_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UMouseSensivity_C::BndEvt__Button_X_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseSensivity.MouseSensivity_C.BndEvt__Button_X_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UMouseSensivity_C_BndEvt__Button_X_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MouseSensivity.MouseSensivity_C.BndEvt__Button_Y_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UMouseSensivity_C::BndEvt__Button_Y_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseSensivity.MouseSensivity_C.BndEvt__Button_Y_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UMouseSensivity_C_BndEvt__Button_Y_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MouseSensivity.MouseSensivity_C.Select
//		Flags  -> ()
// Parameters:
//		class UImage*                                      Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMouseSensivity_C::Select(class UImage* Image)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseSensivity.MouseSensivity_C.Select");

	UMouseSensivity_C_Select_Params params {};
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MouseSensivity.MouseSensivity_C.Deselect
//		Flags  -> ()
void UMouseSensivity_C::Deselect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseSensivity.MouseSensivity_C.Deselect");

	UMouseSensivity_C_Deselect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MouseSensivity.MouseSensivity_C.SelectSensivity
//		Flags  -> ()
void UMouseSensivity_C::SelectSensivity()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseSensivity.MouseSensivity_C.SelectSensivity");

	UMouseSensivity_C_SelectSensivity_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MouseSensivity.MouseSensivity_C.SelectAxisX
//		Flags  -> ()
void UMouseSensivity_C::SelectAxisX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseSensivity.MouseSensivity_C.SelectAxisX");

	UMouseSensivity_C_SelectAxisX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MouseSensivity.MouseSensivity_C.SelectAxisY
//		Flags  -> ()
void UMouseSensivity_C::SelectAxisY()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseSensivity.MouseSensivity_C.SelectAxisY");

	UMouseSensivity_C_SelectAxisY_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MouseSensivity.MouseSensivity_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMouseSensivity_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseSensivity.MouseSensivity_C.PreConstruct");

	UMouseSensivity_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MouseSensivity.MouseSensivity_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMouseSensivity_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseSensivity.MouseSensivity_C.Tick");

	UMouseSensivity_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MouseSensivity.MouseSensivity_C.ChangeSliderValue
//		Flags  -> ()
// Parameters:
//		class USlider*                                     Slider                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMouseSensivity_C::ChangeSliderValue(class USlider* Slider, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseSensivity.MouseSensivity_C.ChangeSliderValue");

	UMouseSensivity_C_ChangeSliderValue_Params params {};
	params.Slider = Slider;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MouseSensivity.MouseSensivity_C.ChangePanel
//		Flags  -> ()
// Parameters:
//		class UCustomGraphicButton_C*                      Overlay                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTextBlock*                                  Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTextBlock*                                  Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UImage*                                      Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UImage*                                      LowBTN                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UImage*                                      HigthBTN                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Lenght                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMouseSensivity_C::ChangePanel(class UCustomGraphicButton_C* Overlay, class UTextBlock* Title, class UTextBlock* Value, class UImage* Image, class UImage* LowBTN, class UImage* HigthBTN, int Index, int Lenght, bool B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseSensivity.MouseSensivity_C.ChangePanel");

	UMouseSensivity_C_ChangePanel_Params params {};
	params.Overlay = Overlay;
	params.Title = Title;
	params.Value = Value;
	params.Image = Image;
	params.LowBTN = LowBTN;
	params.HigthBTN = HigthBTN;
	params.Index = Index;
	params.Lenght = Lenght;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MouseSensivity.MouseSensivity_C.Construct
//		Flags  -> ()
void UMouseSensivity_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseSensivity.MouseSensivity_C.Construct");

	UMouseSensivity_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MouseSensivity.MouseSensivity_C.BndEvt__MouseSensivity_InvertY_K2Node_ComponentBoundEvent_6_EventDispatcher_Left__DelegateSignature
//		Flags  -> ()
void UMouseSensivity_C::BndEvt__MouseSensivity_InvertY_K2Node_ComponentBoundEvent_6_EventDispatcher_Left__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseSensivity.MouseSensivity_C.BndEvt__MouseSensivity_InvertY_K2Node_ComponentBoundEvent_6_EventDispatcher_Left__DelegateSignature");

	UMouseSensivity_C_BndEvt__MouseSensivity_InvertY_K2Node_ComponentBoundEvent_6_EventDispatcher_Left__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MouseSensivity.MouseSensivity_C.BndEvt__MouseSensivity_InvertY_K2Node_ComponentBoundEvent_7_EventDispatcher_Right__DelegateSignature
//		Flags  -> ()
void UMouseSensivity_C::BndEvt__MouseSensivity_InvertY_K2Node_ComponentBoundEvent_7_EventDispatcher_Right__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseSensivity.MouseSensivity_C.BndEvt__MouseSensivity_InvertY_K2Node_ComponentBoundEvent_7_EventDispatcher_Right__DelegateSignature");

	UMouseSensivity_C_BndEvt__MouseSensivity_InvertY_K2Node_ComponentBoundEvent_7_EventDispatcher_Right__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MouseSensivity.MouseSensivity_C.SetInvertY
//		Flags  -> ()
void UMouseSensivity_C::SetInvertY()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseSensivity.MouseSensivity_C.SetInvertY");

	UMouseSensivity_C_SetInvertY_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MouseSensivity.MouseSensivity_C.ExecuteUbergraph_MouseSensivity
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMouseSensivity_C::ExecuteUbergraph_MouseSensivity(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MouseSensivity.MouseSensivity_C.ExecuteUbergraph_MouseSensivity");

	UMouseSensivity_C_ExecuteUbergraph_MouseSensivity_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
