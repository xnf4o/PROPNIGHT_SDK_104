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
//		Name   -> Function GM_PropHunt_Lab.GM_PropHunt_Lab_C.StartGame
//		Flags  -> ()
void AGM_PropHunt_Lab_C::StartGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt_Lab.GM_PropHunt_Lab_C.StartGame");

	AGM_PropHunt_Lab_C_StartGame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt_Lab.GM_PropHunt_Lab_C.StartGameFromLobby
//		Flags  -> ()
void AGM_PropHunt_Lab_C::StartGameFromLobby()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt_Lab.GM_PropHunt_Lab_C.StartGameFromLobby");

	AGM_PropHunt_Lab_C_StartGameFromLobby_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt_Lab.GM_PropHunt_Lab_C.RaiseLobby
//		Flags  -> ()
void AGM_PropHunt_Lab_C::RaiseLobby()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt_Lab.GM_PropHunt_Lab_C.RaiseLobby");

	AGM_PropHunt_Lab_C_RaiseLobby_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GM_PropHunt_Lab.GM_PropHunt_Lab_C.ExecuteUbergraph_GM_PropHunt_Lab
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGM_PropHunt_Lab_C::ExecuteUbergraph_GM_PropHunt_Lab(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GM_PropHunt_Lab.GM_PropHunt_Lab_C.ExecuteUbergraph_GM_PropHunt_Lab");

	AGM_PropHunt_Lab_C_ExecuteUbergraph_GM_PropHunt_Lab_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
