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
//		Name   -> Function PauseMenu.PauseMenu_C.GetAnim
//		Flags  -> ()
// Parameters:
//		class UButton*                                     Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidgetAnimation*                            Anim                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPauseMenu_C::GetAnim(class UButton* Button, class UWidgetAnimation** Anim)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.GetAnim");

	UPauseMenu_C_GetAnim_Params params {};
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Anim != nullptr)
		*Anim = params.Anim;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.LastKnowFocus
//		Flags  -> ()
// Parameters:
//		class UButton*                                     Output_Get                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPauseMenu_C::LastKnowFocus(class UButton** Output_Get)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.LastKnowFocus");

	UPauseMenu_C_LastKnowFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.SettingsActive
//		Flags  -> ()
void UPauseMenu_C::SettingsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SettingsActive");

	UPauseMenu_C_SettingsActive_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.SettingsDeactive
//		Flags  -> ()
void UPauseMenu_C::SettingsDeactive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SettingsDeactive");

	UPauseMenu_C_SettingsDeactive_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.SettingsUnhovored
//		Flags  -> ()
void UPauseMenu_C::SettingsUnhovored()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SettingsUnhovored");

	UPauseMenu_C_SettingsUnhovored_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UPauseMenu_C::BndEvt__ContinueButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UPauseMenu_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.OnMouseEnter
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UPauseMenu_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.OnMouseEnter");

	UPauseMenu_C_OnMouseEnter_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.OnMouseLeave
//		Flags  -> ()
// Parameters:
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UPauseMenu_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.OnMouseLeave");

	UPauseMenu_C_OnMouseLeave_Params params {};
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.HideSettingsText
//		Flags  -> ()
void UPauseMenu_C::HideSettingsText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.HideSettingsText");

	UPauseMenu_C_HideSettingsText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.ShowSettingsText
//		Flags  -> ()
void UPauseMenu_C::ShowSettingsText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ShowSettingsText");

	UPauseMenu_C_ShowSettingsText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.SetStyleFocusedButton
//		Flags  -> ()
void UPauseMenu_C::SetStyleFocusedButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SetStyleFocusedButton");

	UPauseMenu_C_SetStyleFocusedButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.BndEvt__W_MainMenu_Button_Back_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UPauseMenu_C::BndEvt__W_MainMenu_Button_Back_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.BndEvt__W_MainMenu_Button_Back_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature");

	UPauseMenu_C_BndEvt__W_MainMenu_Button_Back_K2Node_ComponentBoundEvent_49_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UPauseMenu_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature");

	UPauseMenu_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_54_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.PauseMenu
//		Flags  -> ()
void UPauseMenu_C::PauseMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.PauseMenu");

	UPauseMenu_C_PauseMenu_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.ContinueGame
//		Flags  -> ()
void UPauseMenu_C::ContinueGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ContinueGame");

	UPauseMenu_C_ContinueGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UPauseMenu_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");

	UPauseMenu_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.SetBackButtonText
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UPauseMenu_C::SetBackButtonText(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SetBackButtonText");

	UPauseMenu_C_SetBackButtonText_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.SettingsEvent
//		Flags  -> ()
void UPauseMenu_C::SettingsEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SettingsEvent");

	UPauseMenu_C_SettingsEvent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UPauseMenu_C::BndEvt__ContinueButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UPauseMenu_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UPauseMenu_C::BndEvt__SettingsButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UPauseMenu_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.ContinueHover
//		Flags  -> ()
void UPauseMenu_C::ContinueHover()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ContinueHover");

	UPauseMenu_C_ContinueHover_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.PlayAnimForward
//		Flags  -> ()
// Parameters:
//		class UButton*                                     Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPauseMenu_C::PlayAnimForward(class UButton* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.PlayAnimForward");

	UPauseMenu_C_PlayAnimForward_Params params {};
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UPauseMenu_C::BndEvt__SettingsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UPauseMenu_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.PlayAnimReverse
//		Flags  -> ()
// Parameters:
//		class UButton*                                     Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPauseMenu_C::PlayAnimReverse(class UButton* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.PlayAnimReverse");

	UPauseMenu_C_PlayAnimReverse_Params params {};
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPauseMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.Tick");

	UPauseMenu_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.MoveButton
//		Flags  -> ()
// Parameters:
//		class UButton*                                     Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPauseMenu_C::MoveButton(class UButton* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.MoveButton");

	UPauseMenu_C_MoveButton_Params params {};
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UPauseMenu_C::BndEvt__ContinueButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UPauseMenu_C_BndEvt__ContinueButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UPauseMenu_C::BndEvt__SettingsButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UPauseMenu_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.BndEvt__PauseMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_13_OnDeclineDelayed__DelegateSignature
//		Flags  -> ()
void UPauseMenu_C::BndEvt__PauseMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_13_OnDeclineDelayed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.BndEvt__PauseMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_13_OnDeclineDelayed__DelegateSignature");

	UPauseMenu_C_BndEvt__PauseMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_13_OnDeclineDelayed__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.Construct
//		Flags  -> ()
void UPauseMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.Construct");

	UPauseMenu_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPauseMenu_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.PreConstruct");

	UPauseMenu_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UPauseMenu_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UPauseMenu_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UPauseMenu_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UPauseMenu_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.BndEvt__PauseMenu_Button_DefaultCfg_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature
//		Flags  -> ()
void UPauseMenu_C::BndEvt__PauseMenu_Button_DefaultCfg_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.BndEvt__PauseMenu_Button_DefaultCfg_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature");

	UPauseMenu_C_BndEvt__PauseMenu_Button_DefaultCfg_K2Node_ComponentBoundEvent_10_OnButtonPressedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.BndEvt__PauseMenu_Button_DefaultCfg_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature
//		Flags  -> ()
void UPauseMenu_C::BndEvt__PauseMenu_Button_DefaultCfg_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.BndEvt__PauseMenu_Button_DefaultCfg_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature");

	UPauseMenu_C_BndEvt__PauseMenu_Button_DefaultCfg_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.ShowResetButton
//		Flags  -> ()
void UPauseMenu_C::ShowResetButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ShowResetButton");

	UPauseMenu_C_ShowResetButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.MoveSliderMenu
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPauseMenu_C::MoveSliderMenu(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.MoveSliderMenu");

	UPauseMenu_C_MoveSliderMenu_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.Move
//		Flags  -> ()
// Parameters:
//		struct FName                                       EntryName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPauseMenu_C::Move(const struct FName& EntryName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.Move");

	UPauseMenu_C_Move_Params params {};
	params.EntryName = EntryName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.BndEvt__PauseMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_12_OnDecline__DelegateSignature
//		Flags  -> ()
void UPauseMenu_C::BndEvt__PauseMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_12_OnDecline__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.BndEvt__PauseMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_12_OnDecline__DelegateSignature");

	UPauseMenu_C_BndEvt__PauseMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_12_OnDecline__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.BndEvt__PauseMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_16_OnAccept__DelegateSignature
//		Flags  -> ()
void UPauseMenu_C::BndEvt__PauseMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_16_OnAccept__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.BndEvt__PauseMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_16_OnAccept__DelegateSignature");

	UPauseMenu_C_BndEvt__PauseMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_16_OnAccept__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PauseMenu.PauseMenu_C.ExecuteUbergraph_PauseMenu
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPauseMenu_C::ExecuteUbergraph_PauseMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ExecuteUbergraph_PauseMenu");

	UPauseMenu_C_ExecuteUbergraph_PauseMenu_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
