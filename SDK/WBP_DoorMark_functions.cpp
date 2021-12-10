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
//		Name   -> Function WBP_DoorMark.WBP_DoorMark_C.PlayAppearAnim
//		Flags  -> ()
void UWBP_DoorMark_C::PlayAppearAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DoorMark.WBP_DoorMark_C.PlayAppearAnim");

	UWBP_DoorMark_C_PlayAppearAnim_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_DoorMark.WBP_DoorMark_C.PlayDisappear
//		Flags  -> ()
void UWBP_DoorMark_C::PlayDisappear()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DoorMark.WBP_DoorMark_C.PlayDisappear");

	UWBP_DoorMark_C_PlayDisappear_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_DoorMark.WBP_DoorMark_C.MakePoint
//		Flags  -> ()
void UWBP_DoorMark_C::MakePoint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DoorMark.WBP_DoorMark_C.MakePoint");

	UWBP_DoorMark_C_MakePoint_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_DoorMark.WBP_DoorMark_C.MakeCircle
//		Flags  -> ()
void UWBP_DoorMark_C::MakeCircle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DoorMark.WBP_DoorMark_C.MakeCircle");

	UWBP_DoorMark_C_MakeCircle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_DoorMark.WBP_DoorMark_C.MakeInvisible
//		Flags  -> ()
void UWBP_DoorMark_C::MakeInvisible()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DoorMark.WBP_DoorMark_C.MakeInvisible");

	UWBP_DoorMark_C_MakeInvisible_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_DoorMark.WBP_DoorMark_C.Construct
//		Flags  -> ()
void UWBP_DoorMark_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DoorMark.WBP_DoorMark_C.Construct");

	UWBP_DoorMark_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_DoorMark.WBP_DoorMark_C.MakeVisible
//		Flags  -> ()
void UWBP_DoorMark_C::MakeVisible()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DoorMark.WBP_DoorMark_C.MakeVisible");

	UWBP_DoorMark_C_MakeVisible_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WBP_DoorMark.WBP_DoorMark_C.ExecuteUbergraph_WBP_DoorMark
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UWBP_DoorMark_C::ExecuteUbergraph_WBP_DoorMark(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WBP_DoorMark.WBP_DoorMark_C.ExecuteUbergraph_WBP_DoorMark");

	UWBP_DoorMark_C_ExecuteUbergraph_WBP_DoorMark_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
