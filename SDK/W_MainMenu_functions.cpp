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
//		Name   -> Function W_MainMenu.W_MainMenu_C.BanTimerTick
//		Flags  -> ()
// Parameters:
void UW_MainMenu_C::BanTimerTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BanTimerTick");

	UW_MainMenu_C_BanTimerTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.StartBanTimer
//		Flags  -> ()
// Parameters:
void UW_MainMenu_C::StartBanTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.StartBanTimer");

	UW_MainMenu_C_StartBanTimer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.CheckBanned
//		Flags  -> ()
// Parameters:
//		bool                                               IsBanned                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_MainMenu_C::CheckBanned(bool* IsBanned)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.CheckBanned");

	UW_MainMenu_C_CheckBanned_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsBanned != nullptr)
		*IsBanned = params.IsBanned;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BlockTutotialButton
//		Flags  -> ()
// Parameters:
//		bool                                               bLock                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_MainMenu_C::BlockTutotialButton(bool bLock)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BlockTutotialButton");

	UW_MainMenu_C_BlockTutotialButton_Params params {};
	params.bLock = bLock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.MouseFocus?
//		Flags  -> ()
// Parameters:
//		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_MainMenu_C::MouseFocus_(bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.MouseFocus?");

	UW_MainMenu_C_MouseFocus__Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.Get Anim
//		Flags  -> ()
// Parameters:
//		class UButton*                                     Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidgetAnimation*                            Anim                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_MainMenu_C::Get_Anim(class UButton* Button, class UWidgetAnimation** Anim)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.Get Anim");

	UW_MainMenu_C_Get_Anim_Params params {};
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Anim != nullptr)
		*Anim = params.Anim;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.PrintError
//		Flags  -> ()
// Parameters:
//		struct FString                                     Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UW_MainMenu_C::PrintError(const struct FString& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.PrintError");

	UW_MainMenu_C_PrintError_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.Get_LVL_Text_1
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UW_MainMenu_C::Get_LVL_Text_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.Get_LVL_Text_1");

	UW_MainMenu_C_Get_LVL_Text_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.LastKnowFocus
//		Flags  -> ()
// Parameters:
//		class UButton*                                     LastFocusedButton                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_MainMenu_C::LastKnowFocus(class UButton** LastFocusedButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.LastKnowFocus");

	UW_MainMenu_C_LastKnowFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LastFocusedButton != nullptr)
		*LastFocusedButton = params.LastFocusedButton;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_MainMenu_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.PreConstruct");

	UW_MainMenu_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.Construct
//		Flags  -> ()
void UW_MainMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.Construct");

	UW_MainMenu_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_MainMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.Tick");

	UW_MainMenu_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UW_MainMenu_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UW_MainMenu_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.ResetButtonVisibility
//		Flags  -> ()
void UW_MainMenu_C::ResetButtonVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.ResetButtonVisibility");

	UW_MainMenu_C_ResetButtonVisibility_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");

	UW_MainMenu_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.Search
//		Flags  -> ()
void UW_MainMenu_C::Search()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.Search");

	UW_MainMenu_C_Search_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.SearchingActive
//		Flags  -> ()
void UW_MainMenu_C::SearchingActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.SearchingActive");

	UW_MainMenu_C_SearchingActive_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.SearchingDeactive
//		Flags  -> ()
void UW_MainMenu_C::SearchingDeactive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.SearchingDeactive");

	UW_MainMenu_C_SearchingDeactive_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.CancelSerach
//		Flags  -> ()
void UW_MainMenu_C::CancelSerach()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.CancelSerach");

	UW_MainMenu_C_CancelSerach_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.StartMainMenuSound
//		Flags  -> ()
void UW_MainMenu_C::StartMainMenuSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.StartMainMenuSound");

	UW_MainMenu_C_StartMainMenuSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UW_MainMenu_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.SetSettingOpen?
//		Flags  -> ()
void UW_MainMenu_C::SetSettingOpen_()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.SetSettingOpen?");

	UW_MainMenu_C_SetSettingOpen__Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.OnMouseLeave
//		Flags  -> ()
// Parameters:
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UW_MainMenu_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.OnMouseLeave");

	UW_MainMenu_C_OnMouseLeave_Params params {};
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.OnMouseEnter
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UW_MainMenu_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.OnMouseEnter");

	UW_MainMenu_C_OnMouseEnter_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.SetFocusToMouse
//		Flags  -> ()
void UW_MainMenu_C::SetFocusToMouse()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.SetFocusToMouse");

	UW_MainMenu_C_SetFocusToMouse_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.Event_ESC
//		Flags  -> ()
void UW_MainMenu_C::Event_ESC()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.Event_ESC");

	UW_MainMenu_C_Event_ESC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.UpdateSessionList
