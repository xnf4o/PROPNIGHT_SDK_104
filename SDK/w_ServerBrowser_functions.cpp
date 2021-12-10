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
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.SetRegions
//		Flags  -> ()
// Parameters:
//		TArray<struct FPingQoSInfo>                        Regions                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void Uw_ServerBrowser_C::SetRegions(TArray<struct FPingQoSInfo>* Regions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.SetRegions");

	Uw_ServerBrowser_C_SetRegions_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Regions != nullptr)
		*Regions = params.Regions;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.GetMaps
//		Flags  -> ()
// Parameters:
//		struct FString                                     LevelList                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void Uw_ServerBrowser_C::GetMaps(struct FString* LevelList)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.GetMaps");

	Uw_ServerBrowser_C_GetMaps_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LevelList != nullptr)
		*LevelList = params.LevelList;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.TestSessions
//		Flags  -> ()
// Parameters:
//		TArray<class UBP_SessionData_C*>                   Sessions                                                   (Parm, OutParm)
void Uw_ServerBrowser_C::TestSessions(TArray<class UBP_SessionData_C*>* Sessions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.TestSessions");

	Uw_ServerBrowser_C_TestSessions_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Sessions != nullptr)
		*Sessions = params.Sessions;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.PrintError
//		Flags  -> ()
// Parameters:
//		struct FString                                     Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void Uw_ServerBrowser_C::PrintError(const struct FString& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.PrintError");

	Uw_ServerBrowser_C_PrintError_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.Construct
//		Flags  -> ()
void Uw_ServerBrowser_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.Construct");

	Uw_ServerBrowser_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Uw_ServerBrowser_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.Tick");

	Uw_ServerBrowser_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.Show
//		Flags  -> ()
void Uw_ServerBrowser_C::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.Show");

	Uw_ServerBrowser_C_Show_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.Hide
//		Flags  -> ()
void Uw_ServerBrowser_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.Hide");

	Uw_ServerBrowser_C_Hide_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.UpdatePublicList
//		Flags  -> ()
// Parameters:
//		TArray<class UBP_SessionData_C*>                   SessionList                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		int                                                Tab                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               AutoJoin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Uw_ServerBrowser_C::UpdatePublicList(TArray<class UBP_SessionData_C*> SessionList, int Tab, bool AutoJoin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.UpdatePublicList");

	Uw_ServerBrowser_C_UpdatePublicList_Params params {};
	params.SessionList = SessionList;
	params.Tab = Tab;
	params.AutoJoin = AutoJoin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_PublicGames_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::BndEvt__Button_PublicGames_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_PublicGames_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__Button_PublicGames_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.RefreshPublicGames
//		Flags  -> ()
void Uw_ServerBrowser_C::RefreshPublicGames()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.RefreshPublicGames");

	Uw_ServerBrowser_C_RefreshPublicGames_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.SetSession
//		Flags  -> ()
// Parameters:
//		class UObject*                                     session                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Uw_ServerBrowser_C::SetSession(class UObject* session)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.SetSession");

	Uw_ServerBrowser_C_SetSession_Params params {};
	params.session = session;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.SearchGames
//		Flags  -> ()
// Parameters:
//		struct FString                                     Maps                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Modes                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Status                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                TabIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsPrivate                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void Uw_ServerBrowser_C::SearchGames(const struct FString& Maps, const struct FString& Modes, const struct FString& Status, int TabIndex, bool IsPrivate, const struct FString& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.SearchGames");

	Uw_ServerBrowser_C_SearchGames_Params params {};
	params.Maps = Maps;
	params.Modes = Modes;
	params.Status = Status;
	params.TabIndex = TabIndex;
	params.IsPrivate = IsPrivate;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.OnRequest
//		Flags  -> ()
void Uw_ServerBrowser_C::OnRequest()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.OnRequest");

	Uw_ServerBrowser_C_OnRequest_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.OnResponse
