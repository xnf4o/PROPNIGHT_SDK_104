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
//		Name   -> Function ChatWindow.ChatWindow_C.StopHandlerHiddenMessage
//		Flags  -> ()
void UChatWindow_C::StopHandlerHiddenMessage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.StopHandlerHiddenMessage");

	UChatWindow_C_StopHandlerHiddenMessage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChatWindow.ChatWindow_C.FormatSenderName
//		Flags  -> ()
// Parameters:
//		struct FText                                       sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       Result                                                     (Parm, OutParm)
void UChatWindow_C::FormatSenderName(const struct FText& sender, const struct FText& Character, struct FText* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.FormatSenderName");

	UChatWindow_C_FormatSenderName_Params params {};
	params.sender = sender;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChatWindow.ChatWindow_C.OnKeyUp
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UChatWindow_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.OnKeyUp");

	UChatWindow_C_OnKeyUp_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChatWindow.ChatWindow_C.OnKeyDown
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UChatWindow_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.OnKeyDown");

	UChatWindow_C_OnKeyDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChatWindow.ChatWindow_C.OnPreviewKeyDown
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UChatWindow_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.OnPreviewKeyDown");

	UChatWindow_C_OnPreviewKeyDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChatWindow.ChatWindow_C.Construct
//		Flags  -> ()
void UChatWindow_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.Construct");

	UChatWindow_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChatWindow.ChatWindow_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChatWindow_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.Tick");

	UChatWindow_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChatWindow.ChatWindow_C.UpdateChatWindow
//		Flags  -> ()
// Parameters:
//		struct FText                                       sender                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               Killer_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ItsMe_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UChatWindow_C::UpdateChatWindow(const struct FText& sender, const struct FText& Text, const struct FText& Type, bool Killer_, bool ItsMe_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.UpdateChatWindow");

	UChatWindow_C_UpdateChatWindow_Params params {};
	params.sender = sender;
	params.Text = Text;
	params.Type = Type;
	params.Killer_ = Killer_;
	params.ItsMe_ = ItsMe_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChatWindow.ChatWindow_C.GeneralChat
//		Flags  -> ()
void UChatWindow_C::GeneralChat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.GeneralChat");

	UChatWindow_C_GeneralChat_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChatWindow.ChatWindow_C.TeamChat
//		Flags  -> ()
void UChatWindow_C::TeamChat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.TeamChat");

	UChatWindow_C_TeamChat_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChatWindow.ChatWindow_C.BndEvt__Button_128_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UChatWindow_C::BndEvt__Button_128_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.BndEvt__Button_128_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UChatWindow_C_BndEvt__Button_128_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChatWindow.ChatWindow_C.OpenChat
//		Flags  -> ()
void UChatWindow_C::OpenChat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.OpenChat");

	UChatWindow_C_OpenChat_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChatWindow.ChatWindow_C.CloseChat
//		Flags  -> ()
void UChatWindow_C::CloseChat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.CloseChat");

	UChatWindow_C_CloseChat_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChatWindow.ChatWindow_C.SoundChat
//		Flags  -> ()
// Parameters:
//		int                                                Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Menu                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChatWindow_C::SoundChat(int Sound, int Menu)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.SoundChat");

	UChatWindow_C_SoundChat_Params params {};
	params.Sound = Sound;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChatWindow.ChatWindow_C.SoundChatBlocked
//		Flags  -> ()
void UChatWindow_C::SoundChatBlocked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.SoundChatBlocked");

	UChatWindow_C_SoundChatBlocked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChatWindow.ChatWindow_C.BndEvt__MultiLineEditableText_59_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextCommittedEvent__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChatWindow_C::BndEvt__MultiLineEditableText_59_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.BndEvt__MultiLineEditableText_59_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextCommittedEvent__DelegateSignature");

	UChatWindow_C_BndEvt__MultiLineEditableText_59_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params params {};
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChatWindow.ChatWindow_C.CommitChatMessage
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		TEnumAsByte<SlateCore_ETextCommit>                 Commit_Method                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChatWindow_C::CommitChatMessage(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> Commit_Method)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.CommitChatMessage");

	UChatWindow_C_CommitChatMessage_Params params {};
	params.Text = Text;
	params.Commit_Method = Commit_Method;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChatWindow.ChatWindow_C.AnimatedAutoScroll_Tick
//		Flags  -> ()
void UChatWindow_C::AnimatedAutoScroll_Tick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.AnimatedAutoScroll_Tick");

	UChatWindow_C_AnimatedAutoScroll_Tick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChatWindow.ChatWindow_C.UpdateScrubberPos
//		Flags  -> ()
void UChatWindow_C::UpdateScrubberPos()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.UpdateScrubberPos");

	UChatWindow_C_UpdateScrubberPos_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChatWindow.ChatWindow_C.UpdateScrubberSize
//		Flags  -> ()
void UChatWindow_C::UpdateScrubberSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.UpdateScrubberSize");

	UChatWindow_C_UpdateScrubberSize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChatWindow.ChatWindow_C.ResetHidding
//		Flags  -> ()
void UChatWindow_C::ResetHidding()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.ResetHidding");

	UChatWindow_C_ResetHidding_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChatWindow.ChatWindow_C.HideAllMessages
//		Flags  -> ()
void UChatWindow_C::HideAllMessages()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.HideAllMessages");

	UChatWindow_C_HideAllMessages_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChatWindow.ChatWindow_C.ShowAllMessages
//		Flags  -> ()
void UChatWindow_C::ShowAllMessages()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.ShowAllMessages");

	UChatWindow_C_ShowAllMessages_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChatWindow.ChatWindow_C.ActivateCloseButton
//		Flags  -> ()
void UChatWindow_C::ActivateCloseButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.ActivateCloseButton");

	UChatWindow_C_ActivateCloseButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChatWindow.ChatWindow_C.EventHiddenMessages
//		Flags  -> ()
void UChatWindow_C::EventHiddenMessages()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.EventHiddenMessages");

	UChatWindow_C_EventHiddenMessages_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChatWindow.ChatWindow_C.ExecuteUbergraph_ChatWindow
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChatWindow_C::ExecuteUbergraph_ChatWindow(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChatWindow.ChatWindow_C.ExecuteUbergraph_ChatWindow");

	UChatWindow_C_ExecuteUbergraph_ChatWindow_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
