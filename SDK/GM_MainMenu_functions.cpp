﻿// Name: P, Version: 1

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
//		Name   -> Function GM_MainMenu.GM_MainMenu_C.ReceiveBeginPlay
//		Flags  -> ()
void AGM_MainMenu_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_MainMenu.GM_MainMenu_C.ReceiveBeginPlay");

	AGM_MainMenu_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_MainMenu.GM_MainMenu_C.ExecuteUbergraph_GM_MainMenu
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGM_MainMenu_C::ExecuteUbergraph_GM_MainMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_MainMenu.GM_MainMenu_C.ExecuteUbergraph_GM_MainMenu");

	AGM_MainMenu_C_ExecuteUbergraph_GM_MainMenu_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
