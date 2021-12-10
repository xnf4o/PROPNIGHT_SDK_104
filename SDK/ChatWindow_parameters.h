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

// Function ChatWindow.ChatWindow_C.StopHandlerHiddenMessage
struct UChatWindow_C_StopHandlerHiddenMessage_Params
{
};

// Function ChatWindow.ChatWindow_C.FormatSenderName
struct UChatWindow_C_FormatSenderName_Params
{
	struct FText                                       sender;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Character;                                                 // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Result;                                                    // 0x0030(0x0018)  (Parm, OutParm)
};

// Function ChatWindow.ChatWindow_C.OnKeyUp
struct UChatWindow_C_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function ChatWindow.ChatWindow_C.OnKeyDown
struct UChatWindow_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function ChatWindow.ChatWindow_C.OnPreviewKeyDown
struct UChatWindow_C_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function ChatWindow.ChatWindow_C.Construct
struct UChatWindow_C_Construct_Params
{
};

// Function ChatWindow.ChatWindow_C.Tick
struct UChatWindow_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChatWindow.ChatWindow_C.UpdateChatWindow
struct UChatWindow_C_UpdateChatWindow_Params
{
	struct FText                                       sender;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Text;                                                      // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Type;                                                      // 0x0030(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Killer_;                                                   // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ItsMe_;                                                    // 0x0049(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ChatWindow.ChatWindow_C.GeneralChat
struct UChatWindow_C_GeneralChat_Params
{
};

// Function ChatWindow.ChatWindow_C.TeamChat
struct UChatWindow_C_TeamChat_Params
{
};

// Function ChatWindow.ChatWindow_C.BndEvt__Button_128_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UChatWindow_C_BndEvt__Button_128_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ChatWindow.ChatWindow_C.OpenChat
struct UChatWindow_C_OpenChat_Params
{
};

// Function ChatWindow.ChatWindow_C.CloseChat
struct UChatWindow_C_CloseChat_Params
{
};

// Function ChatWindow.ChatWindow_C.SoundChat
struct UChatWindow_C_SoundChat_Params
{
	int                                                Sound;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Menu;                                                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChatWindow.ChatWindow_C.SoundChatBlocked
struct UChatWindow_C_SoundChatBlocked_Params
{
};

// Function ChatWindow.ChatWindow_C.BndEvt__MultiLineEditableText_59_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextCommittedEvent__DelegateSignature
struct UChatWindow_C_BndEvt__MultiLineEditableText_59_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChatWindow.ChatWindow_C.CommitChatMessage
struct UChatWindow_C_CommitChatMessage_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<SlateCore_ETextCommit>                 Commit_Method;                                             // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ChatWindow.ChatWindow_C.AnimatedAutoScroll_Tick
struct UChatWindow_C_AnimatedAutoScroll_Tick_Params
{
};

// Function ChatWindow.ChatWindow_C.UpdateScrubberPos
struct UChatWindow_C_UpdateScrubberPos_Params
{
};

// Function ChatWindow.ChatWindow_C.UpdateScrubberSize
struct UChatWindow_C_UpdateScrubberSize_Params
{
};

// Function ChatWindow.ChatWindow_C.ResetHidding
struct UChatWindow_C_ResetHidding_Params
{
};

// Function ChatWindow.ChatWindow_C.HideAllMessages
struct UChatWindow_C_HideAllMessages_Params
{
};

// Function ChatWindow.ChatWindow_C.ShowAllMessages
struct UChatWindow_C_ShowAllMessages_Params
{
};

// Function ChatWindow.ChatWindow_C.ActivateCloseButton
struct UChatWindow_C_ActivateCloseButton_Params
{
};

// Function ChatWindow.ChatWindow_C.EventHiddenMessages
struct UChatWindow_C_EventHiddenMessages_Params
{
};

// Function ChatWindow.ChatWindow_C.ExecuteUbergraph_ChatWindow
struct UChatWindow_C_ExecuteUbergraph_ChatWindow_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
