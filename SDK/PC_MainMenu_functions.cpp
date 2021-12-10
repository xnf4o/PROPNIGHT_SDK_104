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
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.GetIsPlayfabBackend
//		Flags  -> ()
// Parameters:
//		bool                                               Is                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_MainMenu_C::GetIsPlayfabBackend(bool* Is)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.GetIsPlayfabBackend");

	APC_MainMenu_C_GetIsPlayfabBackend_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Is != nullptr)
		*Is = params.Is;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.GetIsExit
//		Flags  -> ()
// Parameters:
//		bool                                               Is                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_MainMenu_C::GetIsExit(bool* Is)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.GetIsExit");

	APC_MainMenu_C_GetIsExit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Is != nullptr)
		*Is = params.Is;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.GetServerId
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void APC_MainMenu_C::GetServerId(struct FString* ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.GetServerId");

	APC_MainMenu_C_GetServerId_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.HandleAndSortPings
//		Flags  -> ()
// Parameters:
//		TArray<struct FPingQoSInfo>                        Pings                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TArray<struct FPingQoSInfo>                        SortedRes                                                  (Parm, OutParm)
void APC_MainMenu_C::HandleAndSortPings(TArray<struct FPingQoSInfo>* Pings, TArray<struct FPingQoSInfo>* SortedRes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.HandleAndSortPings");

	APC_MainMenu_C_HandleAndSortPings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Pings != nullptr)
		*Pings = params.Pings;
	if (SortedRes != nullptr)
		*SortedRes = params.SortedRes;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.CheatNumbers
//		Flags  -> ()
// Parameters:
//		struct FString                                     S                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void APC_MainMenu_C::CheatNumbers(const struct FString& S)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.CheatNumbers");

	APC_MainMenu_C_CheatNumbers_Params params {};
	params.S = S;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.MakeSearchData
//		Flags  -> ()
// Parameters:
//		int                                                Role                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPlayFabJsonObject*                          Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_MainMenu_C::MakeSearchData(int Role, class UPlayFabJsonObject** Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.MakeSearchData");

	APC_MainMenu_C_MakeSearchData_Params params {};
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.LoadToPS
//		Flags  -> ()
// Parameters:
void APC_MainMenu_C::LoadToPS()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.LoadToPS");

	APC_MainMenu_C_LoadToPS_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.LoadUserData
//		Flags  -> ()
// Parameters:
//		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_MainMenu_C::LoadUserData(bool* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.LoadUserData");

	APC_MainMenu_C_LoadUserData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.AddSession
//		Flags  -> ()
// Parameters:
//		struct FBlueprintSessionResult                     session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void APC_MainMenu_C::AddSession(const struct FBlueprintSessionResult& session)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.AddSession");

	APC_MainMenu_C_AddSession_Params params {};
	params.session = session;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.IsValidSession
//		Flags  -> ()
// Parameters:
//		struct FBlueprintSessionResult                     session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_MainMenu_C::IsValidSession(const struct FBlueprintSessionResult& session, bool* IsValid)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.IsValidSession");

	APC_MainMenu_C_IsValidSession_Params params {};
	params.session = session;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.SetListServersV2
//		Flags  -> ()
// Parameters:
//		TArray<struct FBlueprintSessionResult>             Sessions                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void APC_MainMenu_C::SetListServersV2(TArray<struct FBlueprintSessionResult>* Sessions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.SetListServersV2");

	APC_MainMenu_C_SetListServersV2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Sessions != nullptr)
		*Sessions = params.Sessions;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.ClearServers
//		Flags  -> ()
// Parameters:
void APC_MainMenu_C::ClearServers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.ClearServers");

	APC_MainMenu_C_ClearServers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.CanJoin
//		Flags  -> ()
// Parameters:
//		bool                                               Can                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APC_MainMenu_C::CanJoin(bool* Can)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.CanJoin");

	APC_MainMenu_C_CanJoin_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Can != nullptr)
		*Can = params.Can;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.GetServersDev
//		Flags  -> ()
void APC_MainMenu_C::GetServersDev()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.GetServersDev");

	APC_MainMenu_C_GetServersDev_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.SetListServers
