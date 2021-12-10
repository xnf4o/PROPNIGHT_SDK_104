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
//		Name   -> Function BP_PrizeActor.BP_PrizeActor_C.SetPrize
//		Flags  -> ()
void ABP_PrizeActor_C::SetPrize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PrizeActor.BP_PrizeActor_C.SetPrize");

	ABP_PrizeActor_C_SetPrize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PrizeActor.BP_PrizeActor_C.SetCharPrizeMesh
//		Flags  -> ()
// Parameters:
//		int                                                B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PrizeActor_C::SetCharPrizeMesh(int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PrizeActor.BP_PrizeActor_C.SetCharPrizeMesh");

	ABP_PrizeActor_C_SetCharPrizeMesh_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PrizeActor.BP_PrizeActor_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PrizeActor_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PrizeActor.BP_PrizeActor_C.ReceiveTick");

	ABP_PrizeActor_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PrizeActor.BP_PrizeActor_C.ReceiveBeginPlay
//		Flags  -> ()
void ABP_PrizeActor_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PrizeActor.BP_PrizeActor_C.ReceiveBeginPlay");

	ABP_PrizeActor_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PrizeActor.BP_PrizeActor_C.ExecuteUbergraph_BP_PrizeActor
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PrizeActor_C::ExecuteUbergraph_BP_PrizeActor(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PrizeActor.BP_PrizeActor_C.ExecuteUbergraph_BP_PrizeActor");

	ABP_PrizeActor_C_ExecuteUbergraph_BP_PrizeActor_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