//		Flags  -> ()
// Parameters:
//		TArray<struct FBlueprintSessionResult>             Sessions                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UW_MainMenu_C::UpdateSessionList(TArray<struct FBlueprintSessionResult> Sessions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.UpdateSessionList");

	UW_MainMenu_C_UpdateSessionList_Params params {};
	params.Sessions = Sessions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__Button_Play_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature");

	UW_MainMenu_C_BndEvt__Button_Play_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__W_PressAnyKeyScreen_K2Node_ComponentBoundEvent_58_OnHidden__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__W_PressAnyKeyScreen_K2Node_ComponentBoundEvent_58_OnHidden__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__W_PressAnyKeyScreen_K2Node_ComponentBoundEvent_58_OnHidden__DelegateSignature");

	UW_MainMenu_C_BndEvt__W_PressAnyKeyScreen_K2Node_ComponentBoundEvent_58_OnHidden__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.PAK_Screen_OnShown
//		Flags  -> ()
void UW_MainMenu_C::PAK_Screen_OnShown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.PAK_Screen_OnShown");

	UW_MainMenu_C_PAK_Screen_OnShown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.Bind_PAK_Events
//		Flags  -> ()
void UW_MainMenu_C::Bind_PAK_Events()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.Bind_PAK_Events");

	UW_MainMenu_C_Bind_PAK_Events_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Tutorial_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__Button_Tutorial_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Tutorial_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature");

	UW_MainMenu_C_BndEvt__Button_Tutorial_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__Button_Play_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature");

	UW_MainMenu_C_BndEvt__Button_Play_K2Node_ComponentBoundEvent_38_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.HideMenu
//		Flags  -> ()
// Parameters:
//		bool                                               HideNetworks                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_MainMenu_C::HideMenu(bool HideNetworks)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.HideMenu");

	UW_MainMenu_C_HideMenu_Params params {};
	params.HideNetworks = HideNetworks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.ShowMenu
//		Flags  -> ()
// Parameters:
//		bool                                               ShowNetworks                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_MainMenu_C::ShowMenu(bool ShowNetworks)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.ShowMenu");

	UW_MainMenu_C_ShowMenu_Params params {};
	params.ShowNetworks = ShowNetworks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.HideChat
//		Flags  -> ()
void UW_MainMenu_C::HideChat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.HideChat");

	UW_MainMenu_C_HideChat_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.ShowChat
//		Flags  -> ()
void UW_MainMenu_C::ShowChat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.ShowChat");

	UW_MainMenu_C_ShowChat_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.FadeBlackScreen
//		Flags  -> ()
void UW_MainMenu_C::FadeBlackScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.FadeBlackScreen");

	UW_MainMenu_C_FadeBlackScreen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__Button_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__Button_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__Button_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	UW_MainMenu_C_BndEvt__Button_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.ShowBackButton
//		Flags  -> ()
void UW_MainMenu_C::ShowBackButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.ShowBackButton");

	UW_MainMenu_C_ShowBackButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.HideBackButton
//		Flags  -> ()
void UW_MainMenu_C::HideBackButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.HideBackButton");

	UW_MainMenu_C_HideBackButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Instagram_Link_K2Node_ComponentBoundEvent_51_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__Button_Instagram_Link_K2Node_ComponentBoundEvent_51_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Instagram_Link_K2Node_ComponentBoundEvent_51_OnButtonHoverEvent__DelegateSignature");

	UW_MainMenu_C_BndEvt__Button_Instagram_Link_K2Node_ComponentBoundEvent_51_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Twitter_Link_K2Node_ComponentBoundEvent_52_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__Button_Twitter_Link_K2Node_ComponentBoundEvent_52_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Twitter_Link_K2Node_ComponentBoundEvent_52_OnButtonHoverEvent__DelegateSignature");

	UW_MainMenu_C_BndEvt__Button_Twitter_Link_K2Node_ComponentBoundEvent_52_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Facebook_Link_K2Node_ComponentBoundEvent_53_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__Button_Facebook_Link_K2Node_ComponentBoundEvent_53_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Facebook_Link_K2Node_ComponentBoundEvent_53_OnButtonHoverEvent__DelegateSignature");

	UW_MainMenu_C_BndEvt__Button_Facebook_Link_K2Node_ComponentBoundEvent_53_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Button_197_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__W_MainMenu_Button_197_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Button_197_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature");

	UW_MainMenu_C_BndEvt__W_MainMenu_Button_197_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_SurvPerkButton_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__W_MainMenu_SurvPerkButton_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_SurvPerkButton_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature");

	UW_MainMenu_C_BndEvt__W_MainMenu_SurvPerkButton_K2Node_ComponentBoundEvent_48_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.UpdatePerksName
