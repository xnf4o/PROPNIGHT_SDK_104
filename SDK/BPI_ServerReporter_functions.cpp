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
//		Name   -> Function BPI_ServerReporter.BPI_ServerReporter_C.OnPlayerLeft
//		Flags  -> ()
void UBPI_ServerReporter_C::OnPlayerLeft()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_ServerReporter.BPI_ServerReporter_C.OnPlayerLeft");

	UBPI_ServerReporter_C_OnPlayerLeft_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_ServerReporter.BPI_ServerReporter_C.OnPlayerLogin
//		Flags  -> ()
void UBPI_ServerReporter_C::OnPlayerLogin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_ServerReporter.BPI_ServerReporter_C.OnPlayerLogin");

	UBPI_ServerReporter_C_OnPlayerLogin_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
