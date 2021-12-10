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
//		Name   -> Function 3DLobbyMesh.3DLobbyMesh_C.ReceiveBeginPlay
//		Flags  -> ()
void A3DLobbyMesh_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function 3DLobbyMesh.3DLobbyMesh_C.ReceiveBeginPlay");

	A3DLobbyMesh_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function 3DLobbyMesh.3DLobbyMesh_C.UpdateMesh
//		Flags  -> ()
void A3DLobbyMesh_C::UpdateMesh()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function 3DLobbyMesh.3DLobbyMesh_C.UpdateMesh");

	A3DLobbyMesh_C_UpdateMesh_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function 3DLobbyMesh.3DLobbyMesh_C.HideAllMesh
//		Flags  -> ()
// Parameters:
//		bool                                               Hide_                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void A3DLobbyMesh_C::HideAllMesh(bool Hide_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function 3DLobbyMesh.3DLobbyMesh_C.HideAllMesh");

	A3DLobbyMesh_C_HideAllMesh_Params params {};
	params.Hide_ = Hide_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function 3DLobbyMesh.3DLobbyMesh_C.ExecuteUbergraph_3DLobbyMesh
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void A3DLobbyMesh_C::ExecuteUbergraph_3DLobbyMesh(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function 3DLobbyMesh.3DLobbyMesh_C.ExecuteUbergraph_3DLobbyMesh");

	A3DLobbyMesh_C_ExecuteUbergraph_3DLobbyMesh_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
