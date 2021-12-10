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
//		Name   -> Function WBP_SocialUI.WBP_SocialUI_C.IsInTeam
//		Flags  -> ()
// Parameters:
//		bool                                               In                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UWBP_SocialUI_C::IsInTeam(bool* In)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SocialUI.WBP_SocialUI_C.IsInTeam");

	UWBP_SocialUI_C_IsInTeam_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (In != nullptr)
		*In = params.In;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_SocialUI.WBP_SocialUI_C.BndEvt__WBP_SocialUI_Button_Hide_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
//		Flags  -> ()
void UWBP_SocialUI_C::BndEvt__WBP_SocialUI_Button_Hide_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SocialUI.WBP_SocialUI_C.BndEvt__WBP_SocialUI_Button_Hide_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	UWBP_SocialUI_C_BndEvt__WBP_SocialUI_Button_Hide_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_SocialUI.WBP_SocialUI_C.BndEvt__WBP_SocialUI_Button_Hide_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UWBP_SocialUI_C::BndEvt__WBP_SocialUI_Button_Hide_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SocialUI.WBP_SocialUI_C.BndEvt__WBP_SocialUI_Button_Hide_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UWBP_SocialUI_C_BndEvt__WBP_SocialUI_Button_Hide_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_SocialUI.WBP_SocialUI_C.OnUserEnterLobby
//		Flags  -> ()
// Parameters:
//		struct FString                                     Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     SteamId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWBP_SocialUI_C::OnUserEnterLobby(const struct FString& Name, const struct FString& SteamId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SocialUI.WBP_SocialUI_C.OnUserEnterLobby");

	UWBP_SocialUI_C_OnUserEnterLobby_Params params {};
	params.Name = Name;
	params.SteamId = SteamId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_SocialUI.WBP_SocialUI_C.OnUserLeftLobby
//		Flags  -> ()
// Parameters:
//		struct FString                                     Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     SteamId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWBP_SocialUI_C::OnUserLeftLobby(const struct FString& Name, const struct FString& SteamId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SocialUI.WBP_SocialUI_C.OnUserLeftLobby");

	UWBP_SocialUI_C_OnUserLeftLobby_Params params {};
	params.Name = Name;
	params.SteamId = SteamId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_SocialUI.WBP_SocialUI_C.AutoClose
//		Flags  -> ()
void UWBP_SocialUI_C::AutoClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SocialUI.WBP_SocialUI_C.AutoClose");

	UWBP_SocialUI_C_AutoClose_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_SocialUI.WBP_SocialUI_C.BndEvt__WBP_SocialUI_WBP_MiniFriendList_K2Node_ComponentBoundEvent_0_OnButtonPressed__DelegateSignature
//		Flags  -> ()
void UWBP_SocialUI_C::BndEvt__WBP_SocialUI_WBP_MiniFriendList_K2Node_ComponentBoundEvent_0_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SocialUI.WBP_SocialUI_C.BndEvt__WBP_SocialUI_WBP_MiniFriendList_K2Node_ComponentBoundEvent_0_OnButtonPressed__DelegateSignature");

	UWBP_SocialUI_C_BndEvt__WBP_SocialUI_WBP_MiniFriendList_K2Node_ComponentBoundEvent_0_OnButtonPressed__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_SocialUI.WBP_SocialUI_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SocialUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SocialUI.WBP_SocialUI_C.Tick");

	UWBP_SocialUI_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_SocialUI.WBP_SocialUI_C.Construct
//		Flags  -> ()
void UWBP_SocialUI_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SocialUI.WBP_SocialUI_C.Construct");

	UWBP_SocialUI_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_SocialUI.WBP_SocialUI_C.LeavePressed
//		Flags  -> ()
void UWBP_SocialUI_C::LeavePressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SocialUI.WBP_SocialUI_C.LeavePressed");

	UWBP_SocialUI_C_LeavePressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_SocialUI.WBP_SocialUI_C.BndEvt__WBP_SocialUI_WBP_LeaveTeamDialog_358_K2Node_ComponentBoundEvent_1_OnLeaveLobby__DelegateSignature
//		Flags  -> ()
void UWBP_SocialUI_C::BndEvt__WBP_SocialUI_WBP_LeaveTeamDialog_358_K2Node_ComponentBoundEvent_1_OnLeaveLobby__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SocialUI.WBP_SocialUI_C.BndEvt__WBP_SocialUI_WBP_LeaveTeamDialog_358_K2Node_ComponentBoundEvent_1_OnLeaveLobby__DelegateSignature");

	UWBP_SocialUI_C_BndEvt__WBP_SocialUI_WBP_LeaveTeamDialog_358_K2Node_ComponentBoundEvent_1_OnLeaveLobby__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_SocialUI.WBP_SocialUI_C.ExecuteUbergraph_WBP_SocialUI
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_SocialUI_C::ExecuteUbergraph_WBP_SocialUI(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SocialUI.WBP_SocialUI_C.ExecuteUbergraph_WBP_SocialUI");

	UWBP_SocialUI_C_ExecuteUbergraph_WBP_SocialUI_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_SocialUI.WBP_SocialUI_C.OnHideDetailed__DelegateSignature
//		Flags  -> ()
void UWBP_SocialUI_C::OnHideDetailed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SocialUI.WBP_SocialUI_C.OnHideDetailed__DelegateSignature");

	UWBP_SocialUI_C_OnHideDetailed__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_SocialUI.WBP_SocialUI_C.OnShowDetailed__DelegateSignature
//		Flags  -> ()
void UWBP_SocialUI_C::OnShowDetailed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_SocialUI.WBP_SocialUI_C.OnShowDetailed__DelegateSignature");

	UWBP_SocialUI_C_OnShowDetailed__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
