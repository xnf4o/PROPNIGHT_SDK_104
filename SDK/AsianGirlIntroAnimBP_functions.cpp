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
//		Name   -> Function AsianGirlIntroAnimBP.AsianGirlIntroAnimBP_C.AnimGraph
//		Flags  -> ()
// Parameters:
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void UAsianGirlIntroAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AsianGirlIntroAnimBP.AsianGirlIntroAnimBP_C.AnimGraph");

	UAsianGirlIntroAnimBP_C_AnimGraph_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AsianGirlIntroAnimBP.AsianGirlIntroAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AsianGirlIntroAnimBP_AnimGraphNode_TransitionResult_F02D53D74894925DDEFDD18E9C7B624C
//		Flags  -> ()
void UAsianGirlIntroAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AsianGirlIntroAnimBP_AnimGraphNode_TransitionResult_F02D53D74894925DDEFDD18E9C7B624C()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AsianGirlIntroAnimBP.AsianGirlIntroAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AsianGirlIntroAnimBP_AnimGraphNode_TransitionResult_F02D53D74894925DDEFDD18E9C7B624C");

	UAsianGirlIntroAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_AsianGirlIntroAnimBP_AnimGraphNode_TransitionResult_F02D53D74894925DDEFDD18E9C7B624C_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AsianGirlIntroAnimBP.AsianGirlIntroAnimBP_C.BlueprintUpdateAnimation
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAsianGirlIntroAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AsianGirlIntroAnimBP.AsianGirlIntroAnimBP_C.BlueprintUpdateAnimation");

	UAsianGirlIntroAnimBP_C_BlueprintUpdateAnimation_Params params {};
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AsianGirlIntroAnimBP.AsianGirlIntroAnimBP_C.ExecuteUbergraph_AsianGirlIntroAnimBP
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAsianGirlIntroAnimBP_C::ExecuteUbergraph_AsianGirlIntroAnimBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AsianGirlIntroAnimBP.AsianGirlIntroAnimBP_C.ExecuteUbergraph_AsianGirlIntroAnimBP");

	UAsianGirlIntroAnimBP_C_ExecuteUbergraph_AsianGirlIntroAnimBP_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
