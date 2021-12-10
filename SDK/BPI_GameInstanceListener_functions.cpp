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
//		Name   -> Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.CloseTicket
//		Flags  -> ()
void UBPI_GameInstanceListener_C::CloseTicket()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.CloseTicket");

	UBPI_GameInstanceListener_C_CloseTicket_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.JoinToTicket
//		Flags  -> ()
// Parameters:
//		struct FString                                     Ticket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_GameInstanceListener_C::JoinToTicket(const struct FString& Ticket)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.JoinToTicket");

	UBPI_GameInstanceListener_C_JoinToTicket_Params params {};
	params.Ticket = Ticket;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.GetServerId
//		Flags  -> ()
// Parameters:
//		struct FString                                     ID                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_GameInstanceListener_C::GetServerId(struct FString* ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.GetServerId");

	UBPI_GameInstanceListener_C_GetServerId_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ID != nullptr)
		*ID = params.ID;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.OnFoundSessions
//		Flags  -> ()
// Parameters:
//		TArray<struct FBlueprintSessionResult>             Sessions                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UBPI_GameInstanceListener_C::OnFoundSessions(TArray<struct FBlueprintSessionResult> Sessions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.OnFoundSessions");

	UBPI_GameInstanceListener_C_OnFoundSessions_Params params {};
	params.Sessions = Sessions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.FailSessionList
//		Flags  -> ()
void UBPI_GameInstanceListener_C::FailSessionList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.FailSessionList");

	UBPI_GameInstanceListener_C_FailSessionList_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.OnTravelError
//		Flags  -> ()
void UBPI_GameInstanceListener_C::OnTravelError()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.OnTravelError");

	UBPI_GameInstanceListener_C_OnTravelError_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.OnNetworkError
//		Flags  -> ()
void UBPI_GameInstanceListener_C::OnNetworkError()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.OnNetworkError");

	UBPI_GameInstanceListener_C_OnNetworkError_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.FailJoin
//		Flags  -> ()
void UBPI_GameInstanceListener_C::FailJoin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.FailJoin");

	UBPI_GameInstanceListener_C_FailJoin_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.FailCreateSession
//		Flags  -> ()
void UBPI_GameInstanceListener_C::FailCreateSession()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.FailCreateSession");

	UBPI_GameInstanceListener_C_FailCreateSession_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.OnSessionCreated
//		Flags  -> ()
// Parameters:
//		struct FString                                     Map                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_GameInstanceListener_C::OnSessionCreated(const struct FString& Map)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_GameInstanceListener.BPI_GameInstanceListener_C.OnSessionCreated");

	UBPI_GameInstanceListener_C_OnSessionCreated_Params params {};
	params.Map = Map;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
