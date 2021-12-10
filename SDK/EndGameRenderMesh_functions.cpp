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
//		Name   -> Function EndGameRenderMesh.EndGameRenderMesh_C.ReceiveBeginPlay
//		Flags  -> ()
void AEndGameRenderMesh_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EndGameRenderMesh.EndGameRenderMesh_C.ReceiveBeginPlay");

	AEndGameRenderMesh_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EndGameRenderMesh.EndGameRenderMesh_C.OpenDoor
//		Flags  -> ()
void AEndGameRenderMesh_C::OpenDoor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EndGameRenderMesh.EndGameRenderMesh_C.OpenDoor");

	AEndGameRenderMesh_C_OpenDoor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function EndGameRenderMesh.EndGameRenderMesh_C.ExecuteUbergraph_EndGameRenderMesh
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AEndGameRenderMesh_C::ExecuteUbergraph_EndGameRenderMesh(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function EndGameRenderMesh.EndGameRenderMesh_C.ExecuteUbergraph_EndGameRenderMesh");

	AEndGameRenderMesh_C_ExecuteUbergraph_EndGameRenderMesh_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
