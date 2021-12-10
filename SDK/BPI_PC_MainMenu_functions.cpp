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
//		Name   -> Function BPI_PC_MainMenu.BPI_PC_MainMenu_C.StopPoll
//		Flags  -> ()
void UBPI_PC_MainMenu_C::StopPoll()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PC_MainMenu.BPI_PC_MainMenu_C.StopPoll");

	UBPI_PC_MainMenu_C_StopPoll_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_PC_MainMenu.BPI_PC_MainMenu_C.ContinuePollPlayfabServers
//		Flags  -> ()
// Parameters:
//		struct FString                                     SkipToken                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_PC_MainMenu_C::ContinuePollPlayfabServers(const struct FString& SkipToken)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PC_MainMenu.BPI_PC_MainMenu_C.ContinuePollPlayfabServers");

	UBPI_PC_MainMenu_C_ContinuePollPlayfabServers_Params params {};
	params.SkipToken = SkipToken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_PC_MainMenu.BPI_PC_MainMenu_C.StartPollPlayfabServers
//		Flags  -> ()
// Parameters:
//		struct FString                                     Region                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UBPI_PC_MainMenu_C::StartPollPlayfabServers(const struct FString& Region)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PC_MainMenu.BPI_PC_MainMenu_C.StartPollPlayfabServers");

	UBPI_PC_MainMenu_C_StartPollPlayfabServers_Params params {};
	params.Region = Region;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
