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
//		Name   -> Function BP_PrizeCard.BP_PrizeCard_C.ReceiveBeginPlay
//		Flags  -> ()
void ABP_PrizeCard_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PrizeCard.BP_PrizeCard_C.ReceiveBeginPlay");

	ABP_PrizeCard_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PrizeCard.BP_PrizeCard_C.SetCharPrizeMesh
//		Flags  -> ()
// Parameters:
//		int                                                B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PrizeCard_C::SetCharPrizeMesh(int B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PrizeCard.BP_PrizeCard_C.SetCharPrizeMesh");

	ABP_PrizeCard_C_SetCharPrizeMesh_Params params {};
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PrizeCard.BP_PrizeCard_C.SetPrize
//		Flags  -> ()
void ABP_PrizeCard_C::SetPrize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PrizeCard.BP_PrizeCard_C.SetPrize");

	ABP_PrizeCard_C_SetPrize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_PrizeCard.BP_PrizeCard_C.ExecuteUbergraph_BP_PrizeCard
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_PrizeCard_C::ExecuteUbergraph_BP_PrizeCard(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_PrizeCard.BP_PrizeCard_C.ExecuteUbergraph_BP_PrizeCard");

	ABP_PrizeCard_C_ExecuteUbergraph_BP_PrizeCard_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
