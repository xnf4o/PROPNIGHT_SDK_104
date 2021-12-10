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
//		Name   -> Function VampireLobbyAnimBP.VampireLobbyAnimBP_C.AnimGraph
//		Flags  -> ()
// Parameters:
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void UVampireLobbyAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VampireLobbyAnimBP.VampireLobbyAnimBP_C.AnimGraph");

	UVampireLobbyAnimBP_C_AnimGraph_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VampireLobbyAnimBP.VampireLobbyAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VampireLobbyAnimBP_AnimGraphNode_TransitionResult_3573BCCE40B42D2C03496FBDEAE2F4CE
//		Flags  -> ()
void UVampireLobbyAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_VampireLobbyAnimBP_AnimGraphNode_TransitionResult_3573BCCE40B42D2C03496FBDEAE2F4CE()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VampireLobbyAnimBP.VampireLobbyAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VampireLobbyAnimBP_AnimGraphNode_TransitionResult_3573BCCE40B42D2C03496FBDEAE2F4CE");

	UVampireLobbyAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_VampireLobbyAnimBP_AnimGraphNode_TransitionResult_3573BCCE40B42D2C03496FBDEAE2F4CE_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VampireLobbyAnimBP.VampireLobbyAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VampireLobbyAnimBP_AnimGraphNode_TransitionResult_7F845EF9418BFDF0F26BD9A4F9ABA357
//		Flags  -> ()
void UVampireLobbyAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_VampireLobbyAnimBP_AnimGraphNode_TransitionResult_7F845EF9418BFDF0F26BD9A4F9ABA357()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VampireLobbyAnimBP.VampireLobbyAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_VampireLobbyAnimBP_AnimGraphNode_TransitionResult_7F845EF9418BFDF0F26BD9A4F9ABA357");

	UVampireLobbyAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_VampireLobbyAnimBP_AnimGraphNode_TransitionResult_7F845EF9418BFDF0F26BD9A4F9ABA357_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VampireLobbyAnimBP.VampireLobbyAnimBP_C.BlueprintUpdateAnimation
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVampireLobbyAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VampireLobbyAnimBP.VampireLobbyAnimBP_C.BlueprintUpdateAnimation");

	UVampireLobbyAnimBP_C_BlueprintUpdateAnimation_Params params {};
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VampireLobbyAnimBP.VampireLobbyAnimBP_C.ExecuteUbergraph_VampireLobbyAnimBP
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UVampireLobbyAnimBP_C::ExecuteUbergraph_VampireLobbyAnimBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VampireLobbyAnimBP.VampireLobbyAnimBP_C.ExecuteUbergraph_VampireLobbyAnimBP");

	UVampireLobbyAnimBP_C_ExecuteUbergraph_VampireLobbyAnimBP_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
