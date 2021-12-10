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
//		Name   -> Function W_Lobby_WaitPlayers.W_Lobby_WaitPlayers_C.Construct
//		Flags  -> ()
void UW_Lobby_WaitPlayers_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Lobby_WaitPlayers.W_Lobby_WaitPlayers_C.Construct");

	UW_Lobby_WaitPlayers_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function W_Lobby_WaitPlayers.W_Lobby_WaitPlayers_C.ExecuteUbergraph_W_Lobby_WaitPlayers
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UW_Lobby_WaitPlayers_C::ExecuteUbergraph_W_Lobby_WaitPlayers(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function W_Lobby_WaitPlayers.W_Lobby_WaitPlayers_C.ExecuteUbergraph_W_Lobby_WaitPlayers");

	UW_Lobby_WaitPlayers_C_ExecuteUbergraph_W_Lobby_WaitPlayers_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
