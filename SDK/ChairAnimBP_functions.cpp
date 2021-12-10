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
//		Name   -> Function ChairAnimBP.ChairAnimBP_C.AnimGraph
//		Flags  -> ()
// Parameters:
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void UChairAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChairAnimBP.ChairAnimBP_C.AnimGraph");

	UChairAnimBP_C_AnimGraph_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChairAnimBP.ChairAnimBP_C.BlueprintUpdateAnimation
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChairAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChairAnimBP.ChairAnimBP_C.BlueprintUpdateAnimation");

	UChairAnimBP_C_BlueprintUpdateAnimation_Params params {};
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChairAnimBP.ChairAnimBP_C.Close?
//		Flags  -> ()
// Parameters:
//		int                                                Stage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChairAnimBP_C::Close_(int Stage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChairAnimBP.ChairAnimBP_C.Close?");

	UChairAnimBP_C_Close__Params params {};
	params.Stage = Stage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChairAnimBP.ChairAnimBP_C.CloseLeft
//		Flags  -> ()
// Parameters:
//		float                                              L_hand                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChairAnimBP_C::CloseLeft(float L_hand)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChairAnimBP.ChairAnimBP_C.CloseLeft");

	UChairAnimBP_C_CloseLeft_Params params {};
	params.L_hand = L_hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChairAnimBP.ChairAnimBP_C.CloseRight
//		Flags  -> ()
// Parameters:
//		float                                              R_hand                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChairAnimBP_C::CloseRight(float R_hand)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChairAnimBP.ChairAnimBP_C.CloseRight");

	UChairAnimBP_C_CloseRight_Params params {};
	params.R_hand = R_hand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChairAnimBP.ChairAnimBP_C.CloseLeg
//		Flags  -> ()
// Parameters:
//		float                                              Leg                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChairAnimBP_C::CloseLeg(float Leg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChairAnimBP.ChairAnimBP_C.CloseLeg");

	UChairAnimBP_C_CloseLeg_Params params {};
	params.Leg = Leg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ChairAnimBP.ChairAnimBP_C.ExecuteUbergraph_ChairAnimBP
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UChairAnimBP_C::ExecuteUbergraph_ChairAnimBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ChairAnimBP.ChairAnimBP_C.ExecuteUbergraph_ChairAnimBP");

	UChairAnimBP_C_ExecuteUbergraph_ChairAnimBP_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