//		Flags  -> ()
void Uw_ServerBrowser_C::OnResponse()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.OnResponse");

	Uw_ServerBrowser_C_OnResponse_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.PublicGames_Clicked
//		Flags  -> ()
void Uw_ServerBrowser_C::PublicGames_Clicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.PublicGames_Clicked");

	Uw_ServerBrowser_C_PublicGames_Clicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.FreeModeServers_Clicked
//		Flags  -> ()
void Uw_ServerBrowser_C::FreeModeServers_Clicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.FreeModeServers_Clicked");

	Uw_ServerBrowser_C_FreeModeServers_Clicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.CreateServer_Clicked
//		Flags  -> ()
void Uw_ServerBrowser_C::CreateServer_Clicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.CreateServer_Clicked");

	Uw_ServerBrowser_C_CreateServer_Clicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_GM_Propnight_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::BndEvt__Button_GM_Propnight_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_GM_Propnight_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__Button_GM_Propnight_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_GM_Prophunt_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::BndEvt__Button_GM_Prophunt_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_GM_Prophunt_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__Button_GM_Prophunt_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.UpdateServerList
//		Flags  -> ()
void Uw_ServerBrowser_C::UpdateServerList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.UpdateServerList");

	Uw_ServerBrowser_C_UpdateServerList_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.SelectPropnightGM
//		Flags  -> ()
void Uw_ServerBrowser_C::SelectPropnightGM()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.SelectPropnightGM");

	Uw_ServerBrowser_C_SelectPropnightGM_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.SelectProphunt_GM
//		Flags  -> ()
void Uw_ServerBrowser_C::SelectProphunt_GM()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.SelectProphunt_GM");

	Uw_ServerBrowser_C_SelectProphunt_GM_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_JoinServer_Left_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::BndEvt__Button_JoinServer_Left_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_JoinServer_Left_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__Button_JoinServer_Left_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_JoinServer_Right_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::BndEvt__Button_JoinServer_Right_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_JoinServer_Right_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__Button_JoinServer_Right_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.DoubleClickJoinServer
//		Flags  -> ()
void Uw_ServerBrowser_C::DoubleClickJoinServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.DoubleClickJoinServer");

	Uw_ServerBrowser_C_DoubleClickJoinServer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_JoinPrivate_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::BndEvt__w_ServerBrowser_Button_JoinPrivate_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_JoinPrivate_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__w_ServerBrowser_Button_JoinPrivate_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_JoinPrivate_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::BndEvt__w_ServerBrowser_Button_JoinPrivate_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_JoinPrivate_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__w_ServerBrowser_Button_JoinPrivate_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_CreateGame_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::BndEvt__w_ServerBrowser_Button_CreateGame_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_CreateGame_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__w_ServerBrowser_Button_CreateGame_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_CreateGame_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::BndEvt__w_ServerBrowser_Button_CreateGame_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_CreateGame_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__w_ServerBrowser_Button_CreateGame_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_GM_Propnight_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::BndEvt__Button_GM_Propnight_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_GM_Propnight_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__Button_GM_Propnight_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_GM_Prophunt_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::BndEvt__Button_GM_Prophunt_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_GM_Prophunt_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__Button_GM_Prophunt_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_Update_night_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::BndEvt__Button_Update_night_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_Update_night_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__Button_Update_night_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_Update_night_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::BndEvt__Button_Update_night_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_Update_night_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__Button_Update_night_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_GM_Propnight_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::BndEvt__Button_GM_Propnight_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_GM_Propnight_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__Button_GM_Propnight_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_GM_Prophunt_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::BndEvt__Button_GM_Prophunt_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_GM_Prophunt_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__Button_GM_Prophunt_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_JoinServer_Left_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::BndEvt__Button_JoinServer_Left_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_JoinServer_Left_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__Button_JoinServer_Left_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_JoinServer_Left_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::BndEvt__Button_JoinServer_Left_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_JoinServer_Left_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__Button_JoinServer_Left_K2Node_ComponentBoundEvent_26_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_JoinServer_Right_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::BndEvt__Button_JoinServer_Right_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_JoinServer_Right_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__Button_JoinServer_Right_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_JoinServer_Right_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::BndEvt__Button_JoinServer_Right_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_JoinServer_Right_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__Button_JoinServer_Right_K2Node_ComponentBoundEvent_28_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.PressBackManually
