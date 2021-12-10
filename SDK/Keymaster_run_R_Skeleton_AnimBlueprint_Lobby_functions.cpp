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
//		Name   -> Function Keymaster_run_R_Skeleton_AnimBlueprint_Lobby.Keymaster_run_R_Skeleton_AnimBlueprint_Lobby_C.AnimGraph
//		Flags  -> ()
// Parameters:
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void UKeymaster_run_R_Skeleton_AnimBlueprint_Lobby_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Keymaster_run_R_Skeleton_AnimBlueprint_Lobby.Keymaster_run_R_Skeleton_AnimBlueprint_Lobby_C.AnimGraph");

	UKeymaster_run_R_Skeleton_AnimBlueprint_Lobby_C_AnimGraph_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Keymaster_run_R_Skeleton_AnimBlueprint_Lobby.Keymaster_run_R_Skeleton_AnimBlueprint_Lobby_C.ExecuteUbergraph_Keymaster_run_R_Skeleton_AnimBlueprint_Lobby
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UKeymaster_run_R_Skeleton_AnimBlueprint_Lobby_C::ExecuteUbergraph_Keymaster_run_R_Skeleton_AnimBlueprint_Lobby(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Keymaster_run_R_Skeleton_AnimBlueprint_Lobby.Keymaster_run_R_Skeleton_AnimBlueprint_Lobby_C.ExecuteUbergraph_Keymaster_run_R_Skeleton_AnimBlueprint_Lobby");

	UKeymaster_run_R_Skeleton_AnimBlueprint_Lobby_C_ExecuteUbergraph_Keymaster_run_R_Skeleton_AnimBlueprint_Lobby_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
