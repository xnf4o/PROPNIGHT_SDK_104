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
//		Name   -> Function Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint.Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint_C.AnimGraph
//		Flags  -> ()
// Parameters:
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void UNewsurv_Intro_A_Pose_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint.Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint_C.AnimGraph");

	UNewsurv_Intro_A_Pose_Skeleton_AnimBlueprint_C_AnimGraph_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint.Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_277D14C5410691B0A5985CBBD258A951
//		Flags  -> ()
void UNewsurv_Intro_A_Pose_Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_277D14C5410691B0A5985CBBD258A951()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint.Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_277D14C5410691B0A5985CBBD258A951");

	UNewsurv_Intro_A_Pose_Skeleton_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint_AnimGraphNode_TransitionResult_277D14C5410691B0A5985CBBD258A951_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint.Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNewsurv_Intro_A_Pose_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint.Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation");

	UNewsurv_Intro_A_Pose_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params params {};
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint.Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNewsurv_Intro_A_Pose_Skeleton_AnimBlueprint_C::ExecuteUbergraph_Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint.Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint");

	UNewsurv_Intro_A_Pose_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Newsurv_Intro_A_Pose_Skeleton_AnimBlueprint_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