//		Flags  -> ()
// Parameters:
//		bool                                               Surv_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_MainMenu_C::UpdatePerksName(bool Surv_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.UpdatePerksName");

	UW_MainMenu_C_UpdatePerksName_Params params {};
	params.Surv_ = Surv_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_KillerPerkButton_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__W_MainMenu_KillerPerkButton_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_KillerPerkButton_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature");

	UW_MainMenu_C_BndEvt__W_MainMenu_KillerPerkButton_K2Node_ComponentBoundEvent_55_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.LoadPerks
//		Flags  -> ()
// Parameters:
//		bool                                               Surv_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UW_MainMenu_C::LoadPerks(bool Surv_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.LoadPerks");

	UW_MainMenu_C_LoadPerks_Params params {};
	params.Surv_ = Surv_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.SelectPerk
//		Flags  -> ()
// Parameters:
//		class UClass*                                      SelectedPerk                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_MainMenu_C::SelectPerk(class UClass* SelectedPerk)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.SelectPerk");

	UW_MainMenu_C_SelectPerk_Params params {};
	params.SelectedPerk = SelectedPerk;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Perk1_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__W_MainMenu_Perk1_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Perk1_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature");

	UW_MainMenu_C_BndEvt__W_MainMenu_Perk1_K2Node_ComponentBoundEvent_56_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Perk2_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__W_MainMenu_Perk2_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Perk2_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature");

	UW_MainMenu_C_BndEvt__W_MainMenu_Perk2_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Perk3_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__W_MainMenu_Perk3_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Perk3_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature");

	UW_MainMenu_C_BndEvt__W_MainMenu_Perk3_K2Node_ComponentBoundEvent_63_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_ClearPerkButton_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__W_MainMenu_ClearPerkButton_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_ClearPerkButton_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature");

	UW_MainMenu_C_BndEvt__W_MainMenu_ClearPerkButton_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_65_OnAccept__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__W_MainMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_65_OnAccept__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_65_OnAccept__DelegateSignature");

	UW_MainMenu_C_BndEvt__W_MainMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_65_OnAccept__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_68_OnDeclineDelayed__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__W_MainMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_68_OnDeclineDelayed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_68_OnDeclineDelayed__DelegateSignature");

	UW_MainMenu_C_BndEvt__W_MainMenu_WBP_QuitDialog_K2Node_ComponentBoundEvent_68_OnDeclineDelayed__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.LostFocusMouseClick
//		Flags  -> ()
void UW_MainMenu_C::LostFocusMouseClick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.LostFocusMouseClick");

	UW_MainMenu_C_LostFocusMouseClick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Button_Discord_Link_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__W_MainMenu_Button_Discord_Link_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Button_Discord_Link_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature");

	UW_MainMenu_C_BndEvt__W_MainMenu_Button_Discord_Link_K2Node_ComponentBoundEvent_30_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.OnInitialized
