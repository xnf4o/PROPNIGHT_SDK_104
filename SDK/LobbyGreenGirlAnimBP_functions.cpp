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
//		Name   -> Function LobbyGreenGirlAnimBP.LobbyGreenGirlAnimBP_C.AnimGraph
//		Flags  -> ()
// Parameters:
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void ULobbyGreenGirlAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGreenGirlAnimBP.LobbyGreenGirlAnimBP_C.AnimGraph");

	ULobbyGreenGirlAnimBP_C_AnimGraph_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LobbyGreenGirlAnimBP.LobbyGreenGirlAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_LobbyGreenGirlAnimBP_AnimGraphNode_TransitionResult_995C9D894E73DF6419207C89F247781C
//		Flags  -> ()
void ULobbyGreenGirlAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_LobbyGreenGirlAnimBP_AnimGraphNode_TransitionResult_995C9D894E73DF6419207C89F247781C()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGreenGirlAnimBP.LobbyGreenGirlAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_LobbyGreenGirlAnimBP_AnimGraphNode_TransitionResult_995C9D894E73DF6419207C89F247781C");

	ULobbyGreenGirlAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_LobbyGreenGirlAnimBP_AnimGraphNode_TransitionResult_995C9D894E73DF6419207C89F247781C_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LobbyGreenGirlAnimBP.LobbyGreenGirlAnimBP_C.BlueprintUpdateAnimation
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULobbyGreenGirlAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGreenGirlAnimBP.LobbyGreenGirlAnimBP_C.BlueprintUpdateAnimation");

	ULobbyGreenGirlAnimBP_C_BlueprintUpdateAnimation_Params params {};
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function LobbyGreenGirlAnimBP.LobbyGreenGirlAnimBP_C.ExecuteUbergraph_LobbyGreenGirlAnimBP
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULobbyGreenGirlAnimBP_C::ExecuteUbergraph_LobbyGreenGirlAnimBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LobbyGreenGirlAnimBP.LobbyGreenGirlAnimBP_C.ExecuteUbergraph_LobbyGreenGirlAnimBP");

	ULobbyGreenGirlAnimBP_C_ExecuteUbergraph_LobbyGreenGirlAnimBP_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
