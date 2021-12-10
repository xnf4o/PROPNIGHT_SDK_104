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
//		Name   -> Function Scream.Scream_C.Cast
//		Flags  -> ()
void UScream_C::Cast()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Scream.Scream_C.Cast");

	UScream_C_Cast_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Scream.Scream_C.OutlineRange
//		Flags  -> ()
void UScream_C::OutlineRange()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Scream.Scream_C.OutlineRange");

	UScream_C_OutlineRange_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Scream.Scream_C.OffOutlineRange
//		Flags  -> ()
void UScream_C::OffOutlineRange()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Scream.Scream_C.OffOutlineRange");

	UScream_C_OffOutlineRange_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Scream.Scream_C.Consume
//		Flags  -> ()
void UScream_C::Consume()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Scream.Scream_C.Consume");

	UScream_C_Consume_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Scream.Scream_C.ExecuteUbergraph_Scream
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UScream_C::ExecuteUbergraph_Scream(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Scream.Scream_C.ExecuteUbergraph_Scream");

	UScream_C_ExecuteUbergraph_Scream_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