//		Flags  -> ()
void UW_MainMenu_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.OnInitialized");

	UW_MainMenu_C_OnInitialized_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.MoveSliderMenu
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_MainMenu_C::MoveSliderMenu(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.MoveSliderMenu");

	UW_MainMenu_C_MoveSliderMenu_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.Move
//		Flags  -> ()
// Parameters:
//		struct FName                                       EntryName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_MainMenu_C::Move(const struct FName& EntryName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.Move");

	UW_MainMenu_C_Move_Params params {};
	params.EntryName = EntryName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.SettingsHoverStyle
//		Flags  -> ()
void UW_MainMenu_C::SettingsHoverStyle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.SettingsHoverStyle");

	UW_MainMenu_C_SettingsHoverStyle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.QuitHoverStyle
//		Flags  -> ()
void UW_MainMenu_C::QuitHoverStyle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.QuitHoverStyle");

	UW_MainMenu_C_QuitHoverStyle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.SetStyleForButtonsFromKeyboard
//		Flags  -> ()
void UW_MainMenu_C::SetStyleForButtonsFromKeyboard()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.SetStyleForButtonsFromKeyboard");

	UW_MainMenu_C_SetStyleForButtonsFromKeyboard_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.SetUnhoveredButtonsStyle
//		Flags  -> ()
void UW_MainMenu_C::SetUnhoveredButtonsStyle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.SetUnhoveredButtonsStyle");

	UW_MainMenu_C_SetUnhoveredButtonsStyle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__Button_78_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__Button_78_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__Button_78_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature");

	UW_MainMenu_C_BndEvt__Button_78_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__Button_524_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__Button_524_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__Button_524_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature");

	UW_MainMenu_C_BndEvt__Button_524_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__Button_631_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__Button_631_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__Button_631_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature");

	UW_MainMenu_C_BndEvt__Button_631_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__Button_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__Button_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__Button_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature");

	UW_MainMenu_C_BndEvt__Button_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature");

	UW_MainMenu_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_66_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_WBP_SocialUI_K2Node_ComponentBoundEvent_67_OnShowDetailed__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__W_MainMenu_WBP_SocialUI_K2Node_ComponentBoundEvent_67_OnShowDetailed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_WBP_SocialUI_K2Node_ComponentBoundEvent_67_OnShowDetailed__DelegateSignature");

	UW_MainMenu_C_BndEvt__W_MainMenu_WBP_SocialUI_K2Node_ComponentBoundEvent_67_OnShowDetailed__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_WBP_SocialUI_K2Node_ComponentBoundEvent_69_OnHideDetailed__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__W_MainMenu_WBP_SocialUI_K2Node_ComponentBoundEvent_69_OnHideDetailed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_WBP_SocialUI_K2Node_ComponentBoundEvent_69_OnHideDetailed__DelegateSignature");

	UW_MainMenu_C_BndEvt__W_MainMenu_WBP_SocialUI_K2Node_ComponentBoundEvent_69_OnHideDetailed__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.Disable_SocialsButtons
//		Flags  -> ()
void UW_MainMenu_C::Disable_SocialsButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.Disable_SocialsButtons");

	UW_MainMenu_C_Disable_SocialsButtons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.Esc_Quit
//		Flags  -> ()
void UW_MainMenu_C::Esc_Quit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.Esc_Quit");

	UW_MainMenu_C_Esc_Quit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Button_Discord_Link_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__W_MainMenu_Button_Discord_Link_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Button_Discord_Link_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature");

	UW_MainMenu_C_BndEvt__W_MainMenu_Button_Discord_Link_K2Node_ComponentBoundEvent_70_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Button_Twitter_Link_K2Node_ComponentBoundEvent_71_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__W_MainMenu_Button_Twitter_Link_K2Node_ComponentBoundEvent_71_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Button_Twitter_Link_K2Node_ComponentBoundEvent_71_OnButtonClickedEvent__DelegateSignature");

	UW_MainMenu_C_BndEvt__W_MainMenu_Button_Twitter_Link_K2Node_ComponentBoundEvent_71_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Button_Facebook_Link_K2Node_ComponentBoundEvent_72_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__W_MainMenu_Button_Facebook_Link_K2Node_ComponentBoundEvent_72_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Button_Facebook_Link_K2Node_ComponentBoundEvent_72_OnButtonClickedEvent__DelegateSignature");

	UW_MainMenu_C_BndEvt__W_MainMenu_Button_Facebook_Link_K2Node_ComponentBoundEvent_72_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Tutorial_K2Node_ComponentBoundEvent_59_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__Button_Tutorial_K2Node_ComponentBoundEvent_59_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__Button_Tutorial_K2Node_ComponentBoundEvent_59_OnButtonHoverEvent__DelegateSignature");

	UW_MainMenu_C_BndEvt__Button_Tutorial_K2Node_ComponentBoundEvent_59_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.ShowSocialNetworks
//		Flags  -> ()
void UW_MainMenu_C::ShowSocialNetworks()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.ShowSocialNetworks");

	UW_MainMenu_C_ShowSocialNetworks_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.HideSocialNetworks
//		Flags  -> ()
void UW_MainMenu_C::HideSocialNetworks()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.HideSocialNetworks");

	UW_MainMenu_C_HideSocialNetworks_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Button_Lootbox_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__W_MainMenu_Button_Lootbox_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Button_Lootbox_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UW_MainMenu_C_BndEvt__W_MainMenu_Button_Lootbox_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Button_Lootbox_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UW_MainMenu_C::BndEvt__W_MainMenu_Button_Lootbox_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.BndEvt__W_MainMenu_Button_Lootbox_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UW_MainMenu_C_BndEvt__W_MainMenu_Button_Lootbox_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.ShowUpdateDialog
//		Flags  -> ()
void UW_MainMenu_C::ShowUpdateDialog()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.ShowUpdateDialog");

	UW_MainMenu_C_ShowUpdateDialog_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.OnAcceptUpdate
//		Flags  -> ()
void UW_MainMenu_C::OnAcceptUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.OnAcceptUpdate");

	UW_MainMenu_C_OnAcceptUpdate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.HideSocUIAndVersion
//		Flags  -> ()
void UW_MainMenu_C::HideSocUIAndVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.HideSocUIAndVersion");

	UW_MainMenu_C_HideSocUIAndVersion_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.ShowSocUIAndVersion
//		Flags  -> ()
void UW_MainMenu_C::ShowSocUIAndVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.ShowSocUIAndVersion");

	UW_MainMenu_C_ShowSocUIAndVersion_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_MainMenu.W_MainMenu_C.ExecuteUbergraph_W_MainMenu
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_MainMenu_C::ExecuteUbergraph_W_MainMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_MainMenu.W_MainMenu_C.ExecuteUbergraph_W_MainMenu");

	UW_MainMenu_C_ExecuteUbergraph_W_MainMenu_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
