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
//		Name   -> Function PropBox_opening_Skeleton_AnimBlueprint.PropBox_opening_Skeleton_AnimBlueprint_C.AnimGraph
//		Flags  -> ()
// Parameters:
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void UPropBox_opening_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropBox_opening_Skeleton_AnimBlueprint.PropBox_opening_Skeleton_AnimBlueprint_C.AnimGraph");

	UPropBox_opening_Skeleton_AnimBlueprint_C_AnimGraph_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PropBox_opening_Skeleton_AnimBlueprint.PropBox_opening_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPropBox_opening_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropBox_opening_Skeleton_AnimBlueprint.PropBox_opening_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation");

	UPropBox_opening_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params params {};
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function PropBox_opening_Skeleton_AnimBlueprint.PropBox_opening_Skeleton_AnimBlueprint_C.ExecuteUbergraph_PropBox_opening_Skeleton_AnimBlueprint
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPropBox_opening_Skeleton_AnimBlueprint_C::ExecuteUbergraph_PropBox_opening_Skeleton_AnimBlueprint(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PropBox_opening_Skeleton_AnimBlueprint.PropBox_opening_Skeleton_AnimBlueprint_C.ExecuteUbergraph_PropBox_opening_Skeleton_AnimBlueprint");

	UPropBox_opening_Skeleton_AnimBlueprint_C_ExecuteUbergraph_PropBox_opening_Skeleton_AnimBlueprint_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
