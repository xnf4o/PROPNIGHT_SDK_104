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
//		Name   -> Function BPI_ServerListItem.BPI_ServerListItem_C.OnDeselect
//		Flags  -> ()
void UBPI_ServerListItem_C::OnDeselect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_ServerListItem.BPI_ServerListItem_C.OnDeselect");

	UBPI_ServerListItem_C_OnDeselect_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_ServerListItem.BPI_ServerListItem_C.OnSelected
//		Flags  -> ()
void UBPI_ServerListItem_C::OnSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_ServerListItem.BPI_ServerListItem_C.OnSelected");

	UBPI_ServerListItem_C_OnSelected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
