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
//		Name   -> Function BPI_SessionDataListener.BPI_SessionDataListener_C.OnItemDeselected
//		Flags  -> ()
void UBPI_SessionDataListener_C::OnItemDeselected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SessionDataListener.BPI_SessionDataListener_C.OnItemDeselected");

	UBPI_SessionDataListener_C_OnItemDeselected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_SessionDataListener.BPI_SessionDataListener_C.OnItemSelected
//		Flags  -> ()
void UBPI_SessionDataListener_C::OnItemSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_SessionDataListener.BPI_SessionDataListener_C.OnItemSelected");

	UBPI_SessionDataListener_C_OnItemSelected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