//		Flags  -> ()
void Uw_ServerBrowser_C::PressBackManually()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.PressBackManually");

	Uw_ServerBrowser_C_PressBackManually_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.ListenForEscape
//		Flags  -> ()
void Uw_ServerBrowser_C::ListenForEscape()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.ListenForEscape");

	Uw_ServerBrowser_C_ListenForEscape_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.FakeEntryAnim
//		Flags  -> ()
// Parameters:
//		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Uw_ServerBrowser_C::FakeEntryAnim(class UObject* Item, class UUserWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.FakeEntryAnim");

	Uw_ServerBrowser_C_FakeEntryAnim_Params params {};
	params.Item = Item;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.PlayWaitingAnimation
//		Flags  -> ()
void Uw_ServerBrowser_C::PlayWaitingAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.PlayWaitingAnimation");

	Uw_ServerBrowser_C_PlayWaitingAnimation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.StopWaitingAnimation
//		Flags  -> ()
void Uw_ServerBrowser_C::StopWaitingAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.StopWaitingAnimation");

	Uw_ServerBrowser_C_StopWaitingAnimation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_JoinServer_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::BndEvt__Button_JoinServer_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_JoinServer_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__Button_JoinServer_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.SearchIsOver
//		Flags  -> ()
void Uw_ServerBrowser_C::SearchIsOver()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.SearchIsOver");

	Uw_ServerBrowser_C_SearchIsOver_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_CreateGame_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::BndEvt__w_ServerBrowser_Button_CreateGame_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_CreateGame_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__w_ServerBrowser_Button_CreateGame_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_JoinServer_K2Node_ComponentBoundEvent_31_OnButtonPressedEvent__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::BndEvt__w_ServerBrowser_Button_JoinServer_K2Node_ComponentBoundEvent_31_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_JoinServer_K2Node_ComponentBoundEvent_31_OnButtonPressedEvent__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__w_ServerBrowser_Button_JoinServer_K2Node_ComponentBoundEvent_31_OnButtonPressedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_JoinPrivate_K2Node_ComponentBoundEvent_33_OnButtonPressedEvent__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::BndEvt__w_ServerBrowser_Button_JoinPrivate_K2Node_ComponentBoundEvent_33_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_JoinPrivate_K2Node_ComponentBoundEvent_33_OnButtonPressedEvent__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__w_ServerBrowser_Button_JoinPrivate_K2Node_ComponentBoundEvent_33_OnButtonPressedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.OnServerListResponse
//		Flags  -> ()
// Parameters:
//		TArray<struct FServerInfo>                         Servers                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		int                                                Tab                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               AutoJoin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Uw_ServerBrowser_C::OnServerListResponse(TArray<struct FServerInfo> Servers, int Tab, bool AutoJoin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.OnServerListResponse");

	Uw_ServerBrowser_C_OnServerListResponse_Params params {};
	params.Servers = Servers;
	params.Tab = Tab;
	params.AutoJoin = AutoJoin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.ResetPrivateDialog_Escape
//		Flags  -> ()
void Uw_ServerBrowser_C::ResetPrivateDialog_Escape()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.ResetPrivateDialog_Escape");

	Uw_ServerBrowser_C_ResetPrivateDialog_Escape_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::BndEvt__w_ServerBrowser_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__w_ServerBrowser_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_Update_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::BndEvt__w_ServerBrowser_Button_Update_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_Update_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__w_ServerBrowser_Button_Update_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_Update_K2Node_ComponentBoundEvent_32_OnButtonReleasedEvent__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::BndEvt__w_ServerBrowser_Button_Update_K2Node_ComponentBoundEvent_32_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_Button_Update_K2Node_ComponentBoundEvent_32_OnButtonReleasedEvent__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__w_ServerBrowser_Button_Update_K2Node_ComponentBoundEvent_32_OnButtonReleasedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.SearchAfterCreate
