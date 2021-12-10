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
//		Name   -> Function CamLobby.CamLobby_C.StartCamera
//		Flags  -> ()
void ACamLobby_C::StartCamera()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CamLobby.CamLobby_C.StartCamera");

	ACamLobby_C_StartCamera_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CamLobby.CamLobby_C.ReceiveBeginPlay
//		Flags  -> ()
void ACamLobby_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CamLobby.CamLobby_C.ReceiveBeginPlay");

	ACamLobby_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CamLobby.CamLobby_C.ExecuteUbergraph_CamLobby
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACamLobby_C::ExecuteUbergraph_CamLobby(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CamLobby.CamLobby_C.ExecuteUbergraph_CamLobby");

	ACamLobby_C_ExecuteUbergraph_CamLobby_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
