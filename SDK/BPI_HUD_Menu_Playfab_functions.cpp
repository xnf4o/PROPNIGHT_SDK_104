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
//		Name   -> Function BPI_HUD_Menu_Playfab.BPI_HUD_Menu_Playfab_C.OnPoll
//		Flags  -> ()
void UBPI_HUD_Menu_Playfab_C::OnPoll()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_HUD_Menu_Playfab.BPI_HUD_Menu_Playfab_C.OnPoll");

	UBPI_HUD_Menu_Playfab_C_OnPoll_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BPI_HUD_Menu_Playfab.BPI_HUD_Menu_Playfab_C.OnListServers
//		Flags  -> ()
void UBPI_HUD_Menu_Playfab_C::OnListServers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_HUD_Menu_Playfab.BPI_HUD_Menu_Playfab_C.OnListServers");

	UBPI_HUD_Menu_Playfab_C_OnListServers_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