//		Flags  -> ()
void Uw_ServerBrowser_C::SearchAfterCreate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.SearchAfterCreate");

	Uw_ServerBrowser_C_SearchAfterCreate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.StopSearchingAfterCreation
//		Flags  -> ()
void Uw_ServerBrowser_C::StopSearchingAfterCreation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.StopSearchingAfterCreation");

	Uw_ServerBrowser_C_StopSearchingAfterCreation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.SearchingTick
//		Flags  -> ()
void Uw_ServerBrowser_C::SearchingTick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.SearchingTick");

	Uw_ServerBrowser_C_SearchingTick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_WBP_CustomComboBox_Region_K2Node_ComponentBoundEvent_1_OnExpanded__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::BndEvt__w_ServerBrowser_WBP_CustomComboBox_Region_K2Node_ComponentBoundEvent_1_OnExpanded__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_WBP_CustomComboBox_Region_K2Node_ComponentBoundEvent_1_OnExpanded__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__w_ServerBrowser_WBP_CustomComboBox_Region_K2Node_ComponentBoundEvent_1_OnExpanded__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_WBP_CustomComboBox_Maps_K2Node_ComponentBoundEvent_4_OnExpanded__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::BndEvt__w_ServerBrowser_WBP_CustomComboBox_Maps_K2Node_ComponentBoundEvent_4_OnExpanded__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__w_ServerBrowser_WBP_CustomComboBox_Maps_K2Node_ComponentBoundEvent_4_OnExpanded__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__w_ServerBrowser_WBP_CustomComboBox_Maps_K2Node_ComponentBoundEvent_4_OnExpanded__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.InitPath
//		Flags  -> ()
// Parameters:
//		struct FText                                       PageText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FName                                       PageName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ToCreateGame                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Uw_ServerBrowser_C::InitPath(const struct FText& PageText, const struct FName& PageName, bool ToCreateGame)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.InitPath");

	Uw_ServerBrowser_C_InitPath_Params params {};
	params.PageText = PageText;
	params.PageName = PageName;
	params.ToCreateGame = ToCreateGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.MoveToBrowser
//		Flags  -> ()
void Uw_ServerBrowser_C::MoveToBrowser()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.MoveToBrowser");

	Uw_ServerBrowser_C_MoveToBrowser_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.MoveToPlayScreen
//		Flags  -> ()
void Uw_ServerBrowser_C::MoveToPlayScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.MoveToPlayScreen");

	Uw_ServerBrowser_C_MoveToPlayScreen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.Move
//		Flags  -> ()
// Parameters:
//		struct FName                                       EntryName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Uw_ServerBrowser_C::Move(const struct FName& EntryName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.Move");

	Uw_ServerBrowser_C_Move_Params params {};
	params.EntryName = EntryName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_JoinServer_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::BndEvt__Button_JoinServer_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__Button_JoinServer_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__Button_JoinServer_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.AutoJoin
//		Flags  -> ()
void Uw_ServerBrowser_C::AutoJoin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.AutoJoin");

	Uw_ServerBrowser_C_AutoJoin_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.SwitchToBrowser
//		Flags  -> ()
void Uw_ServerBrowser_C::SwitchToBrowser()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.SwitchToBrowser");

	Uw_ServerBrowser_C_SwitchToBrowser_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.OpenCreateGame
//		Flags  -> ()
void Uw_ServerBrowser_C::OpenCreateGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.OpenCreateGame");

	Uw_ServerBrowser_C_OpenCreateGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.ConnectVisuals
//		Flags  -> ()
void Uw_ServerBrowser_C::ConnectVisuals()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.ConnectVisuals");

	Uw_ServerBrowser_C_ConnectVisuals_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.OnServerListResponseV2
