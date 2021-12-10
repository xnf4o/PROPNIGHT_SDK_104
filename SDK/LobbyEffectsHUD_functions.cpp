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
//		Name   -> Function LobbyEffectsHUD.LobbyEffectsHUD_C.StartFadeIn
//		Flags  -> ()
void ULobbyEffectsHUD_C::StartFadeIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyEffectsHUD.LobbyEffectsHUD_C.StartFadeIn");

	ULobbyEffectsHUD_C_StartFadeIn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LobbyEffectsHUD.LobbyEffectsHUD_C.StartFadeOut
//		Flags  -> ()
void ULobbyEffectsHUD_C::StartFadeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyEffectsHUD.LobbyEffectsHUD_C.StartFadeOut");

	ULobbyEffectsHUD_C_StartFadeOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LobbyEffectsHUD.LobbyEffectsHUD_C.ExecuteUbergraph_LobbyEffectsHUD
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULobbyEffectsHUD_C::ExecuteUbergraph_LobbyEffectsHUD(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyEffectsHUD.LobbyEffectsHUD_C.ExecuteUbergraph_LobbyEffectsHUD");

	ULobbyEffectsHUD_C_ExecuteUbergraph_LobbyEffectsHUD_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
