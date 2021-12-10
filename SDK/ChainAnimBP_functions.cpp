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
//		Name   -> Function ChainAnimBP.ChainAnimBP_C.AnimGraph
//		Flags  -> ()
// Parameters:
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void UChainAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChainAnimBP.ChainAnimBP_C.AnimGraph");

	UChainAnimBP_C_AnimGraph_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChainAnimBP.ChainAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChainAnimBP_AnimGraphNode_TransitionResult_98DAB4F347E54379479EB5BEDFFA5694
//		Flags  -> ()
void UChainAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ChainAnimBP_AnimGraphNode_TransitionResult_98DAB4F347E54379479EB5BEDFFA5694()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChainAnimBP.ChainAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ChainAnimBP_AnimGraphNode_TransitionResult_98DAB4F347E54379479EB5BEDFFA5694");

	UChainAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ChainAnimBP_AnimGraphNode_TransitionResult_98DAB4F347E54379479EB5BEDFFA5694_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChainAnimBP.ChainAnimBP_C.BlueprintUpdateAnimation
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChainAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChainAnimBP.ChainAnimBP_C.BlueprintUpdateAnimation");

	UChainAnimBP_C_BlueprintUpdateAnimation_Params params {};
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChainAnimBP.ChainAnimBP_C.ExecuteUbergraph_ChainAnimBP
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChainAnimBP_C::ExecuteUbergraph_ChainAnimBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChainAnimBP.ChainAnimBP_C.ExecuteUbergraph_ChainAnimBP");

	UChainAnimBP_C_ExecuteUbergraph_ChainAnimBP_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
