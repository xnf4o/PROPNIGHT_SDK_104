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
//		Name   -> Function I_HUD.I_HUD_C.OnMatchCanceled
//		Flags  -> ()
void UI_HUD_C::OnMatchCanceled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_HUD.I_HUD_C.OnMatchCanceled");

	UI_HUD_C_OnMatchCanceled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_HUD.I_HUD_C.RemoveLoadingScreen3
//		Flags  -> ()
void UI_HUD_C::RemoveLoadingScreen3()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_HUD.I_HUD_C.RemoveLoadingScreen3");

	UI_HUD_C_RemoveLoadingScreen3_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_HUD.I_HUD_C.FadeOut
//		Flags  -> ()
void UI_HUD_C::FadeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_HUD.I_HUD_C.FadeOut");

	UI_HUD_C_FadeOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_HUD.I_HUD_C.FadeIn
//		Flags  -> ()
void UI_HUD_C::FadeIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_HUD.I_HUD_C.FadeIn");

	UI_HUD_C_FadeIn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function I_HUD.I_HUD_C.RemoveLoadingScreen2
//		Flags  -> ()
void UI_HUD_C::RemoveLoadingScreen2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_HUD.I_HUD_C.RemoveLoadingScreen2");

	UI_HUD_C_RemoveLoadingScreen2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
