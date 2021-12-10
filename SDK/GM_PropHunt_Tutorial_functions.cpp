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
//		Name   -> Function GM_PropHunt_Tutorial.GM_PropHunt_Tutorial_C.FadeOut
//		Flags  -> ()
void AGM_PropHunt_Tutorial_C::FadeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt_Tutorial.GM_PropHunt_Tutorial_C.FadeOut");

	AGM_PropHunt_Tutorial_C_FadeOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt_Tutorial.GM_PropHunt_Tutorial_C.OnMatchCanceled
//		Flags  -> ()
void AGM_PropHunt_Tutorial_C::OnMatchCanceled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt_Tutorial.GM_PropHunt_Tutorial_C.OnMatchCanceled");

	AGM_PropHunt_Tutorial_C_OnMatchCanceled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt_Tutorial.GM_PropHunt_Tutorial_C.ReceiveBeginPlay
//		Flags  -> ()
void AGM_PropHunt_Tutorial_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt_Tutorial.GM_PropHunt_Tutorial_C.ReceiveBeginPlay");

	AGM_PropHunt_Tutorial_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt_Tutorial.GM_PropHunt_Tutorial_C.FadeIn
//		Flags  -> ()
void AGM_PropHunt_Tutorial_C::FadeIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt_Tutorial.GM_PropHunt_Tutorial_C.FadeIn");

	AGM_PropHunt_Tutorial_C_FadeIn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt_Tutorial.GM_PropHunt_Tutorial_C.StartGame
//		Flags  -> ()
void AGM_PropHunt_Tutorial_C::StartGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt_Tutorial.GM_PropHunt_Tutorial_C.StartGame");

	AGM_PropHunt_Tutorial_C_StartGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt_Tutorial.GM_PropHunt_Tutorial_C.RemoveLoadingScreen2
//		Flags  -> ()
void AGM_PropHunt_Tutorial_C::RemoveLoadingScreen2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt_Tutorial.GM_PropHunt_Tutorial_C.RemoveLoadingScreen2");

	AGM_PropHunt_Tutorial_C_RemoveLoadingScreen2_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt_Tutorial.GM_PropHunt_Tutorial_C.RemoveLoadingScreen3
//		Flags  -> ()
void AGM_PropHunt_Tutorial_C::RemoveLoadingScreen3()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt_Tutorial.GM_PropHunt_Tutorial_C.RemoveLoadingScreen3");

	AGM_PropHunt_Tutorial_C_RemoveLoadingScreen3_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt_Tutorial.GM_PropHunt_Tutorial_C.GmEndGame
//		Flags  -> ()
// Parameters:
//		bool                                               IsKillerWin                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGM_PropHunt_Tutorial_C::GmEndGame(bool IsKillerWin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt_Tutorial.GM_PropHunt_Tutorial_C.GmEndGame");

	AGM_PropHunt_Tutorial_C_GmEndGame_Params params {};
	params.IsKillerWin = IsKillerWin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt_Tutorial.GM_PropHunt_Tutorial_C.TutorialEndGame
//		Flags  -> ()
void AGM_PropHunt_Tutorial_C::TutorialEndGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt_Tutorial.GM_PropHunt_Tutorial_C.TutorialEndGame");

	AGM_PropHunt_Tutorial_C_TutorialEndGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt_Tutorial.GM_PropHunt_Tutorial_C.ExecuteUbergraph_GM_PropHunt_Tutorial
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGM_PropHunt_Tutorial_C::ExecuteUbergraph_GM_PropHunt_Tutorial(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt_Tutorial.GM_PropHunt_Tutorial_C.ExecuteUbergraph_GM_PropHunt_Tutorial");

	AGM_PropHunt_Tutorial_C_ExecuteUbergraph_GM_PropHunt_Tutorial_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
