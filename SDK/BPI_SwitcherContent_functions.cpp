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
//		Name   -> Function BPI_SwitcherContent.BPI_SwitcherContent_C.OnHide
//		Flags  -> ()
void UBPI_SwitcherContent_C::OnHide()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SwitcherContent.BPI_SwitcherContent_C.OnHide");

	UBPI_SwitcherContent_C_OnHide_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SwitcherContent.BPI_SwitcherContent_C.OnShow
//		Flags  -> ()
void UBPI_SwitcherContent_C::OnShow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SwitcherContent.BPI_SwitcherContent_C.OnShow");

	UBPI_SwitcherContent_C_OnShow_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