//		Flags  -> ()
// Parameters:
//		TArray<class UObject*>                             Servers                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void APC_MainMenu_C::SetListServers(TArray<class UObject*>* Servers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.SetListServers");

	APC_MainMenu_C_SetListServers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Servers != nullptr)
		*Servers = params.Servers;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.UnmarkBusy
//		Flags  -> ()
void APC_MainMenu_C::UnmarkBusy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.UnmarkBusy");

	APC_MainMenu_C_UnmarkBusy_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.MarkBusy
//		Flags  -> ()
void APC_MainMenu_C::MarkBusy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.MarkBusy");

	APC_MainMenu_C_MarkBusy_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.SetPlayFabId
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void APC_MainMenu_C::SetPlayFabId(const struct FString& ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.SetPlayFabId");

	APC_MainMenu_C_SetPlayFabId_Params params {};
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.SaveLoginData
//		Flags  -> ()
// Parameters:
//		struct FString                                     Login                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void APC_MainMenu_C::SaveLoginData(const struct FString& Login)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.SaveLoginData");

	APC_MainMenu_C_SaveLoginData_Params params {};
	params.Login = Login;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.GetID
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void APC_MainMenu_C::GetID(struct FString* ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.GetID");

	APC_MainMenu_C_GetID_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.GetLoginData
//		Flags  -> ()
// Parameters:
//		bool                                               HasData                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class USG_EOSDeviceLogin_C*                        Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_MainMenu_C::GetLoginData(bool* HasData, class USG_EOSDeviceLogin_C** Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.GetLoginData");

	APC_MainMenu_C_GetLoginData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasData != nullptr)
		*HasData = params.HasData;
	if (Data != nullptr)
		*Data = params.Data;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.InpActEvt_Escape_K2Node_InputKeyEvent_8
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_MainMenu_C::InpActEvt_Escape_K2Node_InputKeyEvent_8(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.InpActEvt_Escape_K2Node_InputKeyEvent_8");

	APC_MainMenu_C_InpActEvt_Escape_K2Node_InputKeyEvent_8_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.InpActEvt_F5_K2Node_InputKeyEvent_7
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_MainMenu_C::InpActEvt_F5_K2Node_InputKeyEvent_7(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.InpActEvt_F5_K2Node_InputKeyEvent_7");

	APC_MainMenu_C_InpActEvt_F5_K2Node_InputKeyEvent_7_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_6
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_MainMenu_C::InpActEvt_NumPadOne_K2Node_InputKeyEvent_6(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_6");

	APC_MainMenu_C_InpActEvt_NumPadOne_K2Node_InputKeyEvent_6_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.OnFailure_B03CFE9141A130F504FC5BB140CBD9F7
//		Flags  -> ()
void APC_MainMenu_C::OnFailure_B03CFE9141A130F504FC5BB140CBD9F7()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.OnFailure_B03CFE9141A130F504FC5BB140CBD9F7");

	APC_MainMenu_C_OnFailure_B03CFE9141A130F504FC5BB140CBD9F7_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.OnSuccess_B03CFE9141A130F504FC5BB140CBD9F7
//		Flags  -> ()
void APC_MainMenu_C::OnSuccess_B03CFE9141A130F504FC5BB140CBD9F7()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.OnSuccess_B03CFE9141A130F504FC5BB140CBD9F7");

	APC_MainMenu_C_OnSuccess_B03CFE9141A130F504FC5BB140CBD9F7_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.InpActEvt_F4_K2Node_InputKeyEvent_5
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_MainMenu_C::InpActEvt_F4_K2Node_InputKeyEvent_5(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.InpActEvt_F4_K2Node_InputKeyEvent_5");

	APC_MainMenu_C_InpActEvt_F4_K2Node_InputKeyEvent_5_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.InpActEvt_Zero_K2Node_InputKeyEvent_4
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_MainMenu_C::InpActEvt_Zero_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.InpActEvt_Zero_K2Node_InputKeyEvent_4");

	APC_MainMenu_C_InpActEvt_Zero_K2Node_InputKeyEvent_4_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.InpActEvt_Three_K2Node_InputKeyEvent_3
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_MainMenu_C::InpActEvt_Three_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.InpActEvt_Three_K2Node_InputKeyEvent_3");

	APC_MainMenu_C_InpActEvt_Three_K2Node_InputKeyEvent_3_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.InpActEvt_One_K2Node_InputKeyEvent_2
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_MainMenu_C::InpActEvt_One_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.InpActEvt_One_K2Node_InputKeyEvent_2");

	APC_MainMenu_C_InpActEvt_One_K2Node_InputKeyEvent_2_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.InpActEvt_Two_K2Node_InputKeyEvent_1
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_MainMenu_C::InpActEvt_Two_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.InpActEvt_Two_K2Node_InputKeyEvent_1");

	APC_MainMenu_C_InpActEvt_Two_K2Node_InputKeyEvent_1_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.OnSearchFail
//		Flags  -> ()
void APC_MainMenu_C::OnSearchFail()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.OnSearchFail");

	APC_MainMenu_C_OnSearchFail_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.OnCancelTicket
//		Flags  -> ()
void APC_MainMenu_C::OnCancelTicket()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.OnCancelTicket");

	APC_MainMenu_C_OnCancelTicket_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.OnMatch
//		Flags  -> ()
void APC_MainMenu_C::OnMatch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.OnMatch");

	APC_MainMenu_C_OnMatch_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.OnMatchFail
//		Flags  -> ()
void APC_MainMenu_C::OnMatchFail()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.OnMatchFail");

	APC_MainMenu_C_OnMatchFail_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.OnLoginOK
//		Flags  -> ()
void APC_MainMenu_C::OnLoginOK()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.OnLoginOK");

	APC_MainMenu_C_OnLoginOK_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.OnPreConnect
//		Flags  -> ()
void APC_MainMenu_C::OnPreConnect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.OnPreConnect");

	APC_MainMenu_C_OnPreConnect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.FailSessionList
//		Flags  -> ()
void APC_MainMenu_C::FailSessionList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.FailSessionList");

	APC_MainMenu_C_FailSessionList_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.ResetAutoConnect
//		Flags  -> ()
void APC_MainMenu_C::ResetAutoConnect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.ResetAutoConnect");

	APC_MainMenu_C_ResetAutoConnect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.FailJoin
//		Flags  -> ()
void APC_MainMenu_C::FailJoin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.FailJoin");

	APC_MainMenu_C_FailJoin_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.FailCreateSession
//		Flags  -> ()
void APC_MainMenu_C::FailCreateSession()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.FailCreateSession");

	APC_MainMenu_C_FailCreateSession_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.ResetButtonVisibility
//		Flags  -> ()
void APC_MainMenu_C::ResetButtonVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.ResetButtonVisibility");

	APC_MainMenu_C_ResetButtonVisibility_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.CancelSearch
//		Flags  -> ()
void APC_MainMenu_C::CancelSearch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.CancelSearch");

	APC_MainMenu_C_CancelSearch_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.OnSessionCreated
//		Flags  -> ()
// Parameters:
//		struct FString                                     Map                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void APC_MainMenu_C::OnSessionCreated(const struct FString& Map)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.OnSessionCreated");

	APC_MainMenu_C_OnSessionCreated_Params params {};
	params.Map = Map;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.FindGame
//		Flags  -> ()
void APC_MainMenu_C::FindGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.FindGame");

	APC_MainMenu_C_FindGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.GetServersV2
//		Flags  -> ()
void APC_MainMenu_C::GetServersV2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.GetServersV2");

	APC_MainMenu_C_GetServersV2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.CreateServerV2
//		Flags  -> ()
// Parameters:
//		bool                                               Private                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     MapName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void APC_MainMenu_C::CreateServerV2(bool Private, const struct FString& MapName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.CreateServerV2");

	APC_MainMenu_C_CreateServerV2_Params params {};
	params.Private = Private;
	params.MapName = MapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.ReceiveBeginPlay
//		Flags  -> ()
void APC_MainMenu_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.ReceiveBeginPlay");

	APC_MainMenu_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.OnTravelError
//		Flags  -> ()
void APC_MainMenu_C::OnTravelError()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.OnTravelError");

	APC_MainMenu_C_OnTravelError_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.OnNetworkError
//		Flags  -> ()
void APC_MainMenu_C::OnNetworkError()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.OnNetworkError");

	APC_MainMenu_C_OnNetworkError_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.OnError
//		Flags  -> ()
void APC_MainMenu_C::OnError()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.OnError");

	APC_MainMenu_C_OnError_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.OnLoginFail
//		Flags  -> ()
void APC_MainMenu_C::OnLoginFail()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.OnLoginFail");

	APC_MainMenu_C_OnLoginFail_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.OnResponse
//		Flags  -> ()
// Parameters:
//		struct FString                                     response                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void APC_MainMenu_C::OnResponse(const struct FString& response)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.OnResponse");

	APC_MainMenu_C_OnResponse_Params params {};
	params.response = response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.ListServers
//		Flags  -> ()
// Parameters:
//		int                                                Tab                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_MainMenu_C::ListServers(int Tab)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.ListServers");

	APC_MainMenu_C_ListServers_Params params {};
	params.Tab = Tab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.CreateServerV4
//		Flags  -> ()
// Parameters:
//		struct FString                                     Map                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     Region                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void APC_MainMenu_C::CreateServerV4(const struct FString& Map, const struct FString& Mode, const struct FString& Region)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.CreateServerV4");

	APC_MainMenu_C_CreateServerV4_Params params {};
	params.Map = Map;
	params.Mode = Mode;
	params.Region = Region;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.JoinToTicket
//		Flags  -> ()
// Parameters:
//		struct FString                                     Ticket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void APC_MainMenu_C::JoinToTicket(const struct FString& Ticket)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.JoinToTicket");

	APC_MainMenu_C_JoinToTicket_Params params {};
	params.Ticket = Ticket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.CreateLobby
//		Flags  -> ()
void APC_MainMenu_C::CreateLobby()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.CreateLobby");

	APC_MainMenu_C_CreateLobby_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.OnPingCompleted
//		Flags  -> ()
// Parameters:
//		TArray<struct FPingQoSInfo>                        Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void APC_MainMenu_C::OnPingCompleted(TArray<struct FPingQoSInfo> Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.OnPingCompleted");

	APC_MainMenu_C_OnPingCompleted_Params params {};
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.OnSearchOK
//		Flags  -> ()
void APC_MainMenu_C::OnSearchOK()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.OnSearchOK");

	APC_MainMenu_C_OnSearchOK_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.OnMatchFound
//		Flags  -> ()
void APC_MainMenu_C::OnMatchFound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.OnMatchFound");

	APC_MainMenu_C_OnMatchFound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.QWE
//		Flags  -> ()
void APC_MainMenu_C::QWE()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.QWE");

	APC_MainMenu_C_QWE_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.OnFoundSessions
//		Flags  -> ()
// Parameters:
//		TArray<struct FBlueprintSessionResult>             Sessions                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void APC_MainMenu_C::OnFoundSessions(TArray<struct FBlueprintSessionResult> Sessions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.OnFoundSessions");

	APC_MainMenu_C_OnFoundSessions_Params params {};
	params.Sessions = Sessions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.CreateServerV3
//		Flags  -> ()
// Parameters:
//		struct FS_GameSettings                             Settings                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		struct FS_ServerSettings                           ServerSettings                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void APC_MainMenu_C::CreateServerV3(const struct FS_GameSettings& Settings, const struct FS_ServerSettings& ServerSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.CreateServerV3");

	APC_MainMenu_C_CreateServerV3_Params params {};
	params.Settings = Settings;
	params.ServerSettings = ServerSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_MainMenu_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.ReceiveTick");

	APC_MainMenu_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.AfterServerError
//		Flags  -> ()
void APC_MainMenu_C::AfterServerError()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.AfterServerError");

	APC_MainMenu_C_AfterServerError_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.CloseTicket
//		Flags  -> ()
void APC_MainMenu_C::CloseTicket()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.CloseTicket");

	APC_MainMenu_C_CloseTicket_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.ManualSearch
//		Flags  -> ()
void APC_MainMenu_C::ManualSearch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.ManualSearch");

	APC_MainMenu_C_ManualSearch_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.SettingsExecute
//		Flags  -> ()
void APC_MainMenu_C::SettingsExecute()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.SettingsExecute");

	APC_MainMenu_C_SettingsExecute_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.loginedEos
//		Flags  -> ()
void APC_MainMenu_C::loginedEos()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.loginedEos");

	APC_MainMenu_C_loginedEos_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.StartSearch
//		Flags  -> ()
// Parameters:
//		int                                                Role                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_MainMenu_C::StartSearch(int Role)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.StartSearch");

	APC_MainMenu_C_StartSearch_Params params {};
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.EnablePlayfabBackend
//		Flags  -> ()
void APC_MainMenu_C::EnablePlayfabBackend()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.EnablePlayfabBackend");

	APC_MainMenu_C_EnablePlayfabBackend_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.Upload
//		Flags  -> ()
void APC_MainMenu_C::Upload()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.Upload");

	APC_MainMenu_C_Upload_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.StartPollPlayfabServers
//		Flags  -> ()
// Parameters:
//		struct FString                                     Region                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void APC_MainMenu_C::StartPollPlayfabServers(const struct FString& Region)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.StartPollPlayfabServers");

	APC_MainMenu_C_StartPollPlayfabServers_Params params {};
	params.Region = Region;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.ConfigureRegions
//		Flags  -> ()
// Parameters:
//		TArray<struct FPingQoSInfo>                        Regions                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void APC_MainMenu_C::ConfigureRegions(TArray<struct FPingQoSInfo> Regions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.ConfigureRegions");

	APC_MainMenu_C_ConfigureRegions_Params params {};
	params.Regions = Regions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.ContinuePollPlayfabServers
//		Flags  -> ()
// Parameters:
//		struct FString                                     SkipToken                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void APC_MainMenu_C::ContinuePollPlayfabServers(const struct FString& SkipToken)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.ContinuePollPlayfabServers");

	APC_MainMenu_C_ContinuePollPlayfabServers_Params params {};
	params.SkipToken = SkipToken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.SetServerPageSize
//		Flags  -> ()
// Parameters:
//		int                                                Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_MainMenu_C::SetServerPageSize(int Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.SetServerPageSize");

	APC_MainMenu_C_SetServerPageSize_Params params {};
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.StopPoll
//		Flags  -> ()
void APC_MainMenu_C::StopPoll()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.StopPoll");

	APC_MainMenu_C_StopPoll_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.DisablePlayfabBackend
//		Flags  -> ()
void APC_MainMenu_C::DisablePlayfabBackend()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.DisablePlayfabBackend");

	APC_MainMenu_C_DisablePlayfabBackend_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.LoginWithEOSDevice
//		Flags  -> ()
void APC_MainMenu_C::LoginWithEOSDevice()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.LoginWithEOSDevice");

	APC_MainMenu_C_LoginWithEOSDevice_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.ExecuteUbergraph_PC_MainMenu
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APC_MainMenu_C::ExecuteUbergraph_PC_MainMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.ExecuteUbergraph_PC_MainMenu");

	APC_MainMenu_C_ExecuteUbergraph_PC_MainMenu_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.OnSteamCheckError__DelegateSignature
//		Flags  -> ()
void APC_MainMenu_C::OnSteamCheckError__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.OnSteamCheckError__DelegateSignature");

	APC_MainMenu_C_OnSteamCheckError__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.OnBeginLoginPlayfab__DelegateSignature
//		Flags  -> ()
void APC_MainMenu_C::OnBeginLoginPlayfab__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.OnBeginLoginPlayfab__DelegateSignature");

	APC_MainMenu_C_OnBeginLoginPlayfab__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.OnBeginSteamCheck__DelegateSignature
//		Flags  -> ()
void APC_MainMenu_C::OnBeginSteamCheck__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.OnBeginSteamCheck__DelegateSignature");

	APC_MainMenu_C_OnBeginSteamCheck__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.OnMatchFoundEvent__DelegateSignature
//		Flags  -> ()
void APC_MainMenu_C::OnMatchFoundEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.OnMatchFoundEvent__DelegateSignature");

	APC_MainMenu_C_OnMatchFoundEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PC_MainMenu.PC_MainMenu_C.OnPlayfabReady__DelegateSignature
//		Flags  -> ()
void APC_MainMenu_C::OnPlayfabReady__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PC_MainMenu.PC_MainMenu_C.OnPlayfabReady__DelegateSignature");

	APC_MainMenu_C_OnPlayfabReady__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
