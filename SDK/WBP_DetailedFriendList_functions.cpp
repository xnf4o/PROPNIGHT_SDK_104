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
//		Name   -> Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.OnKeyDown
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UWBP_DetailedFriendList_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.OnKeyDown");

	UWBP_DetailedFriendList_C_OnKeyDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.SearchFunction
//		Flags  -> ()
// Parameters:
//		struct FString                                     Nickname                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TArray<struct FSteamFriend>                        Friends                                                    (Parm, OutParm)
void UWBP_DetailedFriendList_C::SearchFunction(const struct FString& Nickname, TArray<struct FSteamFriend>* Friends)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.SearchFunction");

	UWBP_DetailedFriendList_C_SearchFunction_Params params {};
	params.Nickname = Nickname;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Friends != nullptr)
		*Friends = params.Friends;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.GetFriendByID
//		Flags  -> ()
// Parameters:
//		struct FString                                     SteamId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DetailedFriendList_C::GetFriendByID(const struct FString& SteamId, int* Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.GetFriendByID");

	UWBP_DetailedFriendList_C_GetFriendByID_Params params {};
	params.SteamId = SteamId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.InitFriends
//		Flags  -> ()
// Parameters:
void UWBP_DetailedFriendList_C::InitFriends()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.InitFriends");

	UWBP_DetailedFriendList_C_InitFriends_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.Construct
//		Flags  -> ()
void UWBP_DetailedFriendList_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.Construct");

	UWBP_DetailedFriendList_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.BndEvt__WBP_DetailedFriendList_Button_Friends_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UWBP_DetailedFriendList_C::BndEvt__WBP_DetailedFriendList_Button_Friends_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.BndEvt__WBP_DetailedFriendList_Button_Friends_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UWBP_DetailedFriendList_C_BndEvt__WBP_DetailedFriendList_Button_Friends_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.BndEvt__WBP_DetailedFriendList_Button_Friends_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UWBP_DetailedFriendList_C::BndEvt__WBP_DetailedFriendList_Button_Friends_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.BndEvt__WBP_DetailedFriendList_Button_Friends_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWBP_DetailedFriendList_C_BndEvt__WBP_DetailedFriendList_Button_Friends_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.BndEvt__WBP_DetailedFriendList_Button_Invites_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UWBP_DetailedFriendList_C::BndEvt__WBP_DetailedFriendList_Button_Invites_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.BndEvt__WBP_DetailedFriendList_Button_Invites_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWBP_DetailedFriendList_C_BndEvt__WBP_DetailedFriendList_Button_Invites_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.BndEvt__WBP_DetailedFriendList_Button_Invites_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UWBP_DetailedFriendList_C::BndEvt__WBP_DetailedFriendList_Button_Invites_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.BndEvt__WBP_DetailedFriendList_Button_Invites_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UWBP_DetailedFriendList_C_BndEvt__WBP_DetailedFriendList_Button_Invites_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.BndEvt__WBP_DetailedFriendList_Button_Friends_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
//		Flags  -> ()
void UWBP_DetailedFriendList_C::BndEvt__WBP_DetailedFriendList_Button_Friends_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.BndEvt__WBP_DetailedFriendList_Button_Friends_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");

	UWBP_DetailedFriendList_C_BndEvt__WBP_DetailedFriendList_Button_Friends_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.BndEvt__WBP_DetailedFriendList_Button_Invites_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
//		Flags  -> ()
void UWBP_DetailedFriendList_C::BndEvt__WBP_DetailedFriendList_Button_Invites_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.BndEvt__WBP_DetailedFriendList_Button_Invites_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature");

	UWBP_DetailedFriendList_C_BndEvt__WBP_DetailedFriendList_Button_Invites_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.ComeOnline
//		Flags  -> ()
// Parameters:
//		struct FString                                     SteamId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWBP_DetailedFriendList_C::ComeOnline(const struct FString& SteamId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.ComeOnline");

	UWBP_DetailedFriendList_C_ComeOnline_Params params {};
	params.SteamId = SteamId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.GoneOffline
//		Flags  -> ()
// Parameters:
//		struct FString                                     SteamId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWBP_DetailedFriendList_C::GoneOffline(const struct FString& SteamId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.GoneOffline");

	UWBP_DetailedFriendList_C_GoneOffline_Params params {};
	params.SteamId = SteamId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.InitButtons
//		Flags  -> ()
void UWBP_DetailedFriendList_C::InitButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.InitButtons");

	UWBP_DetailedFriendList_C_InitButtons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.SetCurrentPage
//		Flags  -> ()
// Parameters:
//		int                                                Page                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DetailedFriendList_C::SetCurrentPage(int Page)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.SetCurrentPage");

	UWBP_DetailedFriendList_C_SetCurrentPage_Params params {};
	params.Page = Page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.GenerateFakeFriends
//		Flags  -> ()
void UWBP_DetailedFriendList_C::GenerateFakeFriends()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.GenerateFakeFriends");

	UWBP_DetailedFriendList_C_GenerateFakeFriends_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.BndEvt__WBP_DetailedFriendList_EditableTextBox_SearchLine_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UWBP_DetailedFriendList_C::BndEvt__WBP_DetailedFriendList_EditableTextBox_SearchLine_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.BndEvt__WBP_DetailedFriendList_EditableTextBox_SearchLine_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature");

	UWBP_DetailedFriendList_C_BndEvt__WBP_DetailedFriendList_EditableTextBox_SearchLine_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.BndEvt__WBP_DetailedFriendList_Button_Search_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
//		Flags  -> ()
void UWBP_DetailedFriendList_C::BndEvt__WBP_DetailedFriendList_Button_Search_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.BndEvt__WBP_DetailedFriendList_Button_Search_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature");

	UWBP_DetailedFriendList_C_BndEvt__WBP_DetailedFriendList_Button_Search_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.ExecuteUbergraph_WBP_DetailedFriendList
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DetailedFriendList_C::ExecuteUbergraph_WBP_DetailedFriendList(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.ExecuteUbergraph_WBP_DetailedFriendList");

	UWBP_DetailedFriendList_C_ExecuteUbergraph_WBP_DetailedFriendList_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.OnHide__DelegateSignature
//		Flags  -> ()
void UWBP_DetailedFriendList_C::OnHide__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DetailedFriendList.WBP_DetailedFriendList_C.OnHide__DelegateSignature");

	UWBP_DetailedFriendList_C_OnHide__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