//		Flags  -> ()
// Parameters:
//		TArray<class UVaRestJsonObject*>                   Servers                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		bool                                               ClearServerList                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     SkipToken                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void Uw_ServerBrowser_C::OnServerListResponseV2(TArray<class UVaRestJsonObject*> Servers, bool ClearServerList, const struct FString& SkipToken)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.OnServerListResponseV2");

	Uw_ServerBrowser_C_OnServerListResponseV2_Params params {};
	params.Servers = Servers;
	params.ClearServerList = ClearServerList;
	params.SkipToken = SkipToken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.AddPlayfabSessions
//		Flags  -> ()
void Uw_ServerBrowser_C::AddPlayfabSessions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.AddPlayfabSessions");

	Uw_ServerBrowser_C_AddPlayfabSessions_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.ClearQueueAndPool
//		Flags  -> ()
void Uw_ServerBrowser_C::ClearQueueAndPool()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.ClearQueueAndPool");

	Uw_ServerBrowser_C_ClearQueueAndPool_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.ProcessSessions
//		Flags  -> ()
void Uw_ServerBrowser_C::ProcessSessions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.ProcessSessions");

	Uw_ServerBrowser_C_ProcessSessions_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.ShowRealList
//		Flags  -> ()
void Uw_ServerBrowser_C::ShowRealList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.ShowRealList");

	Uw_ServerBrowser_C_ShowRealList_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.OnItemAdded
//		Flags  -> ()
// Parameters:
//		class UBP_SessionData_C*                           session                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Uw_ServerBrowser_C::OnItemAdded(class UBP_SessionData_C* session)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.OnItemAdded");

	Uw_ServerBrowser_C_OnItemAdded_Params params {};
	params.session = session;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.CheckQueue
//		Flags  -> ()
void Uw_ServerBrowser_C::CheckQueue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.CheckQueue");

	Uw_ServerBrowser_C_CheckQueue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__WBP_CustomComboBox_Region_K2Node_ComponentBoundEvent_34_OnEntryClicked__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FText                                       EntryName                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
//		int                                                EntryIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Uw_ServerBrowser_C::BndEvt__WBP_CustomComboBox_Region_K2Node_ComponentBoundEvent_34_OnEntryClicked__DelegateSignature(const struct FText& EntryName, int EntryIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.BndEvt__WBP_CustomComboBox_Region_K2Node_ComponentBoundEvent_34_OnEntryClicked__DelegateSignature");

	Uw_ServerBrowser_C_BndEvt__WBP_CustomComboBox_Region_K2Node_ComponentBoundEvent_34_OnEntryClicked__DelegateSignature_Params params {};
	params.EntryName = EntryName;
	params.EntryIndex = EntryIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.SpawnFakeElement
//		Flags  -> ()
void Uw_ServerBrowser_C::SpawnFakeElement()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.SpawnFakeElement");

	Uw_ServerBrowser_C_SpawnFakeElement_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.TestFakeListItem
//		Flags  -> ()
void Uw_ServerBrowser_C::TestFakeListItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.TestFakeListItem");

	Uw_ServerBrowser_C_TestFakeListItem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.ExecuteUbergraph_w_ServerBrowser
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void Uw_ServerBrowser_C::ExecuteUbergraph_w_ServerBrowser(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.ExecuteUbergraph_w_ServerBrowser");

	Uw_ServerBrowser_C_ExecuteUbergraph_w_ServerBrowser_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.DoneLoadServers__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::DoneLoadServers__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.DoneLoadServers__DelegateSignature");

	Uw_ServerBrowser_C_DoneLoadServers__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function w_ServerBrowser.w_ServerBrowser_C.SearchingIsOver__DelegateSignature
//		Flags  -> ()
void Uw_ServerBrowser_C::SearchingIsOver__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function w_ServerBrowser.w_ServerBrowser_C.SearchingIsOver__DelegateSignature");

	Uw_ServerBrowser_C_SearchingIsOver__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
